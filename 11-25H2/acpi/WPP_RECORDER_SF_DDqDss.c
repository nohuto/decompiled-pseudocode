/*
 * XREFs of WPP_RECORDER_SF_DDqDss @ 0x140047114
 * Callers:
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1400C110C (ProcessorpFindAffinitizedIdtEntries.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DDqDss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  const char *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  const char *v22; // rax
  int v23; // [rsp+20h] [rbp-88h]

  v11 = (__int64)a10;
  v12 = (__int64)a11;
  v13 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
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
      &WPP_8369cd7954993692efaf1a45fbdc6aeb_Traceguids,
      11LL,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      8LL,
      &a9,
      4LL,
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
    while ( *(_BYTE *)(v12 + v15) );
  }
  if ( v11 )
  {
    do
      ++v13;
    while ( *(_BYTE *)(v11 + v13) );
  }
  LOWORD(v23) = 11;
  return WppAutoLogTrace(a1, 4LL, 20LL, &WPP_8369cd7954993692efaf1a45fbdc6aeb_Traceguids, v23, &a6, 4LL, &a7);
}
