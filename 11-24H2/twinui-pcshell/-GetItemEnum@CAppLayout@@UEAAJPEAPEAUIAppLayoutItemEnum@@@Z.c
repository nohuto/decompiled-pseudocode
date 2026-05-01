/*
 * XREFs of ?GetItemEnum@CAppLayout@@UEAAJPEAPEAUIAppLayoutItemEnum@@@Z @ 0x1806C3EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetItemEnumEx@CAppLayout@@UEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ENUM_FLAGS@@PEAPEAUIAppLayoutItemEnum@@@Z @ 0x1806C3EE0 (-GetItemEnumEx@CAppLayout@@UEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ENUM_FLAG.c)
 */

__int64 __fastcall CAppLayout::GetItemEnum(CAppLayout *this, struct IAppLayoutItemEnum **a2)
{
  return CAppLayout::GetItemEnumEx(this, 0LL, 1LL);
}
