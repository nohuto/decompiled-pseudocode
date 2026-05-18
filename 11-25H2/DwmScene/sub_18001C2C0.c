/*
 * XREFs of sub_18001C2C0 @ 0x18001C2C0
 * Callers:
 *     sub_18001C674 @ 0x18001C674 (sub_18001C674.c)
 *     sub_18002707C @ 0x18002707C (sub_18002707C.c)
 *     sub_180027138 @ 0x180027138 (sub_180027138.c)
 *     sub_180027C8C @ 0x180027C8C (sub_180027C8C.c)
 *     sub_18002A7CC @ 0x18002A7CC (sub_18002A7CC.c)
 *     sub_18002BCB4 @ 0x18002BCB4 (sub_18002BCB4.c)
 *     sub_18002D150 @ 0x18002D150 (sub_18002D150.c)
 *     sub_180031110 @ 0x180031110 (sub_180031110.c)
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 *     sub_1800363E0 @ 0x1800363E0 (sub_1800363E0.c)
 *     sub_18003E6F8 @ 0x18003E6F8 (sub_18003E6F8.c)
 *     sub_18003E99C @ 0x18003E99C (sub_18003E99C.c)
 *     sub_18003F9D8 @ 0x18003F9D8 (sub_18003F9D8.c)
 *     sub_18004C404 @ 0x18004C404 (sub_18004C404.c)
 *     sub_18004C644 @ 0x18004C644 (sub_18004C644.c)
 *     sub_18004CD78 @ 0x18004CD78 (sub_18004CD78.c)
 *     sub_18004CF28 @ 0x18004CF28 (sub_18004CF28.c)
 *     sub_18004D1F4 @ 0x18004D1F4 (sub_18004D1F4.c)
 *     sub_180050A54 @ 0x180050A54 (sub_180050A54.c)
 *     sub_1800524F4 @ 0x1800524F4 (sub_1800524F4.c)
 *     sub_180053D24 @ 0x180053D24 (sub_180053D24.c)
 *     sub_180053FF8 @ 0x180053FF8 (sub_180053FF8.c)
 *     sub_18005726C @ 0x18005726C (sub_18005726C.c)
 *     sub_180057AB0 @ 0x180057AB0 (sub_180057AB0.c)
 *     sub_18005B618 @ 0x18005B618 (sub_18005B618.c)
 *     sub_18005BDE0 @ 0x18005BDE0 (sub_18005BDE0.c)
 *     sub_18005C2F0 @ 0x18005C2F0 (sub_18005C2F0.c)
 *     sub_18007CA84 @ 0x18007CA84 (sub_18007CA84.c)
 *     sub_180096028 @ 0x180096028 (sub_180096028.c)
 *     sub_1800964CC @ 0x1800964CC (sub_1800964CC.c)
 *     sub_1800B9C0C @ 0x1800B9C0C (sub_1800B9C0C.c)
 *     sub_1800BB198 @ 0x1800BB198 (sub_1800BB198.c)
 *     sub_1800BC44C @ 0x1800BC44C (sub_1800BC44C.c)
 *     sub_1800BD88C @ 0x1800BD88C (sub_1800BD88C.c)
 *     sub_1800BDDAC @ 0x1800BDDAC (sub_1800BDDAC.c)
 *     sub_1800BEB08 @ 0x1800BEB08 (sub_1800BEB08.c)
 *     sub_1800CB760 @ 0x1800CB760 (sub_1800CB760.c)
 *     sub_1800CB8A0 @ 0x1800CB8A0 (sub_1800CB8A0.c)
 *     sub_1800CBBC0 @ 0x1800CBBC0 (sub_1800CBBC0.c)
 *     sub_1800D0AB0 @ 0x1800D0AB0 (sub_1800D0AB0.c)
 *     sub_1800D0CA8 @ 0x1800D0CA8 (sub_1800D0CA8.c)
 *     sub_1800D1A60 @ 0x1800D1A60 (sub_1800D1A60.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@PEAU32@@Z @ 0x18001CB8C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@@std@.c)
 */

__int64 *__fastcall sub_18001C2C0(__int64 *a1)
{
  __int64 *v1; // r8
  __int64 v2; // rcx
  __int64 i; // rax

  v1 = a1;
  v2 = *a1;
  if ( *(_BYTE *)(*(_QWORD *)(v2 + 16) + 25LL) )
  {
    for ( i = *(_QWORD *)(v2 + 8); !*(_BYTE *)(i + 25) && v2 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
    {
      *v1 = i;
      v2 = i;
    }
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Min(
          *(_QWORD *)(v2 + 16),
          0LL,
          v1);
  }
  *v1 = i;
  return v1;
}
