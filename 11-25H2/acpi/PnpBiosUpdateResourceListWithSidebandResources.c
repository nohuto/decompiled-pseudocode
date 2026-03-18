/*
 * XREFs of PnpBiosUpdateResourceListWithSidebandResources @ 0x1400AD2DC
 * Callers:
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1400ACEA0 (ACPIFilterIrpFilterResourceRequirements.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 *     PnpBiosGetDeviceResourceList @ 0x1400AD6F8 (PnpBiosGetDeviceResourceList.c)
 *     PnpiAddSidebandResources @ 0x1400BFD38 (PnpiAddSidebandResources.c)
 */

__int64 __fastcall PnpBiosUpdateResourceListWithSidebandResources(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  int v5; // r13d
  void *v7; // rdi
  void *v8; // rsi
  int DeviceResourceList; // ebx
  __int64 Pool2; // rax
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v14; // [rsp+28h] [rbp-18h]
  unsigned int v15; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v17; // [rsp+80h] [rbp+40h] BYREF

  *a3 = 0LL;
  P = 0LL;
  v5 = a2;
  LOBYTE(a2) = 1;
  v7 = 0LL;
  v8 = 0LL;
  DeviceResourceList = PnpBiosGetDeviceResourceList(a1, a2, &P);
  if ( DeviceResourceList >= 0 )
  {
    if ( !P )
      return (unsigned int)-1073741772;
    v15 = 0;
    v17 = 0;
    DeviceResourceList = PnpiAddSidebandResources(v5, (_DWORD)P, 0, (unsigned int)&v17, 0LL, (__int64)&v15);
    if ( DeviceResourceList == -1073741789 )
    {
      Pool2 = ExAllocatePool2(256LL, v17, 1383097153LL);
      v11 = v15;
      v8 = (void *)Pool2;
      v12 = ExAllocatePool2(256LL, v15, 1383097153LL);
      v7 = (void *)v12;
      if ( v8 && v12 )
      {
        v15 = v11;
        DeviceResourceList = PnpiAddSidebandResources(v5, (_DWORD)P, (_DWORD)v8, (unsigned int)&v17, v12, (__int64)&v15);
        if ( DeviceResourceList >= 0 )
        {
          *a3 = v8;
          v8 = 0LL;
          if ( a4 )
          {
            *a4 = v7;
            v7 = 0LL;
          }
        }
      }
      else
      {
        DeviceResourceList = -1073741670;
      }
    }
    else if ( DeviceResourceList != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v14) = DeviceResourceList;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0x40u,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
          v14);
      }
      if ( DeviceResourceList >= 0 )
        DeviceResourceList = -1073741823;
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)DeviceResourceList;
}
