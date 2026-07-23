/*
 * XREFs of EtwpAddInstanceIdToLogFileName @ 0x1800B66D8
 * Callers:
 *     EtwpUpdateUmLogger @ 0x1800B5774 (EtwpUpdateUmLogger.c)
 *     EtwpInitLoggerContext @ 0x1800B5FE0 (EtwpInitLoggerContext.c)
 *     EtwpFlushUmLogger @ 0x1800B6F10 (EtwpFlushUmLogger.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x180082430 (RtlCreateUnicodeString.c)
 *     StringCchPrintfW @ 0x1800B67F4 (StringCchPrintfW.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

wchar_t *__fastcall EtwpAddInstanceIdToLogFileName(__int64 a1, int a2, _UNICODE_STRING *a3)
{
  void *UniqueProcess; // rax
  wchar_t *v5; // r8
  wchar_t *result; // rax
  wchar_t *v7; // rdx
  __int64 v8; // rcx
  signed __int64 v9; // r8
  wchar_t *v10; // rdx
  wchar_t v11; // ax
  int v12; // [rsp+20h] [rbp-828h]
  wchar_t pszDest[1024]; // [rsp+30h] [rbp-818h] BYREF

  *(_QWORD *)&a3->Length = 0LL;
  a3->Buffer = 0LL;
  UniqueProcess = NtCurrentTeb()->ClientId.UniqueProcess;
  v5 = *(wchar_t **)(a1 + 136);
  *(_DWORD *)(a1 + 100) = (_DWORD)UniqueProcess;
  if ( a2 == 1 )
  {
    v7 = v5;
    return RtlCreateUnicodeString(a3, v7) == 0 ? (wchar_t *)8 : 0LL;
  }
  if ( *(_WORD *)(a1 + 130) > 0x800u )
  {
    v8 = 1024LL;
    v9 = (char *)v5 - (char *)pszDest;
    v10 = pszDest;
    do
    {
      if ( v8 == -2147482622 )
        break;
      v11 = *(wchar_t *)((char *)v10 + v9);
      if ( !v11 )
        break;
      *v10++ = v11;
      --v8;
    }
    while ( v8 );
    result = v10 - 1;
    if ( v8 )
      result = v10;
    *result = 0;
    LODWORD(result) = v8 == 0 ? 0x8007007A : 0;
  }
  else
  {
    v12 = (int)UniqueProcess;
    LODWORD(result) = StringCchPrintfW(pszDest, 0x400uLL, L"%s_%d", v5, v12);
  }
  if ( (int)result >= 0 )
  {
    v7 = pszDest;
    return RtlCreateUnicodeString(a3, v7) == 0 ? (wchar_t *)8 : 0LL;
  }
  return (wchar_t *)(unsigned __int16)result;
}
