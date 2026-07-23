/*
 * XREFs of VfMiscExReleaseResourceLite_Entry @ 0x140B9FA70
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscCheckResourceRelease @ 0x140BA1404 (ViMiscCheckResourceRelease.c)
 */

__int64 __fastcall VfMiscExReleaseResourceLite_Entry(__int64 a1)
{
  return ViMiscCheckResourceRelease(*(_QWORD *)(a1 + 8), *(_QWORD *)a1);
}
