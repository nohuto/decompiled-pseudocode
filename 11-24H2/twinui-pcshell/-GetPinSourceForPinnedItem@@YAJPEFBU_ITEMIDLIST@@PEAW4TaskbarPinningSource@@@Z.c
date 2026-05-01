/*
 * XREFs of ?GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z @ 0x18021305C
 * Callers:
 *     ?_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z @ 0x1801E346C (-_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x18068B8B0 (-ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z.c)
 *     ?ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x18068C000 (-ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180691760 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x180694180 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 *     ?v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180699C70 (-v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 * Callees:
 *     ?ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z @ 0x1802B56A4 (-ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z.c)
 */

__int64 __fastcall GetPinSourceForPinnedItem(const struct _ITEMIDLIST *a1, enum TaskbarPinningSource *a2)
{
  const WCHAR *v3; // rdi
  PCWSTR psz1; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)a2 = -1;
  psz1 = 0LL;
  if ( !(unsigned int)ILGetHiddenStringAllocW(a1, 3203334174LL, &psz1) )
    return 0LL;
  v3 = psz1;
  if ( !StrCmpW(psz1, L"UserPinned") )
  {
    *(_DWORD *)a2 = 0;
    return 0LL;
  }
  if ( !StrCmpW(v3, L"OEMPinned") )
  {
    *(_DWORD *)a2 = 2;
    return 0LL;
  }
  if ( !StrCmpW(v3, L"SystemPinned") )
  {
    *(_DWORD *)a2 = 1;
    return 0LL;
  }
  if ( !StrCmpW(v3, L"EnterprisePinned") )
  {
    *(_DWORD *)a2 = 3;
    return 0LL;
  }
  if ( !StrCmpW(v3, L"OOBEPinned") )
  {
    *(_DWORD *)a2 = 4;
    return 0LL;
  }
  if ( !StrCmpW(v3, L"SCOOBEPinned") )
  {
    *(_DWORD *)a2 = 5;
    return 0LL;
  }
  if ( !StrCmpW(v3, L"CloudPinned") )
  {
    *(_DWORD *)a2 = 6;
    return 0LL;
  }
  if ( !StrCmpW(v3, L"PlaceholderPinned") )
  {
    *(_DWORD *)a2 = 7;
    return 0LL;
  }
  if ( !StrCmpW(v3, L"RestorePinned") )
  {
    *(_DWORD *)a2 = 8;
    return 0LL;
  }
  if ( !StrCmpW(v3, L"ProgrammablePlaceholder") )
  {
    *(_DWORD *)a2 = 9;
    return 0LL;
  }
  if ( !StrCmpW(v3, L"ProgrammableRestored") )
  {
    *(_DWORD *)a2 = 10;
    return 0LL;
  }
  return 2147549183LL;
}
