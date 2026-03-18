/*
 * XREFs of MiProtectLargeKernelHalRange @ 0x1407E7EC0
 * Callers:
 *     MiProtectKernelCfgData @ 0x140C4EAD0 (MiProtectKernelCfgData.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x14020CBCC (MiRewritePteWithLockBit.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTable @ 0x140322DB0 (MiUnlockPageTable.c)
 *     MiGetLargePteAddress @ 0x14036EE90 (MiGetLargePteAddress.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403A4A2C (MiInsertLargeTbFlushEntry.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     MiRestrictSystemCodeProtection @ 0x1404FB574 (MiRestrictSystemCodeProtection.c)
 *     MiComputeDriverProtection @ 0x140A90E20 (MiComputeDriverProtection.c)
 */

__int64 __fastcall MiProtectLargeKernelHalRange(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 *ProcessorFlushList; // rdi
  unsigned int v6; // r12d
  unsigned __int64 v7; // r10
  unsigned __int64 LargePteAddress; // rsi
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r13
  unsigned __int64 PteAddress; // rbp
  char *AnyMultiplexedVm; // r14
  int v13; // r15d
  unsigned __int64 v14; // rbx
  int v15; // eax
  ULONG_PTR ValidPte; // rax
  unsigned __int8 v18; // [rsp+30h] [rbp-38h]

  ProcessorFlushList = 0LL;
  v6 = MiComputeDriverProtection(a3);
  LargePteAddress = MiGetLargePteAddress(v7, 1u);
  v10 = MiGetLargePteAddress(v9, 1u);
  PteAddress = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v18 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  if ( LargePteAddress < v10 )
  {
    v13 = a4 & 1;
    do
    {
      if ( !PteAddress || (LargePteAddress & 0xFFF) == 0 )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList((__int64)ProcessorFlushList);
          MiReleaseProcessorFlushList();
          ProcessorFlushList = 0LL;
        }
        if ( PteAddress )
          MiUnlockPageTable((__int64)AnyMultiplexedVm, PteAddress);
        PteAddress = MiGetPteAddress(LargePteAddress);
        MiLockNestedPageTable((__int64)AnyMultiplexedVm, PteAddress);
      }
      v14 = *(_QWORD *)LargePteAddress;
      if ( v13 )
        v15 = MiRestrictSystemCodeProtection(*(_QWORD *)LargePteAddress, v6);
      else
        v15 = v6;
      ValidPte = MiMakeValidPte(LargePteAddress, (v14 >> 12) & 0xFFFFFFFFFFLL, v15 | 0xA4000000);
      MiRewritePteWithLockBit((__int64)AnyMultiplexedVm, 0, (volatile __int64 *)LargePteAddress, ValidPte);
      if ( !ProcessorFlushList )
      {
        ProcessorFlushList = MiGetProcessorFlushList();
        MiInitializeTbFlushList(
          (__int64)ProcessorFlushList,
          (__int64)AnyMultiplexedVm,
          *((_DWORD *)ProcessorFlushList + 3),
          0,
          32);
      }
      MiInsertLargeTbFlushEntry((__int64)ProcessorFlushList, 1, LargePteAddress);
      LargePteAddress += 8LL;
    }
    while ( LargePteAddress < v10 );
    if ( ProcessorFlushList )
    {
      MiFlushTbList((__int64)ProcessorFlushList);
      MiReleaseProcessorFlushList();
    }
  }
  MiUnlockPageTable((__int64)AnyMultiplexedVm, PteAddress);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v18);
  return 0LL;
}
