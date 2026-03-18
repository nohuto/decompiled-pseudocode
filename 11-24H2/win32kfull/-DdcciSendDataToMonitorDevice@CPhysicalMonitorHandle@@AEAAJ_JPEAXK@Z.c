/*
 * XREFs of ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1401F7DFC
 * Callers:
 *     ?DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z @ 0x1401ECAF0 (-DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x14025C4B0 (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?DdcciGetTimingReport@CPhysicalMonitorHandle@@QEAAJPEAU_MC_TIMING_REPORT@@@Z @ 0x140322304 (-DdcciGetTimingReport@CPhysicalMonitorHandle@@QEAAJPEAU_MC_TIMING_REPORT@@@Z.c)
 *     ?DdcciSaveCurrentSettings@CMonitorAPI@@QEAAJPEAX@Z @ 0x14032241C (-DdcciSaveCurrentSettings@CMonitorAPI@@QEAAJPEAX@Z.c)
 *     ?DdcciSetVCPFeature@CPhysicalMonitorHandle@@QEAAJKK@Z @ 0x140322584 (-DdcciSetVCPFeature@CPhysicalMonitorHandle@@QEAAJKK@Z.c)
 * Callees:
 *     ?DdcciSendIoctlToMonitorDevice@CPhysicalMonitorHandle@@AEAAJK_JPEAXK1K@Z @ 0x1401F7E70 (-DdcciSendIoctlToMonitorDevice@CPhysicalMonitorHandle@@AEAAJK_JPEAXK1K@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(
        CPhysicalMonitorHandle *this,
        __int64 a2,
        _BYTE *a3,
        int a4)
{
  __int64 v5; // r10
  char v6; // r11
  _BYTE *v7; // rax
  __int64 v8; // r8
  _DWORD v10[2]; // [rsp+40h] [rbp-18h] BYREF
  _BYTE *v11; // [rsp+48h] [rbp-10h]

  v5 = (unsigned int)(a4 - 1);
  v6 = 110;
  if ( a4 != 1 )
  {
    v7 = a3;
    v8 = (unsigned int)v5;
    do
    {
      v6 ^= *v7++;
      --v8;
    }
    while ( v8 );
  }
  v10[1] = a4;
  a3[v5] = v6;
  v10[0] = 110;
  v11 = a3;
  return CPhysicalMonitorHandle::DdcciSendIoctlToMonitorDevice(this, 0x232443u, a2, v10, 0x10u, 0LL, 0);
}
