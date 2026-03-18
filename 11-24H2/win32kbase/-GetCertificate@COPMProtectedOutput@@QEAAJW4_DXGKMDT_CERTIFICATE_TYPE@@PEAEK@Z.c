/*
 * XREFs of ?GetCertificate@COPMProtectedOutput@@QEAAJW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x14008AD6C
 * Callers:
 *     ?GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x14008AECC (-GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x14008BFA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x14008C010 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     CallMonitor @ 0x14008C1A0 (CallMonitor.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall COPMProtectedOutput::GetCertificate(
        COPMProtectedOutput *this,
        enum _DXGKMDT_CERTIFICATE_TYPE a2,
        unsigned __int8 *a3,
        ULONG a4)
{
  OPM::CMutex *v4; // rbx
  unsigned int v8; // edi
  enum _DXGKMDT_CERTIFICATE_TYPE InputBuffer; // [rsp+48h] [rbp+10h] BYREF

  InputBuffer = a2;
  v4 = (OPM::CMutex *)*((_QWORD *)this + 1);
  OPM::CMutex::Lock(v4);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
    v8 = -1071774438;
  else
    v8 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x232487u, &InputBuffer, 4u, a3, a4);
  OPM::CMutex::Unlock(v4);
  return v8;
}
