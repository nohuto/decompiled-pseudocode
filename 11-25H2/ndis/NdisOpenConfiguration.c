/*
 * XREFs of NdisOpenConfiguration @ 0x14004F910
 * Callers:
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x14002CA50 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     NdisOpenConfigurationEx @ 0x140050AC0 (NdisOpenConfigurationEx.c)
 *     ?ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14014B2BC (-ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x14004FC40 (NdisConvertNtStatusToNdisStatus.c)
 *     ndisWdfOpenConfigurationKey @ 0x140167EE0 (ndisWdfOpenConfigurationKey.c)
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x140168ED0 (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 */

void __stdcall NdisOpenConfiguration(
        PNDIS_STATUS Status,
        PNDIS_HANDLE ConfigurationHandle,
        NDIS_HANDLE WrapperConfigurationContext)
{
  PNDIS_HANDLE v4; // r14
  __int64 Pool2; // rax
  int v7; // edx
  HANDLE *v8; // rbx
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  v4 = ConfigurationHandle;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(ConfigurationHandle) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)ConfigurationHandle,
      8,
      21,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      (char)WrapperConfigurationContext);
  }
  Pool2 = ExAllocatePool2(64LL, 40LL, 1751336014);
  v8 = (HANDLE *)Pool2;
  if ( Pool2 )
  {
    v7 = 0;
    *(_DWORD *)Pool2 = 2621707;
    *Status = 0;
    v9 = *(_BYTE *)WrapperConfigurationContext == 10;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_QWORD *)(Pool2 + 16) = WrapperConfigurationContext;
    if ( v9 )
    {
      v10 = *((_QWORD *)WrapperConfigurationContext + 1);
      *(_QWORD *)(Pool2 + 8) = v10;
      if ( v10 )
      {
        v11 = *(_DWORD *)(v10 + 120);
        if ( (v11 & 0x100) != 0 )
        {
          Handle = 0LL;
          v12 = ndisLWMOpenConfigurationKey((const struct _GUID *)(v10 + 4008), (KRegKey *)&Handle);
          v13 = NdisConvertNtStatusToNdisStatus(v12);
          *Status = v13;
          if ( v13 )
          {
            if ( Handle )
              ZwClose(Handle);
          }
          else
          {
            v8[4] = Handle;
          }
        }
        else if ( (v11 & 0x80u) != 0 )
        {
          v14 = ndisWdfOpenConfigurationKey(v10);
          *Status = NdisConvertNtStatusToNdisStatus(v14);
        }
        else
        {
          *Status = IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(v10 + 3832), 2u, 0xC2000000, v8 + 4);
        }
      }
    }
    else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        8,
        22,
        (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
        (char)WrapperConfigurationContext);
    }
    if ( *Status < 0 )
      ExFreePoolWithTag(v8, 0);
    else
      *v4 = v8;
  }
  else
  {
    *Status = -1073741670;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      8,
      23,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      (char)WrapperConfigurationContext);
  }
}
