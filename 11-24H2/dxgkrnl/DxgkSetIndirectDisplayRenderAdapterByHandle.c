/*
 * XREFs of DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1401AFEDC
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140416310 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x140428678 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1401AF7FC (DxgkSetIndirectDisplayRenderAdapter.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1403A23C0 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 */

__int64 __fastcall DxgkSetIndirectDisplayRenderAdapterByHandle(unsigned int a1, struct _LUID *a2)
{
  unsigned int v4; // ebx
  struct DXGADAPTER *v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByHandle(v6, a1);
  if ( v6[0] )
  {
    v4 = DxgkSetIndirectDisplayRenderAdapter(v6[0], a2, 0LL);
  }
  else
  {
    WdLogSingleEntry2(3LL, a1, -1073741811LL);
    WdLogGlobalForLineNumber = 12376;
    v4 = -1073741585;
  }
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v6, 0LL);
  return v4;
}
