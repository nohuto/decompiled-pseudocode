/*
 * XREFs of RtlpHpUnlockHeapManagerForClone @ 0x18014CC94
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x180141950 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x180141CA0 (RtlUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlpCSparseBitmapUnlock @ 0x180092B00 (RtlpCSparseBitmapUnlock.c)
 *     RtlpFlsCloneComplete @ 0x18014B618 (RtlpFlsCloneComplete.c)
 */

__int64 __fastcall RtlpHpUnlockHeapManagerForClone(int a1)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  RtlpFlsCloneComplete((__int64)&RtlpHpEnvFlsContext, a1);
  v3 = 0LL;
  if ( a1 )
  {
    qword_1801CE950 = -1LL;
    qword_1801CE948 = 1LL;
  }
  LODWORD(v3) = 1;
  *((_QWORD *)&v3 + 1) = &unk_1801CE930;
  BYTE4(v3) = -1;
  return RtlpCSparseBitmapUnlock((__int64)&v3);
}
