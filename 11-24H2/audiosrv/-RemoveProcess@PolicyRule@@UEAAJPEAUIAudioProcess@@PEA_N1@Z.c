/*
 * XREFs of ?RemoveProcess@PolicyRule@@UEAAJPEAUIAudioProcess@@PEA_N1@Z @ 0x1801264A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeNode@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800C768C (-FreeNode@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3.c)
 *     ?Find@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIPolicyRule@@PEAU3@@Z @ 0x180125A2C (-Find@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PolicyRule::RemoveProcess(PolicyRule *this, struct IAudioProcess *a2, bool *a3, bool *a4)
{
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // r10
  _QWORD **v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // r8

  v8 = (_QWORD *)((char *)this + 16);
  v9 = ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::Find(
         (_QWORD *)this + 2,
         (__int64)a2,
         (__int64)a3);
  v10 = v9;
  if ( !v9 )
    return 2147943568LL;
  v11 = (_QWORD **)(v9 + 1);
  if ( v9 == (_QWORD *)*v8 )
    *v8 = *v9;
  else
    **v11 = *v9;
  v12 = *v11;
  if ( v10 == (_QWORD *)v8[1] )
    v8[1] = v12;
  else
    *(_QWORD *)(*v10 + 8LL) = v12;
  ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::FreeNode(
    v8,
    v10);
  *a3 = ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::Find(
          v8,
          (__int64)a2,
          v13) == 0LL;
  *a4 = *((_QWORD *)this + 4) == 0LL;
  return 0LL;
}
