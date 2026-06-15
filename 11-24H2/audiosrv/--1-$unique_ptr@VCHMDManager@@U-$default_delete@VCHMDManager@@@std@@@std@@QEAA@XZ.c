/*
 * XREFs of ??1?$unique_ptr@VCHMDManager@@U?$default_delete@VCHMDManager@@@std@@@std@@QEAA@XZ @ 0x1800FD2F8
 * Callers:
 *     HOLOGRAPHICDISPLAY_rundown @ 0x1800FD760 (HOLOGRAPHICDISPLAY_rundown.c)
 *     s_CreateHolographicDisplay @ 0x1800FD780 (s_CreateHolographicDisplay.c)
 *     s_DestroyHolographicDisplay @ 0x1800FD890 (s_DestroyHolographicDisplay.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CHMDManager@@QEAA@XZ @ 0x1800FD328 (--1CHMDManager@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CHMDManager>::~unique_ptr<CHMDManager>(CHMDManager **a1)
{
  CHMDManager *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CHMDManager::~CHMDManager(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x18);
  }
}
