/*
 * XREFs of ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x140194BCC
 * Callers:
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1401962F4 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140198804 (-Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1403F5758 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RemovePlaneConfig@@YAXPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@H@Z @ 0x140198460 (-RemovePlaneConfig@@YAXPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@H@Z.c)
 *     ?RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z @ 0x140198574 (-RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z.c)
 *     ?IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z @ 0x140314C18 (-IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x140315444 (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z @ 0x14038BD8C (-IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1403C0D60 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 */

void __fastcall DISPLAY_SOURCE::ClearAllDisplayState(DISPLAY_SOURCE *this)
{
  unsigned int i; // edi
  struct _DISPLAY_PLANE_CONFIG_QUEUE *j; // rsi
  struct DXGGLOBAL *Global; // rax

  for ( i = 0; i < *((_DWORD *)this + 936); ++i )
  {
    for ( j = (DISPLAY_SOURCE *)((char *)this + 168 * i + 1128);
          !IsDisplayPlaneConfigQueueEmpty(j);
          RemovePlaneConfig(j, *(_DWORD *)j) )
    {
      ;
    }
  }
  *((_DWORD *)this + 936) = 0;
  *((_BYTE *)this + 3752) = 0;
  while ( !IsPostCompositionConfigQueueEmpty((DISPLAY_SOURCE *)((char *)this + 2808)) )
    RemovePostCompositionConfig((DISPLAY_SOURCE *)((char *)this + 2808), *((_DWORD *)this + 702));
  DISPLAY_SOURCE::ClearAllQueryStateUnsafe(this);
  Global = DXGGLOBAL::GetGlobal();
  QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 179), 0);
}
