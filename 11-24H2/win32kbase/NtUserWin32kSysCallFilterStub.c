/*
 * XREFs of NtUserWin32kSysCallFilterStub @ 0x140143AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@2@Z @ 0x14000261C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U3@U-$_tlgWrapperByVal@$03@@.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ?GetProcessCommandLine@@YAPEAGXZ @ 0x140143CCC (-GetProcessCommandLine@@YAPEAGXZ.c)
 *     ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x140143E48 (-GetProcessAppContainerSid@@YAPEAGXZ.c)
 *     EtwSyscallFilterMessage @ 0x14019F4D0 (EtwSyscallFilterMessage.c)
 *     ??$GenerateNonTerminatingUserModeWerReport@$02@@YAXKPEAXAEAY02_K@Z @ 0x1401B7178 (--$GenerateNonTerminatingUserModeWerReport@$02@@YAXKPEAXAEAY02_K@Z.c)
 *     ?_ShouldCaptureWerReport@@YAHK@Z @ 0x1401B7468 (-_ShouldCaptureWerReport@@YAHK@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall NtUserWin32kSysCallFilterStub(const char *a1, unsigned int a2)
{
  char *ProcessAppContainerSid; // rsi
  char *ProcessCommandLine; // rdi
  __int64 Win32KFilterSet; // r15
  const WCHAR *v7; // r13
  const WCHAR *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcess; // rax
  const char *ProcessImageFileName; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // [rsp+50h] [rbp-29h] BYREF
  const WCHAR *v20; // [rsp+58h] [rbp-21h] BYREF
  __int64 v21; // [rsp+60h] [rbp-19h] BYREF
  const WCHAR *v22; // [rsp+68h] [rbp-11h] BYREF
  const char *v23; // [rsp+70h] [rbp-9h] BYREF
  __int64 v24; // [rsp+78h] [rbp-1h] BYREF
  _QWORD v25[3]; // [rsp+80h] [rbp+7h] BYREF

  ProcessAppContainerSid = (char *)GetProcessAppContainerSid();
  ProcessCommandLine = (char *)GetProcessCommandLine();
  Win32KFilterSet = (unsigned int)PsGetWin32KFilterSet();
  v7 = &word_14025E168;
  v8 = &word_14025E168;
  if ( ProcessAppContainerSid )
    v8 = (const WCHAR *)ProcessAppContainerSid;
  v20 = v8;
  if ( ProcessCommandLine )
    v7 = (const WCHAR *)ProcessCommandLine;
  if ( !a1 )
    a1 = (const char *)&unk_14025D828;
  EtwSyscallFilterMessage(a1, v8, v7, Win32KFilterSet);
  CurrentProcess = PsGetCurrentProcess(v10, v9, v11, v12);
  ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
  DbgPrintEx(0x70u, 4u, "NtUserWin32kSysCallFilterStub: SyscallName='%s', Process='%s'\n", a1, ProcessImageFileName);
  if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() )
  {
    if ( !*(_DWORD *)(W32GetUserSessionState(v15) + 16LL * (unsigned int)Win32KFilterSet + 71052)
      && (unsigned int)_ShouldCaptureWerReport(a2) )
    {
      v25[0] = 41LL;
      v25[1] = a2;
      v25[2] = Win32KFilterSet;
      GenerateNonTerminatingUserModeWerReport<3>(v16, a2, v25);
    }
    if ( (unsigned int)dword_14029AED8 > 5 && tlgKeywordOn((__int64)&dword_14029AED8, 0x800000000000LL) )
    {
      v21 = 0x1000000LL;
      v19 = Win32KFilterSet;
      v22 = v7;
      v23 = a1;
      v24 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v17,
        (int)&unk_140275A03,
        v18,
        (__int64)&v24,
        (void **)&v23,
        &v20,
        &v22,
        (__int64)&v19,
        (__int64)&v21);
    }
  }
  if ( ProcessAppContainerSid )
    GreDeleteFastMutex(ProcessAppContainerSid);
  if ( ProcessCommandLine )
    GreDeleteFastMutex(ProcessCommandLine);
}
