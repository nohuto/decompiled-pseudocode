/*
 * XREFs of ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x140147048
 * Callers:
 *     UpdatePointerDeviceSystemMetrics @ 0x140147008 (UpdatePointerDeviceSystemMetrics.c)
 * Callees:
 *     IsPublicPointerDevice @ 0x14012AEC4 (IsPublicPointerDevice.c)
 *     ?WriteSystemMetricsKeyToAllHives@CInputSystemMetrics@@AEBAXK@Z @ 0x14014E0D8 (-WriteSystemMetricsKeyToAllHives@CInputSystemMetrics@@AEBAXK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetHardwareType@CInputSystemMetrics@@AEBAKPEBUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1402200AC (-GetHardwareType@CInputSystemMetrics@@AEBAKPEBUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z @ 0x1402201D8 (-WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z.c)
 */

void __fastcall CInputSystemMetrics::UpdatePointerDeviceSystemMetrics(
        CInputSystemMetrics *this,
        const struct DEVICEINFO *a2)
{
  CInputSystemMetrics *v4; // rcx
  char v5; // r8
  unsigned int v6; // edi
  unsigned int v7; // esi
  __int64 v8; // rbx
  unsigned int HardwareType; // eax
  CInputSystemMetrics *v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rbx
  int v13; // ebx
  unsigned int v14; // ebx

  if ( !IsPublicPointerDevice((__int64)a2) )
    return;
  v6 = 0;
  v7 = 0;
  if ( v5 )
  {
    v8 = *((_QWORD *)a2 + 57);
    HardwareType = CInputSystemMetrics::GetHardwareType(v4, (const struct tagHID_POINTER_DEVICE_INFO *)v8);
    v7 = *((_DWORD *)this + 2);
    v10 = (CInputSystemMetrics *)*(unsigned int *)(v8 + 776);
    v6 = *((_DWORD *)this + 1) | HardwareType;
    if ( v7 <= (unsigned int)v10 )
      v7 = *(_DWORD *)(v8 + 776);
    goto LABEL_12;
  }
  v10 = *(CInputSystemMetrics **)(W32GetUserSessionState(v4) + 16840);
  v11 = **((_QWORD **)v10 + 155);
  if ( v11 )
  {
    do
    {
      if ( IsPublicPointerDevice(v11) && (*(_DWORD *)(v11 + 168) & 0x400) == 0 )
      {
        v12 = *(_QWORD *)(v11 + 456);
        v6 |= CInputSystemMetrics::GetHardwareType(v10, (const struct tagHID_POINTER_DEVICE_INFO *)v12);
        if ( v7 <= *(_DWORD *)(v12 + 776) )
          v7 = *(_DWORD *)(v12 + 776);
      }
      v11 = *(_QWORD *)(v11 + 56);
    }
    while ( v11 );
LABEL_12:
    if ( (v6 & 0xFFFFFF30) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 159LL);
    v13 = 0xFFFF;
    if ( v7 > 0xFFFF )
      goto LABEL_16;
  }
  v13 = v7;
LABEL_16:
  v14 = v6 & 0xCF | (v13 << 8);
  if ( v14 != *(_DWORD *)this )
  {
    CInputSystemMetrics::WriteSystemMetricsKeyToAllHives(v10, v14);
    *(_DWORD *)this = v14;
  }
  if ( v6 != *((_DWORD *)this + 1) )
  {
    CInputSystemMetrics::WritePointerDevicePresenceKey(v10, v6);
    *((_DWORD *)this + 1) = v6;
  }
  *((_DWORD *)this + 2) = v7;
}
