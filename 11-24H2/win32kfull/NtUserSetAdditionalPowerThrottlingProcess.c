/*
 * XREFs of NtUserSetAdditionalPowerThrottlingProcess @ 0x14029C430
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ProcessInfoFromHandle @ 0x1402A2E3C (ProcessInfoFromHandle.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtUserSetAdditionalPowerThrottlingProcess(__int64 a1, unsigned int a2, volatile void *a3)
{
  __int64 v3; // r14
  int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rdx
  QualityOfService *v10; // rcx
  __int64 v11; // r8
  __int64 CurrentProcessWow64Process; // rax
  unsigned int i; // edi
  __int64 v14; // rax
  QualityOfService *v15; // rcx
  __int64 *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rcx
  _BYTE v21[16]; // [rsp+50h] [rbp-148h] BYREF
  __int64 v22; // [rsp+60h] [rbp-138h] BYREF
  _BYTE v23[248]; // [rsp+68h] [rbp-130h] BYREF

  v3 = a2;
  v5 = 0;
  v6 = EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v21);
  v7 = ValidateHwndStrict(a1);
  v8 = v7;
  if ( v7 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v7 + 16) + 464LL) == *(_QWORD *)(v6 + 464)
      && IsTopLevelWindow(v7)
      && (unsigned int)v3 <= 0x20
      && ((_DWORD)v3 == 0) == (a3 == 0LL) )
    {
      v22 = 0LL;
      memset_0(v23, 0, sizeof(v23));
      if ( (_DWORD)v3 )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v10, v9, v11);
        ProbeForRead(a3, 8LL * (unsigned int)v3, CurrentProcessWow64Process != 0 ? 1 : 4);
        for ( i = 0; i < (unsigned int)v3; ++i )
        {
          v14 = ProcessInfoFromHandle(*((_QWORD *)a3 + i));
          *(_QWORD *)&v23[8 * i - 8] = v14;
          if ( !v14 )
            goto LABEL_19;
          v10 = *(QualityOfService **)(v8 + 16);
          if ( v14 == *((_QWORD *)v10 + 58) )
            goto LABEL_19;
        }
      }
      QualityOfService::BeginDeferReport(v10);
      if ( (*(_DWORD *)(v8 + 380) & 0x8000000) != 0 )
        tagWND::DwsUnlinkAllProcesses(v8, 2LL);
      if ( (_DWORD)v3 )
      {
        v16 = &v22;
        v17 = v3;
        do
        {
          tagWND::DwsLinkProcess(v8, *v16++, 2LL);
          --v17;
        }
        while ( v17 );
      }
      QualityOfService::EndDeferReport(v15);
      v5 = 1;
    }
    else
    {
LABEL_19:
      UserSetLastError(87);
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v21);
  UserSessionSwitchLeaveCrit(v18);
  return v5;
}
