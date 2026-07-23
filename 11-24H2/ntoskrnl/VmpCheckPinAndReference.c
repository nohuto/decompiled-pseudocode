/*
 * XREFs of VmpCheckPinAndReference @ 0x1406489FC
 * Callers:
 *     VmpPinMemoryRange @ 0x140649280 (VmpPinMemoryRange.c)
 * Callees:
 *     VmpFindNextPinnedPageStateHelper @ 0x140648D94 (VmpFindNextPinnedPageStateHelper.c)
 *     VmpRefDerefPinnedPages @ 0x140649770 (VmpRefDerefPinnedPages.c)
 */

__int64 __fastcall VmpCheckPinAndReference(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7)
{
  unsigned int v7; // ebx
  BOOL v9; // r10d
  __int64 NextPinnedPageStateHelper; // rax

  v7 = 0;
  v9 = (*(_DWORD *)(a2 + 72) & 1) == 0;
  *a6 = 0;
  if ( (a5 == 0) != v9 )
    return (unsigned int)-1073741755;
  NextPinnedPageStateHelper = VmpFindNextPinnedPageStateHelper(a1, a3, a4, 1LL);
  if ( NextPinnedPageStateHelper != a3 )
  {
    if ( NextPinnedPageStateHelper == -1 )
      return v7;
LABEL_9:
    v7 = -1073741267;
    *a7 = 1;
    return v7;
  }
  if ( VmpFindNextPinnedPageStateHelper(a1, a3, a4, 0LL) != -1 )
    goto LABEL_9;
  if ( VmpFindNextPinnedPageStateHelper(a1, a3, a4, 4LL) == -1 )
  {
    VmpRefDerefPinnedPages(a1, a3, a4, 0, 0LL);
    *a6 = 1;
  }
  else
  {
    return (unsigned int)-1073741631;
  }
  return v7;
}
