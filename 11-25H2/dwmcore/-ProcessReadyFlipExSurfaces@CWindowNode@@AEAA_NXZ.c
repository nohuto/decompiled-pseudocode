/*
 * XREFs of ?ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ @ 0x180108888
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180108570 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800E56E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x180108A80 (-GetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ.c)
 *     ?DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z @ 0x1802104B8 (-DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z.c)
 */

char __fastcall CWindowNode::ProcessReadyFlipExSurfaces(CWindowNode *this)
{
  char v1; // al
  char v2; // si
  _QWORD *v4; // r14
  __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  __int64 v7; // rbp
  unsigned __int64 v8; // rax
  unsigned __int64 Count; // rax
  CCompositionSurfaceBitmap *v11; // rcx
  char v12; // al

  v1 = *((_BYTE *)this + 888);
  v2 = 0;
  if ( (v1 & 4) == 0 )
  {
    v4 = (_QWORD *)((char *)this + 832);
    *((_BYTE *)this + 888) = v1 | 4;
    v5 = *((_QWORD *)this + 104);
    if ( (v5 & 2) != 0 )
      v6 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v6 = *((_QWORD *)this + 104) & 1LL;
    v7 = 8 * v6 + 16;
    while ( 1 )
    {
      v8 = v6;
      v7 -= 8LL;
      --v6;
      if ( !v8 )
        break;
      Count = CPtrArray<CVisual>::GetCount(v4);
      if ( v6 >= Count )
      {
        v11 = 0LL;
      }
      else if ( Count == 1 )
      {
        v11 = (CCompositionSurfaceBitmap *)(*v4 & 0xFFFFFFFFFFFFFFFCuLL);
      }
      else
      {
        v11 = *(CCompositionSurfaceBitmap **)((*v4 & 0xFFFFFFFFFFFFFFFCuLL) + v7);
      }
      if ( CCompositionSurfaceBitmap::GetRenderingRealization(v11) )
      {
        v12 = *((_BYTE *)this + 888);
        if ( (v12 & 0x10) == 0 || v6 )
        {
          *((_BYTE *)this + 888) = v12 | 0x10;
          CWindowNode::DiscardOldestFlipExSurfaces(this, v6);
          CVisual::PropagateFlags((__int64)this, 4u);
          v2 = 1;
        }
        break;
      }
    }
    *((_BYTE *)this + 888) &= ~4u;
  }
  return v2;
}
