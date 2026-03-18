/*
 * XREFs of NtDxgkPinResources @ 0x1402DF1B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1402DF238 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403DA520 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

__int64 __fastcall NtDxgkPinResources(struct _D3DKMT_PINRESOURCES *a1)
{
  __int64 v1; // rcx
  unsigned int v2; // edi
  struct DXGPROCESS *Current; // rax

  v2 = DxgkPinResourcesInternal(a1);
  if ( v2 == -1073741811 )
  {
    if ( byte_14015C147 )
    {
      Current = DXGPROCESS::GetCurrent(v1);
      if ( !Current || (*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 232LL))() )
      {
        DxgCreateLiveDumpWithWdLogs(403LL, 2062LL);
        byte_14015C147 = 0;
      }
    }
  }
  return v2;
}
