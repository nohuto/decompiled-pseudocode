/*
 * XREFs of WPP_RECORDER_SF_LLLqss @ 0x140033C34
 * Callers:
 *     ACPIWakeDisableAsync @ 0x140031C68 (ACPIWakeDisableAsync.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_LLLqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  const char *v11; // rsi
  const char *v12; // rdi
  __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  const char *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  const char *v22; // rax
  int v23; // [rsp+20h] [rbp-88h]

  v11 = a10;
  v12 = a11;
  v13 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
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
    if ( a10 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a10[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = a10;
    if ( !a10 )
      v22 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_1095886ccac338778821f66e45f1cb69_Traceguids,
      11LL,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      4LL,
      &a9,
      8LL,
      v22,
      v21,
      v19,
      v18,
      0LL);
  }
  if ( v12 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v12[v15] );
  }
  if ( v11 )
  {
    do
      ++v13;
    while ( v11[v13] );
  }
  LOWORD(v23) = 11;
  return WppAutoLogTrace(a1, 4LL, 17LL, &WPP_1095886ccac338778821f66e45f1cb69_Traceguids, v23, &a6, 4LL, &a7);
}
