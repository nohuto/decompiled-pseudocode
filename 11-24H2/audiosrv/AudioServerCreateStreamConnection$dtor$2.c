/*
 * XREFs of AudioServerCreateStreamConnection$dtor$2 @ 0x1801708B1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioServerCreateStreamConnection_dtor_2(__int64 a1, __int64 a2)
{
  return std::wstring::_Tidy_deallocate(a2 + 72, a2);
}
