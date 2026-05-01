/*
 * XREFs of ?CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x18068CFE4
 * Callers:
 *     ?_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z @ 0x18069732C (-_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@$$CFAU_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802C4094 (--1-$out_param_t@V-$unique_ptr@$$CFAU_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x1802C40B8 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z @ 0x18030E798 (-ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?ILNextHidden@@YAPEFBU_HIDDENITEMID@@PEFBU1@PEFBU_ITEMIDLIST@@@Z @ 0x18030E828 (-ILNextHidden@@YAPEFBU_HIDDENITEMID@@PEFBU1@PEFBU_ITEMIDLIST@@@Z.c)
 *     BindCtx_SetMode @ 0x18068C478 (BindCtx_SetMode.c)
 *     ?ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z @ 0x180691220 (-ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z.c)
 *     ?_GetTombstoneShortcutLocation@CBackupLocationManager@@AEBAJPEAG0_K@Z @ 0x180697EFC (-_GetTombstoneShortcutLocation@CBackupLocationManager@@AEBAJPEAG0_K@Z.c)
 *     ?s_CopyLocalizedName@CBackupLocationManager@@CAJPEBG0@Z @ 0x1806990F8 (-s_CopyLocalizedName@CBackupLocationManager@@CAJPEBG0@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CBackupLocationManager::CreateTombstoneLnk(
        CBackupLocationManager *this,
        const struct _ITEMIDLIST *a2,
        struct _ITEMIDLIST **a3)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // r9
  HRESULT TombstoneShortcutLocation; // ebx
  int v9; // eax
  struct _ITEMIDLIST *v10; // rdi
  const ITEMIDLIST *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  HRESULT v14; // ebx
  LPITEMIDLIST v15; // rax
  ITEMIDLIST *v16; // rdx
  const struct _ITEMIDLIST *ID; // rbx
  const struct _HIDDENITEMID *HiddenID; // rax
  const struct _ITEMIDLIST *i; // r14
  const struct _HIDDENITEMID *v20; // rsi
  struct _ITEMIDLIST *v21; // rax
  void *p_pidlChild; // [rsp+30h] [rbp-D0h] BYREF
  LPITEMIDLIST ppidl; // [rsp+38h] [rbp-C8h] BYREF
  char v25; // [rsp+40h] [rbp-C0h]
  struct _SHFILEOPSTRUCTW FileOp; // [rsp+48h] [rbp-B8h] BYREF
  struct _ITEMIDLIST *v27; // [rsp+80h] [rbp-80h] BYREF
  LPCITEMIDLIST pidlChild; // [rsp+88h] [rbp-78h] BYREF
  LPITEMIDLIST pidlParent; // [rsp+90h] [rbp-70h] BYREF
  IBindCtx *pbc; // [rsp+98h] [rbp-68h] BYREF
  LPCITEMIDLIST pidl1[2]; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR pszPath[264]; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR v33[264]; // [rsp+2C0h] [rbp+1C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+518h] [rbp+418h]

  memset_0(pszPath, 0, 0x20AuLL);
  if ( !SHGetPathFromIDListW(a2, pszPath) )
  {
    v6 = 3168LL;
LABEL_29:
    TombstoneShortcutLocation = -2147467259;
    goto LABEL_30;
  }
  memset_0(v33, 0, 0x20AuLL);
  TombstoneShortcutLocation = CBackupLocationManager::_GetTombstoneShortcutLocation(this, pszPath, v33, v7);
  if ( TombstoneShortcutLocation < 0 )
  {
    v6 = 3172LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)TombstoneShortcutLocation);
    return (unsigned int)TombstoneShortcutLocation;
  }
  *(_OWORD *)&FileOp.hwnd = 0LL;
  memset(&FileOp.fFlags, 0, 24);
  FileOp.wFunc = 2;
  FileOp.pFrom = pszPath;
  FileOp.pTo = v33;
  FileOp.fFlags = 1556;
  if ( SHFileOperationW(&FileOp) || FileOp.fAnyOperationsAborted )
  {
    v6 = 3179LL;
    goto LABEL_29;
  }
  v9 = CBackupLocationManager::s_CopyLocalizedName(pszPath, v33);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC6E,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v9);
  pidlChild = 0LL;
  p_pidlChild = &pidlChild;
  ppidl = 0LL;
  v25 = 1;
  TombstoneShortcutLocation = SHILCreateFromPath(v33, &ppidl, 0LL);
  wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_pidlChild);
  if ( TombstoneShortcutLocation < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC71,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)TombstoneShortcutLocation);
LABEL_26:
    wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&pidlChild,
      0LL);
    return (unsigned int)TombstoneShortcutLocation;
  }
  pidlParent = 0LL;
  p_pidlChild = &pidlParent;
  ppidl = 0LL;
  v25 = 1;
  TombstoneShortcutLocation = SHGetKnownFolderIDList(&FOLDERID_UserPinned, 0x9000u, 0LL, &ppidl);
  wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_pidlChild);
  if ( TombstoneShortcutLocation < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC74,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)TombstoneShortcutLocation);
LABEL_25:
    wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&pidlParent,
      0LL);
    goto LABEL_26;
  }
  v10 = 0LL;
  v27 = 0LL;
  v11 = ILFindChild(pidlParent, pidlChild);
  if ( !v11 )
    goto LABEL_19;
  pbc = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&pbc);
  if ( (int)BindCtx_SetMode(v13, v12, &pbc) >= 0 )
  {
    pidl1[0] = 0LL;
    p_pidlChild = pidl1;
    ppidl = 0LL;
    v25 = 1;
    v14 = SHParseDisplayName(L"::{1f3427c8-5c10-4210-aa03-2ee45287d668}", pbc, &ppidl, 0, 0LL);
    wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_pidlChild);
    if ( v14 >= 0 )
    {
      v15 = ILCombine(pidl1[0], v11);
      wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v27,
        v15);
      v10 = v27;
    }
    wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)pidl1,
      0LL);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&pbc);
  if ( !v10 )
  {
LABEL_19:
    v16 = (ITEMIDLIST *)pidlChild;
    pidlChild = 0LL;
    wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v27,
      v16);
    v10 = v27;
  }
  ID = ILFindLastID(a2);
  HiddenID = ILFindFirstHiddenID(ID);
  for ( i = (const struct _ITEMIDLIST *)((char *)ID + ID->mkid.cb);
        ;
        HiddenID = (const struct _HIDDENITEMID *)ILNextHidden(v20, i) )
  {
    v20 = HiddenID;
    v27 = 0LL;
    if ( !HiddenID )
      break;
    v21 = ILAppendHiddenID(v10, HiddenID);
    wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v27,
      v21);
    v10 = v27;
    if ( !v27 )
    {
      TombstoneShortcutLocation = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC92,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)0x8007000ELL);
      wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v27,
        0LL);
      goto LABEL_25;
    }
  }
  *a3 = v10;
  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v27,
    0LL);
  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&pidlParent,
    0LL);
  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&pidlChild,
    0LL);
  return 0LL;
}
