/*
 * XREFs of MiFreeInitializationCode @ 0x140AD58A0
 * Callers:
 *     MiFreeDriverInitialization @ 0x140A39960 (MiFreeDriverInitialization.c)
 *     MiFreeKernelPadSections @ 0x140C4987C (MiFreeKernelPadSections.c)
 *     MmDiscardDriverSection @ 0x140C4AB80 (MmDiscardDriverSection.c)
 * Callees:
 *     MiBadRefCount @ 0x1402360FC (MiBadRefCount.c)
 *     MiVaToPfnEx @ 0x1402AB010 (MiVaToPfnEx.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlClearBits @ 0x140337F60 (RtlClearBits.c)
 *     MiDecommitPages @ 0x140381AE0 (MiDecommitPages.c)
 *     RtlSetBitsEx @ 0x14038E280 (RtlSetBitsEx.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     MiGetControlAreaPartition @ 0x14043B7F0 (MiGetControlAreaPartition.c)
 *     KeReservePrivilegedPages @ 0x1404B4A34 (KeReservePrivilegedPages.c)
 *     MiGetExtendedLoaderBitmap @ 0x1404F8A74 (MiGetExtendedLoaderBitmap.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MiFreeLargeInitializationCodePages @ 0x14065F290 (MiFreeLargeInitializationCodePages.c)
 *     MiUnmapReturnCharges @ 0x140A8A838 (MiUnmapReturnCharges.c)
 *     MiFreeBootDriverPages @ 0x140C54EE4 (MiFreeBootDriverPages.c)
 */

__int64 __fastcall MiFreeInitializationCode(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  PVOID v5; // rbx
  __int64 v6; // rsi
  unsigned __int64 v7; // r14
  __int64 v8; // r12
  unsigned __int64 v9; // rdi
  __int64 v10; // r15
  _RTL_BITMAP *ExtendedLoaderBitmap; // rax
  __int64 v12; // rcx
  __int64 *v13; // rdx
  ULONG *ControlAreaPartition; // r15
  int v15; // eax
  __int64 v16; // r8
  unsigned __int64 v17; // r15
  __int64 v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rcx
  ULONG_PTR v21; // rbx
  int v22; // eax
  ULONG *v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  int v26; // ecx
  PVOID v27; // rt1
  __int64 result; // rax
  __int128 v29; // [rsp+40h] [rbp-40h] BYREF
  __int128 v30; // [rsp+50h] [rbp-30h]
  __int128 v31; // [rsp+60h] [rbp-20h]
  __int64 v32; // [rsp+70h] [rbp-10h]

  v32 = 0LL;
  v5 = a1;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( !a4 )
    v5 = (PVOID)a1[6];
  v6 = 0LL;
  if ( !a4 )
    v6 = (__int64)a1;
  v7 = a2 << 25 >> 16;
  v8 = ((a3 - a2) >> 3) + 1;
  v9 = v8;
  v10 = (a2 - MiGetPteAddress((unsigned __int64)v5)) >> 3;
  if ( v6 )
  {
    ExtendedLoaderBitmap = (_RTL_BITMAP *)MiGetExtendedLoaderBitmap(v6);
    RtlClearBits(ExtendedLoaderBitmap, v10, v8);
  }
  v12 = 0LL;
  v13 = &qword_140E2D600;
  while ( *(PVOID *)(*v13 + 48) != v5 )
  {
    v12 = (unsigned int)(v12 + 1);
    ++v13;
    if ( (_DWORD)v12 )
      goto LABEL_12;
  }
  RtlSetBitsEx((__int64)&unk_140E2D608 + 16 * v12, (unsigned int)v10, v8);
LABEL_12:
  ControlAreaPartition = &MiSystemPartition;
  v15 = MI_IS_PHYSICAL_ADDRESS(v7);
  v16 = 0LL;
  if ( v15 )
  {
    v17 = v7;
    if ( v8 )
    {
      do
      {
        v18 = MiVaToPfnEx(v17);
        v19 = 48 * v18 - 0x220000000000LL;
        if ( (unsigned __int16)*(_DWORD *)(v19 + 32) != 1 )
          MiBadRefCount(v19);
        v20 = v18 & 0x1FF;
        v21 = v9;
        if ( 512 - v20 <= v9 )
          v21 = 512 - v20;
        if ( (MiFlags & 0x8000) != 0 && (MiFlags & 0x4000) != 0 )
        {
          v22 = KeReservePrivilegedPages();
          if ( v22 < 0 )
            KeBugCheckEx(0x1Au, 0x101DuLL, v17, v21, v22);
        }
        MiFreeLargeInitializationCodePages(v19, v18, v21);
        v17 += v21 << 12;
        v9 -= v21;
      }
      while ( v9 );
    }
    _InterlockedAdd((volatile signed __int32 *)&xmmword_140E2D628, -(int)v8);
    _InterlockedAdd64(&qword_140E37398, -v8);
    *((_QWORD *)&v30 + 1) = v8;
    v23 = &MiSystemPartition;
    *(_QWORD *)&v29 = v8;
  }
  else
  {
    if ( !v6 )
    {
      MiFreeBootDriverPages(0LL, v5, a2, v8);
      goto LABEL_33;
    }
    v24 = *(_QWORD *)(v6 + 112);
    if ( v24 )
    {
      v25 = MiSectionControlArea(v24);
      ControlAreaPartition = (ULONG *)MiGetControlAreaPartition(v25);
    }
    else
    {
      v26 = 0;
    }
    MiDecommitPages(a2, v8, v26, 0LL, v16, v16, v16, (__int64)&v29);
    v27 = *(PVOID *)&KeNumberProcessorsGroup0[9];
    if ( v5 == v27 || v5 == PsHalImageBase )
    {
      _InterlockedAdd64(&qword_140E37398, -*((_QWORD *)&v30 + 1));
      _InterlockedAdd((_DWORD *)&xmmword_140E2D628 + 2, v29 - DWORD2(v30));
    }
    else
    {
      _InterlockedAdd(&dword_140E373B0, -DWORD2(v30));
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140E2D628 + 3, v29 - DWORD2(v30));
    }
    *(_QWORD *)&v29 = *((_QWORD *)&v30 + 1);
    v23 = ControlAreaPartition;
  }
  MiUnmapReturnCharges((__int64)v23, (unsigned __int64 *)&v29);
LABEL_33:
  result = MiFlags;
  if ( (MiFlags & 0x8000) != 0 && (MiFlags & 0x4000) != 0 )
  {
    result = MI_IS_PHYSICAL_ADDRESS(v7);
    if ( !(_DWORD)result )
    {
      result = KeReservePrivilegedPages();
      if ( (int)result < 0 )
        KeBugCheckEx(0x1Au, 0x101EuLL, v7, v8, (int)result);
    }
  }
  return result;
}
