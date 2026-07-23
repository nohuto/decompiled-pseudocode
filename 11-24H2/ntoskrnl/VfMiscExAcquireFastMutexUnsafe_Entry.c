/*
 * XREFs of VfMiscExAcquireFastMutexUnsafe_Entry @ 0x140B9F7E0
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscExCheckAPCsDisabled @ 0x140BA14E8 (ViMiscExCheckAPCsDisabled.c)
 */

__int64 __fastcall VfMiscExAcquireFastMutexUnsafe_Entry(__int64 a1)
{
  return ViMiscExCheckAPCsDisabled(0x39uLL, *(_QWORD *)(a1 + 8), *(_QWORD *)a1);
}
