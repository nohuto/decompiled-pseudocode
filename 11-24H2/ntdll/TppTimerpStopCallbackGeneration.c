/*
 * XREFs of TppTimerpStopCallbackGeneration @ 0x18010B480
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     TppCancelTimer @ 0x18006C3B0 (TppCancelTimer.c)
 */

char __fastcall TppTimerpStopCallbackGeneration(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  __int64 (__fastcall *v6)(__int64); // rax

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 240), a2, a3);
  v4 = *(_QWORD *)(a1 + 144);
  ++*(_BYTE *)(a1 + 355);
  LOBYTE(v5) = TppCancelTimer(a1, (volatile signed __int32 *)(v4 + 112), 0LL);
  if ( (_BYTE)v5 )
  {
    v5 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( v5 == 1 )
    {
      v6 = **(__int64 (__fastcall ***)(__int64))(a1 + 8);
      if ( (char *)v6 == (char *)TppSimplepFree )
      {
        LOBYTE(v5) = TppSimplepFree((_QWORD *)a1);
      }
      else if ( (char *)v6 == (char *)TppAlpcpFree )
      {
        LOBYTE(v5) = TppAlpcpFree((_QWORD *)a1);
      }
      else if ( v6 == TppWorkpFree )
      {
        LOBYTE(v5) = TppWorkpFree(a1);
      }
      else
      {
        LOBYTE(v5) = v6(a1);
      }
    }
  }
  return v5;
}
