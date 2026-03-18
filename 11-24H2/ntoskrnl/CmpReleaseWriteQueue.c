/*
 * XREFs of CmpReleaseWriteQueue @ 0x14097E3D4
 * Callers:
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1407D7F7C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpFlushHive @ 0x14097D2B4 (CmpFlushHive.c)
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
