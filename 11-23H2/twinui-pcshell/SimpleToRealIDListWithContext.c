/*
 * XREFs of SimpleToRealIDListWithContext @ 0x18079B45C
 * Callers:
 *     ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180758B20 (-ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     BindCtx_RegisterFolderEnumMode @ 0x18079A834 (BindCtx_RegisterFolderEnumMode.c)
 *     ?FailForceReturn@@YAHJ@Z @ 0x18079A924 (-FailForceReturn@@YAHJ@Z.c)
 *     ?GetParsingBindCtx@@YAJPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@HPEAPEAUIBindCtx@@@Z @ 0x18079AA34 (-GetParsingBindCtx@@YAJPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@HPEAPEAUIBindCtx@@@Z.c)
 *     ?GetRealIDL@@YAJPEAUIBindCtx@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z @ 0x18079AC54 (-GetRealIDL@@YAJPEAUIBindCtx@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z.c)
 *     SHFullIDListFromFolderAndRelativeItem @ 0x18079B668 (SHFullIDListFromFolderAndRelativeItem.c)
 */

__int64 __fastcall SimpleToRealIDListWithContext(void *a1, __int64 a2, const ITEMIDLIST *a3, _QWORD *a4)
{
  __int64 v6; // rdx
  int ParsingBindCtx; // ebx
  int RealIDL; // eax
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // rdx
  void *v12; // rcx
  struct IBindCtx *v14; // [rsp+30h] [rbp-20h] BYREF
  struct IBindCtx *v15; // [rsp+38h] [rbp-18h] BYREF
  struct IBindCtx *v16; // [rsp+40h] [rbp-10h] BYREF
  LPCITEMIDLIST ppidlLast; // [rsp+48h] [rbp-8h] BYREF
  void *ppv; // [rsp+70h] [rbp+20h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+38h] BYREF

  ppv = a1;
  *a4 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v16);
  ParsingBindCtx = BindCtx_RegisterFolderEnumMode(0LL, v6, &v16);
  if ( ParsingBindCtx >= 0 )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppv);
    ParsingBindCtx = SHBindToFolderIDListParent(0LL, a3, &GUID_93f2f68c_1d1b_11d3_a30e_00c04f79abd1, &ppv, &ppidlLast);
    if ( ParsingBindCtx >= 0 )
    {
      pv = 0LL;
      RealIDL = GetRealIDL(v16, (struct IShellFolder *)ppv, ppidlLast, (LPITEMIDLIST *)&pv);
      ParsingBindCtx = RealIDL;
      if ( RealIDL >= 0 )
        goto LABEL_11;
      if ( FailForceReturn(RealIDL) || v9 == -2147024809 )
      {
        v15 = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v15);
        ParsingBindCtx = GetParsingBindCtx(
                           (struct IShellFolder2 *)ppv,
                           (const struct _ITEMID_CHILD *)ppidlLast,
                           v10,
                           &v15);
        if ( ParsingBindCtx >= 0 )
        {
          v14 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v14);
          ParsingBindCtx = BindCtx_RegisterFolderEnumMode((__int64)v15, v11, &v14);
          if ( ParsingBindCtx >= 0 )
            ParsingBindCtx = GetRealIDL(v14, (struct IShellFolder *)ppv, ppidlLast, (LPITEMIDLIST *)&pv);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v14);
        }
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v15);
        if ( ParsingBindCtx >= 0 )
LABEL_11:
          ParsingBindCtx = SHFullIDListFromFolderAndRelativeItem(ppv, pv, a4);
      }
      v12 = pv;
      pv = 0LL;
      CoTaskMemFree(v12);
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppv);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v16);
  return (unsigned int)ParsingBindCtx;
}
