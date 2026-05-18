/*
 * XREFs of sub_180059D50 @ 0x180059D50
 * Callers:
 *     sub_18005B0FC @ 0x18005B0FC (sub_18005B0FC.c)
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 *     sub_18007409C @ 0x18007409C (sub_18007409C.c)
 *     sub_1800746A0 @ 0x1800746A0 (sub_1800746A0.c)
 *     sub_1800747C0 @ 0x1800747C0 (sub_1800747C0.c)
 *     sub_180077A60 @ 0x180077A60 (sub_180077A60.c)
 *     sub_180083580 @ 0x180083580 (sub_180083580.c)
 *     sub_18008DF4C @ 0x18008DF4C (sub_18008DF4C.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@PEAU32@@Z @ 0x18001CCEC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@@std@.c)
 *     sub_18004A1AC @ 0x18004A1AC (sub_18004A1AC.c)
 *     sub_180059FF8 @ 0x180059FF8 (sub_180059FF8.c)
 *     sub_18005AD6C @ 0x18005AD6C (sub_18005AD6C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180059D50(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // r8
  __int64 v8; // rax
  __int64 i; // rcx
  __int64 *v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v12; // [rsp+28h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v11 = a1;
  v12 = a1;
  v4 = sub_18004A1AC();
  *a1 = v4;
  *(_QWORD *)(*a1 + 8) = sub_180059FF8(a1, *(_QWORD *)(*a2 + 8LL), v4);
  a1[1] = a2[1];
  v5 = *(_QWORD *)(*a1 + 8);
  if ( *(_BYTE *)(v5 + 25) )
  {
    *(_QWORD *)*a1 = *a1;
    *(_QWORD *)(*a1 + 16) = *a1;
  }
  else
  {
    v6 = std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Min((_QWORD *)v5);
    *v7 = v6;
    v8 = *(_QWORD *)(*a1 + 8);
    for ( i = *(_QWORD *)(v8 + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
      v8 = i;
    *(_QWORD *)(*a1 + 16) = v8;
  }
  v12 = 0LL;
  sub_18005AD6C(&v11);
  return a1;
}
