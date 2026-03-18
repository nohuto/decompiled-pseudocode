/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Ds @ 0x1401AA608
 * Callers:
 *     Win32JobObject::_anonymous_namespace_::SetRestrictedFlags @ 0x1401AA1F4 (Win32JobObject--_anonymous_namespace_--SetRestrictedFlags.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_Ds(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        const char *a10)
{
  _UNKNOWN **result; // rax
  const char *v11; // rdi
  __int64 v12; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rcx
  int v19; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v11 = a10;
  v12 = -1LL;
  if ( a2 )
  {
    if ( a10 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a10[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a10;
    if ( !a10 )
      v18 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_567733cb5f8835e6e7156d912fa354a1_Traceguids,
                            12LL,
                            &a9,
                            4LL,
                            v18,
                            v17,
                            0LL);
  }
  if ( a3 )
  {
    if ( v11 )
    {
      do
        ++v12;
      while ( v11[v12] );
    }
    if ( !v11 )
      v11 = "NULL";
    LOWORD(v19) = 12;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          14LL,
                          &WPP_567733cb5f8835e6e7156d912fa354a1_Traceguids,
                          v19,
                          &a9,
                          4LL,
                          v11);
  }
  return result;
}
