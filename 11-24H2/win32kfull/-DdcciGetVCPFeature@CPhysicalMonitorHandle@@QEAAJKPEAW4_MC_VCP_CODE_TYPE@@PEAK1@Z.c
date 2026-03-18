/*
 * XREFs of ?DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z @ 0x1401ECAF0
 * Callers:
 *     ?DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z @ 0x1401EC9D8 (-DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z.c)
 * Callees:
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1401F7D9C (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1401F7DFC (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?DdcciSendAndReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_J0PEAXK1K@Z @ 0x1403224C4 (-DdcciSendAndReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_J0PEAXK1K@Z.c)
 *     Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline @ 0x1403226B8 (Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetVCPFeature(
        CPhysicalMonitorHandle *this,
        int a2,
        enum _MC_VCP_CODE_TYPE *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  __int64 v9; // rdx
  int v10; // ebx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  unsigned __int16 v14; // ax
  int v16; // [rsp+40h] [rbp-20h] BYREF
  char v17; // [rsp+44h] [rbp-1Ch]
  __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  __int16 v19; // [rsp+50h] [rbp-10h]
  char v20; // [rsp+52h] [rbp-Eh]

  v18 = 0LL;
  v19 = 0;
  v20 = 0;
  v16 = 98897;
  v17 = 0;
  HIBYTE(v16) = a2;
  v10 = 0;
  if ( (unsigned int)Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline() )
  {
    v11 = CPhysicalMonitorHandle::DdcciSendAndReceiveDataFromMonitorDevice(this, v9, 0LL, &v16, 5u, &v18, 0xBu);
  }
  else
  {
    v12 = CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(this, -500000LL, &v16, 5u);
    if ( v12 < 0 )
      return (unsigned int)v12;
    v11 = CPhysicalMonitorHandle::DdcciReceiveDataFromMonitorDevice(this, 0LL, &v18, 0xBu);
  }
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( BYTE3(v18) == 1 )
    {
      return (unsigned int)-1071774332;
    }
    else if ( BYTE3(v18) <= 1u && BYTE4(v18) == a2 && BYTE5(v18) <= 1u )
    {
      LOBYTE(v10) = BYTE5(v18) == 0;
      v13 = HIBYTE(v19) | (unsigned __int16)((unsigned __int8)v19 << 8);
      *(_DWORD *)a3 = v10;
      v14 = BYTE6(v18) << 8;
      *a4 = v13;
      *a5 = HIBYTE(v18) | v14;
    }
    else
    {
      return (unsigned int)-1071774331;
    }
  }
  return (unsigned int)v12;
}
