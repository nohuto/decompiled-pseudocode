/*
 * XREFs of ResFwpPageInBackground @ 0x140BB3BB0
 * Callers:
 *     ResFwBackgroundTransition @ 0x140BB7D28 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14045ED38 (BgpFwAllocateMemory.c)
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

void ResFwpPageInBackground()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  void *Memory; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  if ( (dword_140EF0270 & 0xC00) != 0xC00 && (dword_140EF0270 & 0x100000) == 0 )
  {
    if ( qword_140EF02C0 )
    {
      Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
      if ( Memory )
      {
        BgpFwReleaseLock(v1, v0);
        memmove(Memory, qword_140EF02C0, (unsigned int)Size);
        BgpFwAcquireLock(v4, v3, v5, v6);
        if ( qword_140EF02B8 )
          BgpFwFreeMemory((__int64)Memory);
        else
          _InterlockedExchange64((volatile __int64 *)&qword_140EF02B8, (__int64)Memory);
      }
    }
  }
}
