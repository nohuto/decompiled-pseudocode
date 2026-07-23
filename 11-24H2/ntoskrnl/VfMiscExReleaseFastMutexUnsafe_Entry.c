/*
 * XREFs of VfMiscExReleaseFastMutexUnsafe_Entry @ 0x140B9FA10
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscExCheckAPCsDisabled @ 0x140BA14E8 (ViMiscExCheckAPCsDisabled.c)
 */

__int64 __fastcall VfMiscExReleaseFastMutexUnsafe_Entry(__int64 a1)
{
  return ViMiscExCheckAPCsDisabled(0x3AuLL, *(_QWORD *)(a1 + 8), *(_QWORD *)a1);
}
