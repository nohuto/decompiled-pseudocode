/*
 * XREFs of ResFwpPageOutBackground @ 0x140BB3C34
 * Callers:
 *     ResFwFreeContext @ 0x140BB54C4 (ResFwFreeContext.c)
 *     ResFwBackgroundTransition @ 0x140BB7D28 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ResFwpPageOutBackground(__int64 a1, __int64 a2)
{
  void *v2; // rsi
  void *Pool2; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx

  if ( (dword_140EF0270 & 0xC00) != 0xC00 )
  {
    v2 = qword_140EF02B8;
    if ( qword_140EF02B8 )
    {
      if ( qword_140EF02C0 )
      {
LABEL_7:
        _InterlockedExchange64((volatile __int64 *)&qword_140EF02B8, 0LL);
        BgpFwFreeMemory((__int64)v2);
        return;
      }
      BgpFwReleaseLock(3072LL, a2);
      Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)Size, 0x4B494742uLL);
      v8 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, qword_140EF02B8, (unsigned int)Size);
        BgpFwAcquireLock(v10, v9, v11, v12);
        if ( !qword_140EF02C0 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140EF02C0, (__int64)v8);
          goto LABEL_7;
        }
        BgpFwReleaseLock(v14, v13);
        ExFreePoolWithTag(v8, 0x4B494742u);
      }
      BgpFwAcquireLock(v5, v4, v6, v7);
    }
  }
}
