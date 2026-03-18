/*
 * XREFs of OPMDestroyAllProtectedOutputs @ 0x14008A8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LUID@@PEAVCMutex@2@@Z @ 0x14008A7FC (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LU.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x14008BFA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x14008C010 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 */

void __fastcall OPMDestroyAllProtectedOutputs(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 3648LL);
  OPM::CMutex::Lock((OPM::CMutex *)(v1 + 56));
  OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(v1 + 24, 0LL, v1 + 48);
  OPM::CMutex::Unlock((OPM::CMutex *)(v1 + 56));
}
