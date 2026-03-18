/*
 * XREFs of NtUnlockVirtualMemory @ 0x1403875B0
 * Callers:
 *     <none>
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiGetNextVad @ 0x1402A96D8 (MiGetNextVad.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiLockLowestValidPageTableEx @ 0x1402B7890 (MiLockLowestValidPageTableEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiVadPagesTradable @ 0x1402CA000 (MiVadPagesTradable.c)
 *     MiUnlockVa @ 0x1402CC790 (MiUnlockVa.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiPageTableLockIsContended @ 0x140338780 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x140338960 (MiWorkingSetIsContended.c)
 *     MiDemoteCombinedPte @ 0x14037EFEC (MiDemoteCombinedPte.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x1403815C4 (MiFreeWsleList.c)
 *     MiVmAccessLoggingEnabled @ 0x140386C1C (MiVmAccessLoggingEnabled.c)
 *     MiRotatedToFrameBuffer @ 0x140387DA8 (MiRotatedToFrameBuffer.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140389E74 (MI_WSLE_LOG_ACCESS.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiUnlockVadRange @ 0x1408D97C0 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1408D98A0 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1409EAC40 (MiLockUnlockCommon.c)
 */

__int64 __fastcall NtUnlockVirtualMemory(ULONG_PTR BugCheckParameter1, unsigned __int64 *a2, _QWORD *a3)
{
  ULONG_PTR v4; // r15
  __int64 result; // rax
  char *v6; // rsi
  unsigned __int64 v7; // r12
  int v8; // ebx
  _KPROCESS *v9; // r9
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r11
  _QWORD *v15; // r12
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 NextVad; // rax
  __int64 v21; // r8
  unsigned __int64 valid; // rax
  __int64 *ProcessorFlushList; // rax
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // r15
  __int64 v27; // rdi
  __int64 Address; // rax
  unsigned __int8 v29; // [rsp+40h] [rbp-D8h]
  int v30; // [rsp+44h] [rbp-D4h]
  char v31; // [rsp+48h] [rbp-D0h]
  PVOID Object; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+68h] [rbp-B0h]
  ULONG_PTR v36; // [rsp+70h] [rbp-A8h] BYREF
  unsigned __int64 v37; // [rsp+78h] [rbp-A0h]
  __int64 v38; // [rsp+80h] [rbp-98h]
  unsigned __int64 v39; // [rsp+88h] [rbp-90h]
  _QWORD *v40; // [rsp+90h] [rbp-88h]
  unsigned __int64 *v41; // [rsp+98h] [rbp-80h]
  _BYTE v42[48]; // [rsp+A0h] [rbp-78h] BYREF

  v40 = a3;
  v41 = a2;
  v4 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  Object = 0LL;
  memset(v42, 0, sizeof(v42));
  result = MiLockUnlockCommon(BugCheckParameter1, (__int64)&v34, (__int64)&v33, (__int64)&Object);
  v30 = result;
  if ( (int)result < 0 )
    return result;
  v6 = (char *)Object + 1024;
  v7 = 0LL;
  v37 = 0LL;
  v8 = (unsigned int)MiVmAccessLoggingEnabled((__int64)Object + 1024) != 0 ? 8 : 0;
  v31 = v8;
  v10 = (v34 + v33 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v39 = v10;
  v11 = v34 & 0xFFFFFFFFFFFFF000uLL;
  if ( BugCheckParameter1 != -1LL )
  {
    KiStackAttachProcess(v9, 0, (__int64)v42);
    v8 |= 2u;
    v31 = v8;
  }
  v33 = 0LL;
  v12 = MiLockVadRange(Object, v11, v10, 0LL);
  v38 = v12;
  if ( !v12 )
    goto LABEL_23;
  v13 = 0LL;
  v29 = MiLockWorkingSetShared((__int64)v6);
  if ( v11 <= v10 )
  {
    v14 = 0xFFFFF68000000000uLL;
    do
    {
      if ( (((unsigned __int8)(v11 >> 12) + 1) & 0xF) == 0 )
      {
        if ( (unsigned int)MiWorkingSetIsContended((__int64)v6, 0)
          || v13 && (unsigned int)MiPageTableLockIsContended((__int64)v6, v13)
          || KeShouldYieldProcessor() )
        {
          if ( v4 )
          {
            if ( *(_DWORD *)(v4 + 28) )
              MiFreeWsleList((__int64)v6, v4, 0);
            MiReleaseProcessorFlushList();
            v4 = 0LL;
          }
          if ( v13 )
          {
            MiUnlockPageTable((__int64)v6, v13);
            v13 = 0LL;
          }
          MiUnlockWorkingSetShared((__int64)v6, v29);
          MiLockWorkingSetShared((__int64)v6);
        }
        v14 = 0xFFFFF68000000000uLL;
      }
      if ( v11 > v7 || !v33 )
      {
        if ( v33 )
          NextVad = MiGetNextVad(v33);
        else
          NextVad = (__int64)MiLocateAddress(v11);
        v21 = NextVad;
        v33 = NextVad;
        v8 &= ~4u;
        v31 = v8;
        if ( (*(_DWORD *)(NextVad + 48) & 0x70) == 0x40 )
        {
          v8 |= 4u;
          v31 = v8;
        }
        else if ( !MiVadPagesTradable(NextVad) )
        {
          break;
        }
        v37 = (*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32)) << 12;
      }
      v15 = (_QWORD *)(v14 + ((v11 >> 9) & 0x7FFFFFFFF8LL));
      v35 = ((v11 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      if ( v13 != v35 )
      {
        if ( v13 )
        {
          if ( v4 )
          {
            if ( *(_DWORD *)(v4 + 28) )
              MiFreeWsleList((__int64)v6, v4, 0);
            MiReleaseProcessorFlushList();
            v4 = 0LL;
          }
          MiUnlockPageTable((__int64)v6, v13);
        }
        valid = MiLockLowestValidPageTableEx((__int64)v6, (ULONG_PTR)v15, &v36, 0);
        v13 = valid;
        if ( valid != v35 )
        {
          MiUnlockPageTable((__int64)v6, valid);
          v13 = 0LL;
          v14 = 0xFFFFF68000000000uLL;
          v11 = (__int64)(((v11 & 0xFFFFFFE00000LL) << 7) - 0x980000000000000LL + 0x10000000) >> 16 << 25 >> 16;
          v30 = -1073741782;
          goto LABEL_14;
        }
      }
      if ( (*v15 & 1) != 0 )
      {
        v16 = 48 * ((*v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v35 = v16;
        v17 = *(_QWORD *)(v16 + 8) | 0x8000000000000000uLL;
        v36 = v17;
        if ( (v8 & 4) != 0 )
        {
          if ( (unsigned int)MiRotatedToFrameBuffer(v15) )
            goto LABEL_13;
          v16 = v35;
          v17 = v36;
        }
        if ( (*(_QWORD *)(v16 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v16 + 8) > 0 )
          MiDemoteCombinedPte((__int64)v6, (ULONG_PTR)v15, v17);
        if ( (MiGetWsleContents(v16, v11) & 0xF) == 8 )
          goto LABEL_13;
        if ( (v8 & 8) != 0 )
          MI_WSLE_LOG_ACCESS(v6, v15, v18, v19);
        if ( !v4 )
        {
          ProcessorFlushList = MiGetProcessorFlushList();
          v4 = (ULONG_PTR)(ProcessorFlushList + 517);
          MiInitializeTbFlushList(
            (_DWORD)ProcessorFlushList + 4136,
            (_DWORD)v6,
            *((_DWORD *)ProcessorFlushList + 1037),
            2,
            1);
        }
        MiInsertTbFlushEntry(v4, v11, 1LL, 0);
        if ( *(_DWORD *)(v4 + 28) == *(_DWORD *)(v4 + 12) )
        {
          MiFreeWsleList((__int64)v6, v4, 0);
          MiReleaseProcessorFlushList();
          v4 = 0LL;
        }
      }
      v30 = -1073741782;
LABEL_13:
      v14 = 0xFFFFF68000000000uLL;
      v11 += 4096LL;
LABEL_14:
      v7 = v37;
    }
    while ( v11 <= v10 );
  }
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 28) )
      MiFreeWsleList((__int64)v6, v4, 0);
    MiReleaseProcessorFlushList();
  }
  if ( v13 )
  {
    MiUnlockPageTable((__int64)v6, v13);
    v13 = 0LL;
  }
  if ( v30 == -1073741782 )
  {
    MiUnlockWorkingSetShared((__int64)v6, v29);
    v12 = v38;
LABEL_23:
    MiUnlockVadRange(Object, v34, v12, 0LL);
    if ( (v8 & 2) != 0 )
      KiUnstackDetachProcess((__int64)v42, 0LL);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return 3221225514LL;
  }
  v24 = v34 & 0xFFFFFFFFFFFFF000uLL;
  v25 = 0LL;
  v26 = 0LL;
  if ( (v34 & 0xFFFFFFFFFFFFF000uLL) <= v10 )
  {
    do
    {
      if ( v24 > v25 || !v26 )
      {
        if ( v26 )
          Address = MiGetNextVad(v26);
        else
          Address = (__int64)MiLocateAddress(v24);
        v26 = Address;
        if ( !MiVadPagesTradable(Address) )
          break;
        v25 = (*(unsigned int *)(v26 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 33) << 32)) << 12;
      }
      if ( v13 != ((v24 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      {
        if ( v13 )
          MiUnlockPageTable((__int64)v6, v13);
        v13 = MiLockLowestValidPageTableEx((__int64)v6, ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v36, 0);
      }
      MiUnlockVa((__int64)v6, v24);
      v24 += 4096LL;
      if ( (v24 & 0xF000) == 0
        && ((unsigned int)MiWorkingSetIsContended((__int64)v6, 0)
         || (unsigned int)MiPageTableLockIsContended((__int64)v6, v13)
         || KeShouldYieldProcessor()) )
      {
        MiUnlockPageTable((__int64)v6, v13);
        v13 = 0LL;
        MiUnlockWorkingSetShared((__int64)v6, v29);
        MiLockWorkingSetShared((__int64)v6);
      }
      v10 = v39;
    }
    while ( v24 <= v39 );
    LOBYTE(v8) = v31;
  }
  if ( v13 )
    MiUnlockPageTable((__int64)v6, v13);
  MiUnlockWorkingSetShared((__int64)v6, v29);
  MiUnlockVadRange(Object, v34, v38, 0LL);
  if ( (v8 & 2) != 0 )
    KiUnstackDetachProcess((__int64)v42, 0LL);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  v27 = v34;
  *v40 = v10 - (v34 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  *v41 = v27 & 0xFFFFFFFFFFFFF000uLL;
  return 0LL;
}
