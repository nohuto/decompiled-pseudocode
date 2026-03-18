/*
 * XREFs of ?MonitorGetUsb4PowerFlushEvent@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_KEVENT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x140267A18
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x140427DC4 (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     ?GetUsb4PowerFlushEvent@USB4_POWERON_WORK_QUEUE@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_KEVENT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x140270CCC (-GetUsb4PowerFlushEvent@USB4_POWERON_WORK_QUEUE@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$reso.c)
 */

_QWORD *__fastcall MonitorGetUsb4PowerFlushEvent(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // rcx

  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 3120) + 112LL);
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 96);
    if ( v5 )
    {
      USB4_POWERON_WORK_QUEUE::GetUsb4PowerFlushEvent(v5, a1);
      return a1;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a2);
    WdLogGlobalForLineNumber = 1745;
  }
  *a1 = 0LL;
  return a1;
}
