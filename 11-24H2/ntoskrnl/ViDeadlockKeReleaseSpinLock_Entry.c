/*
 * XREFs of ViDeadlockKeReleaseSpinLock_Entry @ 0x140BA7580
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140BA75AC (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall ViDeadlockKeReleaseSpinLock_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(*(_QWORD *)(a1 + 16));
}
