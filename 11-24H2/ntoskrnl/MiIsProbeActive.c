/*
 * XREFs of MiIsProbeActive @ 0x140677438
 * Callers:
 *     MmIsIoSpaceActive @ 0x140677C30 (MmIsIoSpaceActive.c)
 * Callees:
 *     MiUnlockIoPfnTree @ 0x14038F980 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x14038FA2C (MiLockIoPfnTree.c)
 */

__int64 __fastcall MiIsProbeActive(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  unsigned int v4; // ebx
  char v5; // al
  _QWORD *v6; // r8
  unsigned __int8 v7; // r10
  _QWORD *i; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  _WORD *v13; // rcx
  _QWORD **v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx

  v3 = a1 + a2 - 1;
  v4 = 0;
  v5 = MiLockIoPfnTree(1LL, a2);
  v6 = (_QWORD *)qword_140E372C0[0];
  v7 = v5;
  if ( !qword_140E372C0[0] )
    goto LABEL_30;
  i = 0LL;
  do
  {
    v9 = v6[3];
    if ( v3 >= v9 )
    {
      if ( a1 >= v9 + 512 )
      {
        v6 = (_QWORD *)v6[1];
        continue;
      }
      i = v6;
    }
    v6 = (_QWORD *)*v6;
  }
  while ( v6 );
  while ( i )
  {
    v10 = i[3];
    if ( v3 < v10 )
      break;
    v11 = a1 - v10;
    if ( a1 < v10 )
      v11 = 0LL;
    if ( v3 + 1 > v10 + 512 )
      v12 = 512LL;
    else
      v12 = v3 - v10 + 1;
    if ( v11 < v12 )
    {
      v13 = (_WORD *)i + v11 + 88;
      while ( !*v13 )
      {
        ++v11;
        ++v13;
        if ( v11 >= v12 )
          goto LABEL_20;
      }
      v4 = 1;
      break;
    }
LABEL_20:
    v14 = (_QWORD **)i[1];
    v15 = i;
    if ( v14 )
    {
      v16 = *v14;
      for ( i = (_QWORD *)i[1]; v16; v16 = (_QWORD *)*v16 )
        i = v16;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v15 )
          break;
        v15 = i;
      }
    }
  }
LABEL_30:
  MiUnlockIoPfnTree(v7, 1);
  return v4;
}
