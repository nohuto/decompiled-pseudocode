/*
 * XREFs of ?SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z @ 0x1806950E0
 * Callers:
 *     ?_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z @ 0x1801E346C (-_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     GetPidlsFromTaskbarLayout @ 0x18068ED6C (GetPidlsFromTaskbarLayout.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180691760 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x180693720 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x180694180 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 *     ?v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180699C70 (-v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 * Callees:
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1802B5734 (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 *     ILExpungeRemovedHiddenIDs @ 0x18030EB98 (ILExpungeRemovedHiddenIDs.c)
 *     ?ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z @ 0x180691284 (-ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z.c)
 */

__int64 __fastcall SetPinSourceForPinnedItem(ITEMIDLIST *a1, struct _ITEMIDLIST **a2, int a3)
{
  unsigned int v3; // edi
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  WCHAR *v9; // rbx
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  const struct _HIDDENITEMID *v14; // rax

  v3 = 0;
  *a2 = 0LL;
  if ( a3 > 5 )
  {
    v10 = a3 - 6;
    if ( !v10 )
    {
      v9 = (WCHAR *)L"CloudPinned";
      goto LABEL_25;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v9 = (WCHAR *)L"PlaceholderPinned";
      goto LABEL_25;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v9 = (WCHAR *)L"RestorePinned";
      goto LABEL_25;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v9 = (WCHAR *)L"ProgrammablePlaceholder";
      goto LABEL_25;
    }
    if ( v13 == 1 )
    {
      v9 = (WCHAR *)L"ProgrammableRestored";
      goto LABEL_25;
    }
    return (unsigned int)-2147024809;
  }
  if ( a3 == 5 )
  {
    v9 = (WCHAR *)L"SCOOBEPinned";
    goto LABEL_25;
  }
  if ( !a3 )
  {
    v9 = (WCHAR *)L"UserPinned";
    goto LABEL_25;
  }
  v6 = a3 - 1;
  if ( !v6 )
  {
    v9 = (WCHAR *)L"SystemPinned";
    goto LABEL_25;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v9 = (WCHAR *)L"OEMPinned";
    goto LABEL_25;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = (WCHAR *)L"EnterprisePinned";
    goto LABEL_25;
  }
  if ( v8 != 1 )
    return (unsigned int)-2147024809;
  v9 = (WCHAR *)L"OOBEPinned";
LABEL_25:
  v14 = ILFindHiddenIDOn(a1, -1091633122);
  if ( v14 )
  {
    *((_DWORD *)v14 + 1) = -1091633152;
    ILExpungeRemovedHiddenIDs(a1);
  }
  *a2 = ILAppendHiddenStringW(a1, -1091633122, v9);
  return v3;
}
