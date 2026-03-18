/*
 * XREFs of MiFreeInitializationCode @ 0x140AE67EC
 * Callers:
 *     MiFreeDriverInitialization @ 0x140A3DC80 (MiFreeDriverInitialization.c)
 *     MiFreeKernelPadSections @ 0x140C5AC08 (MiFreeKernelPadSections.c)
 *     MmDiscardDriverSection @ 0x140C5BF00 (MmDiscardDriverSection.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiVaToPfnEx @ 0x140264680 (MiVaToPfnEx.c)
 *     MiDecommitPages @ 0x140288300 (MiDecommitPages.c)
 *     MiBadRefCount @ 0x14028D968 (MiBadRefCount.c)
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     RtlClearBits @ 0x14037CD40 (RtlClearBits.c)
 *     RtlSetBitsEx @ 0x1403A4600 (RtlSetBitsEx.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     MiGetControlAreaPartition @ 0x1404378D0 (MiGetControlAreaPartition.c)
 *     KeReservePrivilegedPages @ 0x1404B4380 (KeReservePrivilegedPages.c)
 *     MiGetExtendedLoaderBitmap @ 0x1404FB0FC (MiGetExtendedLoaderBitmap.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MiFreeLargeInitializationCodePages @ 0x14066ADD0 (MiFreeLargeInitializationCodePages.c)
 *     MiUnmapReturnCharges @ 0x140A8F804 (MiUnmapReturnCharges.c)
 *     MiFreeBootDriverPages @ 0x140C66B6C (MiFreeBootDriverPages.c)
 */

__int64 __fastcall MiFreeInitializationCode(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned __int64 v7; // r14
  __int64 v8; // r12
  unsigned __int64 v9; // rdi
  __int64 v10; // r15
  RTL_BITMAP *ExtendedLoaderBitmap; // rax
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
  __int64 result; // rax
  __int128 v28; // [rsp+40h] [rbp-40h] BYREF
  __int128 v29; // [rsp+50h] [rbp-30h]
  __int128 v30; // [rsp+60h] [rbp-20h]
  __int64 v31; // [rsp+70h] [rbp-10h]

  v31 = 0LL;
  v5 = a1;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( !a4 )
    v5 = *(_QWORD *)(a1 + 48);
  v6 = 0LL;
  if ( !a4 )
    v6 = a1;
  v7 = a2 << 25 >> 16;
  v8 = ((a3 - a2) >> 3) + 1;
  v9 = v8;
  v10 = (a2 - MiGetPteAddress(v5)) >> 3;
  if ( v6 )
  {
    ExtendedLoaderBitmap = (RTL_BITMAP *)MiGetExtendedLoaderBitmap(v6);
    RtlClearBits(ExtendedLoaderBitmap, v10, v8);
  }
  v12 = 0LL;
  v13 = &qword_140E2D840;
  while ( *(_QWORD *)(*v13 + 48) != v5 )
  {
    v12 = (unsigned int)(v12 + 1);
    ++v13;
    if ( (_DWORD)v12 )
      goto LABEL_12;
  }
  RtlSetBitsEx((__int64)&unk_140E2D848 + 16 * v12, (unsigned int)v10, v8);
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
    _InterlockedAdd((volatile signed __int32 *)&xmmword_140E2D868, -(int)v8);
    _InterlockedAdd64(&qword_140E375D8, -v8);
    *((_QWORD *)&v29 + 1) = v8;
    v23 = &MiSystemPartition;
    *(_QWORD *)&v28 = v8;
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
    MiDecommitPages(a2, v8, v26, 0LL, v16, v16, v16, (__int64)&v28);
    if ( v5 == PsNtosImageBase || v5 == PsHalImageBase )
    {
      _InterlockedAdd64(&qword_140E375D8, -*((_QWORD *)&v29 + 1));
      _InterlockedAdd((_DWORD *)&xmmword_140E2D868 + 2, v28 - DWORD2(v29));
    }
    else
    {
      _InterlockedAdd(&dword_140E375F0, -DWORD2(v29));
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140E2D868 + 3, v28 - DWORD2(v29));
    }
    *(_QWORD *)&v28 = *((_QWORD *)&v29 + 1);
    v23 = ControlAreaPartition;
  }
  MiUnmapReturnCharges((__int64)v23, (unsigned __int64 *)&v28);
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
