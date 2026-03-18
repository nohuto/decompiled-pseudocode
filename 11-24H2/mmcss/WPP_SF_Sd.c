/*
 * XREFs of WPP_SF_Sd @ 0x140004750
 * Callers:
 *     CiLookupTask @ 0x14000E9F0 (CiLookupTask.c)
 *     CiConfigInitializeFromRegistry @ 0x140011320 (CiConfigInitializeFromRegistry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140005A10 (_guard_dispatch_icall.c)
 */

__int64 WPP_SF_Sd(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10LL;
  }
  if ( !a4 )
    a4 = L"NULL";
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           a4,
           v6,
           va,
           4LL,
           0LL);
}
