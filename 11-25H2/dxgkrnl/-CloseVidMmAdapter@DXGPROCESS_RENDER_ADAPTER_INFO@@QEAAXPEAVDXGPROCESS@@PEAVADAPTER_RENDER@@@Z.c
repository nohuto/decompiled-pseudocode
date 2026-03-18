/*
 * XREFs of ?CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1403B920C
 * Callers:
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x14019A850 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x14038128C (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z.c)
 *     ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1403B8AE0 (-Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DXGPROCESS_RENDER_ADAPTER_INFO::CloseVidMmAdapter(
        DXGPROCESS_RENDER_ADAPTER_INFO *this,
        struct DXGPROCESS *a2,
        struct ADAPTER_RENDER *a3)
{
  if ( *((_BYTE *)this + 108) )
  {
    (*(void (__fastcall **)(_QWORD, struct DXGPROCESS *))(*(_QWORD *)(*((_QWORD *)a3 + 95) + 8LL) + 1128LL))(
      *((_QWORD *)a3 + 96),
      a2);
    *((_BYTE *)this + 108) = 0;
  }
}
