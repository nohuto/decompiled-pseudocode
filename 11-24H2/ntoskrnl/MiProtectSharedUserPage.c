/*
 * XREFs of MiProtectSharedUserPage @ 0x140C50154
 * Callers:
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MiFlushSingleTbEntry @ 0x14022A7E0 (MiFlushSingleTbEntry.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiUnlockWorkingSetOptimal @ 0x14024231C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x1402424F0 (MiLockWorkingSetOptimal.c)
 *     MiIncreaseUsedPtes @ 0x14028A180 (MiIncreaseUsedPtes.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x140313770 (MiMakeProtectionPfnCompatible.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053CAC4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053CB54 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     MxInstallMoreMemory @ 0x14066C6F0 (MxInstallMoreMemory.c)
 */

__int64 MiProtectSharedUserPage()
{
  unsigned __int64 v0; // rsi
  __int64 v1; // rsi
  unsigned __int64 v2; // r14
  int ProtectionPfnCompatible; // eax
  ULONG_PTR ValidPte; // rbx
  char *AnyMultiplexedVm; // r15
  __int64 v6; // rcx
  unsigned __int64 v7; // r12
  int v8; // eax
  ULONG_PTR v9; // rax
  __int64 v10; // rbx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v0 = MEMORY[0xFFFFF6FBC0000000];
  v12 = (unsigned int)Feature_KernelSharedUserDataAslr__private_featureState;
  if ( (Feature_KernelSharedUserDataAslr__private_featureState & 0x10) == 0 )
  {
    LODWORD(v12) = Feature_KernelSharedUserDataAslr__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_KernelSharedUserDataAslr__private_descriptor,
      Feature_KernelSharedUserDataAslr__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v12,
      3,
      (__int64)&Feature_KernelSharedUserDataAslr__private_descriptor);
  }
  v1 = (v0 >> 12) & 0xFFFFFFFFFFLL;
  LOBYTE(v12) = 0;
  v2 = MiReservePtes((__int64)&qword_140E37568, 1u);
  if ( !v2 )
    MxInstallMoreMemory(4);
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * v1 - 0x220000000000LL);
  ValidPte = MiMakeValidPte(v2, v1, ProtectionPfnCompatible | 0xA0000000);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v7 = MiLockWorkingSetOptimal((__int64)AnyMultiplexedVm, v2, (unsigned __int8 *)&v12);
  if ( _bittest64(&MiFlags, 0x24u) )
  {
    if ( (ValidPte & 0x20) == 0 )
    {
      v6 = 0xFFFFF6C000000000uLL;
      if ( v2 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit(v2, ValidPte, 128);
    }
  }
  *(_QWORD *)v2 = ValidPte;
  MiIncreaseUsedPtes(v6, v7, 1u, 6);
  MiUnlockWorkingSetOptimal((__int64)AnyMultiplexedVm, v7, v12);
  MmWriteableSharedUserData = (__int64)(v2 << 25) >> 16;
  v8 = MiMakeProtectionPfnCompatible(1, 48 * v1 - 0x220000000000LL);
  v9 = MiMakeValidPte(0xFFFFF6FBC0000000uLL, v1, v8 | 0x20000000u);
  v10 = v9;
  if ( _bittest64(&MiFlags, 0x24u) && (v9 & 0x20) == 0 )
    MiCheckLinearProtectedPteAccessedBit(0xFFFFF6FBC0000000uLL, v9, 128);
  MEMORY[0xFFFFF6FBC0000000] = v10;
  if ( v10 >= 0 || (BYTE1(v10) & 1) != (_BYTE)word_140E2ED84 )
    MiWriteValidPteNewProtection(
      0xFFFFF6FBC0000000uLL,
      v10 & 0xFFFFFFFFFFFFFEFFuLL | ((word_140E2ED84 & 1 | 0xFF80000000000000uLL) << 8));
  return MiFlushSingleTbEntry(0xFFFFF78000000000uLL, 0, 32);
}
