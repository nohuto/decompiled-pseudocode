/*
 * XREFs of ?TraverseToCaptureBridgePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1400135C0
 * Callers:
 *     ?FindConnectedCapturePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x14000F8D8 (-FindConnectedCapturePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005BFC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?AddConnectionToTravelStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@PEBUKSTOPOLOGY_CONNECTION@@@Z @ 0x140007498 (-AddConnectionToTravelStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@PEBUKSTOPOLOGY_CONNECTION@@@Z.c)
 *     _scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit @ 0x14000B858 (_scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____--_2_--scope_exit--_scope_exit.c)
 *     _scope_exit__lambda_a16b11757b8cb69a258309176305b33d____::_2_::scope_exit::_scope_exit @ 0x14000E9B4 (_scope_exit__lambda_a16b11757b8cb69a258309176305b33d____--_2_--scope_exit--_scope_exit.c)
 */

__int64 __fastcall CSidebandDevice::TraverseToCaptureBridgePin(
        struct _KSFILTER_DESCRIPTOR *a1,
        const struct KSTOPOLOGY_CONNECTION *a2,
        unsigned int *a3)
{
  unsigned int v4; // esi
  char v5; // bl
  int v6; // edx
  int v7; // edi
  int v8; // r8d
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v11; // rax
  bool v12; // zf
  char *v13; // rcx
  ULONG i; // esi
  int v15; // edx
  int v16; // r8d
  struct _LIST_ENTRY *v17; // [rsp+50h] [rbp-19h] BYREF
  struct _LIST_ENTRY v18; // [rsp+58h] [rbp-11h] BYREF
  struct _LIST_ENTRY **v19; // [rsp+68h] [rbp-1h] BYREF
  char v20; // [rsp+70h] [rbp+7h]
  struct _LIST_ENTRY *v21; // [rsp+78h] [rbp+Fh] BYREF
  char v22; // [rsp+80h] [rbp+17h]
  unsigned int v24; // [rsp+E8h] [rbp+7Fh]

  *a3 = -1;
  v18.Blink = &v18;
  v4 = 0;
  v18.Flink = &v18;
  v21 = &v18;
  v5 = 1;
  v22 = 1;
  v7 = CSidebandDevice::AddConnectionToTravelStack(&v18, a2);
  if ( v7 >= 0 )
  {
    while ( 1 )
    {
      Flink = v18.Flink;
      if ( v18.Flink == &v18 || v4 >= 0x3E8 )
        break;
      v24 = ++v4;
      if ( v18.Flink->Blink != &v18 || (v11 = v18.Flink->Flink, v18.Flink->Flink->Blink != v18.Flink) )
        __fastfail(3u);
      v18.Flink = v18.Flink->Flink;
      v11->Blink = &v18;
      v17 = Flink;
      v12 = LODWORD(Flink[1].Flink) == -1;
      v19 = &v17;
      v20 = 1;
      if ( v12 )
      {
        v13 = (char *)a1->PinDescriptors + a1->PinDescriptorSize * HIDWORD(Flink[1].Flink);
        if ( *((_DWORD *)v13 + 17) == 4 && *((_DWORD *)v13 + 16) == 1 )
        {
          v7 = 0;
          *a3 = HIDWORD(Flink[1].Flink);
          scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit((__int64)&v19);
          break;
        }
        scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit((__int64)&v19);
      }
      else
      {
        for ( i = 0; i < a1->ConnectionsCount; ++i )
        {
          if ( a1->Connections[i].ToNode == LODWORD(Flink[1].Flink) )
          {
            v7 = CSidebandDevice::AddConnectionToTravelStack(&v18, &a1->Connections[i]);
            if ( v7 < 0 )
            {
              LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
              if ( (_BYTE)v15 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_d(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v15,
                  v16,
                  WPP_GLOBAL_Control->DeviceExtension);
              }
              break;
            }
            Flink = v17;
          }
        }
        scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit((__int64)&v19);
        v4 = v24;
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    if ( v5 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = v5;
      LOBYTE(v8) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v6, v8, WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  scope_exit__lambda_a16b11757b8cb69a258309176305b33d____::_2_::scope_exit::_scope_exit((__int64)&v21);
  return (unsigned int)v7;
}
