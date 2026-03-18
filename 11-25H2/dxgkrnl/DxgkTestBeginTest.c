/*
 * XREFs of DxgkTestBeginTest @ 0x1401FBF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkTestBeginTest(_QWORD *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  *a1 = a2;
  a1[1] = CurrentThread;
  result = ExAcquirePushLockExclusiveEx(&qword_14015D690, 0LL);
  qword_14015D698 = (__int64)a1;
  return result;
}
