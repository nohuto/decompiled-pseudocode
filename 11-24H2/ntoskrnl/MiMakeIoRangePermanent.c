/*
 * XREFs of MiMakeIoRangePermanent @ 0x140677564
 * Callers:
 *     MiMakeIoRangePermanentDpc @ 0x140677810 (MiMakeIoRangePermanentDpc.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     MiUnlockIoPfnTree @ 0x14038F980 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x14038FA2C (MiLockIoPfnTree.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14039D0A4 (MiFlushEntireTbDueToAttributeChange.c)
 */

__int64 __fastcall MiMakeIoRangePermanent(__int64 a1, __int64 a2)
{
  bool v2; // bl
  unsigned __int64 v3; // r12
  unsigned int v5; // esi
  char v6; // r13
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rax
  _QWORD *v9; // rcx
  _QWORD *i; // rdi
  unsigned __int64 v11; // rax
  int v12; // r8d
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r15
  _WORD *v17; // rsi
  int v18; // edx
  char v19; // cl
  unsigned __int64 v20; // r8
  _QWORD **v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rcx
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  int v27; // [rsp+50h] [rbp+8h]

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 24);
  v27 = *(_DWORD *)(a1 + 40);
  v5 = 0;
  v6 = 0;
  MiLockIoPfnTree(6LL, a2);
  v7 = (_QWORD *)*((_QWORD *)&xmmword_140E37340 + 1);
  if ( !*((_QWORD *)&xmmword_140E37340 + 1) )
    goto LABEL_9;
  while ( 1 )
  {
    v8 = v7[3];
    if ( *(_QWORD *)(a1 + 32) >= v8 )
      break;
    v7 = (_QWORD *)*v7;
LABEL_6:
    if ( !v7 )
      goto LABEL_9;
  }
  if ( *(_QWORD *)(a1 + 24) >= v8 + 512 )
  {
    v7 = (_QWORD *)v7[1];
    goto LABEL_6;
  }
  if ( v7 )
    goto LABEL_54;
LABEL_9:
  v9 = (_QWORD *)qword_140E37300;
  if ( qword_140E37300 )
  {
    i = 0LL;
    while ( 1 )
    {
      v11 = v9[3];
      if ( *(_QWORD *)(a1 + 32) < v11 )
        goto LABEL_15;
      if ( *(_QWORD *)(a1 + 24) < v11 + 512 )
        break;
      v9 = (_QWORD *)v9[1];
LABEL_16:
      if ( !v9 )
      {
        if ( i )
        {
          v12 = v27;
          do
          {
            v13 = *(_QWORD *)(a1 + 32);
            v5 = 0;
            v14 = i[3];
            if ( v13 < v14 )
              break;
            v15 = v3 - v14;
            if ( v3 < v14 )
              v15 = 0LL;
            if ( v13 + 1 > v14 + 512 )
              v16 = 512LL;
            else
              v16 = v13 - v14 + 1;
            v3 = v14 + v15;
            if ( v15 < v16 )
            {
              v17 = (_WORD *)i + v15 + 88;
              do
              {
                v18 = (*((_DWORD *)i
                       + ((unsigned __int64)(2
                                           * (((unsigned int)v3 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2DC78
                                                                                        - 12))
                                                                 - 1))
                                            - *((_DWORD *)i + 6))) >> 5)
                       + 11) >> ((2
                                * ((v3 & ((1LL << ((unsigned __int8)dword_140E2DC78 - 12)) - 1)) - *((_BYTE *)i + 24))) & 0x1F)) & 3;
                if ( v18 != v12 )
                {
                  if ( *v17 )
                  {
                    ++dword_140E37380;
                    goto LABEL_54;
                  }
                  if ( v18 != 3 && !v6 )
                  {
                    MiFlushEntireTbDueToAttributeChange();
                    v6 = 1;
                  }
                  v19 = (2 * ((v3 & ((1LL << ((unsigned __int8)dword_140E2DC78 - 12)) - 1)) - *((_BYTE *)i + 24))) & 0x1F;
                  v20 = (unsigned __int64)(2
                                         * (((unsigned int)v3 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2DC78
                                                                                      - 12))
                                                               - 1))
                                          - *((_DWORD *)i + 6))) >> 5;
                  *((_DWORD *)i + v20 + 11) = (v27 << v19) | *((_DWORD *)i + v20 + 11) & ~(3 << v19);
                  v12 = v27;
                }
                ++v15;
                ++v17;
                ++v3;
              }
              while ( v15 < v16 );
              v5 = 0;
            }
            v21 = (_QWORD **)i[1];
            v22 = i;
            if ( v21 )
            {
              v23 = *v21;
              for ( i = (_QWORD *)i[1]; v23; v23 = (_QWORD *)*v23 )
                i = v23;
            }
            else
            {
              while ( 1 )
              {
                i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
                if ( !i || (_QWORD *)*i == v22 )
                  break;
                v22 = i;
              }
            }
          }
          while ( i );
        }
        goto LABEL_43;
      }
    }
    i = v9;
LABEL_15:
    v9 = (_QWORD *)*v9;
    goto LABEL_16;
  }
LABEL_43:
  v24 = (_QWORD *)xmmword_140E37340;
  if ( !(_QWORD)xmmword_140E37340 )
  {
LABEL_46:
    RtlAvlInsertNodeEx((unsigned __int64 *)&xmmword_140E37340, (unsigned __int64)v24, v2, (_QWORD *)a1);
    goto LABEL_47;
  }
  while ( 1 )
  {
    if ( *(_QWORD *)(a1 + 32) < v24[3] )
    {
      v25 = (_QWORD *)*v24;
      if ( !*v24 )
        goto LABEL_46;
      goto LABEL_51;
    }
    if ( *(_QWORD *)(a1 + 24) <= v24[4] )
      break;
    v25 = (_QWORD *)v24[1];
    if ( !v25 )
    {
      v2 = 1;
      goto LABEL_46;
    }
LABEL_51:
    v24 = v25;
  }
  ++dword_140E37384;
LABEL_54:
  v5 = -1073741800;
LABEL_47:
  MiUnlockIoPfnTree(0x11u, 6);
  return v5;
}
