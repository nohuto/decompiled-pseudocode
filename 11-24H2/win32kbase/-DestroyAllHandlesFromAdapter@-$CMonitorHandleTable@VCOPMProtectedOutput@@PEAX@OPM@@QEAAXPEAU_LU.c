/*
 * XREFs of ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LUID@@PEAVCMutex@2@@Z @ 0x14008A7FC
 * Callers:
 *     OPMDestroyAllProtectedOutputs @ 0x14008A8A0 (OPMDestroyAllProtectedOutputs.c)
 *     DrvCleanupGraphicsDevices @ 0x1401C96B4 (DrvCleanupGraphicsDevices.c)
 * Callees:
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@AEAAJPEAVCOPMProtectedOutput@@KPEAVCMutex@2@@Z @ 0x14008ACDC (-DestroyHandleInternal@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@AEAAJPEAVCOPMProtec.c)
 *     ?GetNextElementIndex@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAEKPEAK@Z @ 0x14011C7C0 (-GetNextElementIndex@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAEKPEAK@Z.c)
 *     ?GetElement@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z @ 0x140131ED4 (-GetElement@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z.c)
 */

void __fastcall OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v9 = 0LL;
  v6 = a1;
  v8 = 0;
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( **(_QWORD **)a1 )
      goto LABEL_6;
    v7 = 0LL;
    while ( (unsigned __int8)OPM::CList<COPMProtectedOutput>::GetNextElementIndex(a1, v7, &v8) )
    {
      v3 = v8;
LABEL_6:
      OPM::CList<COPMProtectedOutput>::GetElement(v6, v3, &v9);
      if ( !a2 || *(_DWORD *)(v9 + 64) == *a2 && *(_DWORD *)(v9 + 68) == a2[1] )
      {
        OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandleInternal(v6, v9, v3, a3);
        v9 = 0LL;
      }
      v7 = v3;
      a1 = v6;
    }
  }
}
