/*
 * XREFs of sub_180027298 @ 0x180027298
 * Callers:
 *     sub_1800271DC @ 0x1800271DC (sub_1800271DC.c)
 *     sub_180027DEC @ 0x180027DEC (sub_180027DEC.c)
 *     sub_180036540 @ 0x180036540 (sub_180036540.c)
 *     sub_180050BB4 @ 0x180050BB4 (sub_180050BB4.c)
 *     sub_180053E84 @ 0x180053E84 (sub_180053E84.c)
 *     sub_18005C450 @ 0x18005C450 (sub_18005C450.c)
 *     sub_18007CBE4 @ 0x18007CBE4 (sub_18007CBE4.c)
 *     sub_18009662C @ 0x18009662C (sub_18009662C.c)
 *     sub_1800BDF0C @ 0x1800BDF0C (sub_1800BDF0C.c)
 *     sub_1800BEC68 @ 0x1800BEC68 (sub_1800BEC68.c)
 *     sub_1800CBD20 @ 0x1800CBD20 (sub_1800CBD20.c)
 *     sub_1800D0E08 @ 0x1800D0E08 (sub_1800D0E08.c)
 *     sub_1800D1DC0 @ 0x1800D1DC0 (sub_1800D1DC0.c)
 * Callees:
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@@Z @ 0x18001CC9C (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@@.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@PEAU32@@Z @ 0x18001CCEC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@@std@.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@@Z @ 0x18001CD10 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@@.c)
 */

__int64 *__fastcall sub_180027298(_QWORD *a1, __int64 a2)
{
  __int64 *v3; // r11
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // r9
  _QWORD *v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rcx
  char v12; // dl
  __int64 v13; // rdi
  _BYTE *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 *v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = (__int64 *)a2;
  sub_18001C420((__int64 *)&v18);
  v4 = v3[2];
  if ( *(_BYTE *)(*v3 + 25) )
    goto LABEL_5;
  if ( *(_BYTE *)(v4 + 25) )
  {
    v4 = *v3;
LABEL_5:
    v6 = v3[1];
    if ( !*(_BYTE *)(v4 + 25) )
      *(_QWORD *)(v4 + 8) = v6;
    if ( *(__int64 **)(*a1 + 8LL) == v3 )
    {
      *(_QWORD *)(*a1 + 8LL) = v4;
    }
    else if ( *(__int64 **)v6 == v3 )
    {
      *(_QWORD *)v6 = v4;
    }
    else
    {
      *(_QWORD *)(v6 + 16) = v4;
    }
    v7 = (_QWORD *)*a1;
    if ( *(__int64 **)*a1 == v3 )
    {
      if ( *(_BYTE *)(v4 + 25) )
        v8 = (_QWORD *)v6;
      else
        v8 = std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Min((_QWORD *)v4);
      *v7 = v8;
    }
    if ( *(__int64 **)(*a1 + 16LL) == v3 )
    {
      if ( *(_BYTE *)(v4 + 25) )
      {
        v9 = v6;
      }
      else
      {
        v10 = *(_QWORD *)(v4 + 16);
        v9 = v4;
        while ( !*(_BYTE *)(v10 + 25) )
        {
          v9 = v10;
          v10 = *(_QWORD *)(v10 + 16);
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v9;
    }
    goto LABEL_35;
  }
  v5 = (__int64)v18;
  v4 = v18[2];
  if ( v18 == v3 )
    goto LABEL_5;
  *(_QWORD *)(*v3 + 8) = v18;
  *(_QWORD *)v5 = *v3;
  if ( v5 == v3[2] )
  {
    v6 = v5;
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 8);
    if ( !*(_BYTE *)(v4 + 25) )
      *(_QWORD *)(v4 + 8) = v6;
    *(_QWORD *)v6 = v4;
    *(_QWORD *)(v5 + 16) = v3[2];
    *(_QWORD *)(v3[2] + 8) = v5;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v5;
  }
  else
  {
    v11 = (__int64 *)v3[1];
    if ( (__int64 *)*v11 == v3 )
      *v11 = v5;
    else
      v11[2] = v5;
  }
  *(_QWORD *)(v5 + 8) = v3[1];
  v12 = *(_BYTE *)(v5 + 24);
  *(_BYTE *)(v5 + 24) = *((_BYTE *)v3 + 24);
  *((_BYTE *)v3 + 24) = v12;
LABEL_35:
  if ( *((_BYTE *)v3 + 24) != 1 )
    goto LABEL_58;
  while ( 1 )
  {
    v13 = v6;
    if ( v4 == *(_QWORD *)(*a1 + 8LL) || *(_BYTE *)(v4 + 24) != 1 )
      break;
    v14 = *(_BYTE **)v6;
    if ( v4 == *(_QWORD *)v6 )
    {
      v14 = *(_BYTE **)(v6 + 16);
      if ( !v14[24] )
      {
        v14[24] = 1;
        *(_BYTE *)(v6 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Lrotate(
          (__int64)a1,
          v6);
        v14 = *(_BYTE **)(v6 + 16);
      }
      if ( !v14[25] )
      {
        if ( *(_BYTE *)(*(_QWORD *)v14 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v14 + 24LL) = 1;
            v14[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Rrotate(
              (__int64)a1,
              v14);
            v14 = *(_BYTE **)(v6 + 16);
          }
          v14[24] = *(_BYTE *)(v6 + 24);
          *(_BYTE *)(v6 + 24) = 1;
          *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Lrotate(
            (__int64)a1,
            v6);
          break;
        }
LABEL_52:
        v14[24] = 0;
      }
    }
    else
    {
      if ( !v14[24] )
      {
        v14[24] = 1;
        *(_BYTE *)(v6 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Rrotate(
          (__int64)a1,
          (_QWORD *)v6);
        v14 = *(_BYTE **)v6;
      }
      if ( !v14[25] )
      {
        v15 = *((_QWORD *)v14 + 2);
        if ( *(_BYTE *)(v15 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v14 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v14 + 24LL) == 1 )
          {
            *(_BYTE *)(v15 + 24) = 1;
            v14[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Lrotate(
              (__int64)a1,
              (__int64)v14);
            v14 = *(_BYTE **)v6;
          }
          v14[24] = *(_BYTE *)(v6 + 24);
          *(_BYTE *)(v6 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v14 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Rrotate(
            (__int64)a1,
            (_QWORD *)v6);
          break;
        }
        goto LABEL_52;
      }
    }
    v6 = *(_QWORD *)(v6 + 8);
    v4 = v13;
  }
  *(_BYTE *)(v4 + 24) = 1;
LABEL_58:
  v16 = a1[1];
  if ( v16 )
    a1[1] = v16 - 1;
  return v3;
}
