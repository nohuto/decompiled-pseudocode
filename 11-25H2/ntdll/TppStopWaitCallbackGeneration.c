/*
 * XREFs of TppStopWaitCallbackGeneration @ 0x180113310
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelWait @ 0x18003E2E0 (TppCancelWait.c)
 *     TppFreeWait @ 0x180041EB0 (TppFreeWait.c)
 *     TppTimerpFree @ 0x180041F00 (TppTimerpFree.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppStopWaitCallbackGeneration(__int64 a1, int a2)
{
  __int64 v2; // rdi
  volatile signed __int64 *v3; // rsi
  __int64 result; // rax
  unsigned int v7; // ecx
  __int64 (__fastcall *v8)(__int64); // rax
  signed int v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 144);
  v3 = (volatile signed __int64 *)(a1 + 240);
  v9 = 0;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 240));
  TppCancelWait(a1, v2 + 112, a2 != 0 ? 2 : 0, &v9);
  ++*(_BYTE *)(a1 + 355);
  result = RtlReleaseSRWLockExclusive(v3);
  if ( v9 < 0 )
  {
    v7 = -v9;
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, v9);
    if ( (_DWORD)result == v7 )
    {
      v8 = **(__int64 (__fastcall ***)(__int64))(a1 + 8);
      if ( v8 == TppFreeWait )
      {
        return TppFreeWait(a1);
      }
      else if ( v8 == TppTimerpFree )
      {
        return TppTimerpFree(a1);
      }
      else
      {
        return v8(a1);
      }
    }
  }
  return result;
}
