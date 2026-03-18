/*
 * XREFs of ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1403A8C68
 * Callers:
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1403A859C (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14003E58C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1403A8D54 (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

const struct DMMVIDEOPRESENTTARGET *__fastcall BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(
        const struct DMMVIDEOPRESENTTARGET *a1,
        VIDPN_MGR **this)
{
  const struct DXGADAPTER *ContainingAdapter; // rbp
  const struct DMMVIDEOPRESENTTARGET *i; // rdx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rax
  const struct DMMVIDEOPRESENTTARGET *v7; // rbx
  const struct DMMVIDEOPRESENTTARGET *v9; // rdi
  const struct DMMVIDEOPRESENTTARGETSET *v10; // rbx
  const struct DMMVIDEOPRESENTTARGET *j; // rbx

  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this[11]);
  for ( i = a1; ; i = v7 )
  {
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)this, i);
    v7 = NextTarget;
    if ( !NextTarget )
      break;
    if ( !*((_DWORD *)NextTarget + 23)
      && !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(ContainingAdapter, NextTarget, a1)
      && !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(ContainingAdapter, a1, v7) )
    {
      return v7;
    }
  }
  v9 = 0LL;
  v10 = this[3];
  if ( v10 != (const struct DMMVIDEOPRESENTTARGETSET *)(this + 3) )
  {
    for ( j = (const struct DMMVIDEOPRESENTTARGETSET *)((char *)v10 - 8);
          j;
          j = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)this, j) )
    {
      if ( !*((_DWORD *)j + 23)
        && BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(ContainingAdapter, j, v9)
        && BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(ContainingAdapter, a1, j) )
      {
        v9 = j;
      }
    }
  }
  return v9;
}
