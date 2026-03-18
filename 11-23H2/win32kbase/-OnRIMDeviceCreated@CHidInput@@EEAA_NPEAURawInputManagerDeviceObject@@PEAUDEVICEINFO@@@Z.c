/*
 * XREFs of ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C01E2B20
 * Callers:
 *     <none>
 * Callees:
 *     HMCreateHandleForObject @ 0x1C0078820 (HMCreateHandleForObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?OnPTPDeviceArrived@PTPTelemetry@@SAXQEAUDEVICEINFO@@@Z @ 0x1C01DFC54 (-OnPTPDeviceArrived@PTPTelemetry@@SAXQEAUDEVICEINFO@@@Z.c)
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C01FC9C8 (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 */

char __fastcall CHidInput::OnRIMDeviceCreated(
        CHidInput *this,
        struct RawInputManagerDeviceObject *a2,
        struct DEVICEINFO *a3)
{
  char v4; // si
  CInputSystemMetrics *v5; // rcx
  __int64 v6; // rbx
  bool v7; // zf

  v4 = 1;
  if ( (*((_DWORD *)a2 + 68) & 0x80u) != 0 )
  {
    v6 = HMCreateHandleForObject(*((_QWORD **)a2 + 68), 0x16u);
    if ( v6 )
    {
      if ( *((_DWORD *)a3 + 2) != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 782);
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      if ( *(_QWORD *)(v6 + 784) != -1LL )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 789);
      v7 = *(_DWORD *)(v6 + 24) == 7;
      *(_QWORD *)(v6 + 784) = *(_QWORD *)a3;
      if ( v7 )
        PTPTelemetry::OnPTPDeviceArrived(a3);
      CInputSystemMetrics::UpdatePointerDeviceSystemMetrics(v5, a3, 1);
    }
    else
    {
      return 0;
    }
  }
  return v4;
}
