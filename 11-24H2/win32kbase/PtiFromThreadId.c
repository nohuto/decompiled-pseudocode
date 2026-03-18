/*
 * XREFs of PtiFromThreadId @ 0x1400D8ED0
 * Callers:
 *     NtMITPostThreadEventMessage @ 0x1401B87E0 (NtMITPostThreadEventMessage.c)
 *     NtMITSetLastInputRecipient @ 0x1401B8C50 (NtMITSetLastInputRecipient.c)
 *     GetKeyboardDelegationTargetQ @ 0x140212810 (GetKeyboardDelegationTargetQ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PtiFromThreadId(int a1)
{
  HANDLE v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  NTSTATUS v4; // edi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v9; // rbx
  __int64 *ThreadWin32Thread; // rax
  PETHREAD Thread; // [rsp+58h] [rbp+10h] BYREF

  Thread = 0LL;
  v1 = (HANDLE)a1;
  v4 = PsLookupThreadByThreadId((HANDLE)a1, &Thread);
  if ( v4 >= 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v3, v2, v5, v6);
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    if ( (unsigned int)PsGetThreadSessionId(Thread) != ProcessSessionId )
    {
      ObfDereferenceObject(Thread);
      return 0LL;
    }
  }
  if ( v4 < 0 )
    return 0LL;
  v9 = 0LL;
  if ( !PsIsThreadTerminating(Thread) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(Thread);
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
    if ( v9 )
    {
      if ( PsGetThreadId(*(PETHREAD *)v9) == v1
        && (_InterlockedCompareExchange((volatile signed __int32 *)(v9 + 528), 0, 0) & 0x1000000) != 0 )
      {
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v9 + 528), 0, 0) & 1) != 0 )
          v9 = 0LL;
      }
      else
      {
        v9 = 0LL;
      }
    }
  }
  ObfDereferenceObject(Thread);
  return v9;
}
