/*
 * XREFs of ?IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z @ 0x1400124CC
 * Callers:
 *     IsSupportedSidebandTopology @ 0x14000E844 (IsSupportedSidebandTopology.c)
 * Callees:
 *     ?GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1400057E0 (-GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005BFC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x140007EA8 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x14000CF6C (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?FindConnectedCapturePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x14000F8D8 (-FindConnectedCapturePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?ValidateSupportedSidebandTopologyEndpointCategory@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x140013CB0 (-ValidateSupportedSidebandTopologyEndpointCategory@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@.c)
 *     ?ValidateSupportedSidebandTopologyPathNodes@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@KK@Z @ 0x140013ECC (-ValidateSupportedSidebandTopologyPathNodes@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@KK@Z.c)
 */

__int64 __fastcall CSidebandDevice::IsSupportedSidebandTopology(struct _KSFILTER_DESCRIPTOR *a1)
{
  unsigned int v1; // edi
  unsigned int v2; // edx
  unsigned int v4; // r15d
  char v5; // bl
  int v6; // eax
  unsigned int v7; // r13d
  unsigned int v8; // r9d
  unsigned int v9; // r12d
  ULONG v10; // ebp
  __int64 v11; // r9
  unsigned int v12; // r12d
  __int64 v13; // r10
  char *v14; // r14
  __int64 v15; // rax
  ULONG *v16; // r8
  int v17; // eax
  __int64 v18; // rax
  ULONG *v19; // r8
  int v20; // eax
  PDEVICE_OBJECT *v21; // r8
  PDEVICE_OBJECT v22; // rcx
  void *v23; // rdx
  int ConnectedCapturePin; // eax
  int v25; // ecx
  int v26; // r8d
  PDEVICE_OBJECT v27; // r10
  PDEVICE_OBJECT *v28; // rdx
  unsigned int v29; // ecx
  int v31; // [rsp+20h] [rbp-98h]
  int v32; // [rsp+60h] [rbp-58h]
  unsigned int v33; // [rsp+64h] [rbp-54h]
  unsigned int v34[20]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v35; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v36; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v37; // [rsp+D0h] [rbp+18h]
  unsigned int v38; // [rsp+D8h] [rbp+20h]

  v1 = -1;
  v2 = 0;
  v35 = -1;
  v4 = 0;
  v36 = -1;
  v5 = 1;
  v34[0] = -1;
  v6 = 0;
  v7 = 0;
  v32 = 0;
  v8 = 0;
  v37 = 0;
  v9 = -1;
  v33 = -1;
  v10 = 0;
  if ( a1->PinDescriptorsCount )
  {
    v11 = *(_QWORD *)GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data4;
    v12 = 0;
    v13 = *(_QWORD *)&GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data1;
    do
    {
      v14 = (char *)a1->PinDescriptors + a1->PinDescriptorSize * v10;
      if ( *((_DWORD *)v14 + 17) == 4 )
        goto LABEL_22;
      v15 = *((_QWORD *)v14 + 7);
      if ( *(_QWORD *)(*(_QWORD *)v15 + 32LL) != v13 || *(_QWORD *)(*(_QWORD *)v15 + 40LL) != v11 )
      {
        LOBYTE(v2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
        v16 = &WPP_RECORDER_INITIALIZED;
        if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (LOBYTE(v16) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v16) = 0;
        }
        if ( (_BYTE)v2 || (_BYTE)v16 )
        {
          WPP_RECORDER_AND_TRACE_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            v2,
            (_DWORD)v16,
            WPP_GLOBAL_Control->DeviceExtension);
          v11 = *(_QWORD *)GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data4;
          v13 = *(_QWORD *)&GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data1;
        }
        v17 = *((_DWORD *)v14 + 16);
        if ( v17 == 1 )
        {
          ++v4;
          v1 = v10;
        }
        else if ( v17 == 2 )
        {
          ++v7;
          v33 = v10;
        }
      }
      if ( *((_DWORD *)v14 + 17) == 4 )
      {
LABEL_22:
        v18 = *((_QWORD *)v14 + 7);
        if ( *(_QWORD *)(*(_QWORD *)v18 + 32LL) == v13 && *(_QWORD *)(*(_QWORD *)v18 + 40LL) == v11 )
        {
          LOBYTE(v2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
          v19 = &WPP_RECORDER_INITIALIZED;
          if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (LOBYTE(v19) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            LOBYTE(v19) = 0;
          }
          if ( (_BYTE)v2 || (_BYTE)v19 )
          {
            WPP_RECORDER_AND_TRACE_SF_d(
              WPP_GLOBAL_Control->AttachedDevice,
              v2,
              (_DWORD)v19,
              WPP_GLOBAL_Control->DeviceExtension);
            v11 = *(_QWORD *)GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data4;
            v13 = *(_QWORD *)&GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data1;
          }
          v20 = *((_DWORD *)v14 + 16);
          if ( v20 == 1 )
          {
            ++v37;
          }
          else if ( v20 == 2 )
          {
            ++v12;
            ConnectedCapturePin = CSidebandDevice::FindConnectedCapturePin(a1, v10, v34);
            v25 = v32;
            v11 = *(_QWORD *)GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data4;
            v13 = *(_QWORD *)&GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data1;
            if ( ConnectedCapturePin >= 0 )
              v25 = 1;
            v32 = v25;
          }
        }
      }
      ++v10;
      v21 = &WPP_GLOBAL_Control;
    }
    while ( v10 < a1->PinDescriptorsCount );
    v38 = v12;
    v9 = v36;
    if ( v4 > 1 )
    {
      v22 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v5 = 0;
      }
      LOBYTE(v21) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v23 = &WPP_309f1687d4053247ca5427ea11d9cc71_Traceguids;
      goto LABEL_69;
    }
    if ( v4 == 1 )
    {
      if ( (int)CSidebandDevice::GetBridgePinForDataPin(a1, (const KSTOPOLOGY_CONNECTION *)v1, &v35) < 0 )
      {
        v27 = WPP_GLOBAL_Control;
        v28 = &WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v5 = 0;
        }
        LOBYTE(v26) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v5 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0LL;
        goto LABEL_78;
      }
      if ( !(unsigned int)CSidebandDevice::ValidateSupportedSidebandTopologyEndpointCategory(a1, v35)
        || !(unsigned int)CSidebandDevice::ValidateSupportedSidebandTopologyPathNodes(a1, v1, v35) )
      {
        return 0LL;
      }
    }
    if ( v7 > 1 )
    {
      v22 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v5 = 0;
      }
      LOBYTE(v21) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v23 = &WPP_309f1687d4053247ca5427ea11d9cc71_Traceguids;
