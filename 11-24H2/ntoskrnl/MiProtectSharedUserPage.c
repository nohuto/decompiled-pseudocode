/*
 * XREFs of MiProtectSharedUserPage @ 0x140C522E4
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiUnlockWorkingSetOptimal @ 0x14020A46C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x14020A640 (MiLockWorkingSetOptimal.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     MiMakeProtectionPfnCompatible @ 0x1403F26B0 (MiMakeProtectionPfnCompatible.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     MxInstallMoreMemory @ 0x14066D8C0 (MxInstallMoreMemory.c)
 */

void MiProtectSharedUserPage()
{
  unsigned __int64 v0; // rsi
  __int64 v1; // rsi
  unsigned __int64 v2; // r14
  int ProtectionPfnCompatible; // eax
  ULONG_PTR ValidPte; // rbx
  char *AnyMultiplexedVm; // r15
  __int64 v6; // r9
  __int64 v7; // rcx
  ULONG_PTR v8; // r12
  int v9; // eax
  ULONG_PTR v10; // rax
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v0 = MEMORY[0xFFFFF6FBC0000000];
  v13 = (unsigned int)Feature_KernelSharedUserDataAslr__private_featureState;
  if ( (Feature_KernelSharedUserDataAslr__private_featureState & 0x10) == 0 )
  {
    LODWORD(v13) = Feature_KernelSharedUserDataAslr__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_KernelSharedUserDataAslr__private_descriptor,
      Feature_KernelSharedUserDataAslr__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v13,
      3,
      (__int64)&Feature_KernelSharedUserDataAslr__private_descriptor);
  }
  v1 = (v0 >> 12) & 0xFFFFFFFFFFLL;
  LOBYTE(v13) = 0;
  v2 = MiReservePtes((__int64)&qword_140E376A8, 1u);
  if ( !v2 )
    MxInstallMoreMemory(4);
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * v1 - 0x220000000000LL);
  ValidPte = MiMakeValidPte(v2, v1, ProtectionPfnCompatible | 0xA0000000);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v8 = MiLockWorkingSetOptimal((__int64)AnyMultiplexedVm, v2, (unsigned __int8 *)&v13, v6);
  if ( _bittest64(&MiFlags, 0x24u) )
  {
    if ( (ValidPte & 0x20) == 0 )
    {
      v7 = 0xFFFFF6C000000000uLL;
      if ( v2 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit(v2, ValidPte, 128LL);
    }
  }
  *(_QWORD *)v2 = ValidPte;
  MiIncreaseUsedPtes(v7, v8, 1LL, 6LL);
  MiUnlockWorkingSetOptimal((__int64)AnyMultiplexedVm, v8, v13);
  MmWriteableSharedUserData = (__int64)(v2 << 25) >> 16;
  v9 = MiMakeProtectionPfnCompatible(1, 48 * v1 - 0x220000000000LL);
  v10 = MiMakeValidPte(0xFFFFF6FBC0000000uLL, v1, v9 | 0x20000000u);
  v12 = v10;
  if ( _bittest64(&MiFlags, 0x24u) && (v10 & 0x20) == 0 )
    MiCheckLinearProtectedPteAccessedBit(0xFFFFF6FBC0000000uLL, v10, 128LL);
  MEMORY[0xFFFFF6FBC0000000] = v12;
  if ( v12 >= 0 || (BYTE1(v12) & 1) != (_BYTE)word_140E2EEC4 )
    MiWriteValidPteNewProtection(
      0xFFFFF6FBC0000000uLL,
      v12 & 0xFFFFFFFFFFFFFEFFuLL | ((word_140E2EEC4 & 1 | 0xFF80000000000000uLL) << 8),
      v11);
  MiFlushSingleTbEntry(0xFFFFF78000000000uLL, 0, 32);
}
