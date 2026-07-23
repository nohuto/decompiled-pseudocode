/*
 * XREFs of ExpParseEfiPath @ 0x140A5C430
 * Callers:
 *     ExpTranslateEfiPath @ 0x140A5C19C (ExpTranslateEfiPath.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpParseEfiPath(char *Src, _QWORD *a2, _QWORD *a3, char *a4)
{
  _WORD *Pool2; // rdi
  _QWORD *v5; // r15
  char *v6; // r12
  unsigned int v7; // esi
  _QWORD *v8; // rbp
  unsigned int v10; // ebx
  char v11; // r11
  char v12; // al
  char *v13; // r13
  unsigned int v14; // r14d
  char *v15; // r10
  char v16; // cl
  char v17; // al
  void *v18; // rax
  unsigned int v20; // esi
  unsigned int v21; // r15d
  int v22; // eax
  unsigned int v23; // ebp
  unsigned __int64 v24; // rax

  Pool2 = 0LL;
  v5 = a3;
  v6 = 0LL;
  v7 = 0;
  v8 = a2;
  v10 = -1073741811;
  v11 = 1;
  while ( 1 )
  {
    v12 = *Src & 0x7F;
    if ( v12 == 127 )
      return v10;
    if ( v12 == 4 && Src[1] == 1 )
      break;
    Src += *((unsigned __int16 *)Src + 1);
  }
  v13 = Src;
  v10 = 0;
  v14 = *((unsigned __int16 *)Src + 1);
  v15 = &Src[(unsigned __int8)Src[2] | (unsigned __int64)((unsigned __int8)Src[3] << 8)];
  v16 = *v15;
  if ( (*v15 & 0x7F) == 4 && v15[1] == 4 )
  {
    v6 = v15;
    while ( 1 )
    {
      v22 = *((unsigned __int16 *)v15 + 1);
      if ( v22 + v7 - 4 < v7 )
        break;
      v7 = v22 + v7 - 4;
      if ( v22 + v14 < v14 )
      {
        v14 = -1;
        goto LABEL_30;
      }
      v14 += v22;
      v10 = 0;
      v15 += (unsigned __int8)v15[2] | (unsigned __int64)((unsigned __int8)v15[3] << 8);
      v16 = *v15;
      if ( (*v15 & 0x7F) != 4 || v15[1] != 4 )
        goto LABEL_6;
    }
    v7 = -1;
LABEL_30:
    v16 = *v15;
    v10 = -1073741675;
  }
LABEL_6:
  if ( (v16 & 0x7F) != 0x7F )
    return (unsigned int)-1073741811;
  if ( (v10 & 0x80000000) != 0 )
    return v10;
  v17 = v13[41];
  if ( v17 == 2 )
  {
LABEL_10:
    *a4 = v11;
    if ( v7 )
    {
      v20 = v7 + 2;
      Pool2 = (_WORD *)ExAllocatePool2(0x40uLL, v20, 0x72766E45u);
      if ( !Pool2 )
        return 3221225626LL;
      v21 = 0;
      while ( (*v6 & 0x7F) != 0x7F )
      {
        v23 = *((unsigned __int16 *)v6 + 1) - 4;
        if ( v23 >= v20 )
          goto LABEL_34;
        memmove((char *)Pool2 + v21, v6 + 4, v23);
        v20 -= v23;
        v21 += v23;
        v6 += *((unsigned __int16 *)v6 + 1);
      }
      v8 = a2;
      v24 = v21;
      v5 = a3;
      Pool2[v24 >> 1] = 0;
    }
    v18 = (void *)ExAllocatePool2(0x40uLL, v14, 0x72766E45u);
    *v8 = v18;
    if ( v18 )
    {
      memmove(v18, v13, v14);
      *v5 = Pool2;
      return v10;
    }
    if ( Pool2 )
LABEL_34:
      ExFreePoolWithTag(Pool2, 0);
    return 3221225626LL;
  }
  if ( v17 == 1 )
  {
    v11 = 0;
    goto LABEL_10;
  }
  return 3221225485LL;
}
