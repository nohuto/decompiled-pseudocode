/*
 * XREFs of PipInitializeCoreDriversAndElam @ 0x140C520B0
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x14036D060 (MmReleaseLoadLock.c)
 *     MiAcquireLoadLock @ 0x14036DF38 (MiAcquireLoadLock.c)
 *     MmFindDataTableEntryByAddress @ 0x14036E0D0 (MmFindDataTableEntryByAddress.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MmCallDllInitialize @ 0x1407D7AC0 (MmCallDllInitialize.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140BCDB00 (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     KeInitAmd64SpecificState @ 0x140BCDB80 (KeInitAmd64SpecificState.c)
 *     KeCheckedKernelInitialize @ 0x140BCE44C (KeCheckedKernelInitialize.c)
 *     PipInitializeCoreDriversByGroup @ 0x140C52208 (PipInitializeCoreDriversByGroup.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140C523B4 (PipInitializeEarlyLaunchDrivers.c)
 *     PipInitializeDriverDependentDLLs @ 0x140C524C4 (PipInitializeDriverDependentDLLs.c)
 *     VslRegisterBootDrivers @ 0x140C52668 (VslRegisterBootDrivers.c)
 *     PipInitComputerIds @ 0x140C52860 (PipInitComputerIds.c)
 *     VslConnectSwInterrupt @ 0x140C53D9C (VslConnectSwInterrupt.c)
 */

__int64 __fastcall PipInitializeCoreDriversAndElam(__int64 a1)
{
  struct _KTHREAD *Lock; // rbp
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  __int64 *DataTableEntryByAddress; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-78h] BYREF

  memset_0(&v7, 0, 0x68uLL);
  Lock = MiAcquireLoadLock(1);
  v3 = *(_QWORD **)(a1 + 16);
  while ( v3 != (_QWORD *)(a1 + 16) )
  {
    v4 = v3;
    v3 = (_QWORD *)*v3;
    if ( (v4[13] & 0x4000000) != 0 && (*((_DWORD *)v4 + 57) & 1) != 0 )
    {
      DataTableEntryByAddress = MmFindDataTableEntryByAddress(v4[6]);
      MmCallDllInitialize((__int64)DataTableEntryByAddress);
    }
  }
  MmReleaseLoadLock(Lock);
  PipInitializeCoreDriversByGroup(0LL, a1);
  PspPicoRegistrationDisabled = 1;
  qword_140E08580 = (__int64)off_140E00708;
  qword_140E08588 = 8LL;
  KeInitAmd64SpecificState();
  if ( KeHotpatchTestMode )
    KeCheckedKernelInitialize();
  PspPicoProviderRanges = 0LL;
  memset_0(&PsKernelRangeList, 0, 0x130uLL);
  *(_OWORD *)&PspKernelRanges = 0LL;
  VslRegisterBootDrivers();
  VslConnectSwInterrupt(0LL, 0LL);
  PipInitComputerIds(a1);
  PipInitializeEarlyLaunchDrivers(a1);
  PnpBootDriverCallbackRegistrationClosed = 1;
  PnpNotifyEarlyLaunchStatusUpdate(0);
  PipInitializeDriverDependentDLLs(1LL, a1);
  PipInitializeCoreDriversByGroup(1LL, a1);
  result = PipInitializeCoreDriversByGroup(2LL, a1);
  PnpCoreDriverGroupLoadPhase = 3;
  return result;
}
