/*
 * XREFs of ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x14006E990
 * Callers:
 *     ?ndisWdmPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x14006E970 (-ndisWdmPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     NdisWdfPnPAddDevice @ 0x140094D20 (NdisWdfPnPAddDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1400657A0 (WPP_RECORDER_SF__guid_.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x14006BFB0 (McTemplateK0z_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1401351B0 (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ?ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z @ 0x140135680 (-ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ndisMiniBlockFromDriverObject @ 0x140135950 (ndisMiniBlockFromDriverObject.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x140135F90 (-QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x14015BC80 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ?ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z @ 0x140160990 (-ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x140160A20 (-ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x140160BF0 (-QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z.c)
 *     ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1401655B0 (-ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$defaul.c)
 *     ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1401673F0 (-ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x140167430 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 *     ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x140169500 (-ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1401771E0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 */

__int64 __fastcall ndisPnPAddDevice(struct _DRIVER_OBJECT *a1, struct _DEVICE_OBJECT *a2, void *a3, void **a4)
{
  _DEVICE_OBJECT *v6; // r12
  NTSTATUS updated; // edi
  int v9; // edx
  PVOID v11; // rbx
  PVOID v12; // rcx
  PVOID v13; // rcx
  PVOID v14; // rcx
  HANDLE v15; // rcx
  int ValueBoolean; // eax
  unsigned __int8 v17; // cl
  PVOID v18; // rcx
  PVOID v19; // rcx
  PVOID v20; // rcx
  PVOID v21; // rcx
  PVOID v22; // rcx
  PVOID v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  NTSTATUS v26; // eax
  PVOID v27; // rcx
  PVOID v28; // rcx
  PVOID v29; // rcx
  LOGICAL CheckStamp[2]; // [rsp+30h] [rbp-99h]
  char CheckStampa; // [rsp+30h] [rbp-99h]
  bool v32; // [rsp+40h] [rbp-89h] BYREF
  bool v33; // [rsp+41h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-81h] BYREF
  PVOID P; // [rsp+50h] [rbp-79h] BYREF
  HANDLE DeviceRegKey; // [rsp+58h] [rbp-71h] BYREF
  GUID Guid; // [rsp+60h] [rbp-69h] BYREF
  union _NET_LUID_LH v38; // [rsp+70h] [rbp-59h] BYREF
  HANDLE v39; // [rsp+78h] [rbp-51h]
  _DEVICE_OBJECT *v40; // [rsp+80h] [rbp-49h]
  char v41; // [rsp+88h] [rbp-41h]
  int v42; // [rsp+8Ch] [rbp-3Dh]
  PVOID v43[2]; // [rsp+90h] [rbp-39h] BYREF
  PVOID v44; // [rsp+A0h] [rbp-29h]
  int v45; // [rsp+A8h] [rbp-21h]
  void *v46; // [rsp+B0h] [rbp-19h]
  unsigned __int8 v47[8]; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v48; // [rsp+C0h] [rbp-9h]

  DeviceRegKey = 0LL;
  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    CheckStampa = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      61,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)a1,
      CheckStampa);
  }
  updated = IoOpenDeviceRegistryKey(v6, 2u, 0xC2000000, &DeviceRegKey);
  if ( updated < 0 )
    goto LABEL_85;
  Handle = DeviceRegKey;
  v32 = 0;
  v33 = 0;
  P = 0LL;
  updated = ndisCheckIfDeviceNeedsInstallation(&Handle, &P, &v32);
  if ( updated < 0 )
    goto LABEL_5;
  if ( !v32 )
  {
    updated = ndisCheckIfDeviceNeedsPseudoMigration((KRegKey *)&Handle);
    if ( updated < 0 )
      goto LABEL_5;
    if ( v32 )
      goto LABEL_16;
    updated = ndisCheckIfDeviceNeedsFullMigration(&Handle, &P, &v32);
    if ( updated < 0 )
      goto LABEL_5;
    if ( v32 )
      goto LABEL_16;
    updated = ndisCheckIfDeviceNeedsUpdates((KRegKey *)&Handle, &v32);
    if ( updated < 0 )
    {
LABEL_5:
      if ( P )
        ExFreePoolWithTag(P, 0x7274534Bu);
      if ( Handle )
        ZwClose(Handle);
      goto LABEL_85;
    }
    if ( !v32 )
      goto LABEL_25;
  }
