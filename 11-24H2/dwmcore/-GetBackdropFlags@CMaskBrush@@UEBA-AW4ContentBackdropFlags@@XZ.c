/*
 * XREFs of ?GetBackdropFlags@CMaskBrush@@UEBA?AW4ContentBackdropFlags@@XZ @ 0x1801B2E80
 * Callers:
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x1801B2BB0 (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 * Callees:
 *     ?GetBackdropFlags@CEffectBrush@@UEBA?AW4ContentBackdropFlags@@XZ @ 0x1801B2EF0 (-GetBackdropFlags@CEffectBrush@@UEBA-AW4ContentBackdropFlags@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CMaskBrush::GetBackdropFlags(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 (*v4)(void); // rax
  char BackdropFlags; // al
  __int64 v6; // rcx

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 120);
  if ( v3 )
  {
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 304LL);
    if ( v4 == CEffectBrush::GetBackdropFlags )
      BackdropFlags = CEffectBrush::GetBackdropFlags();
    else
      BackdropFlags = v4();
    v2 = BackdropFlags;
  }
  v6 = *(_QWORD *)(a1 + 112);
  if ( v6 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 304LL))(v6) | v2;
  return v2;
}
