/*
 * XREFs of sub_18001FE74 @ 0x18001FE74
 * Callers:
 *     sub_180018E90 @ 0x180018E90 (sub_180018E90.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001FE34 @ 0x18001FE34 (sub_18001FE34.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18001FE74(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001B1F8(400LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::TelemetryTraceLoggerWin>::`vftable';
    sub_18001FE34();
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  return a1;
}
