/*
 * XREFs of ?GetCategory@CAudioStream@@UEAAKXZ @ 0x1800722D0
 * Callers:
 *     ?GetCategory@CAudioStream@@W7EAAKXZ @ 0x180106680 (-GetCategory@CAudioStream@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetCategory(CAudioStream *this)
{
  return *((unsigned int *)this + 104);
}
