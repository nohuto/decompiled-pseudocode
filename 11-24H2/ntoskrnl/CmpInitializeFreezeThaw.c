/*
 * XREFs of CmpInitializeFreezeThaw @ 0x1407D8CD8
 * Callers:
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeFreezeThaw()
{
  __int64 *result; // rax

  CmpFreezeListLock = 0LL;
  result = &CmpFreezeThawWaitListHead;
  qword_140EF7038 = (__int64)&CmpFreezeThawWaitListHead;
  CmpFreezeThawWaitListHead = (__int64)&CmpFreezeThawWaitListHead;
  if ( (unsigned int)CmFreezeThawTimeoutInSeconds > 0x384 )
    CmFreezeThawTimeoutInSeconds = 60;
  return result;
}
