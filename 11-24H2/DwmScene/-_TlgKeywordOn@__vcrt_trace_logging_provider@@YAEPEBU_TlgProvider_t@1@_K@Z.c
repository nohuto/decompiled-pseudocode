/*
 * XREFs of ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x18000151C
 * Callers:
 *     sub_180020C00 @ 0x180020C00 (sub_180020C00.c)
 *     sub_180020D00 @ 0x180020D00 (sub_180020D00.c)
 *     sub_180020E00 @ 0x180020E00 (sub_180020E00.c)
 *     sub_180020F40 @ 0x180020F40 (sub_180020F40.c)
 *     sub_180021200 @ 0x180021200 (sub_180021200.c)
 *     sub_180021350 @ 0x180021350 (sub_180021350.c)
 *     sub_1800215E0 @ 0x1800215E0 (sub_1800215E0.c)
 *     sub_180021900 @ 0x180021900 (sub_180021900.c)
 *     sub_180021A50 @ 0x180021A50 (sub_180021A50.c)
 *     sub_180021CE0 @ 0x180021CE0 (sub_180021CE0.c)
 *     sub_180021F30 @ 0x180021F30 (sub_180021F30.c)
 *     sub_180022060 @ 0x180022060 (sub_180022060.c)
 *     sub_1800222D0 @ 0x1800222D0 (sub_1800222D0.c)
 *     sub_180022420 @ 0x180022420 (sub_180022420.c)
 *     sub_1800227B0 @ 0x1800227B0 (sub_1800227B0.c)
 *     sub_1800228E0 @ 0x1800228E0 (sub_1800228E0.c)
 *     sub_180022A80 @ 0x180022A80 (sub_180022A80.c)
 *     sub_180022ED0 @ 0x180022ED0 (sub_180022ED0.c)
 *     sub_180022FE0 @ 0x180022FE0 (sub_180022FE0.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall __vcrt_trace_logging_provider::_TlgKeywordOn(
        __vcrt_trace_logging_provider *this,
        unsigned __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *((_QWORD *)this + 2)) != 0 && (a2 & *((_QWORD *)this + 3)) == *((_QWORD *)this + 3) )
    return 1;
  return v2;
}
