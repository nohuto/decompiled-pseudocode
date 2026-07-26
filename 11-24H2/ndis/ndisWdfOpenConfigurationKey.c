/*
 * XREFs of ndisWdfOpenConfigurationKey @ 0x14015B3C0
 * Callers:
 *     NdisOpenConfiguration @ 0x140076B10 (NdisOpenConfiguration.c)
 *     ndisWdfOpenConfiguration @ 0x140136A1C (ndisWdfOpenConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q_guid_d @ 0x140062C30 (WPP_RECORDER_SF_q_guid_d.c)
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x140067700 (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     WPP_RECORDER_SF_qSd @ 0x14009114C (WPP_RECORDER_SF_qSd.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015BF20 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x14015C360 (ndisIfOpenInterfaceRegistryKey.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x14015C580 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 */

__int64 __fastcall ndisWdfOpenConfigurationKey(__int64 a1, HANDLE *a2)
{
  unsigned int *v2; // r12
  unsigned int v5; // eax
  unsigned int v6; // ebx
  HANDLE v7; // rcx
  unsigned int Uint32; // eax
  _DEVICE_OBJECT *v9; // rcx
  NTSTATUS v10; // eax
  int v11; // edx
  HANDLE v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _GUID *v18; // [rsp+20h] [rbp-E0h]
  int v19; // [rsp+20h] [rbp-E0h]
  char v20[8]; // [rsp+28h] [rbp-D8h]
  char v21[8]; // [rsp+30h] [rbp-D0h]
  char v22[8]; // [rsp+30h] [rbp-D0h]
  HANDLE DeviceRegKey; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v24; // [rsp+78h] [rbp-88h] BYREF
  char v25[4]; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE *v27; // [rsp+90h] [rbp-70h]
  wchar_t pszSrc[56]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = (unsigned int *)(a1 + 4008);
  v27 = a2;
  v24 = 0LL;
  v5 = ndisIfOpenInterfaceRegistryKey(a1 + 4008, (KRegKey *)&v24, 1u, 1);
  v6 = v5;
  if ( v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q_guid_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        8u,
        0xAu,
        (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
        a1,
        (__int64)v2,
        v5);
    v7 = v24;
    if ( !v24 )
      return v6;
LABEL_39:
    ZwClose(v7);
    return v6;
  }
  *(_DWORD *)v25 = 0;
  Handle = &v24;
  Uint32 = NetSetupPropertyBag::ReadUint32(
             (NetSetupPropertyBag *)&Handle,
             (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_PnpDeviceInterfaceNumber,
             (unsigned int *)v25);
  v6 = Uint32;
  if ( !Uint32 )
  {
    v9 = *(_DEVICE_OBJECT **)(a1 + 3832);
    DeviceRegKey = 0LL;
    v10 = IoOpenDeviceRegistryKey(v9, 2u, 0xC2000000, &DeviceRegKey);
    v6 = v10;
    if ( v10 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          8u,
          0xCu,
          (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
          a1,
          v10);
      v12 = DeviceRegKey;
      if ( DeviceRegKey )
LABEL_15:
        ZwClose(v12);
LABEL_16:
      v7 = v24;
      if ( !v24 )
        return v6;
      goto LABEL_39;
    }
    if ( *(_DWORD *)v25 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          8u,
          0xEu,
          (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
          a1,
          *(_DWORD *)v25);
      *(_DWORD *)v21 = *((unsigned __int8 *)v2 + 8);
      *(_DWORD *)v20 = *((unsigned __int16 *)v2 + 3);
      LODWORD(v18) = *((unsigned __int16 *)v2 + 2);
      v13 = RtlStringCbPrintfW(
              pszSrc,
              0x70uLL,
              L"NetworkInterface\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
              *v2,
              v18,
              *(_QWORD *)v20,
              *(_QWORD *)v21,
              *((unsigned __int8 *)v2 + 9),
              *((unsigned __int8 *)v2 + 10),
              *((unsigned __int8 *)v2 + 11),
              *((unsigned __int8 *)v2 + 12),
              *((unsigned __int8 *)v2 + 13),
              *((unsigned __int8 *)v2 + 14),
              *((unsigned __int8 *)v2 + 15));
      v6 = v13;
      if ( v13 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v22 = v13;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            8u,
            0xFu,
            (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
            a1,
            *(_QWORD *)v22);
        }
        v12 = DeviceRegKey;
        if ( DeviceRegKey )
          goto LABEL_15;
        goto LABEL_16;
      }
      Handle = 0LL;
      v6 = KRegKey::Open((KRegKey *)&Handle, 0xC2000000, pszSrc, DeviceRegKey);
      if ( v6 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qSd(*((_QWORD *)WPP_GLOBAL_Control + 8), v14, v15, v16, v19);
        if ( Handle )
          ZwClose(Handle);
        v12 = DeviceRegKey;
        if ( DeviceRegKey )
          goto LABEL_15;
        goto LABEL_16;
      }
      v6 = 0;
      *v27 = Handle;
      if ( DeviceRegKey )
        ZwClose(DeviceRegKey);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          8,
          13,
          (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
          a1);
      }
      *a2 = DeviceRegKey;
      DeviceRegKey = 0LL;
    }
    v7 = v24;
    if ( !v24 )
      return v6;
    goto LABEL_39;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      8u,
      0xBu,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      a1,
      Uint32);
  v7 = v24;
  if ( v24 )
    goto LABEL_39;
  return v6;
}
