/*
 * XREFs of sub_180059BF0 @ 0x180059BF0
 * Callers:
 *     sub_18005AF9C @ 0x18005AF9C (sub_18005AF9C.c)
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 *     sub_180073F3C @ 0x180073F3C (sub_180073F3C.c)
 *     sub_180074540 @ 0x180074540 (sub_180074540.c)
 *     sub_180074660 @ 0x180074660 (sub_180074660.c)
 *     sub_180077900 @ 0x180077900 (sub_180077900.c)
 *     sub_180083420 @ 0x180083420 (sub_180083420.c)
 *     sub_18008DDEC @ 0x18008DDEC (sub_18008DDEC.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@PEAU32@@Z @ 0x18001CB8C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@@std@.c)
 *     sub_18004A04C @ 0x18004A04C (sub_18004A04C.c)
 *     sub_180059E98 @ 0x180059E98 (sub_180059E98.c)
 *     sub_18005AC0C @ 0x18005AC0C (sub_18005AC0C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180059BF0(__int64 *a1, _QWORD *a2)
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
  v4 = sub_18004A04C();
  *a1 = v4;
  *(_QWORD *)(*a1 + 8) = sub_180059E98(a1, *(_QWORD *)(*a2 + 8LL), v4);
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
  sub_18005AC0C(&v11);
  return a1;
}
