/*
 * XREFs of PspQuitNextJobProcess @ 0x140777D38
 * Callers:
 *     PspAssignProcessToJob @ 0x140A105B0 (PspAssignProcessToJob.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PspLockJobExclusive @ 0x14085CC60 (PspLockJobExclusive.c)
 *     PspUnlockJob @ 0x14085EB90 (PspUnlockJob.c)
 */

LONG_PTR __fastcall PspQuitNextJobProcess(__int64 a1, __int64 a2, _QWORD *a3, void *a4)
{
  __int64 v8; // r8
  _QWORD *v9; // rax
  LONG_PTR result; // rax

  PspLockJobExclusive(a1, a2);
  v8 = *a3;
  if ( *(_QWORD **)(*a3 + 8LL) != a3 || (v9 = (_QWORD *)a3[1], (_QWORD *)*v9 != a3) )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  result = PspUnlockJob(a1, a2);
  if ( a4 )
    return ObfDereferenceObjectWithTag(a4, 0x624A7350u);
  return result;
}
