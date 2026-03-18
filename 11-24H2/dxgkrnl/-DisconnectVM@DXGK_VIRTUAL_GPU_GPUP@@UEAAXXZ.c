/*
 * XREFs of ?DisconnectVM@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x140218E00
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x140038670 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_GPUP::DisconnectVM(DXGK_VIRTUAL_GPU_GPUP *this)
{
  DXGPROCESS *v2; // rcx

  v2 = (DXGPROCESS *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    DXGPROCESS::ReleaseReference(v2);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
}
