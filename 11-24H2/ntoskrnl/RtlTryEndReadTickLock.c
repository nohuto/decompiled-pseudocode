/*
 * XREFs of RtlTryEndReadTickLock @ 0x140412340
 * Callers:
 *     KeQueryCpuSetInformation @ 0x140A70FAC (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlTryEndReadTickLock(_QWORD *a1, __int64 a2)
{
  return *a1 == a2;
}
