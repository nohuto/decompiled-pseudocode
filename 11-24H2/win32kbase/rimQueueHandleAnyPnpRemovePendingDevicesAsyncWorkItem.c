/*
 * XREFs of rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem @ 0x1401EA080
 * Callers:
 *     rimHandleAnyPnpRemovePendingDevices @ 0x14005CA04 (rimHandleAnyPnpRemovePendingDevices.c)
 * Callees:
 *     RIMQueueAndSignalAsyncWorkItem @ 0x1401978F8 (RIMQueueAndSignalAsyncWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDqd @ 0x1401E9584 (WPP_RECORDER_AND_TRACE_SF_qqqDqd.c)
 *     RIMAllocateAsyncInputWorkItem @ 0x1401EC21C (RIMAllocateAsyncInputWorkItem.c)
 */

void __fastcall rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem(struct RawInputManagerObject *a1)
{
  struct RIMAsyncWorkItem *v2; // rax
  char v3; // bp
  char v4; // r15
  __int64 UserSessionState; // rax
  int v6; // [rsp+20h] [rbp-68h]
  int v7; // [rsp+28h] [rbp-60h]
  int v8; // [rsp+30h] [rbp-58h]
  int v9; // [rsp+38h] [rbp-50h]

  v2 = (struct RIMAsyncWorkItem *)RIMAllocateAsyncInputWorkItem(a1, 0LL, 0LL, 0LL, 0, 6);
  if ( v2 )
  {
    *((_DWORD *)a1 + 279) = 1;
    RIMQueueAndSignalAsyncWorkItem(a1, v2);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v3 = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v3 = 0;
    }
    v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_qqqDqd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v3,
        v4,
        *(_QWORD *)(UserSessionState + 19392),
        v6,
        v7,
        v8,
        v9);
    }
  }
}
