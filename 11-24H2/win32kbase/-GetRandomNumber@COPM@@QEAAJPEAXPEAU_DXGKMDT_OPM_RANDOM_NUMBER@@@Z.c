/*
 * XREFs of ?GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x14008AAD4
 * Callers:
 *     NtGdiGetOPMRandomNumber @ 0x140158DA0 (NtGdiGetOPMRandomNumber.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x14008BFA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x14008C010 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x14008C108 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProte.c)
 *     CallMonitor @ 0x14008C1A0 (CallMonitor.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall COPM::GetRandomNumber(COPM *this, void *a2, struct _DXGKMDT_OPM_RANDOM_NUMBER *a3)
{
  OPM::CMutex *v3; // rbx
  int HandleObject; // edi
  PDEVICE_OBJECT *v8; // rdi
  OPM::CMutex *v9; // rsi
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = (COPM *)((char *)this + 48);
  OPM::CMutex::Lock((COPM *)((char *)this + 48));
  v11 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject((char *)this + 24, a2, &v11);
  if ( HandleObject >= 0 )
  {
    v8 = (PDEVICE_OBJECT *)v11;
    v9 = *(OPM::CMutex **)(v11 + 8);
    OPM::CMutex::Lock(v9);
    if ( ((unsigned __int8 (__fastcall *)(PDEVICE_OBJECT *))(*v8)->NextDevice)(v8) )
      HandleObject = -1071774438;
    else
      HandleObject = CallMonitor(v8[2], 0x23248Fu, v8 + 9, 8u, a3, 0x10u);
    OPM::CMutex::Unlock(v9);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  OPM::CMutex::Unlock(v3);
  return (unsigned int)HandleObject;
}
