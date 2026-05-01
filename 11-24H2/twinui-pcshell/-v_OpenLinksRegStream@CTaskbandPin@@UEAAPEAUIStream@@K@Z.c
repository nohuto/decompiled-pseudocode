/*
 * XREFs of ?v_OpenLinksRegStream@CTaskbandPin@@UEAAPEAUIStream@@K@Z @ 0x180689E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IStream *__fastcall CTaskbandPin::v_OpenLinksRegStream(CTaskbandPin *this, DWORD a2)
{
  return SHOpenRegStream2W(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
           L"FavoritesResolve",
           a2);
}
