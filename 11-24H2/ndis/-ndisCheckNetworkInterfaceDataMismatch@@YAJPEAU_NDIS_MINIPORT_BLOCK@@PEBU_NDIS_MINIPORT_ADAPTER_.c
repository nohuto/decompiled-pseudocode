/*
 * XREFs of ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14016A990
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x140005270 (WPP_RECORDER_SF_qDD.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14009C56C (-ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAP.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x14015C360 (ndisIfOpenInterfaceRegistryKey.c)
 */

NTSTATUS __fastcall ndisCheckNetworkInterfaceDataMismatch(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a2)
{
  unsigned __int16 v3; // r15
  wchar_t *v4; // r12
  int v5; // ebx
  NTSTATUS result; // eax
  HANDLE v7; // rbx
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  __int64 v9; // rcx
  wchar_t *v10; // rax
  int v11; // r14d
  NTSTATUS v12; // edi
  unsigned __int16 IfType; // di
  int v14; // edx
  __int64 v15; // rcx
  wchar_t *v16; // rax
  wchar_t *v17; // r12
  wchar_t *v18; // rax
  __int64 v19; // rcx
  int v20; // ecx
  __int32 MediaType; // edx
  __int64 v22; // rcx
  wchar_t *v23; // rax
  wchar_t *v24; // r12
  wchar_t *v25; // rax
  __int64 v26; // rcx
  unsigned __int16 v27; // r9
  __int64 v28; // rcx
  wchar_t *v29; // rax
  const wchar_t *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // [rsp+38h] [rbp-C8h]
  char v33; // [rsp+40h] [rbp-C0h]
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  char v36[4]; // [rsp+60h] [rbp-A0h]
  int v37; // [rsp+64h] [rbp-9Ch]
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v38; // [rsp+68h] [rbp-98h]
  HANDLE DeviceRegKey; // [rsp+70h] [rbp-90h] BYREF
  wchar_t *v40; // [rsp+78h] [rbp-88h]
  wchar_t *v41; // [rsp+80h] [rbp-80h]
  __int128 KeyValueInformation; // [rsp+88h] [rbp-78h] BYREF
  int v43; // [rsp+98h] [rbp-68h]
  __int128 v44; // [rsp+A0h] [rbp-60h] BYREF
  int v45; // [rsp+B0h] [rbp-50h]
  wchar_t v46; // [rsp+B4h] [rbp-4Ch]
  __int128 v47; // [rsp+B8h] [rbp-48h] BYREF
  _OWORD v48[2]; // [rsp+C8h] [rbp-38h] BYREF
  int v49; // [rsp+E8h] [rbp-18h]
  wchar_t v50; // [rsp+ECh] [rbp-14h]

  v3 = 0;
  *(_DWORD *)v36 = 0;
  v37 = 0;
  v33 = 0;
  DeviceRegKey = 0LL;
  Handle = 0LL;
  v45 = *(_DWORD *)L"pe";
  v46 = aMediatype_0[10];
  v47 = *(_OWORD *)L"*IfType";
  v49 = *(_DWORD *)L"pe";
  v44 = *(_OWORD *)L"*MediaType";
  v50 = aPhysicalmediat_0[18];
  v38 = a2;
  v48[0] = *(_OWORD *)L"*PhysicalMediaType";
  v48[1] = *(_OWORD *)L"lMediaType";
  if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x100) != 0 )
  {
    v40 = (wchar_t *)&v44 + 1;
    v41 = (wchar_t *)v48 + 1;
    v4 = (wchar_t *)&v47 + 1;
    v5 = ndisIfOpenInterfaceRegistryKey((__int64)&a1->InterfaceGuid, (KRegKey *)&Handle, 1u, 1);
    if ( v5 < 0 )
    {
      if ( Handle )
        ZwClose(Handle);
      return v5;
    }
    v7 = Handle;
  }
  else
  {
    PhysicalDeviceObject = a1->PhysicalDeviceObject;
    v40 = (wchar_t *)&v44;
    v41 = (wchar_t *)v48;
    v4 = (wchar_t *)&v47;
    result = IoOpenDeviceRegistryKey(PhysicalDeviceObject, 2u, 0xC2000000, &DeviceRegKey);
    if ( result < 0 )
      return result;
    v7 = DeviceRegKey;
  }
  v9 = 0x7FFFLL;
  ValueName = 0LL;
  v10 = v4;
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v9;
  }
  while ( v9 );
  v11 = -1073741811;
  v12 = -1073741811;
  if ( v9 )
  {
    v12 = 0;
    ValueName.Buffer = v4;
    ValueName.Length = 2 * (0x7FFF - v9);
    ValueName.MaximumLength = ValueName.Length + 2;
  }
  if ( v12 < 0 )
    goto LABEL_112;
  LODWORD(Handle) = 0;
  v43 = 0;
  KeyValueInformation = 0LL;
  v12 = ZwQueryValueKey(v7, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, (PULONG)&Handle);
  if ( v12 >= 0 )
  {
    if ( DWORD1(KeyValueInformation) == 4 )
    {
      if ( DWORD2(KeyValueInformation) == 4 )
      {
        if ( HIDWORD(KeyValueInformation) <= 0xFFFF )
        {
          v3 = WORD6(KeyValueInformation);
          v12 = 0;
        }
        else
        {
          v12 = -1073741675;
        }
      }
      else
      {
        v12 = -1073741789;
      }
    }
    else
    {
      v12 = -1073741788;
    }
  }
  if ( v12 < 0 )
    goto LABEL_112;
  IfType = v38->IfType;
  if ( v3 != IfType )
  {
    if ( a1->MajorNdisVersion >= 6u )
    {
      if ( ndisCheckDeviceNeedReinstallWithNewIfType(a1, v38) != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0xD1u,
            (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
            (char)a1,
            IfType,
            v3);
        goto LABEL_97;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          0xDu,
          0xD0u,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (char)a1,
          IfType,
          v3);
        IfType = v38->IfType;
      }
    }
    v14 = IfType;
    ValueName = 0LL;
    v15 = 0x7FFFLL;
    v16 = v4;
    do
    {
      if ( !*v16 )
        break;
      ++v16;
      --v15;
    }
    while ( v15 );
    v12 = -1073741811;
    if ( v15 )
    {
      v12 = 0;
      ValueName.Buffer = v4;
      ValueName.Length = 2 * (0x7FFF - v15);
      ValueName.MaximumLength = ValueName.Length + 2;
    }
    if ( v12 < 0 )
      goto LABEL_112;
    LODWORD(Handle) = v14;
    v12 = ZwSetValueKey(v7, &ValueName, 0, 4u, &Handle, 4u);
    if ( v12 < 0 )
      goto LABEL_112;
    v33 = 1;
  }
  v17 = v40;
  ValueName = 0LL;
  v18 = v40;
  v19 = 0x7FFFLL;
  do
  {
    if ( !*v18 )
      break;
    ++v18;
    --v19;
  }
  while ( v19 );
  v12 = -1073741811;
  if ( v19 )
  {
    v12 = 0;
    ValueName.Buffer = v40;
    ValueName.Length = 2 * (0x7FFF - v19);
    ValueName.MaximumLength = ValueName.Length + 2;
  }
  if ( v12 < 0 )
    goto LABEL_112;
  LODWORD(Handle) = 0;
  v43 = 0;
  KeyValueInformation = 0LL;
  v12 = ZwQueryValueKey(v7, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, (PULONG)&Handle);
  if ( v12 >= 0 )
  {
    if ( DWORD1(KeyValueInformation) == 4 )
    {
      if ( DWORD2(KeyValueInformation) == 4 )
      {
        v20 = HIDWORD(KeyValueInformation);
        v12 = 0;
      }
      else
      {
        v20 = *(_DWORD *)v36;
        v12 = -1073741789;
      }
    }
    else
    {
      v20 = *(_DWORD *)v36;
      v12 = -1073741788;
    }
  }
  else
  {
    v20 = *(_DWORD *)v36;
  }
  if ( v12 < 0 )
    goto LABEL_112;
  MediaType = v38->MediaType;
  if ( v20 == MediaType )
  {
LABEL_65:
    v24 = v41;
    ValueName = 0LL;
    v25 = v41;
    v26 = 0x7FFFLL;
    do
    {
      if ( !*v25 )
        break;
      ++v25;
      --v26;
    }
    while ( v26 );
    v12 = -1073741811;
    if ( v26 )
    {
      v12 = 0;
      ValueName.Buffer = v41;
      ValueName.Length = 2 * (0x7FFF - v26);
      ValueName.MaximumLength = ValueName.Length + 2;
    }
    if ( v12 < 0 )
      goto LABEL_112;
    LODWORD(Handle) = 0;
    v43 = 0;
    KeyValueInformation = 0LL;
    v12 = ZwQueryValueKey(v7, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, (PULONG)&Handle);
    if ( v12 >= 0 )
    {
      if ( DWORD1(KeyValueInformation) == 4 )
      {
        if ( DWORD2(KeyValueInformation) == 4 )
        {
          v20 = HIDWORD(KeyValueInformation);
          v12 = 0;
        }
        else
        {
          v20 = v37;
          v12 = -1073741789;
        }
      }
      else
      {
        v20 = v37;
        v12 = -1073741788;
      }
    }
    else
    {
      v20 = v37;
    }
    if ( v12 < 0 )
      goto LABEL_112;
    MediaType = v38->PhysicalMediumType;
    if ( v20 == MediaType )
    {
      if ( !v33 )
        goto LABEL_112;
      goto LABEL_101;
    }
    if ( a1->MajorNdisVersion <= 6u && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x3Cu) )
    {
      if ( !v33 )
        goto LABEL_112;
      v28 = 0x7FFFLL;
      ValueName = 0LL;
      v29 = v24;
      do
      {
        if ( !*v29 )
          break;
        ++v29;
        --v28;
      }
      while ( v28 );
      v12 = -1073741811;
      if ( v28 )
      {
        v12 = 0;
        ValueName.Buffer = v24;
        ValueName.Length = 2 * (0x7FFF - v28);
        ValueName.MaximumLength = ValueName.Length + 2;
      }
      if ( v12 < 0 )
        goto LABEL_112;
      LODWORD(Handle) = MediaType;
      v12 = ZwSetValueKey(v7, &ValueName, 0, 4u, &Handle, 4u);
      if ( v12 < 0 )
        goto LABEL_112;
LABEL_101:
      ValueName = 0LL;
      v30 = L"NdisUpdatedNetworkInterface";
      v31 = 0x7FFFLL;
      do
      {
        if ( !*v30 )
          break;
        ++v30;
        --v31;
      }
      while ( v31 );
      if ( v31 )
      {
        v11 = 0;
        ValueName.Buffer = L"NdisUpdatedNetworkInterface";
        ValueName.Length = 2 * (0x7FFF - v31);
        ValueName.MaximumLength = ValueName.Length + 2;
      }
      if ( v11 < 0 || (LODWORD(Handle) = 1, v12 = ZwSetValueKey(v7, &ValueName, 0, 4u, &Handle, 4u), v11 = v12, v12 < 0) )
      {
        if ( v7 )
          ZwClose(v7);
        return v11;
      }
      ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
LABEL_112:
      if ( v7 )
        ZwClose(v7);
      return v12;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = 211;
      goto LABEL_96;
    }
    goto LABEL_97;
  }
  if ( a1->MajorNdisVersion <= 6u && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x3Cu) )
  {
    if ( v33 )
    {
      v22 = 0x7FFFLL;
      ValueName = 0LL;
      v23 = v17;
      do
      {
        if ( !*v23 )
          break;
        ++v23;
        --v22;
      }
      while ( v22 );
      v12 = -1073741811;
      if ( v22 )
      {
        v12 = 0;
        ValueName.Buffer = v17;
        ValueName.Length = 2 * (0x7FFF - v22);
        ValueName.MaximumLength = ValueName.Length + 2;
      }
      if ( v12 < 0 )
        goto LABEL_112;
      LODWORD(Handle) = MediaType;
      v12 = ZwSetValueKey(v7, &ValueName, 0, 4u, &Handle, 4u);
      if ( v12 < 0 )
        goto LABEL_112;
    }
    goto LABEL_65;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = 210;
LABEL_96:
    LODWORD(v32) = v20;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      v27,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      MediaType,
      v32);
  }
LABEL_97:
  if ( v7 )
    ZwClose(v7);
  return -1073741823;
}
