/*
 * XREFs of sub_180028CC4 @ 0x180028CC4
 * Callers:
 *     sub_1800297B8 @ 0x1800297B8 (sub_1800297B8.c)
 *     sub_18006D2D8 @ 0x18006D2D8 (sub_18006D2D8.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@PEAU32@@Z @ 0x18001CCEC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@@std@.c)
 *     sub_180028D48 @ 0x180028D48 (sub_180028D48.c)
 */

__int64 __fastcall sub_180028CC4(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // r8
  __int64 v5; // rcx
  _QWORD *v6; // rax
  char v7; // r9
  _QWORD *v8; // r8
  __int64 result; // rax
  __int64 i; // rcx

  *(_QWORD *)(*a1 + 8LL) = sub_180028D48(a1, *(_QWORD *)(*a2 + 8LL), *a1);
  v4 = (_QWORD *)*a1;
  a1[1] = a2[1];
  v5 = v4[1];
  if ( *(_BYTE *)(v5 + 25) )
  {
    *v4 = v4;
    result = *a1;
    *(_QWORD *)(*a1 + 16LL) = *a1;
  }
  else
  {
    v6 = std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Min((_QWORD *)v5);
    *v8 = v6;
    result = *(_QWORD *)(*a1 + 8LL);
    for ( i = *(_QWORD *)(result + 16); *(_BYTE *)(i + 25) == v7; i = *(_QWORD *)(i + 16) )
      result = i;
    *(_QWORD *)(*a1 + 16LL) = result;
  }
  return result;
}
