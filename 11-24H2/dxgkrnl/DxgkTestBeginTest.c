/*
 * XREFs of DxgkTestBeginTest @ 0x140202630
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
  result = ExAcquirePushLockExclusiveEx(&qword_1401606B0, 0LL);
  qword_1401606B8 = (__int64)a1;
  return result;
}
