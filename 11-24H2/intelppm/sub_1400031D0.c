/*
 * XREFs of sub_1400031D0 @ 0x1400031D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1400031D0(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  int *v6; // r10
  int v7; // r8d
  unsigned int v8; // r8d
  __int64 i; // rax
  __int64 v10; // r11
  unsigned int v11; // edx
  bool v12; // zf
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r11d
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rcx
  unsigned __int64 result; // rax

  v6 = &dword_140019840[64 * (unsigned __int64)a1];
  v7 = v6[1];
  if ( (v7 & 1) != 0 )
  {
    v8 = (unsigned __int8)v7 >> 1;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v10 = i + 2;
      if ( (unsigned int)i >= v8 )
        break;
      v11 = v6[v10];
      if ( a4 < (unsigned __int8)v11 )
        break;
      if ( a4 == (unsigned __int8)v11 )
      {
        v17 = v11 >> 8;
        goto LABEL_12;
      }
    }
    if ( (_DWORD)i )
    {
      v12 = (_DWORD)i == v8;
      v13 = v6[(unsigned int)(i - 1) + 2];
      if ( v12 )
        LODWORD(i) = i - 1;
    }
    else
    {
      v13 = v6[v10];
      LODWORD(i) = 1;
    }
    v14 = v13 >> 8;
    v15 = v6[(unsigned int)(i - 1) + 2];
    v16 = v6[(unsigned int)i + 2];
    if ( (unsigned __int8)v15 >= (unsigned int)(unsigned __int8)v16 )
      v17 = 0;
    else
      v17 = v14
          + (int)((a4 - (unsigned __int8)v15) * ((v16 >> 8) - (v15 >> 8)))
          / ((unsigned __int8)v16 - (unsigned __int8)v15);
LABEL_12:
    v18 = 100LL;
  }
  else
  {
    v17 = *v6;
    v18 = a4;
  }
  result = 10 * a2 * v18 * (unsigned __int64)v17 / qword_140019A50;
  *a5 = result;
  return result;
}
