/*
 * XREFs of MiFreeBootDriverPages @ 0x140C54EE4
 * Callers:
 *     MiFreeInitializationCode @ 0x140AD58A0 (MiFreeInitializationCode.c)
 *     MiHandleBootImage @ 0x140C49B04 (MiHandleBootImage.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiDecommitPages @ 0x140381AE0 (MiDecommitPages.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14038BC74 (MiInsertLargeTbFlushEntry.c)
 *     MiFreeLargePageMemory @ 0x14038C050 (MiFreeLargePageMemory.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiUnmapReturnCharges @ 0x140A8A838 (MiUnmapReturnCharges.c)
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
  int v21; // eax
  __int64 v22; // rcx
  int v23; // r14d
  PVOID v24; // rt1
  int v25; // [rsp+40h] [rbp-98h] BYREF
  ULONG_PTR v26; // [rsp+48h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-88h]
  _OWORD v28[3]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v29; // [rsp+90h] [rbp-48h]
  __int64 *ProcessorFlushList; // [rsp+F0h] [rbp+18h]
  int v32; // [rsp+F0h] [rbp+18h]
  __int64 v33; // [rsp+F8h] [rbp+20h]

  memset(v28, 0, sizeof(v28));
  v29 = 0LL;
  v5 = a4;
  v6 = a3 + 8 * (a4 - 1);
  v8 = a2;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)(a3 << 25) >> 16) )
  {
    ProcessorFlushList = MiGetProcessorFlushList();
    MiInitializeTbFlushList(
      (__int64)ProcessorFlushList,
      (__int64)&unk_140E37B00,
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
      v33 = (((v11 - (unsigned __int64)v10) >> 3) + 1) << 9;
      v14 = (unsigned int)(v9 - 7);
      do
      {
        v15 = (*v10 >> 12) & 0xFFFFFFFFFFLL;
        *v10 = CLFS_LSN_NULL_EXT;
        v26 = v15;
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
          v25 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 - 11), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v25);
            while ( *(__int64 *)(v20 - 11) < 0 );
          }
          v32 = *(_DWORD *)(v20 - 3);
          LOWORD(v32) = v14 + v32;
          *(_DWORD *)(v20 - 3) = v32;
          *v20 &= ~8u;
          _InterlockedAnd64((volatile signed __int64 *)(v20 - 11), 0x7FFFFFFFFFFFFFFFuLL);
          v20 += 48;
          v18 -= v14;
        }
        while ( v18 );
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        MiFreeLargePageMemory(v26, v14, v13);
        MiLockAndDecrementShareCount(BugCheckParameter2, 4);
        ++v10;
      }
      while ( (unsigned __int64)v10 <= v11 );
      v5 = v33;
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
    MiDecommitPages(a3, v5, v21, 0LL, 0LL, v23, 0LL, (__int64)v28);
    MiUnmapReturnCharges((__int64)&MiSystemPartition, (unsigned __int64 *)v28);
  }
  v24 = *(PVOID *)&KeNumberProcessorsGroup0[9];
  if ( v8 == v24 || v8 == PsHalImageBase )
    _InterlockedAdd64(&qword_140E37398, -v5);
  else
    _InterlockedExchangeAdd(&dword_140E373B0, -(int)v5);
}
