/*
 * XREFs of ?GetNumberOfEndpointsInDevice@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEAK@Z @ 0x14000AA84
 * Callers:
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x14000A4E4 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     ?GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400148E4 (-GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005BFC (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall CSidebandDevice::GetNumberOfEndpointsInDevice(struct _KSFILTER_DESCRIPTOR *a1, unsigned int *a2)
{
  ULONG v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rdx
  char *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax

  *a2 = 0;
  v4 = 0;
  if ( a1->PinDescriptorsCount )
  {
    v5 = *(_QWORD *)GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data4;
    v6 = *(_QWORD *)&GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data1;
    do
    {
      v7 = (char *)a1->PinDescriptors + a1->PinDescriptorSize * v4;
      if ( *((_DWORD *)v7 + 17) != 4 )
      {
        v8 = **((_QWORD **)v7 + 7);
        v9 = *(_QWORD *)(v8 + 32) - v6;
        if ( !v9 )
          v9 = *(_QWORD *)(v8 + 40) - v5;
        if ( v9 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v6) = 0;
          }
          if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (LOBYTE(v5) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            LOBYTE(v5) = 0;
          }
          if ( (_BYTE)v6 || (_BYTE)v5 )
            WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v6, v5, WPP_GLOBAL_Control->DeviceExtension);
          ++*a2;
          v5 = *(_QWORD *)GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data4;
          v6 = *(_QWORD *)&GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data1;
        }
      }
      ++v4;
    }
    while ( v4 < a1->PinDescriptorsCount );
  }
  return 0LL;
}
