/*
 * XREFs of ?GetBackdropFlags@CEffectBrush@@UEBA?AW4ContentBackdropFlags@@XZ @ 0x1801B2EF0
 * Callers:
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x1801B2BB0 (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?GetBackdropFlags@CMaskBrush@@UEBA?AW4ContentBackdropFlags@@XZ @ 0x1801B2E80 (-GetBackdropFlags@CMaskBrush@@UEBA-AW4ContentBackdropFlags@@XZ.c)
 *     ?GetBackdropFlags@CEffectBrush@@UEBA?AW4ContentBackdropFlags@@XZ @ 0x1801B2EF0 (-GetBackdropFlags@CEffectBrush@@UEBA-AW4ContentBackdropFlags@@XZ.c)
 * Callees:
 *     ?HasBlurEffectNode@CEffectBrush@@QEBA_NXZ @ 0x1800A8C98 (-HasBlurEffectNode@CEffectBrush@@QEBA_NXZ.c)
 *     ?GetBackdropFlags@CEffectBrush@@UEBA?AW4ContentBackdropFlags@@XZ @ 0x1801B2EF0 (-GetBackdropFlags@CEffectBrush@@UEBA-AW4ContentBackdropFlags@@XZ.c)
 *     ?GetBackdropFlags@CBlurredWallpaperBackdropBrush@@UEBA?AW4ContentBackdropFlags@@XZ @ 0x1801B2FD0 (-GetBackdropFlags@CBlurredWallpaperBackdropBrush@@UEBA-AW4ContentBackdropFlags@@XZ.c)
 *     ?GetBackdropFlags@CWindowBackdropBrush@@UEBA?AW4ContentBackdropFlags@@XZ @ 0x1802247A0 (-GetBackdropFlags@CWindowBackdropBrush@@UEBA-AW4ContentBackdropFlags@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CEffectBrush::GetBackdropFlags(__int64 a1)
{
  unsigned int v1; // eax
  char v2; // bl
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 (*v7)(void); // rax
  char BackdropFlags; // al

  v1 = *(_DWORD *)(a1 + 160);
  v2 = 0;
  if ( v1 )
  {
    v4 = 0LL;
    v5 = v1;
    do
    {
      v6 = *(_QWORD *)(v4 + *(_QWORD *)(a1 + 136));
      if ( v6 )
      {
        v7 = *(__int64 (**)(void))(*(_QWORD *)v6 + 304LL);
        if ( v7 == CBlurredWallpaperBackdropBrush::GetBackdropFlags )
        {
          BackdropFlags = CBlurredWallpaperBackdropBrush::GetBackdropFlags();
        }
        else if ( v7 == CEffectBrush::GetBackdropFlags )
        {
          BackdropFlags = CEffectBrush::GetBackdropFlags();
        }
        else if ( v7 == CWindowBackdropBrush::GetBackdropFlags )
        {
          BackdropFlags = CWindowBackdropBrush::GetBackdropFlags();
        }
        else
        {
          BackdropFlags = v7();
        }
        v2 |= BackdropFlags;
      }
      v4 += 8LL;
      --v5;
    }
    while ( v5 );
    if ( (v2 & 1) != 0 && *(_QWORD *)(a1 + 128) && (unsigned __int8)CEffectBrush::HasBlurEffectNode((CEffectBrush *)a1) )
      return v2 | 8;
  }
  return v2;
}
