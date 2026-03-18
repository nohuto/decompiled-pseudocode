/*
 * XREFs of ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x14039A1B4
 * Callers:
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_KH@Z @ 0x1401F876C (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_KH@Z.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_K@Z @ 0x1401F89CC (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_K@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICE::GetContexts(DXGDEVICE *this, unsigned int *a2, unsigned int *const a3)
{
  __int64 v3; // r10
  _DWORD *i; // r9

  v3 = 0LL;
  for ( i = (_DWORD *)*((_QWORD *)this + 62); i != (_DWORD *)((char *)this + 496); i = *(_DWORD **)i )
  {
    if ( !i )
      break;
    a3[v3] = i[6];
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 0x40 )
      break;
  }
  *a2 = v3;
}
