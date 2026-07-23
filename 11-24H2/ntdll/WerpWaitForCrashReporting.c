/*
 * XREFs of WerpWaitForCrashReporting @ 0x1800AC754
 * Callers:
 *     RtlReportExceptionHelper @ 0x1800ABF6C (RtlReportExceptionHelper.c)
 *     RtlReportExceptionEx @ 0x180132500 (RtlReportExceptionEx.c)
 * Callees:
 *     WerpProcessId @ 0x1800AC6B4 (WerpProcessId.c)
 *     NtWaitForMultipleObjects @ 0x180160BA0 (NtWaitForMultipleObjects.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall WerpWaitForCrashReporting(void *a1, void *a2, void *a3, LARGE_INTEGER *a4)
{
  unsigned int v4; // edi
  ULONG v9; // esi
  NTSTATUS v10; // eax
  void *UniqueProcess; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  HANDLE Handles[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h]

  v4 = 0;
  v16 = 0LL;
  v9 = 0;
  *(_OWORD *)Handles = 0LL;
  if ( a1 )
  {
    UniqueProcess = NtCurrentTeb()->ClientId.UniqueProcess;
    if ( (unsigned int)WerpProcessId(a1) != (_DWORD)UniqueProcess )
    {
      Handles[0] = a1;
      v9 = 1;
    }
  }
  if ( a2 )
  {
    v13 = v9++;
    Handles[v13] = a2;
  }
  if ( a3 )
  {
    v14 = v9++;
    Handles[v14] = a3;
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
        v10 = NtWaitForMultipleObjects(v9, Handles, WaitAny, 1u, a4);
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
