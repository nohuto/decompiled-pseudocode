/*
 * XREFs of DxgkUnpinFrameBufferForSaveCB @ 0x140016B40
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x140016C90 (DpiGetDxgAdapter.c)
 *     ?UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z @ 0x1403D9024 (-UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkUnpinFrameBufferForSaveCB(__int64 a1, unsigned int *a2)
{
  DXGADAPTER *DxgAdapter; // rax

  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  return DXGADAPTER::UnpinFrameBufferForSave(DxgAdapter, *a2);
}
