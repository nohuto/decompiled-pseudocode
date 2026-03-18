/*
 * XREFs of ResFwpPageOutBackground @ 0x140BA1C34
 * Callers:
 *     ResFwFreeContext @ 0x140BA34C4 (ResFwFreeContext.c)
 *     ResFwBackgroundTransition @ 0x140BA5D28 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140468C70 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x1404A891C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ResFwpPageOutBackground(__int64 a1, __int64 a2)
{
  void *v2; // rsi
  void *Pool2; // rax
  void *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( (dword_140EEFD90 & 0xC00) != 0xC00 )
  {
    v2 = qword_140EEFDD8;
    if ( qword_140EEFDD8 )
    {
      if ( qword_140EEFDE0 )
      {
LABEL_7:
        _InterlockedExchange64((volatile __int64 *)&qword_140EEFDD8, 0LL);
        BgpFwFreeMemory((__int64)v2);
        return;
      }
      BgpFwReleaseLock(3072LL, a2);
      Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)Size, 0x4B494742uLL);
      v4 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, qword_140EEFDD8, (unsigned int)Size);
        BgpFwAcquireLock();
        if ( !qword_140EEFDE0 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140EEFDE0, (__int64)v4);
          goto LABEL_7;
        }
        BgpFwReleaseLock(v6, v5);
        ExFreePoolWithTag(v4, 0x4B494742u);
      }
      BgpFwAcquireLock();
    }
  }
}
