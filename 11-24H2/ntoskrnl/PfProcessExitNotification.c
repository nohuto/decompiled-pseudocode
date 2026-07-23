/*
 * XREFs of PfProcessExitNotification @ 0x14094BDC4
 * Callers:
 *     PspExitProcess @ 0x1408F2E70 (PspExitProcess.c)
 * Callees:
 *     PfpLogApplicationEvent @ 0x1402627C0 (PfpLogApplicationEvent.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1403B475C (FsRtlAcquirePushLockExclusive.c)
 *     VmpReleasePushLockExclusive @ 0x1404816E0 (VmpReleasePushLockExclusive.c)
 *     PfSnAltProfileCleanup @ 0x1407458C0 (PfSnAltProfileCleanup.c)
 *     PfSnAltProfileFindByProcess @ 0x14094BE6C (PfSnAltProfileFindByProcess.c)
 *     PfSnEndProcessTrace @ 0x14094BF24 (PfSnEndProcessTrace.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PfProcessExitNotification(__int64 a1)
{
  _RTL_BALANCED_NODE *v2; // rax
  _RTL_BALANCED_NODE *v3; // rbx

  PfpLogApplicationEvent(a1);
  FsRtlAcquirePushLockExclusive(&qword_140E67288);
  v2 = (_RTL_BALANCED_NODE *)PfSnAltProfileFindByProcess(a1);
  v3 = v2;
  if ( v2 )
  {
    RtlRbRemoveNode(&Parent, v2);
    RtlRbRemoveNode(&Tree, v3 + 1);
  }
  VmpReleasePushLockExclusive((volatile signed __int64 *)&qword_140E67288);
  if ( v3 )
  {
    PfSnAltProfileCleanup((__int64)v3);
    ExFreePoolWithTag(v3, 0x66506343u);
  }
  if ( PfSnNumActiveTraces )
    PfSnEndProcessTrace(a1, 2LL, 0LL);
}
