/*
 * XREFs of EtwTiLogSyscallUsage @ 0x1408EA178
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1408E9C54 (PfSetSuperfetchInformation.c)
 *     PfQuerySuperfetchInformation @ 0x140932B10 (PfQuerySuperfetchInformation.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     NtSystemDebugControl @ 0x140A53910 (NtSystemDebugControl.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     EtwpTiFillProcessIdentity @ 0x1403BCF74 (EtwpTiFillProcessIdentity.c)
 *     EtwProviderEnabled @ 0x1403BE620 (EtwProviderEnabled.c)
 *     PsGetSessionId @ 0x140433C80 (PsGetSessionId.c)
 *     EtwpTiFillThreadIdentity @ 0x14046931C (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlIsSandboxedToken @ 0x140840280 (RtlIsSandboxedToken.c)
 *     SeTokenIsAdmin @ 0x1408D9E10 (SeTokenIsAdmin.c)
 */

char __fastcall EtwTiLogSyscallUsage(int a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  struct _KTHREAD *v4; // r15
  __int64 Process; // rsi
  void *v6; // rdi
  BOOLEAN IsAdmin; // bl
  int v8; // ebx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  REGHANDLE v13; // rcx
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[11]; // [rsp+58h] [rbp-B0h] BYREF

  v18 = 0LL;
  v16 = a2;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( a1 >= 0 )
    {
      LOBYTE(CurrentThread) = EtwEventEnabled(EtwThreatIntProvRegHandle, &THREATINT_PROCESS_SYSCALL_USAGE);
      if ( (_BYTE)CurrentThread )
      {
        LOBYTE(CurrentThread) = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x10000000000uLL);
        if ( (_BYTE)CurrentThread )
        {
          v4 = KeGetCurrentThread();
          Process = (__int64)v4->ApcState.Process;
          LODWORD(CurrentThread) = *(_DWORD *)(Process + 2016);
          if ( !_bittest((const int *)&CurrentThread, v16)
            && !_interlockedbittestandset((volatile signed __int32 *)(Process + 2016), v16) )
          {
            v6 = (void *)PsReferencePrimaryTokenWithTag(Process, 0x746C6644u);
            IsAdmin = SeTokenIsAdmin(v6);
            LOBYTE(CurrentThread) = ObFastDereferenceObject((__int64 *)(Process + 584), (ULONG_PTR)v6, 1953261124LL);
            if ( !IsAdmin )
            {
              v8 = EtwpTiFillProcessIdentity(UserData, Process, &v18);
              v9 = EtwpTiFillThreadIdentity((__int64)&UserData[v8], (__int64)v4) + v8;
              LODWORD(v17) = PsGetSessionId(Process);
              v10 = v9;
              *(&UserData[0].Reserved + 1 * v10) = 0;
              UserData[v10].Ptr = (ULONGLONG)&v17;
              UserData[v10].Size = 4;
              v11 = v9 + 1;
              v9 += 2;
              v11 *= 2LL;
              *(&UserData[0].Reserved + 2 * v11) = 0;
              *(&UserData[0].Ptr + v11) = (ULONGLONG)&v16;
              *(&UserData[0].Size + 2 * v11) = 4;
              LOBYTE(v15) = RtlIsSandboxedToken(0LL, PreviousMode);
              v12 = v9;
              *(&UserData[0].Reserved + 1 * v12) = 0;
              UserData[v12].Ptr = (ULONGLONG)&v15;
              v13 = EtwThreatIntProvRegHandle;
              UserData[v12].Size = 1;
              LOBYTE(CurrentThread) = EtwWrite(v13, &THREATINT_PROCESS_SYSCALL_USAGE, 0LL, v9 + 1, UserData);
            }
          }
        }
      }
    }
  }
  return (char)CurrentThread;
}
