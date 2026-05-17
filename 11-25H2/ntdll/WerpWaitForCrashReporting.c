/*
 * XREFs of WerpWaitForCrashReporting @ 0x1800CFB70
 * Callers:
 *     RtlReportExceptionHelper @ 0x1800CF388 (RtlReportExceptionHelper.c)
 *     RtlReportExceptionEx @ 0x180135B80 (RtlReportExceptionEx.c)
 * Callees:
 *     WerpProcessId @ 0x1800CFAD0 (WerpProcessId.c)
 *     NtWaitForMultipleObjects @ 0x180163D70 (NtWaitForMultipleObjects.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall WerpWaitForCrashReporting(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // r12
  unsigned int v9; // esi
  int v10; // eax
  void *UniqueProcess; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h]

  v4 = 0;
  v16 = 0LL;
  v5 = a4;
  v9 = 0;
  v15 = 0LL;
  if ( a1 )
  {
    UniqueProcess = NtCurrentTeb()->ClientId.UniqueProcess;
    if ( (unsigned int)WerpProcessId(a1) != (_DWORD)UniqueProcess )
    {
      *(_QWORD *)&v15 = a1;
      v9 = 1;
    }
  }
  if ( a2 )
  {
    v13 = v9++;
    *((_QWORD *)&v15 + v13) = a2;
  }
  if ( a3 )
  {
    v14 = v9++;
    *((_QWORD *)&v15 + v14) = a3;
  }
  if ( v9 )
  {
    if ( v9 > 3 )
    {
      return (unsigned int)-1073741684;
    }
    else
    {
      while ( 1 )
      {
        LOBYTE(a4) = 1;
        v10 = NtWaitForMultipleObjects(v9, &v15, 1LL, a4, v5);
        if ( v10 < 0 )
          break;
        if ( v10 < (int)v9 )
          return v4;
        if ( v10 == 258 )
          return (unsigned int)-1073741823;
      }
      return (unsigned int)v10;
    }
  }
  return v4;
}
