/*
 * XREFs of WPP_RECORDER_SF_DDDssDssqq @ 0x14004B234
 * Callers:
 *     IrqArbAddAllocation @ 0x1400A9380 (IrqArbAddAllocation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_DDDssDssqq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r10
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r9
  const char *v14; // r13
  __int64 v15; // r8
  const char *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rdx
  const char *v19; // r11
  __int64 v20; // rcx
  __int64 v21; // rcx
  const char *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v27; // [rsp+28h] [rbp-A9h]
  __int64 v29; // [rsp+130h] [rbp+5Fh] BYREF
  va_list va; // [rsp+130h] [rbp+5Fh]
  __int64 v31; // [rsp+138h] [rbp+67h] BYREF
  va_list va1; // [rsp+138h] [rbp+67h]
  __int64 v33; // [rsp+140h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+140h] [rbp+6Fh]
  const char *v35; // [rsp+148h] [rbp+77h]
  const char *v36; // [rsp+150h] [rbp+7Fh]
  __int64 v37; // [rsp+158h] [rbp+87h] BYREF
  va_list va3; // [rsp+158h] [rbp+87h]
  const char *v39; // [rsp+160h] [rbp+8Fh]
  const char *v40; // [rsp+168h] [rbp+97h]
  __int64 v41; // [rsp+170h] [rbp+9Fh] BYREF
  va_list va4; // [rsp+170h] [rbp+9Fh]
  va_list va5; // [rsp+178h] [rbp+A7h] BYREF

  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v29 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v31 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v33 = va_arg(va3, _QWORD);
  v35 = va_arg(va3, const char *);
  v36 = va_arg(va3, const char *);
  va_copy(va4, va3);
  v37 = va_arg(va4, _QWORD);
  v39 = va_arg(va4, const char *);
  v40 = va_arg(va4, const char *);
  va_copy(va5, va4);
  v41 = va_arg(va5, _QWORD);
  v5 = (__int64)v35;
  v6 = (__int64)v36;
  v7 = (__int64)v39;
  v8 = a1;
  v9 = (__int64)v40;
  v10 = -1LL;
  v11 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v40 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( v40[v12] );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = v40;
    if ( !v40 )
      v14 = "NULL";
    if ( v39 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v39[v15] );
      v11 = v15 + 1;
    }
    v16 = v39;
    if ( !v39 )
      v16 = "NULL";
    if ( v36 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( v36[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = v36;
    if ( !v36 )
      v19 = "NULL";
    if ( v35 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( v35[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = v35;
    if ( !v35 )
      v22 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids,
      16LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      v22,
      v21,
      v19,
      v18,
      (__int64 *)va3,
      4LL,
      v16,
      v11,
      v14,
      v13,
      (__int64 *)va4,
      8LL,
      va5,
      8LL,
      0LL);
    v8 = a1;
    v5 = (__int64)v35;
  }
  if ( v9 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *(_BYTE *)(v9 + v23) );
  }
  if ( v7 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( *(_BYTE *)(v7 + v24) );
  }
  if ( v6 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( *(_BYTE *)(v6 + v25) );
  }
  if ( v5 )
  {
    do
      ++v10;
    while ( *(_BYTE *)(v5 + v10) );
  }
  LOWORD(v27) = 16;
  return WppAutoLogTrace(
           v8,
           4LL,
           20LL,
           &WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids,
           v27,
           (__int64 *)va,
           4LL,
           (__int64 *)va1);
}
