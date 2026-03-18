/*
 * XREFs of ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x1801C2CC0
 * Callers:
 *     ?UpdateContentFlags@CVisual@@AEAAXXZ @ 0x18012DFBC (-UpdateContentFlags@CVisual@@AEAAXXZ.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000BF90 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ @ 0x180054610 (-IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ.c)
 *     ?ClearAllBackdropVisualImages@CVisual@@AEAAXXZ @ 0x180108464 (-ClearAllBackdropVisualImages@CVisual@@AEAAXXZ.c)
 *     ?GetBackdropFlags@CMaskBrush@@UEBA?AW4ContentBackdropFlags@@XZ @ 0x1801C2F90 (-GetBackdropFlags@CMaskBrush@@UEBA-AW4ContentBackdropFlags@@XZ.c)
 *     ?GetBackdropFlags@CEffectBrush@@UEBA?AW4ContentBackdropFlags@@XZ @ 0x1801C3000 (-GetBackdropFlags@CEffectBrush@@UEBA-AW4ContentBackdropFlags@@XZ.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18025AA8C (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::UpdateBackdropBlurFlag(CVisual *this)
{
  DwmDbg::Backdrops *v2; // rcx
  bool v3; // bp
  bool v4; // si
  unsigned __int8 v5; // r13
  unsigned __int8 v6; // r15
  __int64 (*v7)(void); // rax
  char BackdropFlags; // al
  _BYTE *v9; // r12
  char *v10; // r14
  char v11; // al
  char v12; // al
  char v13; // cl
  __int64 v14; // rcx
  __int64 v15; // r8
  DwmDbg::DbgString *v16; // rdi
  DwmDbg::DbgString *v17; // rax
  char v18; // al
  int v19; // edi
  __int64 v20; // rax
  __int64 v21; // rcx
  DwmDbg::DbgString *v22; // rdi
  DwmDbg::DbgString *v23; // rax
  DwmDbg::DbgString *v24; // rdi
  DwmDbg::DbgString *v25; // rax
  DwmDbg::DbgString *v26; // rdi
  DwmDbg::DbgString *v27; // rax
  char *v28; // [rsp+60h] [rbp+8h] BYREF
  char *v29; // [rsp+68h] [rbp+10h] BYREF

  v2 = (DwmDbg::Backdrops *)*((_QWORD *)this + 32);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( v2 )
  {
    v7 = *(__int64 (**)(void))(*(_QWORD *)v2 + 304LL);
    if ( v7 == CMaskBrush::GetBackdropFlags )
      BackdropFlags = CMaskBrush::GetBackdropFlags();
    else
      BackdropFlags = v7 == CEffectBrush::GetBackdropFlags ? CEffectBrush::GetBackdropFlags() : v7();
    v3 = (BackdropFlags & 4) != 0;
    v4 = (BackdropFlags & 2) != 0;
    v5 = BackdropFlags & 1;
    if ( (BackdropFlags & 8) != 0 )
      v6 = 1;
  }
  v9 = (char *)this + 106;
  if ( dword_180404D50 )
  {
    if ( v6 != ((*v9 & 2) != 0) )
    {
      v22 = DwmDbg::DbgString::DbgString(&v28, "m_fIsBackdropBlur=%d", v6);
      v23 = DwmDbg::DbgString::DbgString(&v29, "Visual-IsBackdropBlurFlagChanged");
      DwmDbg::Backdrops::LogBrushEtwEvent(v23, this, v22);
    }
    v10 = (char *)this + 107;
    if ( v3 != ((*((_BYTE *)this + 107) & 2) != 0) )
    {
      v26 = DwmDbg::DbgString::DbgString(&v28, "m_fHasBlurredWallpaperBackdropInput=%d", v3);
      v27 = DwmDbg::DbgString::DbgString(&v29, "Visual-HasBlurredWallpaperBackdropInputFlagChanged");
      DwmDbg::Backdrops::LogBrushEtwEvent(v27, this, v26);
    }
  }
  else
  {
    v10 = (char *)this + 107;
  }
  v11 = *v10;
  *v9 &= ~2u;
  v12 = (2 * v3) | v11 & 0xFD;
  *v9 |= 2 * v6;
  *v10 = v12;
  if ( v5 != (v12 & 1) )
  {
    if ( DwmDbg::Backdrops::IsEtwEnabled(v2) )
    {
      v24 = DwmDbg::DbgString::DbgString(&v28, "m_fHasBackdropInput=%d", v5);
      v25 = DwmDbg::DbgString::DbgString(&v29, "Visual-HasBackdropInputFlagChanged");
      DwmDbg::Backdrops::LogBrushEtwEvent(v25, this, v24);
    }
    v18 = *v10;
    if ( v5 )
    {
      v19 = 1;
      *v10 = v18 | 1;
    }
    else
    {
      *v10 = v18 & 0xFE;
      v19 = -1;
      CVisual::ClearAllBackdropVisualImages(this);
    }
    v20 = *((_QWORD *)this + 11);
    if ( v20 && (*v9 & 0x40) != 0 )
    {
      v21 = *((_QWORD *)this + 11);
      do
      {
        *(_DWORD *)(v20 + 264) += v19;
        if ( (*(_BYTE *)(v20 + 106) & 0x40) == 0 )
          break;
        v20 = *(_QWORD *)(v20 + 88);
        if ( v21 )
        {
          v21 = *(_QWORD *)(v21 + 88);
          if ( v21 )
            v21 = *(_QWORD *)(v21 + 88);
        }
      }
      while ( v20 != v21 );
    }
  }
  if ( v4 != ((*v10 & 4) != 0) )
  {
    if ( dword_180404D50 )
    {
      v16 = DwmDbg::DbgString::DbgString(&v28, "m_fHasWindowBackdropInput=%d", v4);
      v17 = DwmDbg::DbgString::DbgString(&v29, "Visual-HasWindowBackdropInputFlagChanged");
      DwmDbg::Backdrops::LogBrushEtwEvent(v17, this, v16);
    }
    v13 = *v10 | 4;
    if ( !v4 )
      v13 = *v10 & 0xFB;
    *v10 = v13;
    v14 = *((_QWORD *)this + 11);
    if ( v14 && (*v9 & 0x40) != 0 )
    {
      v15 = *((_QWORD *)this + 11);
      do
      {
        *(_DWORD *)(v14 + 268) += 2 * v4 - 1;
        if ( (*(_BYTE *)(v14 + 106) & 0x40) == 0 )
          break;
        v14 = *(_QWORD *)(v14 + 88);
        if ( v15 )
        {
          v15 = *(_QWORD *)(v15 + 88);
          if ( v15 )
            v15 = *(_QWORD *)(v15 + 88);
        }
      }
      while ( v14 != v15 );
    }
  }
}
