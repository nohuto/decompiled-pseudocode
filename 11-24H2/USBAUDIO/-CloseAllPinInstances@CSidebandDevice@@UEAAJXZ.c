/*
 * XREFs of ?CloseAllPinInstances@CSidebandDevice@@UEAAJXZ @ 0x14000ED30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005BFC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B318 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14000C6A8 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 */

__int64 __fastcall CSidebandDevice::CloseAllPinInstances(CSidebandDevice *this)
{
  char v2; // di
  char v3; // dl
  char v4; // r8
  __int64 v5; // rbx
  KSPIN_LOCK *v6; // rbp
  _QWORD *v7; // r14
  int v8; // edx
  int v9; // r8d
  _QWORD *v10; // rbx
  KIRQL v11; // r12
  __int64 v12; // r15
  _QWORD *v13; // rsi
  int v14; // edx
  int v15; // r8d
  int v17; // [rsp+20h] [rbp-68h]
  KIRQL v18; // [rsp+90h] [rbp+8h]
  KSPIN_LOCK *v19; // [rsp+98h] [rbp+10h]

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
  v6 = (KSPIN_LOCK *)(v5 + 96);
  v19 = (KSPIN_LOCK *)(v5 + 96);
  v7 = (_QWORD *)(v5 + 104);
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  v10 = *(_QWORD **)(v5 + 104);
  v11 = v18;
  if ( v10 != v7 )
  {
    do
    {
      v12 = v10[3];
      v13 = v10;
      v10 = (_QWORD *)*v10;
      if ( *((_BYTE *)v13 + 47) )
      {
        ObfDereferenceObject((PVOID)v13[6]);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v8) = 0;
        }
        if ( (_BYTE)v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qq(
            WPP_GLOBAL_Control->AttachedDevice,
            v8,
            v9,
            WPP_GLOBAL_Control->DeviceExtension,
            v17,
            9,
            105,
            (__int64)&WPP_309f1687d4053247ca5427ea11d9cc71_Traceguids,
            v13[2],
            v12);
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v8) = 0;
        }
        if ( (_BYTE)v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qq(
            WPP_GLOBAL_Control->AttachedDevice,
            v8,
            v9,
            WPP_GLOBAL_Control->DeviceExtension,
            v17,
            9,
            106,
            (__int64)&WPP_309f1687d4053247ca5427ea11d9cc71_Traceguids,
            v13[2],
            v12);
        }
      }
    }
    while ( v10 != v7 );
    v6 = v19;
    v11 = v18;
  }
  KeReleaseSpinLock(v6, v11);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v14) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v2 = 0;
  if ( (_BYTE)v14 || v2 )
  {
    LOBYTE(v15) = v2;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v14, v15, WPP_GLOBAL_Control->DeviceExtension);
  }
  return 0LL;
}
