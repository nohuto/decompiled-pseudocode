/*
 * XREFs of WPP_RECORDER_SF_qsLLdqss @ 0x140027824
 * Callers:
 *     ACPIIsPowerRequestBlocked @ 0x140027704 (ACPIIsPowerRequestBlocked.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsLLdqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        __int64 a10,
        char a11,
        const char *a12,
        const char *a13)
{
  const char *v13; // r14
  __int64 v14; // rbx
  const char *v15; // rsi
  const char *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v21; // r9
  __int64 v22; // r9
  const char *v23; // r11
  __int64 v24; // r8
  __int64 v25; // r8
  const char *v26; // r10
  __int64 v27; // rdx
  __int64 v28; // rdx
  const char *v29; // rcx
  int v30; // [rsp+28h] [rbp-99h]
  int v31[4]; // [rsp+B8h] [rbp-9h] BYREF

  v13 = a7;
  v14 = -1LL;
  v15 = a12;
  v17 = a13;
  v31[0] = AcpiPowerCurrentPagingPathTransitions;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a13 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a13[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a13;
    if ( !a13 )
      v23 = "NULL";
    if ( a12 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a12[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = a12;
    if ( !a12 )
      v26 = "NULL";
    if ( a7 )
    {
      v27 = -1LL;
      do
        ++v27;
      while ( a7[v27] );
      v28 = v27 + 1;
    }
    else
    {
      v28 = 5LL;
    }
    v29 = a7;
    if ( !a7 )
      v29 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, const ULONG_PTR *, __int64, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, int *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      48LL,
      &a6,
      8LL,
      v29,
      v28,
      &a8,
      4LL,
      &a9,
      4LL,
      v31,
      4LL,
      &a11,
      8LL,
      v26,
      v25,
      v23,
      v22,
      0LL);
  }
  if ( v17 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
  }
  if ( v15 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v15[v19] );
  }
  if ( v13 )
  {
    do
      ++v14;
    while ( v13[v14] );
  }
  if ( !v13 )
    v13 = "NULL";
  LOWORD(v30) = 48;
  return WppAutoLogTrace(a1, 4LL, 10LL, &WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids, v30, &a6, 8LL, v13);
}
