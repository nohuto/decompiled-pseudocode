/*
 * XREFs of ?GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x14008AECC
 * Callers:
 *     NtGdiGetCertificateByHandle @ 0x14008ABA0 (NtGdiGetCertificateByHandle.c)
 * Callees:
 *     ?GetCertificate@COPMProtectedOutput@@QEAAJW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x14008AD6C (-GetCertificate@COPMProtectedOutput@@QEAAJW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x14008BFA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x14008C010 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x14008C108 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProte.c)
 */

__int64 __fastcall COPM::GetCertificate(
        COPM *this,
        void *a2,
        enum _DXGKMDT_CERTIFICATE_TYPE a3,
        unsigned __int8 *a4,
        ULONG a5)
{
  OPM::CMutex *v5; // rbx
  int HandleObject; // edi
  COPMProtectedOutput *v12; // [rsp+40h] [rbp+8h] BYREF

  v5 = (COPM *)((char *)this + 48);
  OPM::CMutex::Lock((COPM *)((char *)this + 48));
  v12 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject((char *)this + 24, a2, &v12);
  if ( HandleObject >= 0 )
  {
    HandleObject = COPMProtectedOutput::GetCertificate(v12, a3, a4, a5);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  OPM::CMutex::Unlock(v5);
  return (unsigned int)HandleObject;
}
