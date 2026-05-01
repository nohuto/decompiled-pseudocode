/*
 * XREFs of ?IShellItem_GetFilePlaceholderStatus@@YAJPEAUIShellItem@@PEAK@Z @ 0x1806C9374
 * Callers:
 *     ?GetRealIDL@@YAJPEAUIBindCtx@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z @ 0x1806C90F0 (-GetRealIDL@@YAJPEAUIBindCtx@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001C8F0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitFromItem@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x18006762C (-InitFromItem@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYS.c)
 *     ??$GetAsUInt32@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAK@Z @ 0x1802B32C8 (--$GetAsUInt32@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpro.c)
 *     ??R_lambda_ea9c6a719f4a9bb818bf1c421ccbcdfc_@@QEBA@XZ @ 0x1806C8AC0 (--R_lambda_ea9c6a719f4a9bb818bf1c421ccbcdfc_@@QEBA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IShellItem_GetFilePlaceholderStatus(struct IShellItem *a1, unsigned int *a2)
{
  struct IShellItemVtbl *lpVtbl; // rax
  int As; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  PROPERTYKEY v9; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  __int64 v11; // [rsp+68h] [rbp+18h] BYREF
  bool *v12; // [rsp+70h] [rbp+20h] BYREF

  *a2 = 7;
  LOBYTE(v11) = 1;
  v12 = (bool *)&v11;
  _lambda_ea9c6a719f4a9bb818bf1c421ccbcdfc_::operator()(&v12, (const unsigned __int16 **)a2);
  if ( !(_BYTE)v11 )
    return 0LL;
  lpVtbl = a1->lpVtbl;
  LODWORD(v11) = 0;
  if ( ((unsigned int (__fastcall *)(struct IShellItem *, __int64, __int64 *))lpVtbl->GetAttributes)(
         a1,
         0x40000000LL,
         &v11) )
  {
    return 0LL;
  }
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
  As = wil::PropertyStoreHelperBase<IPropertyStore>::InitFromItem(
         &v11,
         a1,
         8u,
         (__int64)&PKEY_FilePlaceholderStatus,
         1u);
  v6 = As;
  if ( As >= 0 )
  {
    v9 = PKEY_FilePlaceholderStatus;
    As = wil::PropertyStoreHelperBase<IPropertyStore>::GetAsUInt32<_tagpropertykey>(&v11, (__int128 *)&v9, a2);
    v6 = As;
    if ( As == -2147023728 )
    {
      *a2 = 7;
    }
    else if ( As < 0 )
    {
      v7 = 203LL;
      goto LABEL_11;
    }
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v11);
    return 0LL;
  }
  v7 = 202LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"onecoreuap\\internal\\shell\\inc\\private\\itemutil.h",
    (const char *)(unsigned int)As);
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v11);
  return v6;
}
