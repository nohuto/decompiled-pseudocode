/*
 * XREFs of ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@PEAU32@@Z @ 0x18001CB8C
 * Callers:
 *     sub_18001B610 @ 0x18001B610 (sub_18001B610.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_180027138 @ 0x180027138 (sub_180027138.c)
 *     sub_180028B64 @ 0x180028B64 (sub_180028B64.c)
 *     sub_180032C74 @ 0x180032C74 (sub_180032C74.c)
 *     sub_180039130 @ 0x180039130 (sub_180039130.c)
 *     sub_18005548C @ 0x18005548C (sub_18005548C.c)
 *     sub_180059BF0 @ 0x180059BF0 (sub_180059BF0.c)
 *     sub_180059CA0 @ 0x180059CA0 (sub_180059CA0.c)
 *     sub_180072E1C @ 0x180072E1C (sub_180072E1C.c)
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