LABEL_16:
  ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      13,
      62,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids);
  }
  updated = ndisCheckAlwaysStartFlag((KRegKey *)&Handle, &v33);
  if ( updated < 0 )
    goto LABEL_5;
  if ( v33 )
  {
LABEL_25:
    v11 = P;
    v39 = 0LL;
    v38.Value = 0LL;
    v40 = 0LL;
    v41 = 0;
    v42 = 0;
    *(_OWORD *)v43 = 0LL;
    v44 = 0LL;
    v45 = 0;
    *(_WORD *)v47 = 0;
    v48 = 0LL;
    v46 = a3;
    updated = RtlGUIDFromString((PCUNICODE_STRING)P, &Guid);
    if ( updated >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xDu,
          0x3Fu,
          (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
          (__int64)&Guid);
      if ( !a3 )
        goto LABEL_56;
      ValueBoolean = KRegKey::QueryValueBoolean((KRegKey *)&Handle, L"HardwareLoopback", v47, FailIfNotFound);
      v17 = v47[0];
      if ( ValueBoolean < 0 )
        v17 = 0;
      v47[0] = v17;
      updated = ndisWdfUpdateAddDeviceParameters(
                  (struct KRegKey *)&Handle,
                  (struct NDIS_MINIPORT_CREATION_CONFIG *)&Guid);
      if ( updated < 0 )
      {
        v18 = v44;
        v44 = 0LL;
        if ( v18 )
          ExFreePoolWithTag(v18, 0x7274534Bu);
        v19 = v43[1];
        v43[1] = 0LL;
        if ( v19 )
          ExFreePoolWithTag(v19, 0x7274534Bu);
        v20 = v43[0];
        v43[0] = 0LL;
        if ( v20 )
          ExFreePoolWithTag(v20, 0x7274534Bu);
        if ( v39 )
          ZwClose(v39);
        if ( v11 )
          ExFreePoolWithTag(v11, 0x7274534Bu);
        v15 = Handle;
        if ( !Handle )
          goto LABEL_85;
      }
      else
      {
LABEL_56:
        if ( !ndisIfReadInterfaceAddDeviceParameters((struct NDIS_MINIPORT_CREATION_CONFIG *)&Guid, v6) )
        {
          LODWORD(P) = 0;
          KRegKey::QueryValueUlong((KRegKey *)&Handle, L"IMMiniport", (unsigned int *)&P);
          KRegKey::QueryValueString(&Handle, L"ComponentID", v43);
          if ( !a3 )
            ndisTemporarilyScribbleNetLuidIndex((KRegKey *)&Handle, &v38);
          if ( Microsoft_Windows_NDISEnableBits < 0 )
            McTemplateK0z_EtwWriteTransfer(v24, &AddPnPDevice, v25, *((const wchar_t **)v43[1] + 1));
          v48 = ndisMiniBlockFromDriverObject(a1);
          v40 = v6;
          if ( v39 )
            ZwClose(v39);
          v39 = Handle;
          v26 = ndisAddDevice(&Guid, a4);
          v27 = v44;
          updated = v26;
          v44 = 0LL;
          if ( v27 )
            ExFreePoolWithTag(v27, 0x7274534Bu);
          v28 = v43[1];
          v43[1] = 0LL;
          if ( v28 )
            ExFreePoolWithTag(v28, 0x7274534Bu);
          v29 = v43[0];
          v43[0] = 0LL;
          if ( v29 )
            ExFreePoolWithTag(v29, 0x7274534Bu);
          if ( v39 )
            ZwClose(v39);
          if ( v11 )
            ExFreePoolWithTag(v11, 0x7274534Bu);
          goto LABEL_85;
        }
        v21 = v44;
        updated = -1073741823;
        v44 = 0LL;
        if ( v21 )
          ExFreePoolWithTag(v21, 0x7274534Bu);
        v22 = v43[1];
        v43[1] = 0LL;
        if ( v22 )
          ExFreePoolWithTag(v22, 0x7274534Bu);
        v23 = v43[0];
        v43[0] = 0LL;
        if ( v23 )
          ExFreePoolWithTag(v23, 0x7274534Bu);
        if ( v39 )
          ZwClose(v39);
        if ( v11 )
          ExFreePoolWithTag(v11, 0x7274534Bu);
        v15 = Handle;
        if ( !Handle )
        {
LABEL_85:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            CheckStamp[0] = updated;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xDu,
              0x40u,
              (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
              (char)v6,
              *(_QWORD *)CheckStamp);
          }
          return (unsigned int)updated;
        }
      }
    }
    else
    {
      v12 = v44;
      v44 = 0LL;
      if ( v12 )
        ExFreePoolWithTag(v12, 0x7274534Bu);
      v13 = v43[1];
      v43[1] = 0LL;
      if ( v13 )
        ExFreePoolWithTag(v13, 0x7274534Bu);
      v14 = v43[0];
      v43[0] = 0LL;
      if ( v14 )
        ExFreePoolWithTag(v14, 0x7274534Bu);
      if ( v39 )
        ZwClose(v39);
      if ( v11 )
        ExFreePoolWithTag(v11, 0x7274534Bu);
      v15 = Handle;
      if ( !Handle )
        goto LABEL_85;
    }
    ZwClose(v15);
    goto LABEL_85;
  }
  if ( P )
    ExFreePoolWithTag(P, 0x7274534Bu);
  if ( Handle )
    ZwClose(Handle);
  return 3221226645LL;
}
