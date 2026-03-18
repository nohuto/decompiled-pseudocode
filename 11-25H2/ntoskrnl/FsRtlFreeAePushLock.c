/*
 * XREFs of FsRtlFreeAePushLock @ 0x14057CBA0
 * Callers:
 *     <none>
 * Callees:
 *     ExpCleanupAutoExpandPushLock @ 0x14031FF10 (ExpCleanupAutoExpandPushLock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlFreeAePushLock(PVOID P)
{
  ExpCleanupAutoExpandPushLock((__int64)P);
  ExFreePoolWithTag(P, 0);
}
