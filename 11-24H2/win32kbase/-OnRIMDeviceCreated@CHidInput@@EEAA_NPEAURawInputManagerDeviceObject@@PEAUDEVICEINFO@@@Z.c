/*
 * XREFs of ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x14020F4F0
 * Callers:
 *     <none>
 * Callees:
 *     HMCreateHandleForObject @ 0x140062FB0 (HMCreateHandleForObject.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x140147008 (UpdatePointerDeviceSystemMetrics.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?OnPTPDeviceArrived@PTPTelemetry@@SAXQEAUDEVICEINFO@@@Z @ 0x14020E0D4 (-OnPTPDeviceArrived@PTPTelemetry@@SAXQEAUDEVICEINFO@@@Z.c)
 */

char __fastcall CHidInput::OnRIMDeviceCreated(
        CHidInput *this,
        struct RawInputManagerDeviceObject *a2,
        struct DEVICEINFO *a3)
{
  char v4; // si
  __int64 v5; // rbx
  bool v6; // zf

  v4 = 1;
  if ( (*((_DWORD *)a2 + 64) & 0x80u) != 0 )
  {
    v5 = HMCreateHandleForObject(*((_QWORD **)a2 + 66), 0x16u);
    if ( v5 )
    {
      if ( *((_DWORD *)a3 + 2) != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 817);
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      if ( *(_QWORD *)(v5 + 792) != -1LL )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 824);
      v6 = *(_DWORD *)(v5 + 24) == 7;
      *(_QWORD *)(v5 + 792) = *(_QWORD *)a3;
      if ( v6 )
        PTPTelemetry::OnPTPDeviceArrived(a3);
      UpdatePointerDeviceSystemMetrics(a3, 1);
    }
    else
    {
      return 0;
    }
  }
  return v4;
}
