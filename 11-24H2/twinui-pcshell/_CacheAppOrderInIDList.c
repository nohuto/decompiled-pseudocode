/*
 * XREFs of _CacheAppOrderInIDList @ 0x180696E4C
 * Callers:
 *     ?ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x18068B5F0 (-ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x18068BCC0 (-ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 * Callees:
 *     ?ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z @ 0x180691284 (-ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z.c)
 */

struct _ITEMIDLIST *__fastcall CacheAppOrderInIDList(ITEMIDLIST *a1, WCHAR *a2, struct _ITEMIDLIST **a3)
{
  struct _ITEMIDLIST *result; // rax

  *a3 = 0LL;
  if ( *((_QWORD *)a2 + 3) > 7uLL )
    a2 = *(WCHAR **)a2;
  result = ILAppendHiddenStringW(a1, -1091633107, a2);
  *a3 = result;
  return result;
}
