/*
 * XREFs of sub_18001CB64 @ 0x18001CB64
 * Callers:
 *     sub_18001BCFC @ 0x18001BCFC (sub_18001BCFC.c)
 *     sub_180023C3C @ 0x180023C3C (sub_180023C3C.c)
 *     sub_18002633C @ 0x18002633C (sub_18002633C.c)
 *     sub_1800276BC @ 0x1800276BC (sub_1800276BC.c)
 *     sub_180028E60 @ 0x180028E60 (sub_180028E60.c)
 *     sub_18002C6BC @ 0x18002C6BC (sub_18002C6BC.c)
 *     sub_18002C7A0 @ 0x18002C7A0 (sub_18002C7A0.c)
 *     sub_18002DD04 @ 0x18002DD04 (sub_18002DD04.c)
 *     sub_18002DDF4 @ 0x18002DDF4 (sub_18002DDF4.c)
 *     sub_18002DEE8 @ 0x18002DEE8 (sub_18002DEE8.c)
 *     sub_18002DFFC @ 0x18002DFFC (sub_18002DFFC.c)
 *     sub_18002E0F8 @ 0x18002E0F8 (sub_18002E0F8.c)
 *     sub_18002E1E4 @ 0x18002E1E4 (sub_18002E1E4.c)
 *     sub_18002E2D8 @ 0x18002E2D8 (sub_18002E2D8.c)
 *     sub_18003CC78 @ 0x18003CC78 (sub_18003CC78.c)
 *     sub_18003D140 @ 0x18003D140 (sub_18003D140.c)
 *     sub_180040C1C @ 0x180040C1C (sub_180040C1C.c)
 *     sub_18004A390 @ 0x18004A390 (sub_18004A390.c)
 *     sub_18004A458 @ 0x18004A458 (sub_18004A458.c)
 *     sub_18004A558 @ 0x18004A558 (sub_18004A558.c)
 *     sub_18004A874 @ 0x18004A874 (sub_18004A874.c)
 *     sub_18004A968 @ 0x18004A968 (sub_18004A968.c)
 *     sub_18004AA58 @ 0x18004AA58 (sub_18004AA58.c)
 *     sub_18004AB4C @ 0x18004AB4C (sub_18004AB4C.c)
 *     sub_18004F18C @ 0x18004F18C (sub_18004F18C.c)
 *     sub_1800502A0 @ 0x1800502A0 (sub_1800502A0.c)
 *     sub_180052BB8 @ 0x180052BB8 (sub_180052BB8.c)
 *     sub_180054878 @ 0x180054878 (sub_180054878.c)
 *     sub_18005A27C @ 0x18005A27C (sub_18005A27C.c)
 *     sub_18005A60C @ 0x18005A60C (sub_18005A60C.c)
 *     sub_18005DC9C @ 0x18005DC9C (sub_18005DC9C.c)
 *     sub_18005DE90 @ 0x18005DE90 (sub_18005DE90.c)
 *     sub_180073304 @ 0x180073304 (sub_180073304.c)
 *     sub_18007AF54 @ 0x18007AF54 (sub_18007AF54.c)
 *     sub_1800954CC @ 0x1800954CC (sub_1800954CC.c)
 *     sub_180096E70 @ 0x180096E70 (sub_180096E70.c)
 *     sub_180096FA8 @ 0x180096FA8 (sub_180096FA8.c)
 *     sub_1800BC3C8 @ 0x1800BC3C8 (sub_1800BC3C8.c)
 *     sub_1800BC4C0 @ 0x1800BC4C0 (sub_1800BC4C0.c)
 *     sub_1800CCD74 @ 0x1800CCD74 (sub_1800CCD74.c)
 *     sub_1800CF594 @ 0x1800CF594 (sub_1800CF594.c)
 *     sub_1800CF6A0 @ 0x1800CF6A0 (sub_1800CF6A0.c)
 *     sub_1800CF89C @ 0x1800CF89C (sub_1800CF89C.c)
 *     sub_1800D18D4 @ 0x1800D18D4 (sub_1800D18D4.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@@Z @ 0x18001CC9C (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@@.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@@Z @ 0x18001CD10 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@@.c)
 */

__int64 __fastcall sub_18001CB64(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  _QWORD *v4; // r11
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 i; // r10
  __int64 v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // rcx

  ++*(_QWORD *)(a1 + 8);
  v3 = a3;
  v4 = *(_QWORD **)a1;
  v6 = *(_QWORD **)a2;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)a2;
  if ( v6 != v4 )
  {
    if ( *(_DWORD *)(a2 + 8) )
    {
      *v6 = a3;
      if ( v6 == (_QWORD *)*v4 )
        *v4 = a3;
    }
    else
    {
      v6[2] = a3;
      if ( v6 == (_QWORD *)v4[2] )
        v4[2] = a3;
    }
    v7 = *(_QWORD *)(a3 + 8);
    for ( i = a3; ; v7 = *(_QWORD *)(i + 8) )
    {
      if ( *(_BYTE *)(v7 + 24) )
      {
        *(_BYTE *)(v4[1] + 24LL) = 1;
        return v3;
      }
      v9 = *(_QWORD *)(i + 8);
      v10 = *(__int64 **)(v9 + 8);
      v11 = *v10;
      if ( v9 == *v10 )
      {
        v11 = v10[2];
        if ( !*(_BYTE *)(v11 + 24) )
          goto LABEL_15;
        if ( i == *(_QWORD *)(v9 + 16) )
          std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Lrotate(
            a1,
            *(_QWORD *)(i + 8));
        *(_BYTE *)(*(_QWORD *)(i + 8) + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) + 24LL) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Rrotate(
          a1,
          *(_QWORD *)(*(_QWORD *)(i + 8) + 8LL));
      }
      else
      {
        if ( !*(_BYTE *)(v11 + 24) )
        {
LABEL_15:
          *(_BYTE *)(v9 + 24) = 1;
          *(_BYTE *)(v11 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) + 24LL) = 0;
          i = *(_QWORD *)(*(_QWORD *)(i + 8) + 8LL);
          continue;
        }
        if ( i == *(_QWORD *)v9 )
          std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Rrotate(
            a1,
            *(_QWORD *)(i + 8));
        *(_BYTE *)(*(_QWORD *)(i + 8) + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) + 24LL) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Lrotate(
          a1,
          *(_QWORD *)(*(_QWORD *)(i + 8) + 8LL));
      }
    }
  }
  *v4 = a3;
  v4[1] = a3;
  v4[2] = a3;
  *(_BYTE *)(a3 + 24) = 1;
  return v3;
}
