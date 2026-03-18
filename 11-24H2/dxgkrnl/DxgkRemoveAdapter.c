/*
 * XREFs of DxgkRemoveAdapter @ 0x1401D7558
 * Callers:
 *     DpiRemoveAdapter @ 0x14007C860 (DpiRemoveAdapter.c)
 * Callees:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x140195E9C (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 */

void __fastcall DxgkRemoveAdapter(DXGADAPTER *a1, unsigned __int8 a2, unsigned __int8 a3)
{
  if ( a1 && *((_DWORD *)a1 + 50) != 2 && *((_DWORD *)a1 + 50) != 4 )
    DXGADAPTER::Stop(a1, a2, a3);
}
