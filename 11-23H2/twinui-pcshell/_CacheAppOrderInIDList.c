/*
 * XREFs of _CacheAppOrderInIDList @ 0x18075CF40
 * Callers:
 *     ?ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x1807520F0 (-ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x180752350 (-ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 * Callees:
 *     ?ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z @ 0x180756E18 (-ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z.c)
 */

struct _ITEMIDLIST *__fastcall CacheAppOrderInIDList(ITEMIDLIST *a1, const WCHAR *a2, struct _ITEMIDLIST **a3)
{
  struct _ITEMIDLIST *result; // rax

  *a3 = 0LL;
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    a2 = *(const WCHAR **)a2;
  result = ILAppendHiddenStringW(a1, -1091633107, a2);
  *a3 = result;
  return result;
}
