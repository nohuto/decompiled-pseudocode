/*
 * XREFs of ?do_hash@?$collate@G@std@@MEBAJPEBG0@Z @ 0x1801495E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::collate<unsigned short>::do_hash(__int64 a1, const unsigned __int8 *a2, __int64 a3)
{
  return std::_Fnv1a_append_bytes(a1, a2, 2 * ((a3 - (__int64)a2) >> 1));
}
