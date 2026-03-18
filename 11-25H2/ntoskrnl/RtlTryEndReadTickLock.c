/*
 * XREFs of RtlTryEndReadTickLock @ 0x140420D20
 * Callers:
 *     KeQueryCpuSetInformation @ 0x1407306BC (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlTryEndReadTickLock(_QWORD *a1, __int64 a2)
{
  return *a1 == a2;
}
