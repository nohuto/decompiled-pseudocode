/*
 * XREFs of ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x18000151C
 * Callers:
 *     sub_180020AA0 @ 0x180020AA0 (sub_180020AA0.c)
 *     sub_180020BA0 @ 0x180020BA0 (sub_180020BA0.c)
 *     sub_180020CA0 @ 0x180020CA0 (sub_180020CA0.c)
 *     sub_180020DE0 @ 0x180020DE0 (sub_180020DE0.c)
 *     sub_1800210A0 @ 0x1800210A0 (sub_1800210A0.c)
 *     sub_1800211F0 @ 0x1800211F0 (sub_1800211F0.c)
 *     sub_180021480 @ 0x180021480 (sub_180021480.c)
 *     sub_1800217A0 @ 0x1800217A0 (sub_1800217A0.c)
 *     sub_1800218F0 @ 0x1800218F0 (sub_1800218F0.c)
 *     sub_180021B80 @ 0x180021B80 (sub_180021B80.c)
 *     sub_180021DD0 @ 0x180021DD0 (sub_180021DD0.c)
 *     sub_180021F00 @ 0x180021F00 (sub_180021F00.c)
 *     sub_180022170 @ 0x180022170 (sub_180022170.c)
 *     sub_1800222C0 @ 0x1800222C0 (sub_1800222C0.c)
 *     sub_180022650 @ 0x180022650 (sub_180022650.c)
 *     sub_180022780 @ 0x180022780 (sub_180022780.c)
 *     sub_180022920 @ 0x180022920 (sub_180022920.c)
 *     sub_180022D70 @ 0x180022D70 (sub_180022D70.c)
 *     sub_180022E80 @ 0x180022E80 (sub_180022E80.c)
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
