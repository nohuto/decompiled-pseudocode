/*
 * XREFs of TppStopWaitCallbackGeneration @ 0x18010B800
 * Callers:
 *     <none>
 * Callees:
 *     TppFreeWait @ 0x18004CEA0 (TppFreeWait.c)
 *     TppTimerpFree @ 0x18004CEF0 (TppTimerpFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelWait @ 0x1800876C0 (TppCancelWait.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TppStopWaitCallbackGeneration(__int64 a1, int a2)
{
  __int64 v2; // rdi
  _RTL_SRWLOCK *v3; // rsi
  signed int v6; // ecx
  void (__fastcall *v7)(__int64); // rax
  signed int v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 144);
  v3 = (_RTL_SRWLOCK *)(a1 + 240);
  v8 = 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  TppCancelWait(a1, v2 + 112, a2 != 0 ? 2 : 0, &v8);
  ++*(_BYTE *)(a1 + 355);
  RtlReleaseSRWLockExclusive(v3);
  v6 = v8;
  if ( v8 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a1, v8) == -v6 )
  {
    v7 = **(void (__fastcall ***)(__int64))(a1 + 8);
    if ( (char *)v7 == (char *)TppFreeWait )
    {
      TppFreeWait(a1);
    }
    else if ( (char *)v7 == (char *)TppTimerpFree )
    {
      TppTimerpFree((void *)a1);
    }
    else
    {
      v7(a1);
    }
  }
}
