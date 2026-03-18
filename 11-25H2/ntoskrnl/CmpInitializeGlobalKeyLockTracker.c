/*
 * XREFs of CmpInitializeGlobalKeyLockTracker @ 0x1407CE7A0
 * Callers:
 *     CmInitSystem1 @ 0x140C33C44 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeGlobalKeyLockTracker()
{
  __int64 *result; // rax

  CmpKeyLockTracker = 0LL;
  result = &qword_140EF5188;
  qword_140EF5190 = (__int64)&qword_140EF5188;
  qword_140EF5188 = (__int64)&qword_140EF5188;
  return result;
}
