/*
 * XREFs of ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z @ 0x1801CFB24
 * Callers:
 *     ?GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1IPEAVCExpressionValue@@@Z @ 0x1801CFA44 (-GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1IPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPropertyValue@DataSourcePropertySet@@QEAAJIPEAVCExpressionValue@@@Z @ 0x1801CFBC4 (-GetPropertyValue@DataSourcePropertySet@@QEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?DoesResourceHaveAccess@DataSourceProxy@@QEAA_NPEAVCResource@@@Z @ 0x1801CFDD0 (-DoesResourceHaveAccess@DataSourceProxy@@QEAA_NPEAVCResource@@@Z.c)
 *     ?GetEffectiveCompositionFrameId@CComposition@@QEBA_KXZ @ 0x1801D0430 (-GetEffectiveCompositionFrameId@CComposition@@QEBA_KXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall DataSourceProxy::GetPropertyValue(
        DataSourceProxy *this,
        struct CDataSourceReader *a2,
        unsigned int a3,
        struct CExpressionValue *a4)
{
  char v7; // al
  CComposition *v9; // rcx
  unsigned __int64 EffectiveCompositionFrameId; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( DataSourceProxy::DoesResourceHaveAccess(this, a2) )
  {
    v7 = *((_BYTE *)this + 224);
    if ( (v7 & 1) == 0 )
    {
      v9 = g_pComposition;
      *((_BYTE *)this + 224) = v7 | 1;
      EffectiveCompositionFrameId = CComposition::GetEffectiveCompositionFrameId(v9);
      (*(void (__fastcall **)(char *, unsigned __int64))(*((_QWORD *)this + 1) + 24LL))(
        (char *)this + 8,
        EffectiveCompositionFrameId);
    }
    return DataSourcePropertySet::GetPropertyValue((DataSourceProxy *)((char *)this + 64), a3, a4);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x180,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourceproxy.cpp",
      (const char *)0x80070005LL);
    return -2147024891;
  }
}
