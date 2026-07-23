/*
 * XREFs of TppTimerpStopCallbackGeneration @ 0x180106240
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     TppCancelTimer @ 0x180088C90 (TppCancelTimer.c)
 */

char __fastcall TppTimerpStopCallbackGeneration(__int64 a1)
{
  _RTL_SRWLOCK *v2; // rdx
  signed __int32 v3; // eax
  __int64 (__fastcall *v4)(__int64); // rax

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  v2 = *(_RTL_SRWLOCK **)(a1 + 144);
  ++*(_BYTE *)(a1 + 355);
  LOBYTE(v3) = TppCancelTimer(a1, v2 + 14, 0);
  if ( (_BYTE)v3 )
  {
    v3 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( v3 == 1 )
    {
      v4 = **(__int64 (__fastcall ***)(__int64))(a1 + 8);
      if ( (char *)v4 == (char *)TppSimplepFree )
      {
        LOBYTE(v3) = TppSimplepFree((_QWORD *)a1);
      }
      else if ( (char *)v4 == (char *)TppAlpcpFree )
      {
        LOBYTE(v3) = TppAlpcpFree((_QWORD *)a1);
      }
      else if ( (char *)v4 == (char *)TppWorkpFree )
      {
        LOBYTE(v3) = TppWorkpFree((void *)a1);
      }
      else
      {
        LOBYTE(v3) = v4(a1);
      }
    }
  }
  return v3;
}
