/*
 * XREFs of ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014AC60
 * Callers:
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1400F4FF8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     ?TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOverlapInfo@@PEAUtagRECT@@@Z @ 0x140186FEC (-TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOve.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x14021FA10 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 *     _lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator() @ 0x1402A5164 (_lambda_55b845ca2123bba9cc6e2775260ddcb2_--operator().c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D70FC (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402D7FA8 (-xxxTransformRectToMonitor@AdvancedWindowPos@@YA-AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CM.c)
 * Callees:
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x14014C28C (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 */

struct tagRECT *__fastcall WindowMargins::ExtendRect(
        struct tagRECT *this,
        struct tagRECT *__return_ptr retstr,
        const struct tagWND *a3,
        const struct tagRECT *a4)
{
  __int64 WindowMargins; // rax
  int v7; // edx
  int v8; // ecx
  struct tagRECT *result; // rax

  WindowMargins = WindowMargins::_anonymous_namespace_::GetWindowMargins(retstr, (unsigned int)a4);
  this->left = *(_DWORD *)a3 - (__int16)WindowMargins;
  this->top = *((_DWORD *)a3 + 1) - SWORD2(WindowMargins);
  v7 = *((_DWORD *)a3 + 2) + SWORD1(WindowMargins);
  v8 = SHIWORD(WindowMargins);
  result = this;
  this->bottom = *((_DWORD *)a3 + 3) + v8;
  this->right = v7;
  return result;
}
