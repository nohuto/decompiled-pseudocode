/*
 * XREFs of ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140168A20
 * Callers:
 *     NdisLWMInitializeNetworkInterface @ 0x140029DF0 (NdisLWMInitializeNetworkInterface.c)
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x14004FC40 (NdisConvertNtStatusToNdisStatus.c)
 *     ??1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ @ 0x14006C890 (--1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_q_guid_d @ 0x14007EEC0 (WPP_RECORDER_SF_q_guid_d.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140080280 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1400812F0 (WPP_RECORDER_SF__guid_.c)
 *     WPP_RECORDER_SF_q_guid_ @ 0x14009ED8C (WPP_RECORDER_SF_q_guid_.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x140168BD0 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x140168ED0 (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x140181730 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 */

__int64 __fastcall ndisLWMCreateMiniport(
        struct _NDIS_M_DRIVER_BLOCK *a1,
        const struct _GUID *a2,
        struct _NDIS_MINIPORT_BLOCK **a3)
{
  struct _GUID v6; // xmm0
  int InterfaceAddDeviceParameters; // eax
  unsigned int v8; // ebx
  unsigned __int16 v10; // r9
  int v11; // eax
  int v12; // eax
  HANDLE Handle[2]; // [rsp+40h] [rbp-69h] BYREF
  struct _GUID v14; // [rsp+50h] [rbp-59h] BYREF
  __int64 v15; // [rsp+60h] [rbp-49h]
  void *v16[2]; // [rsp+68h] [rbp-41h] BYREF
  char v17; // [rsp+78h] [rbp-31h]
  __int16 v18; // [rsp+79h] [rbp-30h]
  char v19; // [rsp+7Bh] [rbp-2Eh]
  int v20; // [rsp+7Ch] [rbp-2Dh]
  __int128 v21; // [rsp+80h] [rbp-29h]
  __int64 v22; // [rsp+90h] [rbp-19h]
  __int64 v23; // [rsp+98h] [rbp-11h]
  __int64 v24; // [rsp+A0h] [rbp-9h]
  __int16 v25; // [rsp+A8h] [rbp-1h]
  int v26; // [rsp+AAh] [rbp+1h]
  __int16 v27; // [rsp+AEh] [rbp+5h]
  struct _NDIS_M_DRIVER_BLOCK *v28; // [rsp+B0h] [rbp+7h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      (__int64)a3,
      0x90u,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)a1,
      (__int64)a2);
  v15 = 0LL;
  *a3 = 0LL;
  v21 = 0LL;
  v6 = *a2;
  v16[0] = 0LL;
  v16[1] = 0LL;
  v14 = v6;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0LL;
  InterfaceAddDeviceParameters = ndisIfReadInterfaceAddDeviceParameters(
                                   (struct NDIS_MINIPORT_CREATION_CONFIG *)&v14,
                                   0LL);
  v8 = NdisConvertNtStatusToNdisStatus(InterfaceAddDeviceParameters);
  if ( v8 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v10 = 145;
    goto LABEL_21;
  }
  if ( HIBYTE(v25) )
  {
    Handle[0] = 0LL;
    v11 = ndisLWMOpenConfigurationKey(&v14, (KRegKey *)Handle);
    v8 = NdisConvertNtStatusToNdisStatus(v11);
    if ( v8 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x93u,
          (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
          (__int64)a2);
      if ( Handle[0] )
        ZwClose(Handle[0]);
    }
    else
    {
      v28 = a1;
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        v16,
        Handle[0]);
      v12 = ndisAddDevice(&v14, (void **)a3);
      v8 = NdisConvertNtStatusToNdisStatus(v12);
      if ( v8 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v10 = 148;
LABEL_21:
        WPP_RECORDER_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          v10,
          (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
          (__int64)a2);
      }
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x92u,
        (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
        (__int64)a2);
    v8 = -1073741811;
  }
LABEL_5:
  NDIS_MINIPORT_CREATION_CONFIG::~NDIS_MINIPORT_CREATION_CONFIG((NDIS_MINIPORT_CREATION_CONFIG *)&v14);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q_guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x95u,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)a1,
      (__int64)a2,
      v8);
  return v8;
}
