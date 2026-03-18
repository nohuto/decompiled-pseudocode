/*
 * XREFs of CmpReleaseWriteQueue @ 0x140884B7C
 * Callers:
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1407C87E4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpReleaseWriteQueue(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = a2[1];
  a2[1] = 0LL;
  *a2 = 0LL;
  return result;
}
