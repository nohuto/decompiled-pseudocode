/*
 * XREFs of ??1?$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ @ 0x1801FFA0C
 * Callers:
 *     ?WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z @ 0x18018161C (-WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1801AD948 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 *     ?CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z @ 0x1801B1B90 (-CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z.c)
 *     ?PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1801DFBE0 (-PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z @ 0x180266E0C (-GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z.c)
 *     ?SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z @ 0x180266EA0 (-SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z.c)
 *     ??1CChannel@@AEAA@XZ @ 0x18026D3E4 (--1CChannel@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>(__int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
  {
    *(_DWORD *)(v1 + 8) = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)v1);
  }
}
