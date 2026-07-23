/*
 * XREFs of MiQuerySystemBase @ 0x140454FBC
 * Callers:
 *     MiInitializeSystemCache @ 0x1407EDB30 (MiInitializeSystemCache.c)
 *     MmMarkHiberPhase @ 0x140B64E88 (MmMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiQuerySystemBase(int a1, _QWORD *a2)
{
  __int64 *v2; // rcx
  __int64 result; // rax

  v2 = &qword_140E38BE8[2 * a1];
  result = *v2;
  *a2 = v2[1];
  return result;
}
