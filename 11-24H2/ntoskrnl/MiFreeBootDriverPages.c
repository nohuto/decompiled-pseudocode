/*
 * XREFs of MiFreeBootDriverPages @ 0x140C66B6C
 * Callers:
 *     MiFreeInitializationCode @ 0x140AE67EC (MiFreeInitializationCode.c)
 *     MiHandleBootImage @ 0x140C5AE90 (MiHandleBootImage.c)
 * Callees:
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiDecommitPages @ 0x140288300 (MiDecommitPages.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 *     MiFreeLargePageMemory @ 0x1403A3588 (MiFreeLargePageMemory.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403A4A2C (MiInsertLargeTbFlushEntry.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiUnmapReturnCharges @ 0x140A8F804 (MiUnmapReturnCharges.c)
 */

void __fastcall MiFreeBootDriverPages(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v8; // r15
  int v9; // r9d
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rbp
  __int64 v12; // r15
  unsigned int v13; // r14d
  __int64 v14; // rbx
  ULONG_PTR v15; // rcx
  __int64 v16; // rsi
  int v17; // edx
  __int64 v18; // r13
  unsigned __int8 CurrentIrql; // r12
  _BYTE *v20; // rsi
  int v21; // eax
  __int64 v22; // rcx
  int v23; // r14d
  unsigned int v24; // [rsp+40h] [rbp-98h] BYREF
  ULONG_PTR v25; // [rsp+48h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-88h]
  _OWORD v27[3]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v28; // [rsp+90h] [rbp-48h]
  __int64 *ProcessorFlushList; // [rsp+F0h] [rbp+18h]
  int v31; // [rsp+F0h] [rbp+18h]
  __int64 v32; // [rsp+F8h] [rbp+20h]

  memset(v27, 0, sizeof(v27));
  v28 = 0LL;
  v5 = a4;
  v6 = a3 + 8 * (a4 - 1);
  v8 = a2;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)(a3 << 25) >> 16) )
  {
    ProcessorFlushList = MiGetProcessorFlushList();
    MiInitializeTbFlushList(
      (__int64)ProcessorFlushList,
      (__int64)&unk_140E37D40,
      *((_DWORD *)ProcessorFlushList + 3),
      8,
      1);
    v10 = (_QWORD *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v11 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v5 = 0LL;
    if ( (unsigned __int64)v10 <= v11 )
    {
      v12 = (__int64)ProcessorFlushList;
      v13 = v9 - 2;
      v32 = (((v11 - (unsigned __int64)v10) >> 3) + 1) << 9;
      v14 = (unsigned int)(v9 - 7);
      do
      {
        v15 = (*v10 >> 12) & 0xFFFFFFFFFFLL;
        *v10 = CLFS_LSN_NULL_EXT;
        v25 = v15;
        v16 = 48 * v15 - 0x220000000000LL;
        BugCheckParameter2 = 48 * (*(_QWORD *)(v16 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        MiInsertLargeTbFlushEntry(v12, v14, (unsigned __int64)v10);
        MiFlushTbList(v12);
        v18 = 512LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v17) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v17);
        }
        v20 = (_BYTE *)(v16 + 35);
        do
        {
          v24 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 - 11), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v24);
            while ( *(__int64 *)(v20 - 11) < 0 );
          }
          v31 = *(_DWORD *)(v20 - 3);
          LOWORD(v31) = v14 + v31;
          *(_DWORD *)(v20 - 3) = v31;
          *v20 &= ~8u;
          _InterlockedAnd64((volatile signed __int64 *)(v20 - 11), 0x7FFFFFFFFFFFFFFFuLL);
          v20 += 48;
          v18 -= v14;
        }
        while ( v18 );
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        MiFreeLargePageMemory(v25, v14, v13);
        MiLockAndDecrementShareCount(BugCheckParameter2, 4);
        ++v10;
      }
      while ( (unsigned __int64)v10 <= v11 );
      v5 = v32;
      v8 = a2;
    }
    MiReleaseProcessorFlushList();
  }
  else
  {
    v21 = 0;
    if ( a1 )
    {
      v22 = *(_QWORD *)(a1 + 112);
      v23 = 0;
      if ( v22 )
        v21 = MiSectionControlArea(v22);
    }
    else
    {
      v23 = 6;
    }
    MiDecommitPages(a3, v5, v21, 0LL, 0LL, v23, 0LL, (__int64)v27);
    MiUnmapReturnCharges((__int64)&MiSystemPartition, (unsigned __int64 *)v27);
  }
  if ( v8 == PsNtosImageBase || v8 == PsHalImageBase )
    _InterlockedAdd64(&qword_140E375D8, -v5);
  else
    _InterlockedExchangeAdd(&dword_140E375F0, -(int)v5);
}
