/*
 * XREFs of PfProcessExitNotification @ 0x1409398E0
 * Callers:
 *     PspExitProcess @ 0x1409387A0 (PspExitProcess.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1403C5B9C (FsRtlAcquirePushLockExclusive.c)
 *     PfpLogApplicationEvent @ 0x1403D4840 (PfpLogApplicationEvent.c)
 *     VmpReleasePushLockExclusive @ 0x1404860F0 (VmpReleasePushLockExclusive.c)
 *     PfSnAltProfileCleanup @ 0x1407475D0 (PfSnAltProfileCleanup.c)
 *     PfSnAltProfileFindByProcess @ 0x140939988 (PfSnAltProfileFindByProcess.c)
 *     PfSnEndProcessTrace @ 0x140939A40 (PfSnEndProcessTrace.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PfProcessExitNotification(__int64 a1)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 *v3; // rbx

  PfpLogApplicationEvent(a1);
  FsRtlAcquirePushLockExclusive(&qword_140E67138);
  v2 = (unsigned __int64 *)PfSnAltProfileFindByProcess(a1);
  v3 = v2;
  if ( v2 )
  {
    RtlRbRemoveNode((unsigned __int64 *)&qword_140E67118, v2);
    RtlRbRemoveNode((unsigned __int64 *)&xmmword_140E67120 + 1, v3 + 3);
  }
  VmpReleasePushLockExclusive((volatile signed __int64 *)&qword_140E67138);
  if ( v3 )
  {
    PfSnAltProfileCleanup((__int64)v3);
    ExFreePoolWithTag(v3, 0x66506343u);
  }
  if ( PfSnNumActiveTraces )
    PfSnEndProcessTrace(a1, 2LL);
}
