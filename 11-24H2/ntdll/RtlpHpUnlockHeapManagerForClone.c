/*
 * XREFs of RtlpHpUnlockHeapManagerForClone @ 0x18014B05C
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x18013FB40 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x18013FE80 (RtlUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlpCSparseBitmapUnlock @ 0x18009D690 (RtlpCSparseBitmapUnlock.c)
 *     RtlpFlsCloneComplete @ 0x1801499C8 (RtlpFlsCloneComplete.c)
 */

void __fastcall RtlpHpUnlockHeapManagerForClone(int a1)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  RtlpFlsCloneComplete((__int64)&RtlpHpEnvFlsContext, a1);
  v2 = 0LL;
  if ( a1 )
  {
    qword_1801CD940 = -1LL;
    qword_1801CD938 = 1LL;
  }
  LODWORD(v2) = 1;
  *((_QWORD *)&v2 + 1) = BaseAddress;
  BYTE4(v2) = -1;
  RtlpCSparseBitmapUnlock((__int64)&v2);
}
