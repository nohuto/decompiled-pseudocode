/*
 * XREFs of ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C0109704
 * Callers:
 *     _DestroyMenu @ 0x1C0040040 (_DestroyMenu.c)
 *     NtUserCreateWindowEx @ 0x1C006D320 (NtUserCreateWindowEx.c)
 *     xxxMNCanClose @ 0x1C00E47A8 (xxxMNCanClose.c)
 *     xxxGetSysMenuPtr @ 0x1C00E4960 (xxxGetSysMenuPtr.c)
 *     xxxInsertMenuItem @ 0x1C00E4DD0 (xxxInsertMenuItem.c)
 *     MNLookUpItem @ 0x1C00E5D0C (MNLookUpItem.c)
 *     xxxCalcClientRect @ 0x1C010BA30 (xxxCalcClientRect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 != gSmartObjNullRef )
  {
    --*(_DWORD *)(*a1 + 8);
    result = *a1;
    if ( !*(_DWORD *)(*a1 + 8) )
    {
      result = *a1;
      if ( *(_BYTE *)(*a1 + 12) )
        return Win32FreeToPagedLookasideList(gpStackRefLookAside, *a1);
    }
  }
  return result;
}
