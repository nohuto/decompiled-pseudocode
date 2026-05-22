/*
 * XREFs of ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x1800D97E4
 * Callers:
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x1800D8B64 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 * Callees:
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180066E28 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 */

__int64 __fastcall std::wstring::substr(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  if ( a1[2] < a4 )
    a4 = a1[2];
  if ( a1[3] > 7uLL )
    a1 = (_QWORD *)*a1;
  std::wstring::_Construct<1,unsigned short const *>((char **)a2, a1, a4);
  return a2;
}
