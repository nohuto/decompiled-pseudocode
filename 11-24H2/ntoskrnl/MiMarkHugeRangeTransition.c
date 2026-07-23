/*
 * XREFs of MiMarkHugeRangeTransition @ 0x1404EECA8
 * Callers:
 *     MiInsertHugeRangeInList @ 0x1404EE760 (MiInsertHugeRangeInList.c)
 * Callees:
 *     MiUnlockIoPfnTree @ 0x14038F980 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x14038FA2C (MiLockIoPfnTree.c)
 */

__int64 __fastcall MiMarkHugeRangeTransition(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v4; // r14d
  int v5; // esi
  char v6; // di
  char v7; // r10
  __int64 *i; // r8
  _QWORD *v9; // rdx
  unsigned __int64 v10; // r9
  unsigned __int64 j; // rcx
  unsigned __int64 v12; // rax
  _QWORD **v13; // rax
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rdx

  v2 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 1;
LABEL_2:
  v7 = MiLockIoPfnTree((unsigned int)(v4 + 1), a2);
  for ( i = qword_140E372C0; (__int64)i < (__int64)&xmmword_140E37340; i += 8 )
  {
    v9 = (_QWORD *)*i;
    if ( !*i )
      continue;
    v10 = a1 + 0x3FFFF;
    j = 0LL;
    do
    {
      v12 = v9[3];
      if ( v10 >= v12 )
      {
        if ( a1 >= v12 + 512 )
        {
          v9 = (_QWORD *)v9[1];
          continue;
        }
        j = (unsigned __int64)v9;
      }
      v9 = (_QWORD *)*v9;
    }
    while ( v9 );
    while ( j && v10 >= *(_QWORD *)(j + 24) )
    {
      if ( *(_DWORD *)(j + 32) )
      {
        if ( !v4 )
        {
          MiUnlockIoPfnTree(v7, 1);
          v4 = 1;
          goto LABEL_2;
        }
        ++v5;
      }
      v13 = *(_QWORD ***)(j + 8);
      v14 = j;
      if ( v13 )
      {
        v15 = *v13;
        for ( j = *(_QWORD *)(j + 8); v15; v15 = (_QWORD *)*v15 )
          j = (unsigned __int64)v15;
      }
      else
      {
        while ( 1 )
        {
          j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !j || *(_QWORD *)j == v14 )
            break;
          v14 = j;
        }
      }
    }
  }
  if ( v4 )
  {
    if ( v5 )
      *(_QWORD *)(qword_140E30100 + 8 * ((a1 >> 18) & 0x3FFFFF)) = *(_QWORD *)(qword_140E30100
                                                                             + 8 * ((a1 >> 18) & 0x3FFFFF)) & 0x7FF8LL | ((unsigned __int64)(v5 & 0x1FF) << 15) | 5;
    v6 = 2;
  }
  MiUnlockIoPfnTree(v7, v6);
  LOBYTE(v2) = v5 != 0;
  return v2;
}
