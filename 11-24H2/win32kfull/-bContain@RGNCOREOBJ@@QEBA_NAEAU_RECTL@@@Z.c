/*
 * XREFs of ?bContain@RGNCOREOBJ@@QEBA_NAEAU_RECTL@@@Z @ 0x1400A4ED8
 * Callers:
 *     ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1400A4EA4 (-bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z.c)
 * Callees:
 *     ?RegionCore_bContain_rcl@Win32kRS@@YAHPEBVREGION_CORE@@AEBU_RECTL@@@Z @ 0x1400A42B8 (-RegionCore_bContain_rcl@Win32kRS@@YAHPEBVREGION_CORE@@AEBU_RECTL@@@Z.c)
 *     ??$IsBaseRustExportsEnabled@$00@@YA_NXZ @ 0x1400CFC10 (--$IsBaseRustExportsEnabled@$00@@YA_NXZ.c)
 */

char __fastcall RGNCOREOBJ::bContain(Win32kRS **this, struct _RECTL *a2)
{
  char v4; // al
  const struct _RECTL *v5; // r8
  Win32kRS *v6; // rcx
  char v7; // bl

  v4 = IsBaseRustExportsEnabled<1>();
  v6 = *this;
  v7 = 0;
  if ( v4 )
    return (unsigned int)Win32kRS::RegionCore_bContain_rcl(v6, (const struct REGION_CORE *)a2, v5) != 0;
  if ( *((_DWORD *)v6 + 7) <= a2->left && *((_DWORD *)v6 + 9) >= a2->right && *((_DWORD *)v6 + 8) <= a2->top )
    return *((_DWORD *)v6 + 10) >= a2->bottom;
  return v7;
}
