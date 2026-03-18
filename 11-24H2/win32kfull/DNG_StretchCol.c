/*
 * XREFs of DNG_StretchCol @ 0x1400A05D0
 * Callers:
 *     RenderNineGridInternal @ 0x14009F6F0 (RenderNineGridInternal.c)
 * Callees:
 *     DNG_DrawRow @ 0x1400A0760 (DNG_DrawRow.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

unsigned __int64 __fastcall DNG_StretchCol(int *a1, _DWORD *a2)
{
  __int64 v2; // rdi
  int v4; // r9d
  __int64 v5; // rsi
  unsigned int v6; // r15d
  unsigned int v7; // ebp
  __int64 v8; // r14
  __int64 v9; // r13
  unsigned __int64 result; // rax
  int v11; // edx
  __int64 v12; // r12
  __int64 v13; // rcx
  int v14; // edx
  char *v15; // rcx
  const void *v16; // r9
  size_t v17; // r8
  char *v18; // r11
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r10
  int v21; // [rsp+70h] [rbp+8h]
  int v22; // [rsp+78h] [rbp+10h]
  __int64 v23; // [rsp+80h] [rbp+18h]

  v4 = a1[4];
  v5 = *((_QWORD *)a1 + 4);
  v6 = a2[1];
  v7 = 0;
  v23 = *((_QWORD *)a1 + 1);
  v2 = v23;
  v8 = v23 - 4LL * a2[6] * v4;
  v21 = a2[3];
  v9 = v23 - 4LL * a2[7] * v4;
  v22 = a2[2];
  result = (unsigned int)(*a2 * a1[10]);
  v11 = 1;
  v12 = v5 - 4LL * (int)result;
  if ( v8 != v9 )
  {
    do
    {
      if ( v11 )
      {
        *((_QWORD *)a1 + 1) = v8;
        *((_QWORD *)a1 + 4) = v12;
        DNG_DrawRow(a1);
      }
      else
      {
        v13 = *a1;
        result = v13 + v4;
        v14 = 4 * a1[6];
        v15 = (char *)(v8 + 4 * v13);
        v16 = (const void *)(v8 + 4 * result);
        if ( v14 <= 0 )
          break;
        v17 = v14;
        v18 = &v15[v14];
        if ( v18 <= v15 )
          break;
        result = (unsigned __int64)v16 + v14;
        if ( result <= (unsigned __int64)v16 )
          break;
        v19 = *((_QWORD *)a1 + 27);
        if ( v19 > (unsigned __int64)v15 )
          break;
        v20 = *((_QWORD *)a1 + 28);
        if ( (unsigned __int64)v18 > v20 )
          break;
        if ( (result > v20 || v19 > (unsigned __int64)v16)
          && (*((_QWORD *)a1 + 29) > (unsigned __int64)v16 || result > *((_QWORD *)a1 + 30)) )
        {
          break;
        }
        memmove(v15, v16, v17);
      }
      v11 = (v6 + v22 < v6) + v21;
      v7 += v11;
      if ( v7 < a1[12] )
        v12 -= 4LL * a1[10] * v11;
      v4 = a1[4];
      v6 += v22;
      result = -(__int64)v4;
      v8 -= 4LL * v4;
    }
    while ( v8 != v9 );
    v2 = v23;
  }
  *((_QWORD *)a1 + 1) = v2;
  *((_QWORD *)a1 + 4) = v5;
  return result;
}
