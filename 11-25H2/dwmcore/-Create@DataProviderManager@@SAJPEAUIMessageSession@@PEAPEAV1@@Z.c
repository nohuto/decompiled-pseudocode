/*
 * XREFs of ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1801CE980
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800FC890 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1801BD1C4 (-InternalRelease@-$ComPtr@VDataProviderManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0DataProviderManager@@AEAA@PEAUIMessageSession@@@Z @ 0x1801CEA4C (--0DataProviderManager@@AEAA@PEAUIMessageSession@@@Z.c)
 *     ?Initialize@DataProviderManager@@AEAAJXZ @ 0x1801CEB00 (-Initialize@DataProviderManager@@AEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall DataProviderManager::Create(struct IMessageSession *a1, struct DataProviderManager **a2)
{
  DataProviderManager *v4; // rax
  DataProviderManager *v5; // rax
  DataProviderManager *v6; // rbx
  int v8; // eax
  unsigned int v9; // edi
  void *retaddr; // [rsp+28h] [rbp+0h]
  CGlobalDrawingContext *v11; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = (DataProviderManager *)DefaultHeap::AllocClear(0x80uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v5 = DataProviderManager::DataProviderManager(v4, a1);
  v11 = v5;
  v6 = v5;
  if ( v5 )
  {
    CMILRefCountImpl::AddReference((DataProviderManager *)((char *)v5 + 8));
    v8 = DataProviderManager::Initialize(v6);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        (wil::details::in1diag3 *)retaddr,
        (void *)0x40,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<DataProviderManager>::InternalRelease(&v11);
      return v9;
    }
    else
    {
      *a2 = v6;
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x3E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
