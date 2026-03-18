/*
 * XREFs of rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem @ 0x1C019AEE4
 * Callers:
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00752D4 (rimHandleAnyPnpRemovePendingDevices.c)
 * Callees:
 *     RIMQueueAndSignalAsyncPnpWorkItem @ 0x1C0072FE8 (RIMQueueAndSignalAsyncPnpWorkItem.c)
 *     RIMAllocateAsyncPnpWorkItem @ 0x1C0074AA0 (RIMAllocateAsyncPnpWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDqd @ 0x1C019A594 (WPP_RECORDER_AND_TRACE_SF_qqqDqd.c)
 */

void __fastcall rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem(_DWORD *a1)
{
  __int64 v2; // rax
  char v3; // cl
  int v4; // [rsp+20h] [rbp-58h]
  int v5; // [rsp+28h] [rbp-50h]
  int v6; // [rsp+30h] [rbp-48h]
  int v7; // [rsp+38h] [rbp-40h]

  v2 = RIMAllocateAsyncPnpWorkItem(a1, 0LL, 0LL, 0LL, 0, 0LL, 0LL, 0LL, 0, 9);
  if ( v2 )
  {
    a1[279] = 1;
    RIMQueueAndSignalAsyncPnpWorkItem((__int64)a1, v2);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (v3 = 1, (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v3 = 0;
    }
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqqDqd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v3,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control,
        v4,
        v5,
        v6,
        v7);
  }
}
