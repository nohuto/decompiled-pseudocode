/*
 * XREFs of sub_140400690 @ 0x140400690
 * Callers:
 *     WbCreateHeapExecutedBlock @ 0x1409203B8 (WbCreateHeapExecutedBlock.c)
 *     sub_1409DA700 @ 0x1409DA700 (sub_1409DA700.c)
 *     sub_140A1F9C8 @ 0x140A1F9C8 (sub_140A1F9C8.c)
 * Callees:
 *     sub_140400A20 @ 0x140400A20 (sub_140400A20.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall sub_140400690(__int64 a1, char *a2, char *a3, unsigned int a4, __int64 a5, unsigned int a6, _BYTE *a7)
{
  unsigned int v7; // r13d
  unsigned __int64 v10; // rdi
  __int64 v11; // r15
  unsigned int v12; // ebp
  unsigned int v13; // edi
  unsigned int v14; // r14d
  unsigned int v15; // ebp
  unsigned int v16; // edi
  unsigned int v17; // r14d
  unsigned int v18; // ebp
  unsigned int v19; // edi
  unsigned int v20; // r14d
  int v21; // ebp
  char *v22; // rax
  int v23; // r14d
  char *v24; // r12
  int v25; // r15d
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r13
  unsigned int v28; // r14d
  unsigned int v29; // r15d
  unsigned int v30; // ebp
  unsigned int v31; // r14d
  unsigned int v32; // r15d
  unsigned int v33; // ebp
  unsigned int v34; // r14d
  unsigned int v35; // r15d
  unsigned int v36; // ebp
  unsigned int v37; // eax
  int v38; // r14d
  char *v39; // rax
  bool v40; // zf
  __int64 Src; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+28h] [rbp-50h] BYREF
  char *v43; // [rsp+30h] [rbp-48h]
  __int64 v44; // [rsp+38h] [rbp-40h]
  char *v45; // [rsp+88h] [rbp+10h]
  char *v46; // [rsp+90h] [rbp+18h]

  if ( a4 )
  {
    v46 = a3;
    v7 = a4;
    LODWORD(v10) = ~a6;
    Src = 0LL;
    v42 = a6;
    v11 = a4 & 7;
    if ( (a4 & 7) != 0 )
    {
      v12 = v10 ^ sub_140400A20(a1, 9LL, a5, a6);
      v13 = a6 ^ sub_140400A20(a1, 8LL, a5, v12);
      v14 = v12 ^ sub_140400A20(a1, 7LL, a5, v13);
      v15 = v13 ^ sub_140400A20(a1, 6LL, a5, v14);
      v16 = v14 ^ sub_140400A20(a1, 5LL, a5, v15);
      v17 = v15 ^ sub_140400A20(a1, 4LL, a5, v16);
      v18 = v16 ^ sub_140400A20(a1, 3LL, a5, v17);
      v19 = v17 ^ sub_140400A20(a1, 2LL, a5, v18);
      v20 = v18 ^ sub_140400A20(a1, 1LL, a5, v19);
      v42 = 0LL;
      v21 = v19 ^ sub_140400A20(a1, 0LL, a5, v20);
      memmove(&v42, a2, (unsigned int)v11);
      v10 = v42;
      LODWORD(Src) = v42 ^ v20;
      HIDWORD(Src) = v21 ^ HIDWORD(v42);
      memset_0((char *)&Src + v11, 0, (unsigned int)(8 - v11));
      memmove(v46, &Src, (unsigned int)v11);
      a3 = v46;
      v42 = HIDWORD(v10);
    }
    v22 = &a3[v11];
    v43 = &a3[v11];
    if ( v7 >> 3 )
    {
      v23 = HIDWORD(Src);
      v24 = (char *)(a2 - a3);
      v25 = Src;
      v45 = v24;
      v44 = v7 >> 3;
      do
      {
        v26 = *(_QWORD *)&v22[(_QWORD)v24];
        v27 = HIDWORD(v26);
        v28 = HIDWORD(v26) ^ v23;
        v29 = v26 ^ sub_140400A20(a1, 9LL, a5, v28) ^ v25;
        v30 = v28 ^ sub_140400A20(a1, 8LL, a5, v29);
        v31 = v29 ^ sub_140400A20(a1, 7LL, a5, v30);
        v32 = v30 ^ sub_140400A20(a1, 6LL, a5, v31);
        v33 = v31 ^ sub_140400A20(a1, 5LL, a5, v32);
        v34 = v32 ^ sub_140400A20(a1, 4LL, a5, v33);
        v35 = v33 ^ sub_140400A20(a1, 3LL, a5, v34);
        v36 = v34 ^ sub_140400A20(a1, 2LL, a5, v35);
        v37 = v35 ^ sub_140400A20(a1, 1LL, a5, v36);
        v25 = v10 ^ v37;
        v38 = sub_140400A20(a1, 0LL, a5, v37);
        v39 = v43;
        v23 = v42 ^ v36 ^ v38;
        *(_DWORD *)v43 = v25;
        *((_DWORD *)v39 + 1) = v23;
        v22 = v39 + 8;
        v43 = v22;
        v40 = v44-- == 1;
        LODWORD(v10) = v26;
        v24 = v45;
        LODWORD(v42) = v27;
      }
      while ( !v40 );
      v7 = a4;
      a3 = v46;
    }
    *a7 = a3[v7 - 1];
  }
}
