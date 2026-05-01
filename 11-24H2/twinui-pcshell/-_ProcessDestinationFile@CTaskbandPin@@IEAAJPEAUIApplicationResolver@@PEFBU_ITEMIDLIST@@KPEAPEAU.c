/*
 * XREFs of ?_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x180688CA8
 * Callers:
 *     ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x180689440 (-v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAP.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x1806889E0 (-_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z.c)
 *     ?_ProcessDestinationFolder@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG@Z @ 0x180688FE4 (-_ProcessDestinationFolder@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPE.c)
 *     ?_TryDestinationViaAppID@CTaskbandPin@@IEAAJPEAUIAssociationArray@@PEAUIApplicationResolver@@PEAPEAUIShellItem@@PEAPEAG3@Z @ 0x180689138 (-_TryDestinationViaAppID@CTaskbandPin@@IEAAJPEAUIAssociationArray@@PEAUIApplicationResolver@@PEA.c)
 *     ?IsPinned@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@@Z @ 0x1806927E0 (-IsPinned@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTaskbandPin::_ProcessDestinationFile(
        CTaskbandPin *this,
        struct IApplicationResolver *a2,
        const struct _ITEMIDLIST *a3,
        int a4,
        struct IShellItem **a5,
        unsigned __int16 **a6,
        unsigned __int16 **a7)
{
  void *v7; // rdi
  int Application; // esi
  CTaskbandPin *v11; // rcx
  int v12; // eax
  CTaskbandPin *v13; // rcx
  unsigned int v14; // r9d
  const WCHAR *FileNameW; // rax
  int v16; // r14d
  struct IShellItem *v17; // rcx
  int IsPinned; // ebx
  LPVOID pv; // [rsp+30h] [rbp-50h] BYREF
  CTaskbandPin *v21; // [rsp+38h] [rbp-48h]
  LPITEMIDLIST ppidl; // [rsp+40h] [rbp-40h] BYREF
  LPCWSTR pszPath; // [rsp+48h] [rbp-38h] BYREF
  struct IAssociationArray *v24; // [rsp+50h] [rbp-30h] BYREF
  LPCWSTR pszStr1; // [rsp+58h] [rbp-28h] BYREF
  void *ppv; // [rsp+60h] [rbp-20h] BYREF
  __int64 v27; // [rsp+68h] [rbp-18h] BYREF

  v7 = 0LL;
  LODWORD(ppidl) = a4;
  *a7 = 0LL;
  v21 = this;
  if ( a6 )
    *a6 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  ppv = 0LL;
  Application = SHCreateItemFromIDList(a3, &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93, &ppv);
  if ( Application >= 0 )
  {
    pszStr1 = 0LL;
    (*(void (__fastcall **)(void *, const PROPERTYKEY *, LPCWSTR *))(*(_QWORD *)ppv + 136LL))(
      ppv,
      &PKEY_FileExtension,
      &pszStr1);
    Application = -2147467259;
    if ( pszStr1 && (!StrCmpICW(pszStr1, L".EXE") || !StrCmpICW(pszStr1, L".MSC")) )
      goto LABEL_28;
    v24 = 0LL;
    Application = (*(__int64 (__fastcall **)(void *, _QWORD, const GUID *, GUID *, struct IAssociationArray **))(*(_QWORD *)ppv + 24LL))(
                    ppv,
                    0LL,
                    &BHID_AssociationArray,
                    &GUID_d7d31033_ccb5_40e3_8efa_a668f231003f,
                    &v24);
    if ( Application < 0 )
      goto LABEL_28;
    Application = CTaskbandPin::_TryDestinationViaAppID(v11, v24, a2, a5, a6, a7);
    if ( Application >= 0
      || (v27 = 0LL,
          Application = (*(__int64 (__fastcall **)(struct IAssociationArray *, __int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v24 + 64LL))(
                          v24,
                          35651598LL,
                          0LL,
                          &GUID_d8f6ad5b_b44f_4bcc_88fd_eb3473db7502,
                          &v27),
          Application < 0) )
    {
LABEL_27:
      (*(void (__fastcall **)(struct IAssociationArray *))(*(_QWORD *)v24 + 16LL))(v24);
LABEL_28:
      CoTaskMemFree((LPVOID)pszStr1);
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
      return (unsigned int)Application;
    }
    pszPath = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, LPCWSTR *))(*(_QWORD *)v27 + 24LL))(
            v27,
            33619975LL,
            0LL,
            &pszPath);
    Application = v12;
    if ( ((unsigned int)ppidl & 0x20000000) != 0 )
    {
      if ( v12 < 0
        || (FileNameW = PathFindFileNameW(pszPath), CompareStringOrdinal(FileNameW, -1, L"explorer.exe", -1, 1) == 2) )
      {
        Application = CTaskbandPin::_ProcessDestinationFolder(v21, a2, a3, v14, a5, a6);
LABEL_26:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        goto LABEL_27;
      }
    }
    else if ( v12 < 0 )
    {
      goto LABEL_26;
    }
    pv = 0LL;
    Application = CTaskbandPin::_GetApplication(v13, a2, (char *)pszPath, a5, a6, (unsigned __int16 **)&pv);
    if ( Application >= 0 )
    {
      v16 = 0;
      if ( !(unsigned int)SHWindowsPolicy(&POLID_NoPinningToTaskbar) )
        goto LABEL_23;
      v17 = *a5;
      ppidl = 0LL;
      Application = SHGetIDListFromObject((IUnknown *)v17, &ppidl);
      if ( Application >= 0 )
      {
        IsPinned = CPinnedList::IsPinned((CTaskbandPin *)((char *)v21 + 16), ppidl);
        ILFree(ppidl);
        LOBYTE(v16) = IsPinned == 0;
      }
      if ( v16 )
      {
LABEL_23:
        *a7 = (unsigned __int16 *)pv;
      }
      else
      {
        v7 = pv;
        Application = -2147024891;
      }
      CoTaskMemFree(v7);
    }
    CoTaskMemFree((LPVOID)pszPath);
    goto LABEL_26;
  }
  return (unsigned int)Application;
}
