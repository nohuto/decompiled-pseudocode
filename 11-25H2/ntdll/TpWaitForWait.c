/*
 * XREFs of TpWaitForWait @ 0x18003D030
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18003C7B0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelWait @ 0x18003E2E0 (TppCancelWait.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppWorkWait @ 0x180041190 (TppWorkWait.c)
 */

__int64 __fastcall TpWaitForWait(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  char v4; // r14
  __int64 result; // rax
  __int64 v7; // rdi
  unsigned int v8; // ecx
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 v10; // rcx
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 168);
  v4 = 0;
  v11 = 0;
  if ( (v3 & 0x10000) != 0
    || (v3 & 0x20000) != 0
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppWaitpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    result = (__int64)NtCurrentPeb();
    v10 = *(_QWORD *)(result + 24);
    if ( !*(_BYTE *)(v10 + 72) )
      return TppRaiseInvalidParameter(v10, a2, a3);
  }
  else
  {
    if ( (_DWORD)a2 )
    {
      v7 = *(_QWORD *)(a1 + 144);
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 240));
      ++*(_BYTE *)(a1 + 355);
      TppCancelWait(a1, v7 + 112, 2LL, &v11);
      if ( *(_DWORD *)(a1 + 56) )
        v4 = 1;
      else
        --*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
      result = TppWorkWait(a1);
      if ( v4 )
      {
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 240));
        --*(_BYTE *)(a1 + 355);
        result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
      }
    }
    else
    {
      result = TppWorkWait(a1);
    }
    if ( v11 )
    {
      v8 = -v11;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, v11);
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
  }
  return result;
}
