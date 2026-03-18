/*
 * XREFs of ?NotifyDWMOfDDAChange@OUTPUTDUPL_MGR@@AEAAXK@Z @ 0x1401E038C
 * Callers:
 *     ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1401DF64C (-CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1402D8EE4 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 * Callees:
 *     <none>
 */

void __fastcall OUTPUTDUPL_MGR::NotifyDWMOfDDAChange(OUTPUTDUPL_MGR *this, unsigned int a2)
{
  _DWORD v2[10]; // [rsp+30h] [rbp-28h] BYREF

  memset(v2, 0, 32);
  v2[0] = 15;
  SMgrGdiCallout(v2, a2, 0LL, 0LL, 0LL, 0LL);
}
