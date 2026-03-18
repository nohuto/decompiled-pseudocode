/*
 * XREFs of ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x14008A8F4
 * Callers:
 *     DrvCreatePhysicalMonitorObjects @ 0x14008C4A0 (DrvCreatePhysicalMonitorObjects.c)
 *     NtGdiDestroyOPMProtectedOutput @ 0x140158E80 (NtGdiDestroyOPMProtectedOutput.c)
 * Callees:
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@AEAAJPEAVCOPMProtectedOutput@@KPEAVCMutex@2@@Z @ 0x14008ACDC (-DestroyHandleInternal@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@AEAAJPEAVCOPMProtec.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x14008BFA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x14008C010 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x14008C108 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProte.c)
 */

__int64 __fastcall OPMDestroyProtectedOutput(void *a1)
{
  __int64 v2; // rbp
  unsigned int v3; // edi
  int HandleObject; // esi
  int v5; // eax
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 3648LL);
  OPM::CMutex::Lock((OPM::CMutex *)(v2 + 56));
  v3 = 0;
  v7 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(v2 + 24, a1, &v7);
  if ( HandleObject >= 0 )
  {
    v5 = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandleInternal(
           v2 + 24,
           v7,
           (unsigned int)a1,
           v2 + 48);
    HandleObject = 0;
    if ( v5 < 0 )
      HandleObject = v5;
  }
  OPM::CMutex::Unlock((OPM::CMutex *)(v2 + 56));
  if ( HandleObject < 0 )
    return (unsigned int)HandleObject;
  return v3;
}
