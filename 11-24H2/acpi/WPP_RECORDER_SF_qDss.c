/*
 * XREFs of WPP_RECORDER_SF_qDss @ 0x140070608
 * Callers:
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1400C110C (ProcessorpFindAffinitizedIdtEntries.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qDss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v13; // r8
  __int64 v14; // r8
  const char *v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rdx
  const char *v18; // rcx
  __int64 v19; // rax
  int v21; // [rsp+20h] [rbp-68h]

  v9 = (__int64)a8;
  v10 = -1LL;
  v11 = (__int64)a9;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a9 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a9[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = a9;
    if ( !a9 )
      v15 = "NULL";
    if ( a8 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a8[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a8;
    if ( !a8 )
      v18 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_8369cd7954993692efaf1a45fbdc6aeb_Traceguids,
      12LL,
      &a6,
      8LL,
      &a7,
      4LL,
      v18,
      v17,
      v15,
      v14,
      0LL);
  }
  if ( v11 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v11 + v19) );
  }
  if ( v9 )
  {
    do
      ++v10;
    while ( *(_BYTE *)(v9 + v10) );
  }
  LOWORD(v21) = 12;
  return WppAutoLogTrace(a1, 2LL, 20LL, &WPP_8369cd7954993692efaf1a45fbdc6aeb_Traceguids, v21, &a6, 8LL, &a7);
}
