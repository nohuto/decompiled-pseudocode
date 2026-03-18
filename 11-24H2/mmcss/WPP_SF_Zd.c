/*
 * XREFs of WPP_SF_Zd @ 0x140004854
 * Callers:
 *     DriverEntry @ 0x140010540 (DriverEntry.c)
 *     CiConfigReadDWORD @ 0x140010D2C (CiConfigReadDWORD.c)
 *     CiConfigQueryValue @ 0x140010EC0 (CiConfigQueryValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140005A10 (_guard_dispatch_icall.c)
 */

__int64 WPP_SF_Zd(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v5; // r10
  const wchar_t *v6; // r8
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a4);
  if ( a4 )
  {
    v5 = *a4;
    if ( *a4 )
    {
      v6 = (const wchar_t *)*((_QWORD *)a4 + 1);
      goto LABEL_6;
    }
  }
  else
  {
    v5 = 8LL;
  }
  v6 = L"NULL";
LABEL_6:
  if ( !a4 )
    a4 = L"\b";
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, const wchar_t *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           a4,
           2LL,
           v6,
           v5,
           va,
           4LL,
           0LL);
}
