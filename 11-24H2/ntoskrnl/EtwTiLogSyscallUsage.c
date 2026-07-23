/*
 * XREFs of EtwTiLogSyscallUsage @ 0x1408F7468
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1408F573C (PfSetSuperfetchInformation.c)
 *     PfQuerySuperfetchInformation @ 0x1408F5C60 (PfQuerySuperfetchInformation.c)
 *     NtSystemDebugControl @ 0x140A4F080 (NtSystemDebugControl.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     EtwProviderEnabled @ 0x140262770 (EtwProviderEnabled.c)
 *     EtwpTiFillProcessIdentity @ 0x1402633C0 (EtwpTiFillProcessIdentity.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     PsGetSessionId @ 0x1403C1560 (PsGetSessionId.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     EtwpTiFillThreadIdentity @ 0x14045F510 (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SeTokenIsAdmin @ 0x14085AA10 (SeTokenIsAdmin.c)
 *     RtlIsSandboxedToken @ 0x1408E3950 (RtlIsSandboxedToken.c)
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
            LOBYTE(CurrentThread) = ObFastDereferenceObject((__int64 *)(Process + 584), (ULONG_PTR)v6, 0x746C6644u);
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
