/*
 * XREFs of ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x180020CA0
 * Callers:
 *     ?UpdateLayout@CContainerVisual@@UEAAJ_N@Z @ 0x180020BC0 (-UpdateLayout@CContainerVisual@@UEAAJ_N@Z.c)
 * Callees:
 *     ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x180022800 (-DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027EF8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::UpdateLayout(CVisual *this)
{
  const struct tagSIZE *v2; // rcx
  struct tagSIZE v4; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v5; // [rsp+50h] [rbp+18h] BYREF

  v2 = (const struct tagSIZE *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    v4 = 0LL;
    v5 = 0LL;
    if ( CVisual::DoCanvasLayout(v2 + 9, (const struct _MARGINS *)this + 5, (const struct tagSIZE *)this + 9, &v5, &v4) )
    {
      (*(void (__fastcall **)(CVisual *, struct tagSIZE *))(*(_QWORD *)this + 80LL))(this, &v4);
      CVisual::SetOffset(this, &v5);
    }
  }
  return 0LL;
}