LABEL_69:
      LOBYTE(v23) = v5;
      WPP_RECORDER_AND_TRACE_SF_d(v22->AttachedDevice, (_DWORD)v23, (_DWORD)v21, v22->DeviceExtension);
      return 0LL;
    }
    if ( v7 == 1 )
    {
      if ( (int)CSidebandDevice::GetBridgePinForDataPin(a1, (const KSTOPOLOGY_CONNECTION *)v33, &v36) < 0 )
      {
        v27 = WPP_GLOBAL_Control;
        v28 = &WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v5 = 0;
        }
        LOBYTE(v26) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v5 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0LL;
LABEL_78:
        LOBYTE(v28) = v5;
        WPP_RECORDER_AND_TRACE_SF_dd(v27->AttachedDevice, (_DWORD)v28, v26, v27->DeviceExtension);
        return 0LL;
      }
      v9 = v36;
      if ( !(unsigned int)CSidebandDevice::ValidateSupportedSidebandTopologyEndpointCategory(a1, v36)
        || !(unsigned int)CSidebandDevice::ValidateSupportedSidebandTopologyPathNodes(a1, v33, v9) )
      {
        return 0LL;
      }
    }
    v1 = v34[0];
    v2 = v37;
    v8 = v38;
    v6 = v32;
  }
  v29 = 1;
  if ( v6 && v1 != v9 )
    v29 = 2;
  if ( v8 <= 1 && v2 <= v29 )
    return 1LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v5 = 0;
  }
  if ( v5 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_ddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v5,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v31,
      9u,
      0x40u,
      (__int64)&WPP_309f1687d4053247ca5427ea11d9cc71_Traceguids);
  return 0LL;
}
