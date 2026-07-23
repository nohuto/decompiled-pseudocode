/*
 * XREFs of MiProtectLargeKernelHalRange @ 0x1407E8490
 * Callers:
 *     MiProtectKernelCfgData @ 0x140C50C60 (MiProtectKernelCfgData.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14021C25C (MiInsertLargeTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiGetLargePteAddress @ 0x14026AE10 (MiGetLargePteAddress.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiUnlockPageTable @ 0x1402CB940 (MiUnlockPageTable.c)
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiRestrictSystemCodeProtection @ 0x1404F8E38 (MiRestrictSystemCodeProtection.c)
 *     MiComputeDriverProtection @ 0x140A8D51C (MiComputeDriverProtection.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r15d
  unsigned __int64 v17; // rbx
  int v18; // eax
  ULONG_PTR ValidPte; // rax
  unsigned __int8 v21; // [rsp+30h] [rbp-38h]

  ProcessorFlushList = 0LL;
  v6 = MiComputeDriverProtection(a3);
  LargePteAddress = MiGetLargePteAddress(v7, 1u);
  v10 = MiGetLargePteAddress(v9, 1u);
  PteAddress = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v21 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v13, v14, v15);
  if ( LargePteAddress < v10 )
  {
    v16 = a4 & 1;
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
      v17 = *(_QWORD *)LargePteAddress;
      if ( v16 )
        v18 = MiRestrictSystemCodeProtection(*(_QWORD *)LargePteAddress, v6);
      else
        v18 = v6;
      ValidPte = MiMakeValidPte(LargePteAddress, (v17 >> 12) & 0xFFFFFFFFFFLL, v18 | 0xA4000000);
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
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v21);
  return 0LL;
}
