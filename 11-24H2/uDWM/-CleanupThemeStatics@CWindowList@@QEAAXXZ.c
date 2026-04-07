/*
 * XREFs of ?CleanupThemeStatics@CWindowList@@QEAAXXZ @ 0x18007A5C0
 * Callers:
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18007A3B8 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CWindowList::CleanupThemeStatics(CWindowList *this, const struct std::nothrow_t *a2)
{
  void *v3; // rcx

  v3 = (void *)*((_QWORD *)this + 66);
  if ( v3 )
  {
    CDisplayBlackCurtainAnimatedVisual::operator delete(v3, a2);
    *((_QWORD *)this + 66) = 0LL;
  }
}
