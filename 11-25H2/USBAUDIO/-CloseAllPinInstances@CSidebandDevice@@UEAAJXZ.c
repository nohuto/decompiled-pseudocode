/*
 * XREFs of ?CloseAllPinInstances@CSidebandDevice@@UEAAJXZ @ 0x14000F640
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005F60 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B328 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14000C584 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     Feature_Servicing_UACSidebandDeinitOptimization__private_IsEnabledDeviceUsageNoInline @ 0x140014CDC (Feature_Servicing_UACSidebandDeinitOptimization__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall CSidebandDevice::CloseAllPinInstances(CSidebandDevice *this)
{
  char v2; // bl
  char v3; // dl
  char v4; // r8
  __int64 v5; // rdi
  _QWORD *v6; // rsi
  int v7; // edx
  int v8; // r8d
  _QWORD *v9; // rdi
  void *v10; // rcx
  char v11; // dl
  KSPIN_LOCK *v12; // r14
  KIRQL v13; // al
  int v14; // edx
  int v15; // r8d
  _QWORD *v16; // rdi
  KIRQL v17; // r12
  __int64 v18; // r15
  _QWORD *v19; // rbp
  int v21; // [rsp+20h] [rbp-68h]
  KIRQL v22; // [rsp+90h] [rbp+8h]
  KSPIN_LOCK *v23; // [rsp+98h] [rbp+10h]

  v2 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v3 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v3 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v4 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v4 = 0;
  }
  if ( v3 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v3, v4, WPP_GLOBAL_Control->DeviceExtension);
  v5 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL);
  v6 = (_QWORD *)(v5 + 104);
  if ( (unsigned int)Feature_Servicing_UACSidebandDeinitOptimization__private_IsEnabledDeviceUsageNoInline() )
  {
    v12 = (KSPIN_LOCK *)(v5 + 96);
    v23 = (KSPIN_LOCK *)(v5 + 96);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
    v16 = (_QWORD *)*v6;
    v17 = v13;
    v22 = v13;
    if ( (_QWORD *)*v6 != v6 )
    {
      do
      {
        v18 = v16[3];
        v19 = v16;
        v16 = (_QWORD *)*v16;
        if ( *((_BYTE *)v19 + 47) )
        {
          ObfDereferenceObject((PVOID)v19[6]);
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v14) = 0;
          }
          if ( (_BYTE)v14 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v15) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qq(
              WPP_GLOBAL_Control->AttachedDevice,
              v14,
              v15,
              WPP_GLOBAL_Control->DeviceExtension,
              v21,
              9,
              106,
              (__int64)&WPP_592256b5268d334857c14222035d4fc6_Traceguids,
              v19[2],
              v18);
          }
        }
        else
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v14) = 0;
          }
          if ( (_BYTE)v14 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v15) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qq(
              WPP_GLOBAL_Control->AttachedDevice,
              v14,
              v15,
              WPP_GLOBAL_Control->DeviceExtension,
              v21,
              9,
              107,
              (__int64)&WPP_592256b5268d334857c14222035d4fc6_Traceguids,
              v19[2],
              v18);
          }
        }
      }
      while ( v16 != v6 );
      v12 = v23;
      v17 = v22;
    }
    KeReleaseSpinLock(v12, v17);
  }
  else
  {
    v9 = (_QWORD *)*v6;
    while ( v9 != v6 )
    {
      v10 = (void *)v9[6];
      v9 = (_QWORD *)*v9;
      ObfDereferenceObject(v10);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v11 = 0;
      }
      if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v7) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v2 = 0;
  if ( (_BYTE)v7 || v2 )
  {
    LOBYTE(v8) = v2;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v7, v8, WPP_GLOBAL_Control->DeviceExtension);
  }
  return 0LL;
}
