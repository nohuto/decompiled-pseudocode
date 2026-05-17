/*
 * XREFs of TppStopWaitCallbackGeneration @ 0x180110540
 * Callers:
 *     <none>
 * Callees:
 *     TppFreeWait @ 0x1800204A0 (TppFreeWait.c)
 *     TppTimerpFree @ 0x1800204F0 (TppTimerpFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelWait @ 0x18006ADE0 (TppCancelWait.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppStopWaitCallbackGeneration(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  volatile signed __int64 *v4; // rsi
  int v6; // ebx
  __int64 result; // rax
  unsigned int v8; // ecx
  __int64 (__fastcall *v9)(__int64); // rax
  signed int v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 144);
  v4 = (volatile signed __int64 *)(a1 + 240);
  v10 = 0;
  v6 = (int)a2;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 240), a2, a3);
  TppCancelWait(a1, v3 + 112, v6 != 0 ? 2 : 0, &v10);
  ++*(_BYTE *)(a1 + 355);
  result = RtlReleaseSRWLockExclusive(v4);
  if ( v10 < 0 )
  {
    v8 = -v10;
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, v10);
    if ( (_DWORD)result == v8 )
    {
      v9 = **(__int64 (__fastcall ***)(__int64))(a1 + 8);
      if ( v9 == TppFreeWait )
      {
        return TppFreeWait(a1);
      }
      else if ( v9 == TppTimerpFree )
      {
        return TppTimerpFree(a1);
      }
      else
      {
        return v9(a1);
      }
    }
  }
  return result;
}
