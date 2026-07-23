/*
 * XREFs of PfProcessExitNotification @ 0x14091D314
 * Callers:
 *     PspExitProcess @ 0x14091EFA0 (PspExitProcess.c)
 * Callees:
 *     FsRtlAcquirePushLockExclusive @ 0x1402A2908 (FsRtlAcquirePushLockExclusive.c)
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 *     PfpLogApplicationEvent @ 0x1403BE670 (PfpLogApplicationEvent.c)
 *     VmpReleasePushLockExclusive @ 0x1404857AC (VmpReleasePushLockExclusive.c)
 *     PfSnAltProfileCleanup @ 0x14073B5B0 (PfSnAltProfileCleanup.c)
 *     PfSnAltProfileFindByProcess @ 0x14091D3BC (PfSnAltProfileFindByProcess.c)
 *     PfSnEndProcessTrace @ 0x14091D474 (PfSnEndProcessTrace.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PfProcessExitNotification(__int64 a1)
{
  _RTL_BALANCED_NODE *v2; // rax
  _RTL_BALANCED_NODE *v3; // rbx

  PfpLogApplicationEvent(a1);
  FsRtlAcquirePushLockExclusive(&qword_140E66E78);
  v2 = (_RTL_BALANCED_NODE *)PfSnAltProfileFindByProcess(a1);
  v3 = v2;
  if ( v2 )
  {
    RtlRbRemoveNode(&Parent, v2);
    RtlRbRemoveNode(&Tree, v3 + 1);
  }
  VmpReleasePushLockExclusive((volatile signed __int64 *)&qword_140E66E78);
  if ( v3 )
  {
    PfSnAltProfileCleanup((__int64)v3);
    ExFreePoolWithTag(v3, 0x66506343u);
  }
  if ( PfSnNumActiveTraces )
    PfSnEndProcessTrace(a1, 2LL, 0LL);
}
