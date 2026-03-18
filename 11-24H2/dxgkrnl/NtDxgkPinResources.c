/*
 * XREFs of NtDxgkPinResources @ 0x14032CCA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x14032BC18 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403D3630 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

__int64 __fastcall NtDxgkPinResources(struct _D3DKMT_PINRESOURCES *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  unsigned int v4; // edi
  struct DXGPROCESS *Current; // rax

  v4 = DxgkPinResourcesInternal(a1, a2, a3);
  if ( v4 == -1073741811 )
  {
    if ( byte_14015F147 )
    {
      Current = DXGPROCESS::GetCurrent(v3);
      if ( !Current || (*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 232LL))() )
      {
        DxgCreateLiveDumpWithWdLogs(403LL, 2062LL);
        byte_14015F147 = 0;
      }
    }
  }
  return v4;
}
