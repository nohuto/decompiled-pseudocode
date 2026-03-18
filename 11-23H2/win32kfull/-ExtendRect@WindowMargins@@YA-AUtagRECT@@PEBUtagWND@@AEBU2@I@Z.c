/*
 * XREFs of ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x1C006006C
 * Callers:
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0045FC8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C005C7C8 (_anonymous_namespace_--xxxNormalizeRect.c)
 *     _lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator() @ 0x1C01E8624 (_lambda_55b845ca2123bba9cc6e2775260ddcb2_--operator().c)
 *     ?TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOverlapInfo@@PEAUtagRECT@@@Z @ 0x1C01EA4B4 (-TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOve.c)
 *     ?xxxGetArrangeRectFromHitTarget@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01EC878 (-xxxGetArrangeRectFromHitTarget@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindow.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x1C023C18C (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 * Callees:
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x1C005F890 (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
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

  WindowMargins = WindowMargins::_anonymous_namespace_::GetWindowMargins((__int64)retstr, (int)a4);
  this->left = *(_DWORD *)a3 - (__int16)WindowMargins;
  this->top = *((_DWORD *)a3 + 1) - SWORD2(WindowMargins);
  v7 = *((_DWORD *)a3 + 2) + SWORD1(WindowMargins);
  v8 = SHIWORD(WindowMargins);
  result = this;
  this->bottom = *((_DWORD *)a3 + 3) + v8;
  this->right = v7;
  return result;
}
