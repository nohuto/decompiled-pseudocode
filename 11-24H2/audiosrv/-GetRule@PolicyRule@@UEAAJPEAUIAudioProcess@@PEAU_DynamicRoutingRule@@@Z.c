/*
 * XREFs of ?GetRule@PolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x180125DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Find@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIPolicyRule@@PEAU3@@Z @ 0x180125A2C (-Find@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s.c)
 */

__int64 __fastcall PolicyRule::GetRule(PolicyRule *this, struct IAudioProcess *a2, struct _DynamicRoutingRule *a3)
{
  struct _DynamicRoutingRule *v4; // rbx
  __int64 v5; // rcx
  _OWORD *v6; // rax
  __int128 v7; // xmm1

  v4 = a3;
  if ( !ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::Find(
          (_QWORD *)this + 2,
          (__int64)a2,
          (__int64)a3) )
    return 2147942487LL;
  v5 = 2LL;
  v6 = (_OWORD *)((char *)this + 64);
  do
  {
    *(_OWORD *)v4 = *v6;
    *((_OWORD *)v4 + 1) = v6[1];
    *((_OWORD *)v4 + 2) = v6[2];
    *((_OWORD *)v4 + 3) = v6[3];
    *((_OWORD *)v4 + 4) = v6[4];
    *((_OWORD *)v4 + 5) = v6[5];
    *((_OWORD *)v4 + 6) = v6[6];
    v4 = (struct _DynamicRoutingRule *)((char *)v4 + 128);
    v7 = v6[7];
    v6 += 8;
    *((_OWORD *)v4 - 1) = v7;
    --v5;
  }
  while ( v5 );
  *(_OWORD *)v4 = *v6;
  *((_DWORD *)v4 + 4) = *((_DWORD *)v6 + 4);
  return 0LL;
}
