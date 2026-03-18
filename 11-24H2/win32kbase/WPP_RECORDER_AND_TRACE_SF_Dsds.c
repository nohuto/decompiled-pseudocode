/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Dsds @ 0x1401AD55C
 * Callers:
 *     IsPrivileged @ 0x1401647E0 (IsPrivileged.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void WPP_RECORDER_AND_TRACE_SF_Dsds(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8,
        ...)
{
  const char *v8; // rdi
  __int64 v9; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  const char *v15; // rcx
  int v16; // [rsp+20h] [rbp-68h]
  __int64 v17; // [rsp+D0h] [rbp+48h] BYREF
  va_list va; // [rsp+D0h] [rbp+48h]
  const char *v19; // [rsp+D8h] [rbp+50h]
  va_list va1; // [rsp+E0h] [rbp+58h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v17 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, const char *);
  v8 = v19;
  v9 = -1LL;
  if ( a2 )
  {
    if ( v19 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( v19[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = v19;
    if ( !v19 )
      v15 = "NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, const char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_9daad97ac4b43801c13299ba3e772a25_Traceguids,
      10LL,
      (__int64 *)va,
      4LL,
      v15,
      v14,
      va1,
      4LL,
      "privilege",
      10LL,
      0LL);
  }
  if ( a3 )
  {
    if ( v8 )
    {
      do
        ++v9;
      while ( v8[v9] );
    }
    if ( !v8 )
      v8 = "NULL";
    LOWORD(v16) = 10;
    WppAutoLogTrace(a4, 4LL, 14LL, &WPP_9daad97ac4b43801c13299ba3e772a25_Traceguids, v16, (__int64 *)va, 4LL, v8);
  }
}
