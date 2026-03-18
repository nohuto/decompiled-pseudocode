/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qDs @ 0x1401A46D4
 * Callers:
 *     ?Freeze@tagPROCESSINFO@@AEAAXXZ @ 0x1401A308C (-Freeze@tagPROCESSINFO@@AEAAXXZ.c)
 *     ?Thaw@tagPROCESSINFO@@AEAAXXZ @ 0x1401A39F8 (-Thaw@tagPROCESSINFO@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_qDs(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8,
        char a9,
        char a10,
        const char *a11)
{
  _UNKNOWN **result; // rax
  const char *v12; // rdi
  __int64 v13; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rcx
  int v20; // [rsp+20h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v12 = a11;
  v13 = -1LL;
  if ( a2 )
  {
    if ( a11 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a11[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a11;
    if ( !a11 )
      v19 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_ab198495905d31ffcdd691cf04187f1c_Traceguids,
                            a7,
                            &a9,
                            8LL,
                            &a10,
                            4LL,
                            v19,
                            v18,
                            0LL);
  }
  if ( a3 )
  {
    if ( v12 )
    {
      do
        ++v13;
      while ( v12[v13] );
    }
    LOWORD(v20) = a7;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          14LL,
                          &WPP_ab198495905d31ffcdd691cf04187f1c_Traceguids,
                          v20,
                          &a9,
                          8LL,
                          &a10);
  }
  return result;
}
