/*
 * XREFs of ?OPMProcessTerminating@@YAXPEAX@Z @ 0x14008BF08
 * Callers:
 *     GdiProcessCallout @ 0x140179DD0 (GdiProcessCallout.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x14008BFA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x14008C010 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     ?DestroyHandlesOwnedByProcess@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAXPEAVCMutex@2@@Z @ 0x14008C038 (-DestroyHandlesOwnedByProcess@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAXPEA.c)
 */

void __fastcall OPMProcessTerminating(void *a1)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 3648LL);
  OPM::CMutex::Lock((OPM::CMutex *)(v2 + 56));
  OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandlesOwnedByProcess(v2 + 24, a1, v2 + 48);
  OPM::CMutex::Unlock((OPM::CMutex *)(v2 + 56));
}
