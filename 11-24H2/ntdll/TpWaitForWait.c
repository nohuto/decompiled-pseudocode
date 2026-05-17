/*
 * XREFs of TpWaitForWait @ 0x18006EB30
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18006E2B0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelWait @ 0x18006ADE0 (TppCancelWait.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 *     TppWorkWait @ 0x18006ED50 (TppWorkWait.c)
 */

void __fastcall TpWaitForWait(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  int v3; // eax
  char v4; // r14
  __int64 v6; // rdi
  volatile signed __int32 **v7; // rdx
  unsigned __int64 v8; // r8
  unsigned int v9; // ecx
  __int64 (__fastcall *v10)(__int64); // rax
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 168);
  v4 = 0;
  v11 = 0;
  if ( (v3 & 0x10000) != 0
    || (v3 & 0x20000) != 0
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppWaitpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter();
  }
  else
  {
    if ( (_DWORD)a2 )
    {
      v6 = *(_QWORD *)(a1 + 144);
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 240), a2, a3);
      ++*(_BYTE *)(a1 + 355);
      TppCancelWait(a1, v6 + 112, 2, &v11);
      if ( *(_DWORD *)(a1 + 56) )
        v4 = 1;
      else
        --*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
      TppWorkWait(a1);
      if ( v4 )
      {
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 240), v7, v8);
        --*(_BYTE *)(a1 + 355);
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
      }
    }
    else
    {
      TppWorkWait(a1);
    }
    v9 = v11;
    if ( v11 && _InterlockedExchangeAdd((volatile signed __int32 *)a1, v11) == -v9 )
    {
      v10 = **(__int64 (__fastcall ***)(__int64))(a1 + 8);
      if ( v10 == TppFreeWait )
      {
        TppFreeWait(a1);
      }
      else if ( v10 == TppTimerpFree )
      {
        TppTimerpFree(a1);
      }
      else
      {
        v10(a1);
      }
    }
  }
}
