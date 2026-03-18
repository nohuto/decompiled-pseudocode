/*
 * XREFs of VfMiscExReleaseFastMutex_Entry @ 0x140B9DA40
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscExCheckAPCsDisabled @ 0x140B9F4E8 (ViMiscExCheckAPCsDisabled.c)
 */

__int64 __fastcall VfMiscExReleaseFastMutex_Entry(__int64 a1)
{
  return ViMiscExCheckAPCsDisabled(0x34uLL, *(_QWORD *)(a1 + 8), *(_QWORD *)a1);
}
