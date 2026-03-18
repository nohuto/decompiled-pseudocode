/*
 * XREFs of ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x14018884C
 * Callers:
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1403A859C (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14003E58C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1403A8D54 (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

const struct DMMVIDEOPRESENTTARGET *__fastcall BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(VIDPN_MGR **this)
{
  struct DXGADAPTER *ContainingAdapter; // rax
  const struct DMMVIDEOPRESENTTARGET *v3; // rdi
  const struct DMMVIDEOPRESENTTARGETSET *v4; // rbx
  const struct DXGADAPTER *v5; // rbp
  const struct DMMVIDEOPRESENTTARGET *i; // rbx

  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this[11]);
  v3 = 0LL;
  v4 = this[3];
  v5 = ContainingAdapter;
  if ( v4 != (const struct DMMVIDEOPRESENTTARGETSET *)(this + 3) )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGETSET *)((char *)v4 - 8);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)this, i) )
    {
      if ( !*((_DWORD *)i + 23) && BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v5, i, v3) )
        v3 = i;
    }
  }
  return v3;
}
