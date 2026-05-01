/*
 * XREFs of ?SetAppRectOld@CAppLayoutOperationItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEBUtagRECT@@@Z @ 0x1806C7580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall CAppLayoutOperationItem::SetAppRectOld(__int64 a1, int a2, const RECT *a3)
{
  struct tagRECT *v3; // rcx
  BOOL result; // eax

  if ( a2 )
  {
    if ( a2 != 1 )
      return result;
    v3 = (struct tagRECT *)(a1 + 120);
  }
  else
  {
    v3 = (struct tagRECT *)(a1 + 104);
  }
  return CopyRect(v3, a3);
}
