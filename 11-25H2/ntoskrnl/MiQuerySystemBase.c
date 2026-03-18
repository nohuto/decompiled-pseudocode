/*
 * XREFs of MiQuerySystemBase @ 0x140460F60
 * Callers:
 *     MiInitializeSystemCache @ 0x1407DD6C0 (MiInitializeSystemCache.c)
 *     MmMarkHiberPhase @ 0x140B52C88 (MmMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiQuerySystemBase(int a1, _QWORD *a2)
{
  __int64 *v2; // rcx
  __int64 result; // rax

  v2 = &qword_140E38868[2 * a1];
  result = *v2;
  *a2 = v2[1];
  return result;
}
