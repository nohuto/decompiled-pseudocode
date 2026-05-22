/*
 * XREFs of ?Create@SessionMonitor@@SAJPEAUISessionMonitorOwner@@PEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800A4650
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18005C55C (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009A86C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ??0SessionMonitor@@AEAA@PEAUISessionMonitorOwner@@PEAUIMessageSession@@@Z @ 0x1800A4148 (--0SessionMonitor@@AEAA@PEAUISessionMonitorOwner@@PEAUIMessageSession@@@Z.c)
 */

__int64 __fastcall SessionMonitor::Create(
        struct ISessionMonitorOwner *a1,
        struct IMessageSession *a2,
        struct SessionMonitor **a3,
        const char *a4)
{
  SessionMonitor *v8; // rax
  struct SessionMonitor *v9; // rax
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x35,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\sessionmonitor.cpp",
      a4);
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x36,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\sessionmonitor.cpp",
      a4);
  if ( !a3 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x37,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\sessionmonitor.cpp",
      a4);
  if ( SessionMonitor::_instance )
    return wil::details::in1diag3::Log_Hr(
             retaddr,
             (void *)0x3B,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\sessionmonitor.cpp",
             (const char *)0x8000FFFFLL);
  v8 = (SessionMonitor *)operator new(0x28uLL);
  v9 = SessionMonitor::SessionMonitor(v8, a1, a2);
  *a3 = v9;
  if ( !v9 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\sessionmonitor.cpp",
      v10);
  return 0LL;
}
