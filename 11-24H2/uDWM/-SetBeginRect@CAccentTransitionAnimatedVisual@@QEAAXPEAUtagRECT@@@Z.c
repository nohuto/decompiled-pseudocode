/*
 * XREFs of ?SetBeginRect@CAccentTransitionAnimatedVisual@@QEAAXPEAUtagRECT@@@Z @ 0x1800A1F24
 * Callers:
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800A1AA4 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAccentTransitionAnimatedVisual::SetBeginRect(
        CAccentTransitionAnimatedVisual *this,
        struct tagRECT *a2)
{
  *(struct tagRECT *)((char *)this + 40) = *a2;
}
