/*
 * XREFs of WPP_RECORDER_SF_si @ 0x140008610
 * Callers:
 *     DisplayGenAddr @ 0x14002C9E4 (DisplayGenAddr.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_si(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const char *a6, ...)
{
  const char *v6; // rdi
  __int64 v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  const char *v11; // rcx
  __int64 v12; // rbx
  int v14; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+90h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    if ( a6 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a6[v9] );
      v10 = v9 + 1;
    }
    else
    {
      v10 = 5LL;
    }
    v11 = a6;
    if ( !a6 )
      v11 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
      167LL,
      v11,
      v10,
      va);
  }
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v12 = v7 + 1;
  }
  else
  {
    v12 = 5LL;
  }
  if ( !a6 )
    v6 = "NULL";
  LOWORD(v14) = 167;
  return WppAutoLogTrace(a1, 5LL, 2LL, &WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids, v14, v6, v12, va);
}
