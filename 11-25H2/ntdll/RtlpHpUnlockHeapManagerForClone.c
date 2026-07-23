/*
 * XREFs of RtlpHpUnlockHeapManagerForClone @ 0x18014E244
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x180143040 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x180143390 (RtlUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlpCSparseBitmapUnlock @ 0x1800BBE80 (RtlpCSparseBitmapUnlock.c)
 *     RtlpFlsCloneComplete @ 0x18014CBC8 (RtlpFlsCloneComplete.c)
 */

void __fastcall RtlpHpUnlockHeapManagerForClone(int a1)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  RtlpFlsCloneComplete((__int64)&RtlpHpEnvFlsContext, a1);
  v2 = 0LL;
  if ( a1 )
  {
    qword_1801D09A0 = -1LL;
    qword_1801D0998 = 1LL;
  }
  LODWORD(v2) = 1;
  *((_QWORD *)&v2 + 1) = BaseAddress;
  BYTE4(v2) = -1;
  RtlpCSparseBitmapUnlock((__int64)&v2);
}
