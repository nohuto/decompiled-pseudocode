/*
 * XREFs of NtGdiDDCCIGetCapabilitiesString @ 0x14026D6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1401ECA78 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysi.c)
 *     ?DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z @ 0x140322158 (-DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z.c)
 */

__int64 __fastcall NtGdiDDCCIGetCapabilitiesString(void *a1, char *a2, unsigned int a3)
{
  __int64 SessionState; // rax
  int HandleObject; // ebx
  struct OPM::CMutex *v8; // rbx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF
  CPhysicalMonitorHandle *v11; // [rsp+58h] [rbp+20h] BYREF

  SessionState = W32GetSessionState((_DWORD)a1, a2);
  if ( a3 )
  {
    v8 = *(struct OPM::CMutex **)(*(_QWORD *)(SessionState + 96) + 128LL);
    OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v10, v8);
    v11 = 0LL;
    HandleObject = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject((__int64)v8 + 8, a1, &v11);
    if ( HandleObject >= 0 )
      HandleObject = CPhysicalMonitorHandle::DdcciGetCapabilitiesString(v11, a2, a3);
    OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v10);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)HandleObject;
}
