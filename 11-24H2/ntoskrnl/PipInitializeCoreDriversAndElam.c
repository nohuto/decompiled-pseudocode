/*
 * XREFs of PipInitializeCoreDriversAndElam @ 0x140C65540
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 * Callees:
 *     MiAcquireLoadLock @ 0x1402BBB18 (MiAcquireLoadLock.c)
 *     MmFindDataTableEntryByAddress @ 0x1402BBDCC (MmFindDataTableEntryByAddress.c)
 *     MmReleaseLoadLock @ 0x1404C2E10 (MmReleaseLoadLock.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MmCallDllInitialize @ 0x1407E7F48 (MmCallDllInitialize.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140BE0B00 (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     KeInitAmd64SpecificState @ 0x140BE0B80 (KeInitAmd64SpecificState.c)
 *     KeCheckedKernelInitialize @ 0x140BE144C (KeCheckedKernelInitialize.c)
 *     PipInitializeCoreDriversByGroup @ 0x140C65698 (PipInitializeCoreDriversByGroup.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140C65844 (PipInitializeEarlyLaunchDrivers.c)
 *     PipInitializeDriverDependentDLLs @ 0x140C65954 (PipInitializeDriverDependentDLLs.c)
 *     VslRegisterBootDrivers @ 0x140C65AF8 (VslRegisterBootDrivers.c)
 *     PipInitComputerIds @ 0x140C65CF0 (PipInitComputerIds.c)
 *     VslConnectSwInterrupt @ 0x140C6722C (VslConnectSwInterrupt.c)
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
    if ( (v4[13] & 0x4000000) != 0 && (*((_DWORD *)v4 + 71) & 1) != 0 )
    {
      DataTableEntryByAddress = MmFindDataTableEntryByAddress(v4[6]);
      MmCallDllInitialize((__int64)DataTableEntryByAddress);
    }
  }
  MmReleaseLoadLock(Lock);
  PipInitializeCoreDriversByGroup(0LL, a1);
  PspPicoRegistrationDisabled = 1;
  qword_140E086D0 = (__int64)off_140E00708;
  qword_140E086D8 = 8LL;
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
