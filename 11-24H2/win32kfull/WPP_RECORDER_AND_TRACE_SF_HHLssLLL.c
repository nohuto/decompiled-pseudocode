/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_HHLssLLL @ 0x1402AF054
 * Callers:
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@W4MouseInputDataProcessingOptions@@@Z @ 0x1402AEC78 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@W4MouseInputDataProcessingOptions@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_HHLssLLL(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ...)
{
  _UNKNOWN **result; // rax
  const char *v9; // rsi
  __int64 v10; // rbx
  const char *v11; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdx
  const char *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  const char *v20; // rcx
  __int64 v21; // rax
  int v22; // [rsp+28h] [rbp-89h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+1Fh] BYREF
  __int64 v24; // [rsp+118h] [rbp+67h] BYREF
  va_list va; // [rsp+118h] [rbp+67h]
  __int64 v26; // [rsp+120h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+120h] [rbp+6Fh]
  __int64 v28; // [rsp+128h] [rbp+77h] BYREF
  va_list va2; // [rsp+128h] [rbp+77h]
  const char *v30; // [rsp+130h] [rbp+7Fh]
  const char *v31; // [rsp+138h] [rbp+87h]
  __int64 v32; // [rsp+140h] [rbp+8Fh] BYREF
  va_list va3; // [rsp+140h] [rbp+8Fh]
  __int64 v34; // [rsp+148h] [rbp+97h] BYREF
  va_list va4; // [rsp+148h] [rbp+97h]
  va_list va5; // [rsp+150h] [rbp+9Fh] BYREF

  va_start(va5, a8);
  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v24 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v26 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v28 = va_arg(va3, _QWORD);
  v30 = va_arg(va3, const char *);
  v31 = va_arg(va3, const char *);
  va_copy(va4, va3);
  v32 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v34 = va_arg(va5, _QWORD);
  result = &retaddr;
  v9 = v30;
  v10 = -1LL;
  v11 = v31;
  if ( a2 )
  {
    if ( v31 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v31[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = v31;
    if ( !v31 )
      v17 = "NULL";
    if ( v30 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( v30[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = v30;
    if ( !v30 )
      v20 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_e82ee346f5e639e888c62409ba09f74f_Traceguids,
                            12LL,
                            (__int64 *)va,
                            2LL,
                            (__int64 *)va1,
                            2LL,
                            (__int64 *)va2,
                            4LL,
                            v20,
                            v19,
                            v17,
                            v16,
                            (__int64 *)va3,
                            4LL,
                            (__int64 *)va4,
                            4LL,
                            va5,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    if ( v11 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( v11[v21] );
    }
    if ( v9 )
    {
      do
        ++v10;
      while ( v9[v10] );
    }
    if ( !v9 )
      v9 = "NULL";
    LOWORD(v22) = 12;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          5LL,
                          10LL,
                          &WPP_e82ee346f5e639e888c62409ba09f74f_Traceguids,
                          v22,
                          (__int64 *)va,
                          2LL,
                          (__int64 *)va1,
                          2LL,
                          (__int64 *)va2,
                          4LL,
                          v9);
  }
  return result;
}
