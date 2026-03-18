/*
 * XREFs of ?_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ @ 0x140274838
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x140369FB0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline @ 0x14007DE18 (Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Initialize@USB4_POWERON_WORK_QUEUE@@QEAAJXZ @ 0x140277FF8 (-Initialize@USB4_POWERON_WORK_QUEUE@@QEAAJXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_InitializeMonitorManager(
        USB4_POWERON_WORK_QUEUE **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  USB4_POWERON_WORK_QUEUE *v5; // rcx
  __int64 result; // rax
  int v7; // eax
  unsigned int v8; // edi
  int v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  WdLogGlobalForLineNumber = 322;
  if ( g_IsInternalRelease || (*(_DWORD *)(*((_QWORD *)this[3] + 2) + 444LL) & 0x200) != 0 )
  {
    v9 = 0;
    v10 = 0;
    qword_14015EF88 = (__int64)&v9;
    qword_14015EF98 = (__int64)&v9;
    qword_14015EFC0 = (__int64)&v10;
    qword_14015EFD0 = (__int64)&v10;
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &unk_14015EF70, 0LL, 0LL);
    if ( v9 )
      *((_BYTE *)this + 92) = 0;
    if ( v10 )
      *((_BYTE *)this + 19) = 0;
  }
  if ( !(unsigned int)Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_12;
  v5 = this[12];
  if ( !v5 )
  {
    WdLogSingleEntry0(2LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 376;
    return result;
  }
  v7 = USB4_POWERON_WORK_QUEUE::Initialize(v5);
  v8 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry1(2LL, v7);
    result = v8;
    WdLogGlobalForLineNumber = 382;
  }
  else
  {
LABEL_12:
    *((_BYTE *)this + 20) = 1;
    return 0LL;
  }
  return result;
}
