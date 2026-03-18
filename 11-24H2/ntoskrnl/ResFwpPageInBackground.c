/*
 * XREFs of ResFwpPageInBackground @ 0x140BB1BB0
 * Callers:
 *     ResFwBackgroundTransition @ 0x140BB5D28 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14037DE10 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140467320 (BgpFwAllocateMemory.c)
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

void ResFwpPageInBackground()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  void *Memory; // rbx

  if ( (dword_140EF0050 & 0xC00) != 0xC00 && (dword_140EF0050 & 0x100000) == 0 )
  {
    if ( qword_140EF00A0 )
    {
      Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
      if ( Memory )
      {
        BgpFwReleaseLock(v1, v0);
        memmove(Memory, qword_140EF00A0, (unsigned int)Size);
        BgpFwAcquireLock();
        if ( qword_140EF0098 )
          BgpFwFreeMemory((__int64)Memory);
        else
          _InterlockedExchange64((volatile __int64 *)&qword_140EF0098, (__int64)Memory);
      }
    }
  }
}
