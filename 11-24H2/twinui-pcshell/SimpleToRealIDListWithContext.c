/*
 * XREFs of SimpleToRealIDListWithContext @ 0x1806C982C
 * Callers:
 *     ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180692AC0 (-ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x18022581C (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     SHGetIDListFromObject_0 @ 0x1802D6963 (SHGetIDListFromObject_0.c)
 *     ILCombine_0 @ 0x1802DA0A3 (ILCombine_0.c)
 *     BindCtx_RegisterFolderEnumMode @ 0x1806C8C94 (BindCtx_RegisterFolderEnumMode.c)
 *     ?FailForceReturn@@YAHJ@Z @ 0x1806C8DD4 (-FailForceReturn@@YAHJ@Z.c)
 *     ?GetParsingBindCtx@@YAJPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@HPEAPEAUIBindCtx@@@Z @ 0x1806C8EB4 (-GetParsingBindCtx@@YAJPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@HPEAPEAUIBindCtx@@@Z.c)
 *     ?GetRealIDL@@YAJPEAUIBindCtx@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z @ 0x1806C90F0 (-GetRealIDL@@YAJPEAUIBindCtx@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z.c)
 */

__int64 __fastcall SimpleToRealIDListWithContext(void *a1, __int64 a2, const ITEMIDLIST *a3, LPITEMIDLIST *a4)
{
  __int64 v6; // rdx
  signed int ParsingBindCtx; // ebx
  int RealIDL; // eax
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // rdx
  IUnknown *v12; // rcx
  const ITEMIDLIST *v13; // rsi
  LPITEMIDLIST v14; // rax
  ITEMIDLIST *v15; // rcx
  LPITEMIDLIST v16; // rbx
  struct IBindCtx *v18; // [rsp+30h] [rbp-20h] BYREF
  LPITEMIDLIST ppidl; // [rsp+38h] [rbp-18h] BYREF
  LPCITEMIDLIST pidl2; // [rsp+40h] [rbp-10h] BYREF
  struct IBindCtx *v21; // [rsp+48h] [rbp-8h] BYREF
  void *ppv; // [rsp+70h] [rbp+20h] BYREF
  LPCITEMIDLIST ppidlLast; // [rsp+88h] [rbp+38h] BYREF

  ppv = a1;
  *a4 = 0LL;
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v21);
  ParsingBindCtx = BindCtx_RegisterFolderEnumMode(0LL, v6, &v21);
  if ( ParsingBindCtx >= 0 )
  {
    ppv = 0LL;
    ppidlLast = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppv);
    ParsingBindCtx = SHBindToFolderIDListParent(0LL, a3, &GUID_93f2f68c_1d1b_11d3_a30e_00c04f79abd1, &ppv, &ppidlLast);
    if ( ParsingBindCtx >= 0 )
    {
      pidl2 = 0LL;
      RealIDL = GetRealIDL(
                  v21,
                  (struct IShellFolder *)ppv,
                  (const struct _ITEMID_CHILD *)ppidlLast,
                  (struct _ITEMID_CHILD **)&pidl2);
      ParsingBindCtx = RealIDL;
      if ( RealIDL >= 0 )
        goto LABEL_11;
      if ( FailForceReturn(RealIDL) || v9 == -2147024809 )
      {
        ppidl = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppidl);
        ParsingBindCtx = GetParsingBindCtx(
                           (struct IShellFolder2 *)ppv,
                           (const struct _ITEMID_CHILD *)ppidlLast,
                           v10,
                           (struct IBindCtx **)&ppidl);
        if ( ParsingBindCtx >= 0 )
        {
          v18 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v18);
          ParsingBindCtx = BindCtx_RegisterFolderEnumMode((__int64)ppidl, v11, &v18);
          if ( ParsingBindCtx >= 0 )
            ParsingBindCtx = GetRealIDL(
                               v18,
                               (struct IShellFolder *)ppv,
                               (const struct _ITEMID_CHILD *)ppidlLast,
                               (struct _ITEMID_CHILD **)&pidl2);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v18);
        }
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppidl);
        if ( ParsingBindCtx >= 0 )
        {
LABEL_11:
          v12 = (IUnknown *)ppv;
          v13 = pidl2;
          *a4 = 0LL;
          ppidl = 0LL;
          ParsingBindCtx = SHGetIDListFromObject_0(v12, &ppidl);
          if ( ParsingBindCtx >= 0 )
          {
            v14 = ILCombine_0(ppidl, v13);
            v15 = ppidl;
            v16 = v14;
            *a4 = v14;
            ILFree(v15);
            ParsingBindCtx = v16 == 0LL ? 0x8007000E : 0;
          }
        }
      }
      CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)&pidl2);
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppv);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v21);
  return (unsigned int)ParsingBindCtx;
}
