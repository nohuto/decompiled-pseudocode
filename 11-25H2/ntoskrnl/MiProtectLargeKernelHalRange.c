/*
 * XREFs of MiProtectLargeKernelHalRange @ 0x1407D8000
 * Callers:
 *     MiProtectKernelCfgData @ 0x140C3D8A0 (MiProtectKernelCfgData.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiRewritePteWithLockBit @ 0x1402110AC (MiRewritePteWithLockBit.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14038BC74 (MiInsertLargeTbFlushEntry.c)
 *     MiGetLargePteAddress @ 0x140411450 (MiGetLargePteAddress.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     MiRestrictSystemCodeProtection @ 0x1404F8E68 (MiRestrictSystemCodeProtection.c)
 *     MiComputeDriverProtection @ 0x140A8BD1C (MiComputeDriverProtection.c)
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
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rbx
  int v17; // eax
  ULONG_PTR ValidPte; // rax
  unsigned __int8 v20; // [rsp+30h] [rbp-38h]

  ProcessorFlushList = 0LL;
  v6 = MiComputeDriverProtection(a3);
  LargePteAddress = MiGetLargePteAddress(v7, 1u);
  v10 = MiGetLargePteAddress(v9, 1u);
  PteAddress = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v20 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
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
        MiLockNestedPageTable((__int64)AnyMultiplexedVm, PteAddress, v14, v15);
      }
      v16 = *(_QWORD *)LargePteAddress;
      if ( v13 )
        v17 = MiRestrictSystemCodeProtection(*(_QWORD *)LargePteAddress, v6);
      else
        v17 = v6;
      ValidPte = MiMakeValidPte(LargePteAddress, (v16 >> 12) & 0xFFFFFFFFFFLL, v17 | 0xA4000000);
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
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v20);
  return 0LL;
}
