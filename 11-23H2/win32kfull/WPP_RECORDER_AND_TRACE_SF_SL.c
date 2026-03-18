/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_SL @ 0x1C00A2B58
 * Callers:
 *     xxxSwitchDesktop @ 0x1C002C52C (xxxSwitchDesktop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_SL(
        __int64 a1,
        char a2,
        char a3,
        _DWORD a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const char *a9,
        ...)
{
  _UNKNOWN **result; // rax
  const char *v10; // rbx
  struct RECORDER_LOG__ *v11; // r14
  __int64 v12; // rdi
  __int64 v15; // rsi
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rcx
  int v20; // [rsp+20h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  va_list va; // [rsp+B8h] [rbp+50h] BYREF

  va_start(va, a9);
  result = &retaddr;
  v10 = a9;
  v11 = gFullLog;
  v12 = -1LL;
  v15 = 10LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( *(_WORD *)&a9[2 * v17] );
      v18 = 2 * v17 + 2;
    }
    else
    {
      v18 = 10LL;
    }
    v19 = a9;
    if ( !a9 )
      v19 = L"NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const char *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_580b03b5f0a135a81a235548571d0f77_Traceguids,
                            24LL,
                            v19,
                            v18,
                            va,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    v16 = a9 == 0LL;
    if ( a9 )
    {
      do
        ++v12;
      while ( *(_WORD *)&a9[2 * v12] );
      v15 = 2 * v12 + 2;
      v16 = a9 == 0LL;
    }
    if ( v16 )
      v10 = L"NULL";
    LOWORD(v20) = 24;
    return (_UNKNOWN **)WppAutoLogTrace(
                          v11,
                          4LL,
                          3LL,
                          &WPP_580b03b5f0a135a81a235548571d0f77_Traceguids,
                          v20,
                          v10,
                          v15,
                          va);
  }
  return result;
}
