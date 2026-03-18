/*
 * XREFs of rimQueueUpdateInputGlolbalsAsyncWorkItem @ 0x1C01A101C
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C019F804 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMQueueAndSignalAsyncPnpWorkItem @ 0x1C0072FE8 (RIMQueueAndSignalAsyncPnpWorkItem.c)
 *     RIMAllocateAsyncPnpWorkItem @ 0x1C0074AA0 (RIMAllocateAsyncPnpWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1C018E248 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

void __fastcall rimQueueUpdateInputGlolbalsAsyncWorkItem(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ecx
  char v5; // dl
  int v6; // [rsp+28h] [rbp-50h]

  v3 = RIMAllocateAsyncPnpWorkItem(a1, *(_QWORD **)(a2 + 32), 0LL, 0LL, 0, 0LL, 0LL, 0LL, 0, 8);
  if ( v3 )
  {
    v4 = a1[277] + 1;
    a1[277] = v4;
    if ( v4 > a1[278] )
      a1[278] = v4;
    RIMQueueAndSignalAsyncPnpWorkItem((__int64)a1, v3);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (v5 = 1, (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v5,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        60LL,
        2u,
        v6,
        0x3Cu,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids);
  }
}
