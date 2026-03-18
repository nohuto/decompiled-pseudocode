/*
 * XREFs of NtUserSetCoveredWindowStates @ 0x14029CFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x14019552C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0DeferQoSReport@@QEAA@W4DeferQoSReportType@@@Z @ 0x140290998 (--0DeferQoSReport@@QEAA@W4DeferQoSReportType@@@Z.c)
 */

__int64 __fastcall NtUserSetCoveredWindowStates(__int64 a1, unsigned int a2, int a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  QualityOfService *v8; // rcx
  unsigned int i; // edi
  tagWND *v10; // rax
  __int64 v11; // rcx
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  __int128 v14; // [rsp+50h] [rbp-28h]
  _BYTE v15[16]; // [rsp+60h] [rbp-18h] BYREF
  char v16; // [rsp+98h] [rbp+20h] BYREF

  v6 = 0;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v15);
  if ( (unsigned int)IsCurrentProcessDwm(v7) )
  {
    DeferQoSReport::DeferQoSReport((QualityOfService *)&v16, a3 == 0);
    for ( i = 0; i < a2; ++i )
    {
      v14 = 0LL;
      v13 = 0LL;
      RtlCopyFromUser(&v13, (void *)(a1 + 16LL * i), 0x10uLL);
      v14 = v13;
      v10 = (tagWND *)ValidateHwndStrict(v13);
      if ( v10 )
      {
        *((_DWORD *)v10 + 98) = DWORD2(v13);
        tagWND::ComputeDominantState(v10);
      }
    }
    if ( v16 )
      QualityOfService::EndDeferReport(v8);
    v6 = 1;
  }
  else
  {
    UserSetLastError(5);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v15);
  UserSessionSwitchLeaveCrit(v11);
  return v6;
}
