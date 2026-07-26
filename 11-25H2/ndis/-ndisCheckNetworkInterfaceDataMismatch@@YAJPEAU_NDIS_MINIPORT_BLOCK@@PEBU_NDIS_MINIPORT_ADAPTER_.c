/*
 * XREFs of ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x140168320
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x140028580 (WPP_RECORDER_SF_qDD_ea_140028580.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140080280 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ?ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1400A52AC (-ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAP.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEB_WK@Z @ 0x140140FE0 (-SetValueUlong@KRegKey@@QEAAJPEB_WK@Z.c)
 *     ?QueryValueUshort@KRegKey@@QEAAJPEB_WPEAG@Z @ 0x14014D31C (-QueryValueUshort@KRegKey@@QEAAJPEB_WPEAG@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1401692B0 (ndisIfOpenInterfaceRegistryKey.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x14016CC90 (-QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z.c)
 */

NTSTATUS __fastcall ndisCheckNetworkInterfaceDataMismatch(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a2)
{
  char v2; // r12
  bool v3; // zf
  wchar_t *v6; // rsi
  wchar_t *v7; // r14
  wchar_t *v8; // r15
  NTSTATUS ValueUshort; // ebx
  ULONG v10; // r9d
  HANDLE v11; // rcx
  NTSTATUS result; // eax
  ULONG v13; // r9d
  unsigned __int16 IfType; // bx
  ULONG v15; // r9d
  _NDIS_MEDIUM MediaType; // ecx
  HANDLE v17; // rcx
  ULONG v18; // r9d
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // ecx
  __int64 v20; // [rsp+38h] [rbp-61h]
  HANDLE Handle; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int16 v22[2]; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v23; // [rsp+4Ch] [rbp-4Dh] BYREF
  char v24[4]; // [rsp+50h] [rbp-49h] BYREF
  HANDLE DeviceRegKey; // [rsp+58h] [rbp-41h] BYREF
  wchar_t v26[12]; // [rsp+60h] [rbp-39h] BYREF
  wchar_t v27[8]; // [rsp+78h] [rbp-21h] BYREF
  wchar_t v28[20]; // [rsp+88h] [rbp-11h] BYREF

  v2 = 0;
  v3 = (a1->Flags & 0x100) == 0;
  v22[0] = 0;
  v23 = 0;
  *(_DWORD *)v24 = 0;
  DeviceRegKey = 0LL;
  Handle = 0LL;
  wcscpy(v27, L"*IfType");
  wcscpy(v26, L"*MediaType");
  wcscpy(v28, L"*PhysicalMediaType");
  if ( v3 )
  {
    v6 = v27;
    v7 = v26;
    v8 = v28;
    result = IoOpenDeviceRegistryKey(a1->PhysicalDeviceObject, 2u, 0xC2000000, &DeviceRegKey);
    if ( result < 0 )
      return result;
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &Handle,
      DeviceRegKey);
  }
  else
  {
    v6 = &v27[1];
    v7 = &v26[1];
    v8 = &v28[1];
    ValueUshort = ndisIfOpenInterfaceRegistryKey((__int64)&a1->InterfaceGuid, (KRegKey *)&Handle, 1u, 1);
    if ( ValueUshort < 0 )
      goto LABEL_3;
  }
  ValueUshort = KRegKey::QueryValueUshort((KRegKey *)&Handle, v6, v22, v10);
  if ( ValueUshort < 0 )
  {
LABEL_3:
    v11 = Handle;
    if ( !Handle )
      return ValueUshort;
    goto LABEL_48;
  }
  IfType = a2->IfType;
  if ( v22[0] != IfType )
  {
    if ( a1->MajorNdisVersion >= 6u )
    {
      if ( ndisCheckDeviceNeedReinstallWithNewIfType(a1, a2) != 1 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0xD0u,
            (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
            (char)a1,
            IfType,
            v22[0]);
        goto LABEL_26;
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          0xDu,
          0xCFu,
          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
          (char)a1,
          IfType,
          v22[0]);
        IfType = a2->IfType;
      }
    }
    ValueUshort = KRegKey::SetValueUlong((KRegKey *)&Handle, v6, IfType, v13);
    if ( ValueUshort < 0 )
      goto LABEL_3;
    v2 = 1;
  }
  ValueUshort = KRegKey::QueryValueUlong((KRegKey *)&Handle, v7, &v23);
  if ( ValueUshort < 0 )
    goto LABEL_3;
  MediaType = a2->MediaType;
  if ( v23 != MediaType )
  {
    if ( a1->MajorNdisVersion <= 6u && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x3Cu) )
    {
      if ( v2 )
      {
        ValueUshort = KRegKey::SetValueUlong((KRegKey *)&Handle, v7, (unsigned int)MediaType, v15);
        if ( ValueUshort < 0 )
        {
          v11 = Handle;
          if ( !Handle )
            return ValueUshort;
          goto LABEL_48;
        }
      }
      goto LABEL_30;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = v23;
      WPP_RECORDER_SF_qDD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0xD1u,
        (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
        (char)a1,
        MediaType,
        v20);
    }
LABEL_26:
    v17 = Handle;
    if ( !Handle )
      return -1073741823;
    goto LABEL_42;
  }
LABEL_30:
  ValueUshort = KRegKey::QueryValueUlong((KRegKey *)&Handle, v8, (unsigned int *)v24);
  if ( ValueUshort < 0 )
    goto LABEL_3;
  PhysicalMediumType = a2->PhysicalMediumType;
  if ( *(_DWORD *)v24 != PhysicalMediumType )
  {
    if ( a1->MajorNdisVersion <= 6u && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x3Cu) )
    {
      if ( !v2 )
        goto LABEL_47;
      ValueUshort = KRegKey::SetValueUlong((KRegKey *)&Handle, v8, (unsigned int)PhysicalMediumType, v18);
      if ( ValueUshort < 0 )
      {
        v11 = Handle;
        if ( !Handle )
          return ValueUshort;
        goto LABEL_48;
      }
      goto LABEL_45;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = *(_DWORD *)v24;
      WPP_RECORDER_SF_qDD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0xD2u,
        (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
        (char)a1,
        PhysicalMediumType,
        v20);
    }
    v17 = Handle;
    if ( !Handle )
      return -1073741823;
LABEL_42:
    ZwClose(v17);
    return -1073741823;
  }
  if ( !v2 )
    goto LABEL_47;
LABEL_45:
  ValueUshort = KRegKey::SetValueUlong((KRegKey *)&Handle, L"NdisUpdatedNetworkInterface", 1uLL, v18);
  if ( ValueUshort < 0 )
    goto LABEL_3;
  ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
LABEL_47:
  v11 = Handle;
  if ( Handle )
LABEL_48:
    ZwClose(v11);
  return ValueUshort;
}
