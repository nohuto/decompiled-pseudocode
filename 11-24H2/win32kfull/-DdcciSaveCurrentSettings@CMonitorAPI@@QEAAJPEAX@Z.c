/*
 * XREFs of ?DdcciSaveCurrentSettings@CMonitorAPI@@QEAAJPEAX@Z @ 0x14032241C
 * Callers:
 *     NtGdiDDCCISaveCurrentSettings @ 0x140322710 (NtGdiDDCCISaveCurrentSettings.c)
 * Callees:
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1401ECA78 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysi.c)
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1401F7DFC (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 */

__int64 __fastcall CMonitorAPI::DdcciSaveCurrentSettings(CMonitorAPI *this, void *a2)
{
  int HandleObject; // ebx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  CPhysicalMonitorHandle *v7; // [rsp+40h] [rbp+18h] BYREF
  char v8; // [rsp+48h] [rbp+20h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v8, this);
  v7 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject((__int64)this + 8, a2, &v7);
  if ( HandleObject >= 0 )
  {
    if ( (unsigned int)GreIsInLowBox() )
    {
      HandleObject = -1073741790;
    }
    else
    {
      v6 = -1307803311;
      HandleObject = CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(v7, -2000000LL, &v6, 4);
    }
  }
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v8);
  return (unsigned int)HandleObject;
}
