/*
 * XREFs of ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1800495FC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x1800399A0 (-GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ.c)
 *     ?NotifyRemoteOfDirty@CGdiSpriteBitmap@@AEAAXAEBVCRegion@@@Z @ 0x180048868 (-NotifyRemoteOfDirty@CGdiSpriteBitmap@@AEAAXAEBVCRegion@@@Z.c)
 *     ?DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ @ 0x180048A30 (-DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ.c)
 *     ?DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z @ 0x180049258 (-DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z.c)
 *     ?SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z @ 0x18004949C (-SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEBA_NXZ @ 0x180049B40 (-HasNonEmptyContent@CWindowNode@@UEBA_NXZ.c)
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x18007EFA0 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800C0810 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K0@Z @ 0x1801B4050 (-RemoveAt@CPtrArrayBase@@IEAAX_K0@Z.c)
 *     ??$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z @ 0x1801E58B8 (--$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z.c)
 *     McTemplateU0xxx_EventWriteTransfer @ 0x180211948 (McTemplateU0xxx_EventWriteTransfer.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??R?$default_delete@VCComposeTop@@@std@@QEBAXPEAVCComposeTop@@@Z @ 0x1802754B4 (--R-$default_delete@VCComposeTop@@@std@@QEBAXPEAVCComposeTop@@@Z.c)
 */

__int64 __fastcall CWindowNode::SetSpriteBitmap(CWindowNode *this, struct CGdiSpriteBitmap *a2)
{
  unsigned int v4; // esi
  bool v5; // bp
  int v6; // ecx
  char HasNonEmptyContent; // r15
  _QWORD *v8; // r14
  __int64 Count; // rax
  __int64 v10; // rcx
  int v11; // eax
  unsigned __int64 v12; // rax
  CPtrArrayBase *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  char v17; // al
  char v18; // di
  __int64 v19; // rdx
  unsigned int v21; // eax
  __int64 v22; // rcx
  struct CDesktopTree *DesktopTree; // rax
  __int64 v25; // rdx
  struct CResource *v26; // rax
  int v27; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  v5 = 0;
  HasNonEmptyContent = CWindowNode::HasNonEmptyContent(this);
  if ( a2 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xxx_EventWriteTransfer(
        v6,
        (unsigned int)&EVTDESC_WINDOWNODE_GDISPRITE_ASSOCIATION,
        *((_QWORD *)this + 100),
        *((_QWORD *)this + 99),
        (char)a2);
    v8 = (_QWORD *)((char *)this + 832);
    Count = CPtrArray<CVisual>::GetCount((char *)this + 832);
    v10 = Count;
    if ( Count )
    {
      if ( Count == 1 )
      {
        if ( a2 == (struct CGdiSpriteBitmap *)(*v8 & 0xFFFFFFFFFFFFFFFCuLL) )
          goto LABEL_17;
      }
      else
      {
        while ( v10-- )
        {
          if ( a2 == *(struct CGdiSpriteBitmap **)((*v8 & 0xFFFFFFFFFFFFFFFCuLL) + 8 * v10 + 16) )
            goto LABEL_17;
        }
      }
    }
    if ( *((_BYTE *)this + 753) || *((_BYTE *)a2 + 148) )
    {
      CWindowNode::DiscardGdiSpriteBitmaps(this);
      *((_BYTE *)this + 896) |= 8u;
      v5 = 1;
    }
    else if ( CPtrArray<CVisual>::GetCount((char *)this + 832) == 16 )
    {
      if ( (*((_BYTE *)this + 896) & 8) != 0 )
      {
        v26 = (struct CResource *)__A__CPtrArray___CBX__QEBAPEBX_K_Z(v22, 1LL);
        *((_BYTE *)v26 + 149) = 0;
        CResource::UnRegisterNotifierInternal(this, v26);
        CPtrArrayBase::RemoveAt((CWindowNode *)((char *)this + 832), 1uLL, 1uLL);
      }
      else
      {
        CWindowNode::DiscardOldestGdiSpriteBitmaps(this, 1uLL);
      }
    }
    *((_BYTE *)a2 + 152) = *((_BYTE *)this + 752);
    CGdiSpriteBitmap::SetColorKey(a2, (*((_DWORD *)this + 193) & 2) != 0, (CWindowNode *)((char *)this + 848));
    v11 = CResource::RegisterNotifier(this, a2);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x10Cu, 0LL);
      return v4;
    }
    v12 = CPtrArray<CVisual>::GetCount((char *)this + 832);
    v14 = CPtrArrayBase::InsertAt(v13, (unsigned __int64)a2, v12);
    v4 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x10Du, 0LL);
      return v4;
    }
    if ( *((_BYTE *)a2 + 149) )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x5F,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\GdiSpriteBitmap.h",
        (const char *)0x8007029CLL,
        v27);
    *((_BYTE *)a2 + 149) = 1;
    CGdiSpriteBitmap::NotifyRemoteOfDirty(a2, (struct CGdiSpriteBitmap *)((char *)a2 + 176));
  }
  else if ( CPtrArray<CVisual>::GetCount((char *)this + 832) )
  {
    v16 = CPtrArray<CVisual>::GetCount(v15);
    CWindowNode::DiscardOldestGdiSpriteBitmaps(this, v16);
    v5 = (*((_BYTE *)this + 896) & 8) != 0;
    *((_BYTE *)this + 896) &= ~8u;
  }
LABEL_17:
  v17 = CWindowNode::HasNonEmptyContent(this);
  v18 = v17;
  if ( v5 )
  {
    if ( *((_BYTE *)this + 753) )
    {
      DesktopTree = CVisual::GetDesktopTree(this);
      if ( DesktopTree )
      {
        v25 = *((_QWORD *)DesktopTree + 561);
        *((_QWORD *)DesktopTree + 561) = 0LL;
        if ( v25 )
          std::default_delete<CComposeTop>::operator()();
      }
    }
    v21 = 4;
    if ( *((_BYTE *)this + 752) )
    {
      SAFE_DELETE<CShape>((char *)this + 888);
      v19 = 5LL;
    }
    else
    {
      if ( HasNonEmptyContent != v18 )
        v21 = 5;
      v19 = v21;
    }
    goto LABEL_20;
  }
  if ( HasNonEmptyContent != v17 )
  {
    v19 = 1LL;
LABEL_20:
    CVisual::PropagateFlags(this, v19);
  }
  return v4;
}
