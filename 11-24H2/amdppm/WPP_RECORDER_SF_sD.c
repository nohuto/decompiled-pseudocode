/*
 * XREFs of WPP_RECORDER_SF_sd @ 0x1400084CC
 * Callers:
 *     AcpiEval_PSD_TSD @ 0x140029D84 (AcpiEval_PSD_TSD.c)
 *     AcpiParseCore @ 0x14002AFD0 (AcpiParseCore.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_sd(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, const char *a6, ...)
{
  const char *v6; // rdi
  __int64 v7; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  const char *v12; // rcx
  __int64 v13; // rbx
  int v15; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+90h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a6 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a6[v10] );
      v11 = v10 + 1;
    }
    else
    {
      v11 = 5LL;
    }
    v12 = a6;
    if ( !a6 )
      v12 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
      a4,
      v12,
      v11,
      va);
  }
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v13 = v7 + 1;
  }
  else
  {
    v13 = 5LL;
  }
  if ( !a6 )
    v6 = "NULL";
  LOWORD(v15) = a4;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids, v15, v6, v13, va);
}
