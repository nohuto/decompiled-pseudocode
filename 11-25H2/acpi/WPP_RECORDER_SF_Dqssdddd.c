/*
 * XREFs of WPP_RECORDER_SF_dqssdddd @ 0x14003FA08
 * Callers:
 *     ACPIThermalWorker @ 0x1400B5660 (ACPIThermalWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_dqssdddd(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned int v9; // r14d
  __int64 v10; // r8
  __int64 v11; // r8
  const char *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  const char *v15; // rcx
  __int64 v16; // rax
  int v18; // [rsp+28h] [rbp-89h]
  __int64 v19; // [rsp+100h] [rbp+4Fh] BYREF
  va_list va; // [rsp+100h] [rbp+4Fh]
  __int64 v21; // [rsp+108h] [rbp+57h] BYREF
  va_list va1; // [rsp+108h] [rbp+57h]
  const char *v23; // [rsp+110h] [rbp+5Fh]
  const char *v24; // [rsp+118h] [rbp+67h]
  __int64 v25; // [rsp+120h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+120h] [rbp+6Fh]
  va_list va3; // [rsp+128h] [rbp+77h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  v23 = va_arg(va2, const char *);
  v24 = va_arg(va2, const char *);
  va_copy(va3, va2);
  v25 = va_arg(va3, _QWORD);
  v5 = (__int64)v23;
  v6 = -1LL;
  v7 = (__int64)v24;
  v9 = a4;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v24 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v24[v10] );
      v11 = v10 + 1;
    }
    else
    {
      v11 = 5LL;
    }
    v12 = v24;
    if ( !v24 )
      v12 = "NULL";
    if ( v23 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( v23[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = v23;
    if ( !v23 )
      v15 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d279f2bc80703de7af54b101c3d5140c_Traceguids,
      v9,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      8LL,
      v15,
      v14,
      v12,
      v11,
      (__int64 *)va2,
      4LL,
      va3);
  }
  if ( v7 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v7 + v16) );
  }
  if ( v5 )
  {
    do
      ++v6;
    while ( *(_BYTE *)(v5 + v6) );
  }
  LOWORD(v18) = v9;
  return WppAutoLogTrace(
           a1,
           4LL,
           16LL,
           &WPP_d279f2bc80703de7af54b101c3d5140c_Traceguids,
           v18,
           (__int64 *)va,
           4LL,
           (__int64 *)va1);
}
