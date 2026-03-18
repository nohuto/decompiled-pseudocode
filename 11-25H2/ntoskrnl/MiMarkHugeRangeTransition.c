/*
 * XREFs of MiMarkHugeRangeTransition @ 0x1404EDA2C
 * Callers:
 *     MiInsertHugeRangeInList @ 0x1404ED4E4 (MiInsertHugeRangeInList.c)
 * Callees:
 *     MiUnlockIoPfnTree @ 0x1403922D8 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x140392384 (MiLockIoPfnTree.c)
 */

__int64 __fastcall MiMarkHugeRangeTransition(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  int v3; // r14d
  int v4; // esi
  char v5; // di
  char v6; // r10
  __int64 *i; // r8
  _QWORD *v8; // rdx
  unsigned __int64 v9; // r9
  unsigned __int64 j; // rcx
  unsigned __int64 v11; // rax
  _QWORD **v12; // rax
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rdx

  v1 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 1;
LABEL_2:
  v6 = MiLockIoPfnTree((unsigned int)(v3 + 1));
  for ( i = qword_140E36F40; (__int64)i < (__int64)&xmmword_140E36FC0; i += 8 )
  {
    v8 = (_QWORD *)*i;
    if ( !*i )
      continue;
    v9 = a1 + 0x3FFFF;
    j = 0LL;
    do
    {
      v11 = v8[3];
      if ( v9 >= v11 )
      {
        if ( a1 >= v11 + 512 )
        {
          v8 = (_QWORD *)v8[1];
          continue;
        }
        j = (unsigned __int64)v8;
      }
      v8 = (_QWORD *)*v8;
    }
    while ( v8 );
    while ( j && v9 >= *(_QWORD *)(j + 24) )
    {
      if ( *(_DWORD *)(j + 32) )
      {
        if ( !v3 )
        {
          MiUnlockIoPfnTree(v6, 1);
          v3 = 1;
          goto LABEL_2;
        }
        ++v4;
      }
      v12 = *(_QWORD ***)(j + 8);
      v13 = j;
      if ( v12 )
      {
        v14 = *v12;
        for ( j = *(_QWORD *)(j + 8); v14; v14 = (_QWORD *)*v14 )
          j = (unsigned __int64)v14;
      }
      else
      {
        while ( 1 )
        {
          j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !j || *(_QWORD *)j == v13 )
            break;
          v13 = j;
        }
      }
    }
  }
  if ( v3 )
  {
    if ( v4 )
      *(_QWORD *)(qword_140E2FD80 + 8 * ((a1 >> 18) & 0x3FFFFF)) = *(_QWORD *)(qword_140E2FD80
                                                                             + 8 * ((a1 >> 18) & 0x3FFFFF)) & 0x7FF8LL | ((unsigned __int64)(v4 & 0x1FF) << 15) | 5;
    v5 = 2;
  }
  MiUnlockIoPfnTree(v6, v5);
  LOBYTE(v1) = v4 != 0;
  return v1;
}
