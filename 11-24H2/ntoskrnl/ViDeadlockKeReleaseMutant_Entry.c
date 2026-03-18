/*
 * XREFs of ViDeadlockKeReleaseMutant_Entry @ 0x140B997C0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140BA75AC (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall ViDeadlockKeReleaseMutant_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(*(_QWORD *)(a1 + 16));
}
