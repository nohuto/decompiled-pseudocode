/*
 * XREFs of ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x140218648
 * Callers:
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1402183AC (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 *     ?ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z @ 0x1402186BC (-ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z.c)
 *     ?ValidateSubRect@@YAEPEBUtagRECT@@0@Z @ 0x1402187B4 (-ValidateSubRect@@YAEPEBUtagRECT@@0@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

unsigned __int8 __fastcall ValidateRect(const struct tagRECT *a1)
{
  if ( a1->left <= a1->right && a1->top <= a1->bottom )
    return 1;
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 2297;
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid rect", 2297LL, 0LL, 0LL, 0LL, 0LL);
  return 0;
}
