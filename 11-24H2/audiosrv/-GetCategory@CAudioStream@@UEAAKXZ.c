/*
 * XREFs of ?GetCategory@CAudioStream@@UEAAKXZ @ 0x180062580
 * Callers:
 *     ?GetCategory@CAudioStream@@W7EAAKXZ @ 0x18010C7A0 (-GetCategory@CAudioStream@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetCategory(CAudioStream *this)
{
  return *((unsigned int *)this + 104);
}
