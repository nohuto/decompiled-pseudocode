/*
 * XREFs of ?GetLiftedOverlayType@CSurfaceBrush@@UEBA?AW4LiftedOverlayType@@XZ @ 0x18012E020
 * Callers:
 *     ?UpdateContentFlags@CVisual@@AEAAXXZ @ 0x18012DFBC (-UpdateContentFlags@CVisual@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall CSurfaceBrush::GetLiftedOverlayType(__int64 a1)
{
  return (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 136) + 40LL))(*(_QWORD *)(a1 + 136)) != 0;
}
