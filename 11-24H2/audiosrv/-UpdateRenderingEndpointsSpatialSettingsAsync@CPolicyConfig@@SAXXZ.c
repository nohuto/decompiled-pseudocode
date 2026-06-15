/*
 * XREFs of ?UpdateRenderingEndpointsSpatialSettingsAsync@CPolicyConfig@@SAXXZ @ 0x18006DFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800271A0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetOopCalloutSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180027FF0 (-GetOopCalloutSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void CPolicyConfig::UpdateRenderingEndpointsSpatialSettingsAsync(void)
{
  struct CSerialWorkQueue *OopCalloutSerialWorkQueue; // rax
  int v1; // eax
  int v2[2]; // [rsp+20h] [rbp-48h] BYREF
  int *v3; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  OopCalloutSerialWorkQueue = GetOopCalloutSerialWorkQueue();
  *(_QWORD *)v2 = &off_1801793A8;
  v3 = v2;
  v1 = CSerialWorkQueue::QueueWorkItem((__int64)OopCalloutSerialWorkQueue, (__int64 *)v2);
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA35,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v1,
      v2[0]);
}
