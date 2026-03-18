/*
 * XREFs of MiMakeIoRangePermanent @ 0x14066A934
 * Callers:
 *     MiMakeIoRangePermanentDpc @ 0x14066ABE0 (MiMakeIoRangePermanentDpc.c)
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14026F550 (MiFlushEntireTbDueToAttributeChange.c)
 *     RtlAvlInsertNodeEx @ 0x1402A8320 (RtlAvlInsertNodeEx.c)
 *     MiUnlockIoPfnTree @ 0x1403922D8 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x140392384 (MiLockIoPfnTree.c)
 */

__int64 __fastcall MiMakeIoRangePermanent(__int64 a1)
{
  bool v1; // bl
  unsigned __int64 v2; // r12
  unsigned int v4; // esi
  char v5; // r13
  _QWORD *v6; // rdx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rcx
  _QWORD *i; // rdi
  unsigned __int64 v10; // rax
  int v11; // r8d
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r15
  _WORD *v16; // rsi
  int v17; // edx
  char v18; // cl
  unsigned __int64 v19; // r8
  _QWORD **v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  int v26; // [rsp+50h] [rbp+8h]

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 24);
  v26 = *(_DWORD *)(a1 + 40);
  v4 = 0;
  v5 = 0;
  MiLockIoPfnTree(6LL);
  v6 = (_QWORD *)*((_QWORD *)&xmmword_140E36FC0 + 1);
  if ( !*((_QWORD *)&xmmword_140E36FC0 + 1) )
    goto LABEL_9;
  while ( 1 )
  {
    v7 = v6[3];
    if ( *(_QWORD *)(a1 + 32) >= v7 )
      break;
    v6 = (_QWORD *)*v6;
LABEL_6:
    if ( !v6 )
      goto LABEL_9;
  }
  if ( *(_QWORD *)(a1 + 24) >= v7 + 512 )
  {
    v6 = (_QWORD *)v6[1];
    goto LABEL_6;
  }
  if ( v6 )
    goto LABEL_54;
LABEL_9:
  v8 = (_QWORD *)qword_140E36F80;
  if ( qword_140E36F80 )
  {
    i = 0LL;
    while ( 1 )
    {
      v10 = v8[3];
      if ( *(_QWORD *)(a1 + 32) < v10 )
        goto LABEL_15;
      if ( *(_QWORD *)(a1 + 24) < v10 + 512 )
        break;
      v8 = (_QWORD *)v8[1];
LABEL_16:
      if ( !v8 )
      {
        if ( i )
        {
          v11 = v26;
          do
          {
            v12 = *(_QWORD *)(a1 + 32);
            v4 = 0;
            v13 = i[3];
            if ( v12 < v13 )
              break;
            v14 = v2 - v13;
            if ( v2 < v13 )
              v14 = 0LL;
            if ( v12 + 1 > v13 + 512 )
              v15 = 512LL;
            else
              v15 = v12 - v13 + 1;
            v2 = v13 + v14;
            if ( v14 < v15 )
            {
              v16 = (_WORD *)i + v14 + 88;
              do
              {
                v17 = (*((_DWORD *)i
                       + ((unsigned __int64)(2
                                           * (((unsigned int)v2 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2D8F8
                                                                                        - 12))
                                                                 - 1))
                                            - *((_DWORD *)i + 6))) >> 5)
                       + 11) >> ((2
                                * ((v2 & ((1LL << ((unsigned __int8)dword_140E2D8F8 - 12)) - 1)) - *((_BYTE *)i + 24))) & 0x1F)) & 3;
                if ( v17 != v11 )
                {
                  if ( *v16 )
                  {
                    ++dword_140E37000;
                    goto LABEL_54;
                  }
                  if ( v17 != 3 && !v5 )
                  {
                    MiFlushEntireTbDueToAttributeChange();
                    v5 = 1;
                  }
                  v18 = (2 * ((v2 & ((1LL << ((unsigned __int8)dword_140E2D8F8 - 12)) - 1)) - *((_BYTE *)i + 24))) & 0x1F;
                  v19 = (unsigned __int64)(2
                                         * (((unsigned int)v2 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2D8F8
                                                                                      - 12))
                                                               - 1))
                                          - *((_DWORD *)i + 6))) >> 5;
                  *((_DWORD *)i + v19 + 11) = (v26 << v18) | *((_DWORD *)i + v19 + 11) & ~(3 << v18);
                  v11 = v26;
                }
                ++v14;
                ++v16;
                ++v2;
              }
              while ( v14 < v15 );
              v4 = 0;
            }
            v20 = (_QWORD **)i[1];
            v21 = i;
            if ( v20 )
            {
              v22 = *v20;
              for ( i = (_QWORD *)i[1]; v22; v22 = (_QWORD *)*v22 )
                i = v22;
            }
            else
            {
              while ( 1 )
              {
                i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
                if ( !i || (_QWORD *)*i == v21 )
                  break;
                v21 = i;
              }
            }
          }
          while ( i );
        }
        goto LABEL_43;
      }
    }
    i = v8;
LABEL_15:
    v8 = (_QWORD *)*v8;
    goto LABEL_16;
  }
LABEL_43:
  v23 = (_QWORD *)xmmword_140E36FC0;
  if ( !(_QWORD)xmmword_140E36FC0 )
  {
LABEL_46:
    RtlAvlInsertNodeEx((unsigned __int64 *)&xmmword_140E36FC0, (unsigned __int64)v23, v1, (_QWORD *)a1);
    goto LABEL_47;
  }
  while ( 1 )
  {
    if ( *(_QWORD *)(a1 + 32) < v23[3] )
    {
      v24 = (_QWORD *)*v23;
      if ( !*v23 )
        goto LABEL_46;
      goto LABEL_51;
    }
    if ( *(_QWORD *)(a1 + 24) <= v23[4] )
      break;
    v24 = (_QWORD *)v23[1];
    if ( !v24 )
    {
      v1 = 1;
      goto LABEL_46;
    }
LABEL_51:
    v23 = v24;
  }
  ++dword_140E37004;
LABEL_54:
  v4 = -1073741800;
LABEL_47:
  MiUnlockIoPfnTree(0x11u, 6);
  return v4;
}
