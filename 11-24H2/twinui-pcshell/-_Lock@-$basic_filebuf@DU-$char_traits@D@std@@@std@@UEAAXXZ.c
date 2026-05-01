/*
 * XREFs of ?_Lock@?$basic_filebuf@DU?$char_traits@D@std@@@std@@UEAAXXZ @ 0x180616400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::filebuf::_Lock(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 128) )
    return _o__lock_file();
  return result;
}
