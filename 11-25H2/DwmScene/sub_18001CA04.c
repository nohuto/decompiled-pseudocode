/*
 * XREFs of sub_18001CA04 @ 0x18001CA04
 * Callers:
 *     sub_18001BB9C @ 0x18001BB9C (sub_18001BB9C.c)
 *     sub_180023ADC @ 0x180023ADC (sub_180023ADC.c)
 *     sub_1800261DC @ 0x1800261DC (sub_1800261DC.c)
 *     sub_18002755C @ 0x18002755C (sub_18002755C.c)
 *     sub_180028D00 @ 0x180028D00 (sub_180028D00.c)
 *     sub_18002C55C @ 0x18002C55C (sub_18002C55C.c)
 *     sub_18002C640 @ 0x18002C640 (sub_18002C640.c)
 *     sub_18002DBA4 @ 0x18002DBA4 (sub_18002DBA4.c)
 *     sub_18002DC94 @ 0x18002DC94 (sub_18002DC94.c)
 *     sub_18002DD88 @ 0x18002DD88 (sub_18002DD88.c)
 *     sub_18002DE9C @ 0x18002DE9C (sub_18002DE9C.c)
 *     sub_18002DF98 @ 0x18002DF98 (sub_18002DF98.c)
 *     sub_18002E084 @ 0x18002E084 (sub_18002E084.c)
 *     sub_18002E178 @ 0x18002E178 (sub_18002E178.c)
 *     sub_18003CB18 @ 0x18003CB18 (sub_18003CB18.c)
 *     sub_18003CFE0 @ 0x18003CFE0 (sub_18003CFE0.c)
 *     sub_180040ABC @ 0x180040ABC (sub_180040ABC.c)
 *     sub_18004A230 @ 0x18004A230 (sub_18004A230.c)
 *     sub_18004A2F8 @ 0x18004A2F8 (sub_18004A2F8.c)
 *     sub_18004A3F8 @ 0x18004A3F8 (sub_18004A3F8.c)
 *     sub_18004A714 @ 0x18004A714 (sub_18004A714.c)
 *     sub_18004A808 @ 0x18004A808 (sub_18004A808.c)
 *     sub_18004A8F8 @ 0x18004A8F8 (sub_18004A8F8.c)
 *     sub_18004A9EC @ 0x18004A9EC (sub_18004A9EC.c)
 *     sub_18004F02C @ 0x18004F02C (sub_18004F02C.c)
 *     sub_180050140 @ 0x180050140 (sub_180050140.c)
 *     sub_180052A58 @ 0x180052A58 (sub_180052A58.c)
 *     sub_180054718 @ 0x180054718 (sub_180054718.c)
 *     sub_18005A11C @ 0x18005A11C (sub_18005A11C.c)
 *     sub_18005A4AC @ 0x18005A4AC (sub_18005A4AC.c)
 *     sub_18005DB3C @ 0x18005DB3C (sub_18005DB3C.c)
 *     sub_18005DD30 @ 0x18005DD30 (sub_18005DD30.c)
 *     sub_1800731A4 @ 0x1800731A4 (sub_1800731A4.c)
 *     sub_18007ADF4 @ 0x18007ADF4 (sub_18007ADF4.c)
 *     sub_18009536C @ 0x18009536C (sub_18009536C.c)
 *     sub_180096D10 @ 0x180096D10 (sub_180096D10.c)
 *     sub_180096E48 @ 0x180096E48 (sub_180096E48.c)
 *     sub_1800BC268 @ 0x1800BC268 (sub_1800BC268.c)
 *     sub_1800BC360 @ 0x1800BC360 (sub_1800BC360.c)
 *     sub_1800CCC14 @ 0x1800CCC14 (sub_1800CCC14.c)
 *     sub_1800CF434 @ 0x1800CF434 (sub_1800CF434.c)
 *     sub_1800CF540 @ 0x1800CF540 (sub_1800CF540.c)
 *     sub_1800CF73C @ 0x1800CF73C (sub_1800CF73C.c)
 *     sub_1800D1774 @ 0x1800D1774 (sub_1800D1774.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@@Z @ 0x18001CB3C (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@@.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@@Z @ 0x18001CBB0 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@@.c)
 */

__int64 __fastcall sub_18001CA04(__int64 a1, __int64 a2, __int64 a3)
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
