/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qssss @ 0x1402C7C80
 * Callers:
 *     ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14014BC38 (-ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qssss(
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
  const char *v8; // r14
  __int64 v9; // rbx
  const char *v10; // rbp
  const char *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // r10
  __int64 result; // rax
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // rbx
  va_list v25; // [rsp+20h] [rbp-98h]
  __int64 v27; // [rsp+100h] [rbp+48h] BYREF
  va_list va; // [rsp+100h] [rbp+48h]
  const char *v29; // [rsp+108h] [rbp+50h]
  const char *v30; // [rsp+110h] [rbp+58h]
  const char *v31; // [rsp+118h] [rbp+60h]
  __int64 v32; // [rsp+120h] [rbp+68h]
  va_list va1; // [rsp+128h] [rbp+70h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v27 = va_arg(va1, _QWORD);
  v29 = va_arg(va1, const char *);
  v30 = va_arg(va1, const char *);
  v31 = va_arg(va1, const char *);
  v32 = va_arg(va1, _QWORD);
  v8 = v29;
  v9 = -1LL;
  v10 = v30;
  v12 = v31;
  v13 = v32;
  v14 = a4;
  result = 5LL;
  if ( a2 )
  {
    if ( v32 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *(_BYTE *)(v32 + v16) );
    }
    if ( v31 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( v31[v17] );
    }
    if ( v30 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( v30[v18] );
    }
    if ( v29 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( v29[v19] );
    }
    va_copy(v25, va);
    ((void (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
    v14 = a4;
    result = 5LL;
  }
  if ( a3 )
  {
    if ( v13 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( *(_BYTE *)(v13 + v20) );
    }
    if ( v12 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( v12[v21] );
    }
    if ( !v12 )
      v12 = "NULL";
    v22 = v10 == 0LL;
    if ( v10 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( v10[v23] );
      result = v23 + 1;
      v22 = v10 == 0LL;
    }
    if ( v22 )
      v10 = "NULL";
    if ( v8 )
    {
      do
        ++v9;
      while ( v8[v9] );
      v24 = v9 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    if ( !v8 )
      v8 = "NULL";
    LOWORD(v25) = 30;
    return WppAutoLogTrace(
             v14,
             3LL,
             7LL,
             &WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
             (_DWORD)v25,
             (__int64 *)va,
             8LL,
             v8,
             v24,
             v10,
             result,
             v12);
  }
  return result;
}
