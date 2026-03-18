/*
 * XREFs of ?vFillGRectDIB24BGR@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1401A24A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140340480 (memmove.c)
 */

void __fastcall vFillGRectDIB24BGR(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  __int64 v3; // r12
  int v5; // r14d
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  _BYTE *v14; // rdx
  __int64 v15; // r11
  __int64 v16; // r12
  _BYTE *v17; // r8
  _BYTE *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r9
  int v22; // ecx
  __int64 v23; // rax
  const void *v24; // r15
  _BYTE *v25; // r8
  _BYTE *v26; // rcx
  char v27; // rax^6
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  char *i; // rbx
  __int64 v31; // [rsp+70h] [rbp+8h]
  __int64 v32; // [rsp+78h] [rbp+10h]
  __int64 v33; // [rsp+80h] [rbp+18h]
  __int64 v34; // [rsp+88h] [rbp+20h]

  v3 = *((int *)a1 + 22);
  v5 = *((_DWORD *)a2 + 11);
  v6 = *((_QWORD *)a2 + 6);
  v7 = *((_QWORD *)a2 + 7);
  v8 = *((_QWORD *)a2 + 8);
  if ( *((_DWORD *)a2 + 38) )
  {
    v9 = *((_QWORD *)a2 + 10);
    v10 = *((_QWORD *)a2 + 11);
    v11 = *((_QWORD *)a2 + 12);
    v12 = *((_QWORD *)a1 + 10) + *((_DWORD *)a2 + 9) * (int)v3;
    v13 = *((int *)a2 + 45);
    if ( (int)v13 > 0 )
    {
      v6 += v9 * v13;
      v7 += v10 * v13;
      v8 += v11 * *((int *)a2 + 45);
    }
    v14 = (_BYTE *)(3 * *((_DWORD *)a2 + 8) + v12);
    if ( v5 )
    {
      v15 = *((int *)a1 + 22);
      v16 = *((_QWORD *)a2 + 12);
      do
      {
        --v5;
        v17 = v14;
        v18 = &v14[3 * *((_DWORD *)a2 + 10)];
        if ( v14 != v18 )
        {
          do
          {
            *v17 = BYTE6(v8);
            v17[1] = BYTE6(v7);
            v17[2] = BYTE6(v6);
            v17 += 3;
          }
          while ( v17 != v18 );
        }
        v6 += v9;
        v7 += v10;
        v8 += v16;
        v14 += v15;
      }
      while ( v5 );
    }
  }
  else
  {
    v19 = *((int *)a2 + 44);
    v20 = *((_QWORD *)a2 + 14);
    v21 = *((_QWORD *)a2 + 16);
    v32 = v20;
    v33 = *((_QWORD *)a2 + 15);
    v34 = v21;
    BYTE6(v31) = BYTE6(v8);
    if ( (int)v19 > 0 )
    {
      v6 += v20 * v19;
      v7 += *((_QWORD *)a2 + 15) * v19;
      v31 = v8 + v21 * v19;
      v8 = v31;
    }
    v22 = *((_DWORD *)a2 + 10);
    if ( (unsigned int)(v22 - 1) <= 0xD05554 )
    {
      v23 = AllocFreeTmpBuffer((unsigned int)(3 * v22));
      v24 = (const void *)v23;
      if ( v23 )
      {
        v25 = (_BYTE *)v23;
        v26 = (_BYTE *)(v23 + 3 * *((_DWORD *)a2 + 10));
        if ( (_BYTE *)v23 != v26 )
        {
          v27 = BYTE6(v31);
          do
          {
            v8 += v34;
            *v25 = v27;
            v28 = HIWORD(v7);
            v7 += v33;
            v25[1] = v28;
            v29 = HIWORD(v6);
            v6 += v32;
            v25[2] = v29;
            v25 += 3;
            v27 = BYTE6(v8);
          }
          while ( v25 != v26 );
        }
        for ( i = (char *)(*((_QWORD *)a1 + 10) + 3 * *((_DWORD *)a2 + 8) + (__int64)(*((_DWORD *)a2 + 9) * (int)v3));
              v5;
              --v5 )
        {
          memmove(i, v24, 3 * *((_DWORD *)a2 + 10));
          i += v3;
        }
        FreeTmpBuffer(v24);
      }
    }
  }
}
