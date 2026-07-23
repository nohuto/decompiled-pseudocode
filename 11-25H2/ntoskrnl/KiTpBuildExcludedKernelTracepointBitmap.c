/*
 * XREFs of KiTpBuildExcludedKernelTracepointBitmap @ 0x140731CB0
 * Callers:
 *     KiTpIsExcludedKernelTracepointLocation @ 0x140731ED0 (KiTpIsExcludedKernelTracepointLocation.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x14025BE40 (RtlpxLookupFunctionTable.c)
 *     RtlLookupFunctionEntry @ 0x14025C9D0 (RtlLookupFunctionEntry.c)
 *     RtlSetBits @ 0x140339430 (RtlSetBits.c)
 *     KeReadStateSemaphore @ 0x14044F240 (KeReadStateSemaphore.c)
 *     RtlIsSpecialUnwind @ 0x1405E4624 (RtlIsSpecialUnwind.c)
 *     RtlLookupPrimaryFunctionEntry @ 0x1405E467C (RtlLookupPrimaryFunctionEntry.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

PRTL_BITMAP __fastcall KiTpBuildExcludedKernelTracepointBitmap(PRTL_BITMAP BitMapHeader)
{
  __int64 v1; // rbx
  __int64 v3; // rt1
  unsigned __int64 v4; // rbx
  unsigned int *Pool2; // rax
  DWORD64 *v6; // rsi
  __int64 v7; // rbp
  DWORD64 v8; // rbx
  struct _KSEMAPHORE *v9; // rax
  unsigned int LockNV; // ebx
  unsigned int StateSemaphore; // eax
  int v12; // et1
  unsigned __int64 v13; // rcx
  unsigned int v14; // ebx
  _BYTE *v15; // r14
  unsigned __int64 v16; // r15
  unsigned int v17; // edx
  __int64 v18; // rbx
  __int64 v19; // rbp
  struct _KSEMAPHORE *v20; // rsi
  unsigned int v21; // eax
  ULONG v22; // edx
  unsigned int v23; // eax
  ULONG v24; // edx
  __int128 v26; // [rsp+20h] [rbp-48h] BYREF
  __int64 v27; // [rsp+30h] [rbp-38h]
  unsigned __int64 ImageBase; // [rsp+70h] [rbp+8h] BYREF

  v1 = PsNtosImageEnd;
  ImageBase = 0LL;
  *BitMapHeader = 0LL;
  v3 = *(_QWORD *)&KeNumberProcessorsGroup0[9];
  v4 = (((unsigned __int64)(v1 - v3 + 15) >> 4) + 31) & 0xFFFFFFFFFFFFFFE0uLL;
  Pool2 = (unsigned int *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    BitMapHeader->SizeOfBitMap = v4;
    v6 = (DWORD64 *)KiTpExcludedRoutines;
    BitMapHeader->Buffer = Pool2;
    v7 = 198LL;
    do
    {
      v8 = *v6;
      v9 = (struct _KSEMAPHORE *)RtlLookupFunctionEntry(*v6, &ImageBase, 0LL);
      if ( v9 )
      {
        LockNV = v9->Header.LockNV;
        StateSemaphore = KeReadStateSemaphore(v9);
      }
      else
      {
        v12 = *(_DWORD *)&KeNumberProcessorsGroup0[9];
        LockNV = v8 - v12;
        StateSemaphore = LockNV + 1;
      }
      RtlSetBits(BitMapHeader, LockNV >> 4, (((unsigned __int64)StateSemaphore + 15) >> 4) - (LockNV >> 4));
      ++v6;
      --v7;
    }
    while ( v7 );
    v13 = *(_QWORD *)&KeNumberProcessorsGroup0[9];
    v14 = 0;
    v27 = 0LL;
    v26 = 0LL;
    if ( v13 < *((_QWORD *)&xmmword_141200030 + 1)
      || v13 >= *((_QWORD *)&xmmword_141200030 + 1) + (unsigned __int64)(unsigned int)qword_141200040 )
    {
      v15 = RtlpxLookupFunctionTable(v13, (__int64)&v26);
    }
    else
    {
      v15 = (_BYTE *)xmmword_141200030;
      v26 = xmmword_141200030;
      v27 = qword_141200040;
    }
    if ( v15 )
    {
      v16 = *((_QWORD *)&v26 + 1);
      v14 = HIDWORD(v27);
    }
    else
    {
      v16 = ImageBase;
    }
    v17 = v14 / 0xC;
    if ( v14 / 0xC )
    {
      v18 = 0LL;
      v19 = v17;
      do
      {
        v20 = (struct _KSEMAPHORE *)RtlLookupPrimaryFunctionEntry(&v15[12 * v18], v16);
        if ( (unsigned int)RtlIsSpecialUnwind((unsigned __int64)v20, v16) )
        {
          v21 = KeReadStateSemaphore(v20);
          RtlSetBits(BitMapHeader, v22, (((unsigned __int64)v21 + 15) >> 4) - v22);
        }
        if ( v20 != (struct _KSEMAPHORE *)&v15[12 * v18]
          && ((*((char *)BitMapHeader->Buffer + ((unsigned __int64)((unsigned int)v20->Header.LockNV >> 4) >> 3)) >> (((unsigned int)v20->Header.LockNV >> 4) & 7)) & 1) != 0 )
        {
          v23 = KeReadStateSemaphore((PRKSEMAPHORE)&v15[12 * v18]);
          RtlSetBits(BitMapHeader, v24, (((unsigned __int64)v23 + 15) >> 4) - v24);
        }
        ++v18;
        --v19;
      }
      while ( v19 );
    }
  }
  else
  {
    *BitMapHeader = 0LL;
  }
  return BitMapHeader;
}
