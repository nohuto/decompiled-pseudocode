/*
 * XREFs of ViDeadlockKeReleaseSpinLockFromDpcLevel_Entry @ 0x140B99820
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140BA75AC (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall ViDeadlockKeReleaseSpinLockFromDpcLevel_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(*(_QWORD *)(a1 + 8));
}
