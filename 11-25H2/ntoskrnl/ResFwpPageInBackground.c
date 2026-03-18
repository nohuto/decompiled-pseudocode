/*
 * XREFs of ResFwpPageInBackground @ 0x140BA1BB0
 * Callers:
 *     ResFwBackgroundTransition @ 0x140BA5D28 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140468C70 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140468D2C (BgpFwAllocateMemory.c)
 *     BgpFwReleaseLock @ 0x1404A891C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

void ResFwpPageInBackground()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  void *Memory; // rbx

  if ( (dword_140EEFD90 & 0xC00) != 0xC00 && (dword_140EEFD90 & 0x100000) == 0 )
  {
    if ( qword_140EEFDE0 )
    {
      Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
      if ( Memory )
      {
        BgpFwReleaseLock(v1, v0);
        memmove(Memory, qword_140EEFDE0, (unsigned int)Size);
        BgpFwAcquireLock();
        if ( qword_140EEFDD8 )
          BgpFwFreeMemory((__int64)Memory);
        else
          _InterlockedExchange64((volatile __int64 *)&qword_140EEFDD8, (__int64)Memory);
      }
    }
  }
}
