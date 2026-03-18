/*
 * XREFs of ?DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z @ 0x1C0268F8C
 * Callers:
 *     NtGdiDDCCIGetVCPFeature @ 0x1C0269B20 (NtGdiDDCCIGetVCPFeature.c)
 * Callees:
 *     ?DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z @ 0x1C026902C (-DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C02695C0 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysi.c)
 */

__int64 __fastcall CMonitorAPI::DdcciGetVCPFeature(
        CMonitorAPI *this,
        void *a2,
        unsigned int a3,
        enum _MC_VCP_CODE_TYPE *a4,
        unsigned int *a5,
        unsigned int *a6)
{
  int HandleObject; // ebx
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF
  CPhysicalMonitorHandle *v13; // [rsp+50h] [rbp+8h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v12, this);
  v13 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject((char *)this + 8, a2, &v13);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::DdcciGetVCPFeature(v13, a3, a4, a5, a6);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v12);
  return (unsigned int)HandleObject;
}
