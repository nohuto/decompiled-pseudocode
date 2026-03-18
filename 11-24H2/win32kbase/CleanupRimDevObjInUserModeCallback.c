/*
 * XREFs of CleanupRimDevObjInUserModeCallback @ 0x1401A3B98
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     RIMSignalAllDispositionWaiters @ 0x14014AEF0 (RIMSignalAllDispositionWaiters.c)
 */

LONG_PTR __fastcall CleanupRimDevObjInUserModeCallback(_QWORD *Object)
{
  _BYTE *v1; // rbx

  v1 = (_BYTE *)Object[49];
  RIMLockExclusive((__int64)(v1 + 104));
  if ( v1[80] && !v1[81] )
    RIMLockExclusive((__int64)(v1 + 760));
  v1[82] = 0;
  RIMSignalAllDispositionWaiters((__int64)v1);
  if ( v1[80] && !v1[81] )
    RIMUnlockExclusive((__int64)(v1 + 760));
  RIMUnlockExclusive((__int64)(v1 + 104));
  return ObfDereferenceObject(Object);
}
