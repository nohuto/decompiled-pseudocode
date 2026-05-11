/*
 * XREFs of ?IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z @ 0x140012E4C
 * Callers:
 *     IsSupportedSidebandTopology @ 0x14000F154 (IsSupportedSidebandTopology.c)
 * Callees:
 *     ?GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x140005B44 (-GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005F60 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1400083F8 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x14000D82C (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?FindConnectedCapturePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x140010258 (-FindConnectedCapturePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?ValidateSupportedSidebandTopologyEndpointCategory@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x1400146E0 (-ValidateSupportedSidebandTopologyEndpointCategory@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@.c)
 *     ?ValidateSupportedSidebandTopologyPathNodes@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@KK@Z @ 0x1400148FC (-ValidateSupportedSidebandTopologyPathNodes@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@KK@Z.c)
 *     Feature_Servicing_UACSidebandAllowSidetone__private_IsEnabledDeviceUsageNoInline @ 0x140014C88 (Feature_Servicing_UACSidebandAllowSidetone__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_UACSidebandRejectManyAnalogPins__private_IsEnabledDeviceUsageNoInline @ 0x140014D30 (Feature_Servicing_UACSidebandRejectManyAnalogPins__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall CSidebandDevice::IsSupportedSidebandTopology(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // edi
  struct _KSFILTER_DESCRIPTOR *v5; // rsi
  unsigned int v6; // r15d
  unsigned int v7; // r10d
  unsigned int v8; // r12d
  unsigned int v9; // r13d
  char v10; // bl
  unsigned int v11; // ebp
  unsigned int v12; // r14d
  const KSPIN_DESCRIPTOR_EX *v13; // rdx
  char *v14; // rbp
  unsigned __int64 *v15; // rax
  int v16; // eax
  unsigned __int64 *v17; // rax
  char v18; // al
  ULONG *v19; // r8
  int v20; // eax
  int ConnectedCapturePin; // eax
  PDEVICE_OBJECT v22; // rcx
  void *v23; // rdx
  void *v24; // rdx
  int v25; // r8d
  PDEVICE_OBJECT v26; // r10
  PVOID DeviceExtension; // r9
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int v32; // ecx
  int v34; // [rsp+20h] [rbp-98h]
  unsigned int v35; // [rsp+60h] [rbp-58h]
  unsigned int v36[21]; // [rsp+64h] [rbp-54h] BYREF
  unsigned int v37; // [rsp+C0h] [rbp+8h]
  unsigned int v38; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v39; // [rsp+D0h] [rbp+18h] BYREF
  unsigned int v40; // [rsp+D8h] [rbp+20h]

  v4 = -1;
  v5 = (struct _KSFILTER_DESCRIPTOR *)a1;
  v6 = 0;
  v7 = 0;
  v37 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 1;
  v35 = -1;
  v11 = -1;
  v38 = -1;
  v12 = 0;
  v39 = -1;
  v36[0] = -1;
  v40 = 0;
  if ( !*(_DWORD *)(a1 + 32) )
    goto LABEL_87;
  v13 = *(const KSPIN_DESCRIPTOR_EX **)GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data4;
  a4 = *(_QWORD *)&GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data1;
  do
  {
    v14 = (char *)v5->PinDescriptors + v5->PinDescriptorSize * v12;
    if ( *((_DWORD *)v14 + 17) != 4 )
    {
      v15 = (unsigned __int64 *)*((_QWORD *)v14 + 7);
      a1 = *v15;
      if ( *(_QWORD *)(*v15 + 32) != a4 || *(const KSPIN_DESCRIPTOR_EX **)(a1 + 40) != v13 )
      {
        a1 = (unsigned __int64)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v13) = 0;
        }
        if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(a3) = 0;
        }
        if ( (_BYTE)v13 || (_BYTE)a3 )
        {
          WPP_RECORDER_AND_TRACE_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v13,
            a3,
            WPP_GLOBAL_Control->DeviceExtension);
          v7 = v37;
        }
        v16 = *((_DWORD *)v14 + 16);
        if ( v16 == 1 )
        {
          ++v6;
          v4 = v12;
        }
        else
        {
          a3 = 2LL;
          if ( v16 == 2 )
          {
            v35 = v12;
            v37 = v7 + 1;
          }
        }
      }
    }
    if ( !(unsigned int)Feature_Servicing_UACSidebandRejectManyAnalogPins__private_IsEnabledDeviceUsageNoInline(
                          a1,
                          v13,
                          a3,
                          a4)
      || *((_DWORD *)v14 + 17) != 4 )
    {
      goto LABEL_41;
    }
    v17 = (unsigned __int64 *)*((_QWORD *)v14 + 7);
    a4 = *(_QWORD *)&GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data1;
    v13 = *(const KSPIN_DESCRIPTOR_EX **)GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data4;
    a1 = *v17;
    if ( *(_QWORD *)(*v17 + 32) != *(_QWORD *)&GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data1
      || *(_QWORD *)(a1 + 40) != *(_QWORD *)GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data4 )
    {
      goto LABEL_42;
    }
    a1 = (unsigned __int64)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v18 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v18 = 0;
    }
    v19 = &WPP_RECORDER_INITIALIZED;
    if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (LOBYTE(v19) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v19) = 0;
    }
    if ( v18 || (_BYTE)v19 )
    {
      LOBYTE(v13) = v18;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v13,
        (_DWORD)v19,
        WPP_GLOBAL_Control->DeviceExtension);
      v13 = *(const KSPIN_DESCRIPTOR_EX **)GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data4;
      a4 = *(_QWORD *)&GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data1;
    }
    v20 = *((_DWORD *)v14 + 16);
    a3 = 2LL;
    if ( v20 == 1 )
    {
      ++v9;
      goto LABEL_43;
    }
    if ( v20 == 2 )
    {
      ++v8;
      if ( (unsigned int)Feature_Servicing_UACSidebandAllowSidetone__private_IsEnabledDeviceUsageNoInline(a1, v13, 2LL) )
      {
        ConnectedCapturePin = CSidebandDevice::FindConnectedCapturePin(v5, v12, v36);
        a1 = v40;
        if ( ConnectedCapturePin >= 0 )
          a1 = 1LL;
        v40 = a1;
      }
LABEL_41:
      a4 = *(_QWORD *)&GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data1;
      v13 = *(const KSPIN_DESCRIPTOR_EX **)GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data4;
LABEL_42:
      a3 = 2LL;
    }
LABEL_43:
    v7 = v37;
    ++v12;
  }
  while ( v12 < v5->PinDescriptorsCount );
  if ( v6 > 1 )
  {
    v22 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v23 = &WPP_592256b5268d334857c14222035d4fc6_Traceguids;
      goto LABEL_71;
    }
    return 0LL;
  }
  if ( v6 == 1 )
  {
    if ( (int)CSidebandDevice::GetBridgePinForDataPin(v5, (const KSTOPOLOGY_CONNECTION *)v4, &v38) < 0 )
    {
      v26 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (v25 = 2, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v10 = 0;
      }
      LOBYTE(v25) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      goto LABEL_80;
    }
    if ( !(unsigned int)CSidebandDevice::ValidateSupportedSidebandTopologyEndpointCategory(v5, v38)
      || !(unsigned int)CSidebandDevice::ValidateSupportedSidebandTopologyPathNodes(v5, v4, v38) )
    {
      return 0LL;
    }
  }
  a2 = v37;
  if ( v37 <= 1 )
  {
    if ( v37 == 1 )
    {
      if ( (int)CSidebandDevice::GetBridgePinForDataPin(v5, (const KSTOPOLOGY_CONNECTION *)v35, &v39) < 0 )
      {
        v26 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (v25 = 2, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          v10 = 0;
        }
        LOBYTE(v25) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0LL;
LABEL_80:
        DeviceExtension = v26->DeviceExtension;
        AttachedDevice = v26->AttachedDevice;
LABEL_81:
        LOBYTE(v24) = v10;
        WPP_RECORDER_AND_TRACE_SF_dd((_DWORD)AttachedDevice, (_DWORD)v24, v25, (_DWORD)DeviceExtension);
        return 0LL;
      }
      v11 = v39;
      if ( !(unsigned int)CSidebandDevice::ValidateSupportedSidebandTopologyEndpointCategory(v5, v39)
        || !(unsigned int)CSidebandDevice::ValidateSupportedSidebandTopologyPathNodes(v5, v35, v11) )
      {
        return 0LL;
      }
    }
    else
    {
      v11 = v39;
    }
    v4 = v36[0];
LABEL_87:
    if ( (unsigned int)Feature_Servicing_UACSidebandRejectManyAnalogPins__private_IsEnabledDeviceUsageNoInline(
                         a1,
                         a2,
                         a3,
                         a4) )
    {
      if ( (unsigned int)Feature_Servicing_UACSidebandAllowSidetone__private_IsEnabledDeviceUsageNoInline(v30, v29, v31) )
      {
        v32 = 1;
        if ( v40 && v4 != v11 )
          v32 = 2;
        if ( v8 > 1 || v9 > v32 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v10 = 0;
          }
          if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_ddd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v10,
              *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v34,
              9u,
              0x40u,
              (__int64)&WPP_592256b5268d334857c14222035d4fc6_Traceguids);
          return 0LL;
        }
      }
      else if ( v8 > 1 || v9 > 1 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (v25 = 2, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          v10 = 0;
        }
        LOBYTE(v25) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0LL;
        DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
        v24 = &WPP_592256b5268d334857c14222035d4fc6_Traceguids;
        AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
        goto LABEL_81;
      }
    }
    return 1LL;
  }
  v22 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LODWORD(a3) = 2, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    v10 = 0;
  }
  LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v23 = &WPP_592256b5268d334857c14222035d4fc6_Traceguids;
LABEL_71:
    LOBYTE(v23) = v10;
    WPP_RECORDER_AND_TRACE_SF_d(v22->AttachedDevice, (_DWORD)v23, a3, v22->DeviceExtension);
  }
  return 0LL;
}
