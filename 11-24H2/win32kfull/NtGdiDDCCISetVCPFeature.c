/*
 * XREFs of NtGdiDDCCISetVCPFeature @ 0x140322750
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1401ECA78 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysi.c)
 *     ?DdcciSetVCPFeature@CPhysicalMonitorHandle@@QEAAJKK@Z @ 0x140322584 (-DdcciSetVCPFeature@CPhysicalMonitorHandle@@QEAAJKK@Z.c)
 */

__int64 __fastcall NtGdiDDCCISetVCPFeature(void *a1, __int64 a2, __int16 a3)
{
  char v4; // bp
  struct OPM::CMutex *v6; // rbx
  int HandleObject; // ebx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  CPhysicalMonitorHandle *v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = a2;
  v6 = *(struct OPM::CMutex **)(*(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96) + 128LL);
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v9, v6);
  v10 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject((__int64)v6 + 8, a1, &v10);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::DdcciSetVCPFeature(v10, v4, a3);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v9);
  return (unsigned int)HandleObject;
}
