/*
 * XREFs of MiFreeBootDriverPages @ 0x140C68CE8
 * Callers:
 *     MiFreeInitializationCode @ 0x140AE80CC (MiFreeInitializationCode.c)
 *     MiHandleBootImage @ 0x140C5D020 (MiHandleBootImage.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiFreeLargePageMemory @ 0x14021B56C (MiFreeLargePageMemory.c)
 *     MiInsertLargeTbFlushEntry @ 0x14021C25C (MiInsertLargeTbFlushEntry.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiDecommitPages @ 0x140297F00 (MiDecommitPages.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiUnmapReturnCharges @ 0x140A8BE9C (MiUnmapReturnCharges.c)
 */

void __fastcall MiFreeBootDriverPages(__int64 a1, void *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  PVOID v8; // r15
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
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rcx
  int v25; // r14d
  unsigned int v26; // [rsp+40h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-90h]
  ULONG_PTR v28; // [rsp+50h] [rbp-88h]
  _OWORD v29[3]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v30; // [rsp+90h] [rbp-48h]
  __int64 *ProcessorFlushList; // [rsp+F0h] [rbp+18h]
  int v33; // [rsp+F0h] [rbp+18h]
  __int64 v34; // [rsp+F8h] [rbp+20h]

  memset(v29, 0, sizeof(v29));
  v30 = 0LL;
  v5 = a4;
  v6 = a3 + 8 * (a4 - 1);
  v8 = a2;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)(a3 << 25) >> 16) )
  {
    ProcessorFlushList = MiGetProcessorFlushList();
    MiInitializeTbFlushList(
      (__int64)ProcessorFlushList,
      (__int64)&unk_140E37E80,
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
      v34 = (((v11 - (unsigned __int64)v10) >> 3) + 1) << 9;
      v14 = (unsigned int)(v9 - 7);
      do
      {
        v15 = (*v10 >> 12) & 0xFFFFFFFFFFLL;
        *v10 = CLFS_LSN_NULL_EXT;
        BugCheckParameter2 = v15;
        v16 = 48 * v15 - 0x220000000000LL;
        v28 = 48 * (*(_QWORD *)(v16 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
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
          v26 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 - 11), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v26);
            while ( *(__int64 *)(v20 - 11) < 0 );
          }
          v33 = *(_DWORD *)(v20 - 3);
          LOWORD(v33) = v14 + v33;
          *(_DWORD *)(v20 - 3) = v33;
          *v20 &= ~8u;
          _InterlockedAnd64((volatile signed __int64 *)(v20 - 11), 0x7FFFFFFFFFFFFFFFuLL);
          v20 += 48;
          v18 -= v14;
        }
        while ( v18 );
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        MiFreeLargePageMemory(BugCheckParameter2, v14, v13);
        MiLockAndDecrementShareCount(v28, 4LL, v21, v22);
        ++v10;
      }
      while ( (unsigned __int64)v10 <= v11 );
      v5 = v34;
      v8 = a2;
    }
    MiReleaseProcessorFlushList();
  }
  else
  {
    v23 = 0;
    if ( a1 )
    {
      v24 = *(_QWORD *)(a1 + 112);
      v25 = 0;
      if ( v24 )
        v23 = MiSectionControlArea(v24);
    }
    else
    {
      v25 = 6;
    }
    MiDecommitPages(a3, v5, v23, 0LL, 0LL, v25, 0LL, (__int64)v29);
    MiUnmapReturnCharges((__int64)&MiSystemPartition, (unsigned __int64 *)v29);
  }
  if ( v8 == PsNtosImageBase || v8 == PsHalImageBase )
    _InterlockedAdd64(&qword_140E37718, -v5);
  else
    _InterlockedExchangeAdd(&dword_140E37730, -(int)v5);
}
