/*
 * XREFs of sub_18001B610 @ 0x18001B610
 * Callers:
 *     sub_18001C674 @ 0x18001C674 (sub_18001C674.c)
 * Callees:
 *     sub_18001B694 @ 0x18001B694 (sub_18001B694.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@PEAU32@@Z @ 0x18001CB8C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@@std@.c)
 */

__int64 __fastcall sub_18001B610(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // r8
  __int64 v5; // rax
  char v6; // r9
  __int64 *v7; // r8
  __int64 result; // rax
  __int64 i; // rcx

  *(_QWORD *)(*a1 + 8LL) = sub_18001B694(a1, *(_QWORD *)(*a2 + 8LL), *a1);
  v4 = (_QWORD *)*a1;
  a1[1] = a2[1];
  if ( *(_BYTE *)(v4[1] + 25LL) )
  {
    *v4 = v4;
    result = *a1;
    *(_QWORD *)(*a1 + 16LL) = *a1;
  }
  else
  {
    v5 = std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Min();
    *v7 = v5;
    result = *(_QWORD *)(*a1 + 8LL);
    for ( i = *(_QWORD *)(result + 16); *(_BYTE *)(i + 25) == v6; i = *(_QWORD *)(i + 16) )
      result = i;
    *(_QWORD *)(*a1 + 16LL) = result;
  }
  return result;
}
