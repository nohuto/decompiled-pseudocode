/*
 * XREFs of IsSidebandSupported @ 0x14002F724
 * Callers:
 *     DeviceStart @ 0x14002E730 (DeviceStart.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005F60 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B328 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsSupportedSidebandTopology @ 0x14000F154 (IsSupportedSidebandTopology.c)
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 *     IsClassDriverOnly @ 0x14002F474 (IsClassDriverOnly.c)
 */

__int64 __fastcall IsSidebandSupported(__int64 a1, BOOL *a2)
{
  __int64 v2; // r14
  __int64 v4; // rax
  _DWORD *v6; // r15
  int v7; // edx
  int v8; // r8d
  unsigned int v9; // r12d
  char v10; // bl
  int v11; // edi
  int v12; // eax
  int v13; // edx
  int v14; // r8d
  int v15; // ebp
  BOOL v16; // eax
  void *v17; // rdx

  v2 = *(_QWORD *)(a1 + 16);
  v4 = pExtBusDeviceDispatchTable;
  *a2 = 0;
  v6 = (_DWORD *)(v2 + 868);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(v4 + 40))(a1, v2 + 868);
  v10 = 1;
  LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v7, v8, WPP_GLOBAL_Control->DeviceExtension);
  }
  v11 = IsClassDriverOnly(a1);
  v12 = IsSupportedSidebandTopology((struct _KSFILTER_DESCRIPTOR *)(v2 + 128));
  v15 = v12;
  v16 = (unsigned int)(*v6 - 1) <= 1 && !*(_DWORD *)(v2 + 1008) && v11 && v12;
  *a2 = v16;
  if ( !v16 )
  {
    if ( *(_DWORD *)(v2 + 1008) )
    {
      LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v13, v14, WPP_GLOBAL_Control->DeviceExtension);
      }
    }
    if ( !v11 )
    {
      LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v13, v14, WPP_GLOBAL_Control->DeviceExtension);
      }
    }
    if ( !v15 )
    {
      LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v13, v14, WPP_GLOBAL_Control->DeviceExtension);
      }
    }
    if ( !*v6 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v10 = 0;
      }
      if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v17 = &WPP_2bfdcd6a21f130676fcfbe1f4e3a8945_Traceguids;
        LOBYTE(v17) = v10;
        LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v17,
          v14,
          WPP_GLOBAL_Control->DeviceExtension);
      }
    }
    *(_DWORD *)(v2 + 868) = 0;
  }
  return v9;
}
