/*
 * XREFs of ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@PEAU32@@Z @ 0x18001CCEC
 * Callers:
 *     sub_18001B770 @ 0x18001B770 (sub_18001B770.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_180027298 @ 0x180027298 (sub_180027298.c)
 *     sub_180028CC4 @ 0x180028CC4 (sub_180028CC4.c)
 *     sub_180032DD4 @ 0x180032DD4 (sub_180032DD4.c)
 *     sub_180039290 @ 0x180039290 (sub_180039290.c)
 *     sub_1800555EC @ 0x1800555EC (sub_1800555EC.c)
 *     sub_180059D50 @ 0x180059D50 (sub_180059D50.c)
 *     sub_180059E00 @ 0x180059E00 (sub_180059E00.c)
 *     sub_180072F7C @ 0x180072F7C (sub_180072F7C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Min(
        _QWORD *a1)
{
  __int64 *v1; // rdx

  v1 = (__int64 *)*a1;
  if ( !*(_BYTE *)(*a1 + 25LL) )
  {
    do
    {
      a1 = v1;
      v1 = (__int64 *)*v1;
    }
    while ( !*((_BYTE *)v1 + 25) );
  }
  return a1;
}
