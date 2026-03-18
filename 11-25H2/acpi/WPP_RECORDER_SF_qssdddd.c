/*
 * XREFs of WPP_RECORDER_SF_qssdddd @ 0x140036760
 * Callers:
 *     ACPIThermalRereadTemperature @ 0x140037874 (ACPIThermalRereadTemperature.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_qssdddd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const char *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v11; // r8
  __int64 v12; // r8
  const char *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rdx
  const char *v16; // rcx
  int v17; // [rsp+20h] [rbp-98h]
  __int64 v18; // [rsp+E8h] [rbp+30h] BYREF
  va_list va; // [rsp+E8h] [rbp+30h]
  const char *v20; // [rsp+F0h] [rbp+38h]
  const char *v21; // [rsp+F8h] [rbp+40h]
  __int64 v22; // [rsp+100h] [rbp+48h] BYREF
  va_list va1; // [rsp+100h] [rbp+48h]
  __int64 v24; // [rsp+108h] [rbp+50h] BYREF
  va_list va2; // [rsp+108h] [rbp+50h]
  va_list va3; // [rsp+110h] [rbp+58h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v18 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, const char *);
  v21 = va_arg(va1, const char *);
  va_copy(va2, va1);
  v22 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v24 = va_arg(va3, _QWORD);
  v5 = v20;
  v6 = (__int64)v21;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v21 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( v21[v11] );
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = v21;
    if ( !v21 )
      v13 = "NULL";
    if ( v20 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v20[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = v20;
    if ( !v20 )
      v16 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d279f2bc80703de7af54b101c3d5140c_Traceguids,
      18LL,
      (__int64 *)va,
      8LL,
      v16,
      v15,
      v13,
      v12,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      va3);
  }
  if ( v6 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_BYTE *)(v6 + v9) );
  }
  if ( v5 )
  {
    do
      ++v7;
    while ( v5[v7] );
  }
  if ( !v5 )
    v5 = "NULL";
  LOWORD(v17) = 18;
  return WppAutoLogTrace(a1, 4LL, 16LL, &WPP_d279f2bc80703de7af54b101c3d5140c_Traceguids, v17, (__int64 *)va, 8LL, v5);
}
