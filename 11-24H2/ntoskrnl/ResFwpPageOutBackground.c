/*
 * XREFs of ResFwpPageOutBackground @ 0x140BB1C34
 * Callers:
 *     ResFwFreeContext @ 0x140BB34C4 (ResFwFreeContext.c)
 *     ResFwBackgroundTransition @ 0x140BB5D28 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14037DE10 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ResFwpPageOutBackground(__int64 a1, __int64 a2)
{
  void *v2; // rsi
  void *Pool2; // rax
  void *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( (dword_140EF0050 & 0xC00) != 0xC00 )
  {
    v2 = qword_140EF0098;
    if ( qword_140EF0098 )
    {
      if ( qword_140EF00A0 )
      {
LABEL_7:
        _InterlockedExchange64((volatile __int64 *)&qword_140EF0098, 0LL);
        BgpFwFreeMemory((__int64)v2);
        return;
      }
      BgpFwReleaseLock(3072LL, a2);
      Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)Size, 0x4B494742uLL);
      v4 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, qword_140EF0098, (unsigned int)Size);
        BgpFwAcquireLock();
        if ( !qword_140EF00A0 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140EF00A0, (__int64)v4);
          goto LABEL_7;
        }
        BgpFwReleaseLock(v6, v5);
        ExFreePoolWithTag(v4, 0x4B494742u);
      }
      BgpFwAcquireLock();
    }
  }
}
