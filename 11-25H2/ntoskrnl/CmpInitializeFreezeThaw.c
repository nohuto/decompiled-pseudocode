/*
 * XREFs of CmpInitializeFreezeThaw @ 0x1407C8FE4
 * Callers:
 *     CmInitSystem1 @ 0x140C33C44 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeFreezeThaw()
{
  __int64 *result; // rax

  CmpFreezeListLock = 0LL;
  result = &CmpFreezeThawWaitListHead;
  qword_140EF69B8 = (__int64)&CmpFreezeThawWaitListHead;
  CmpFreezeThawWaitListHead = (__int64)&CmpFreezeThawWaitListHead;
  if ( (unsigned int)CmFreezeThawTimeoutInSeconds > 0x384 )
    CmFreezeThawTimeoutInSeconds = 60;
  return result;
}
