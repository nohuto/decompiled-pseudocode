/*
 * XREFs of ACPIBuildProcessSpecialSynchronizationList @ 0x14002A7D0
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x14002A280 (ACPIBuildDeviceDpc.c)
 * Callees:
 *     ACPIBuildProcessGenericComplete @ 0x14002AC50 (ACPIBuildProcessGenericComplete.c)
 *     WPP_RECORDER_SF_Dqss @ 0x14002AD3C (WPP_RECORDER_SF_Dqss.c)
 */

__int64 ACPIBuildProcessSpecialSynchronizationList()
{
  PVOID *v0; // rdi
  void *v1; // rdx
  char v2; // bl
  PVOID *v3; // rsi
  int v4; // eax
  PVOID *v5; // rdi
  PVOID *v6; // rsi
  const char *v7; // r10
  const char *v8; // rdx
  PVOID v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v13; // rcx
  const char *v14; // r11
  const char *v15; // r8
  PVOID v16; // r10
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // [rsp+40h] [rbp-38h]
  char v20; // [rsp+80h] [rbp+8h]

  v0 = (PVOID *)AcpiBuildSpecialSynchronizationList;
  v1 = &WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids;
  v2 = 1;
  v20 = 1;
  if ( AcpiBuildSpecialSynchronizationList == &AcpiBuildSpecialSynchronizationList )
    goto LABEL_7;
  do
  {
    v3 = v0;
    v0 = (PVOID *)*v0;
    v4 = *((_DWORD *)v3 + 20);
    if ( (v4 & 8) != 0 && (__int64 *)AcpiBuildDeviceList != &AcpiBuildDeviceList
      || (v4 & 0x20) != 0 && AcpiBuildSynchronizationList != &AcpiBuildSynchronizationList
      || (v4 & 1) != 0 && AcpiBuildRunMethodList != &AcpiBuildRunMethodList
      || (v4 & 2) != 0 && AcpiBuildOperationRegionList != &AcpiBuildOperationRegionList
      || (v4 & 0x10) != 0 && AcpiBuildThermalZoneList != &AcpiBuildThermalZoneList
      || (v4 & 4) != 0 && AcpiBuildPowerResourceList != &AcpiBuildPowerResourceList )
    {
      v2 = 0;
    }
    else
    {
      if ( (v4 & 0x80u) != 0 && (__int64 *)AcpiBuildQueueList != &AcpiBuildQueueList )
        v2 = 0;
      if ( (v4 & 0x40) == 0 )
      {
        v13 = v3[5];
        v14 = byte_140075488;
        v15 = byte_140075488;
        LOBYTE(v16) = 0;
        if ( v13 )
        {
          v17 = v13[1];
          v16 = v3[5];
          if ( (v17 & 0x200000000000LL) != 0 )
          {
            v14 = (const char *)v13[76];
            v18 = (v17 & 0x400000000000LL) == 0;
            v1 = &WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids;
            if ( !v18 )
              v15 = (const char *)v13[77];
          }
          else
          {
            v1 = &WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids;
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v1) = 2;
          WPP_RECORDER_SF_Dqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v1,
            6,
            69,
            (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
            v4,
            (char)v16,
            (__int64)v14,
            (__int64)v15);
        }
        ACPIBuildProcessGenericComplete(v3);
        v1 = &WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids;
      }
    }
  }
  while ( v0 != &AcpiBuildSpecialSynchronizationList );
  v20 = v2;
  if ( v2 )
  {
LABEL_7:
    v5 = (PVOID *)AcpiBuildSpecialSynchronizationList;
    if ( AcpiBuildSpecialSynchronizationList != &AcpiBuildSpecialSynchronizationList )
    {
      do
      {
        v6 = v5;
        v7 = byte_140075488;
        v5 = (PVOID *)*v5;
        v8 = byte_140075488;
        LOBYTE(v9) = 0;
        v10 = v6[5];
        if ( v10 )
        {
          v11 = v10[1];
          v9 = v6[5];
          if ( (v11 & 0x200000000000LL) != 0 )
          {
            v7 = (const char *)v10[76];
            if ( (v11 & 0x400000000000LL) != 0 )
              v8 = (const char *)v10[77];
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = (__int64)v8;
          LOBYTE(v8) = 4;
          WPP_RECORDER_SF_Dqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v8,
            6,
            70,
            (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
            *((_DWORD *)v6 + 20),
            (char)v9,
            (__int64)v7,
            v19);
        }
        ACPIBuildProcessGenericComplete(v6);
      }
      while ( v5 != &AcpiBuildSpecialSynchronizationList );
      v2 = v20;
    }
  }
  return v2 == 0 ? 0x103 : 0;
}
