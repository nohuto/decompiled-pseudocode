/*
 * XREFs of ?VirtualRefreshRateSupport@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IPEBU_D3DDDI_RATIONAL@@I@Z @ 0x14039C9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1400405F0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x140186D9C (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::VirtualRefreshRateSupport(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DDDI_RATIONAL *a3,
        const struct _D3DDDI_RATIONAL *a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 result; // rax

  v5 = (unsigned int)a2;
  if ( !a3 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2006;
    return 3221225485LL;
  }
  if ( !(_DWORD)a4 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 2014;
    return 3221225485LL;
  }
  v6 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  if ( v6 )
  {
    v8 = 0LL;
    v9 = *(_QWORD *)(v6 + 48);
    if ( v9 != v6 + 48 )
      v8 = v9 - 8;
    while ( 1 )
    {
      if ( !v8 )
      {
        WdLogSingleEntry2(2LL, v5, v7);
        result = 3223192337LL;
        WdLogGlobalForLineNumber = 2040;
        return result;
      }
      if ( *(_DWORD *)(v8 + 24) == (_DWORD)v5 )
        break;
      v10 = *(_QWORD *)(v8 + 8);
      v8 = v10 - 8;
      if ( v10 == v6 + 48 )
        v8 = 0LL;
    }
    return !DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)v8, a3) ? 0xC01E0306 : 0;
  }
  else
  {
    WdLogSingleEntry1(2LL, v7);
    result = 3223192329LL;
    WdLogGlobalForLineNumber = 2027;
  }
  return result;
}
