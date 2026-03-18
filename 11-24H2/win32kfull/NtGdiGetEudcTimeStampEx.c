/*
 * XREFs of NtGdiGetEudcTimeStampEx @ 0x14030D520
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x14002B480 (--$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x14002B4A4 (--$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1400B93D0 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     __report_rangecheckfailure @ 0x14026DDC0 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetEudcTimeStampEx(const void *a1, __int64 a2, int a3)
{
  __int64 v4; // r15
  __int64 v6; // r14
  wchar_t Str1[40]; // [rsp+40h] [rbp-88h] BYREF

  v4 = (unsigned int)a2;
  v6 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96) + 4872LL;
  if ( a3 )
    return *(unsigned int *)(v6 + 9232);
  if ( !a1 || !(_DWORD)v4 )
    return *(unsigned int *)(v6 + 9236);
  if ( (unsigned int)v4 > 0x20 )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    GreProbeAndReadFromUntrustedVa(Str1, 0x42uLL, a1, 2 * v4, 2uLL);
    if ( (unsigned __int64)(2 * v4) >= 0x42 )
      _report_rangecheckfailure();
    Str1[v4] = 0;
  }
  return 0LL;
}
