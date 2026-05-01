/*
 * XREFs of ?_RemoveOwnerDrawFromMenuWorker@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x1806874A8
 * Callers:
 *     ?RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x180687104 (-RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 *     ?_RemoveOwnerDrawFromMenuWorker@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x1806874A8 (-_RemoveOwnerDrawFromMenuWorker@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18002AC94 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@W_ea_18002AC94.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x180686D24 (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 *     ?_RemoveOwnerDrawFromMenuWorker@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x1806874A8 (-_RemoveOwnerDrawFromMenuWorker@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 */

void __fastcall ImmersiveContextMenuHelper::_RemoveOwnerDrawFromMenuWorker(
        ImmersiveContextMenuHelper *this,
        HMENU a2,
        HWND a3)
{
  UINT v5; // esi
  signed int Error; // edi
  struct ContextMenuRenderingData *ContextMenuDataForItem; // rax
  struct ContextMenuRenderingData *v8; // rbx
  HWND v9; // r8
  LPCWSTR lpString[4]; // [rsp+28h] [rbp-79h] BYREF
  struct tagMENUITEMINFOW mii; // [rsp+48h] [rbp-59h] BYREF
  MENUITEMINFOW v12; // [rsp+98h] [rbp-9h] BYREF

  v5 = 0;
  do
  {
    memset_0(&mii, 0, sizeof(mii));
    mii.cbSize = 80;
    mii.fMask = 422;
    if ( GetMenuItemInfoW((HMENU)this, v5, 1, &mii) )
    {
      Error = 0;
    }
    else
    {
      Error = ResultFromKnownLastError();
      if ( Error < 0 )
        goto LABEL_15;
    }
    memset_0(&v12, 0, sizeof(v12));
    v12.cbSize = 80;
    v12.fMask = 384;
    v12.fType = mii.fType & 0xFFFFFEFF;
    if ( mii.dwItemData )
    {
      ContextMenuDataForItem = ImmersiveContextMenuHelper::GetContextMenuDataForItem(
                                 (HWND)a2,
                                 (HWND)mii.dwItemData,
                                 mii.wID);
      v8 = ContextMenuDataForItem;
      if ( ContextMenuDataForItem )
      {
        if ( ContextMenuDataForItem == (struct ContextMenuRenderingData *)mii.dwItemData )
        {
          v12.dwItemData = 0LL;
          v12.fMask |= 0x20u;
        }
        memset(lpString, 0, 24);
        if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
                    lpString,
                    L"ImmersiveContextMenuArray_%lu-%lu",
                    mii.dwItemData,
                    mii.wID) >= 0 )
          RemovePropW((HWND)a2, lpString[0]);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)lpString);
        if ( *((_QWORD *)v8 + 4) )
        {
          v12.hbmpItem = (HBITMAP)*((_QWORD *)v8 + 4);
          *((_QWORD *)v8 + 4) = 0LL;
        }
      }
    }
    SetMenuItemInfoW((HMENU)this, v5, 1, &v12);
    if ( mii.hSubMenu )
      ImmersiveContextMenuHelper::_RemoveOwnerDrawFromMenuWorker((ImmersiveContextMenuHelper *)mii.hSubMenu, a2, v9);
LABEL_15:
    ++v5;
  }
  while ( Error >= 0 );
}
