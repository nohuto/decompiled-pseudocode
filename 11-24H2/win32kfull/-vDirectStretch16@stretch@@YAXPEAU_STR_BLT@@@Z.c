/*
 * XREFs of ?vDirectStretch16@stretch@@YAXPEAU_STR_BLT@@@Z @ 0x1402160A0
 * Callers:
 *     ?StretchDIBDirect@stretch@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1401389C8 (-StretchDIBDirect@stretch@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall stretch::vDirectStretch16(stretch *this, struct _STR_BLT *a2)
{
  __int64 v2; // r8
  int v4; // r9d
  int v5; // edi
  unsigned int v6; // ebp
  unsigned __int16 *v7; // rbx
  int v8; // edx
  unsigned __int16 *v9; // r10
  int v10; // r8d
  int v11; // eax
  unsigned int v12; // esi
  unsigned int v13; // r13d
  signed int v14; // edx
  int v15; // ecx
  __int64 v16; // r9
  __int64 v17; // r12
  __int64 v18; // r8
  unsigned int v19; // r15d
  unsigned int v20; // edi
  unsigned __int16 *v21; // r14
  bool v22; // cf
  unsigned __int16 *v23; // r12
  int v24; // r9d
  unsigned int v25; // r8d
  unsigned __int16 *v26; // rcx
  bool v27; // zf
  unsigned int v28; // [rsp+0h] [rbp-68h]
  int v29; // [rsp+4h] [rbp-64h]
  __int64 v30; // [rsp+8h] [rbp-60h]
  __int64 v31; // [rsp+10h] [rbp-58h]
  unsigned int v32; // [rsp+70h] [rbp+8h]
  int v33; // [rsp+78h] [rbp+10h]
  int v34; // [rsp+80h] [rbp+18h]
  unsigned int v35; // [rsp+88h] [rbp+20h]

  v2 = *((int *)this + 7);
  v4 = *((_DWORD *)this + 6);
  v5 = *((_DWORD *)this + 13);
  v6 = *((_DWORD *)this + 15);
  v7 = (unsigned __int16 *)(*(_QWORD *)this + 2LL * *((int *)this + 3));
  v8 = *((_DWORD *)this + 8) - v2;
  v34 = *((_DWORD *)this + 9);
  v29 = v5;
  v9 = (unsigned __int16 *)(*((_QWORD *)this + 2) + 2 * v2);
  v10 = *((_DWORD *)this + 12);
  v11 = 2 * v8;
  v32 = *((_DWORD *)this + 10);
  v12 = ((unsigned int)((_DWORD)v9 - 2 * v8) >> 1) & 1;
  v13 = ((unsigned int)v9 >> 1) & 1;
  v33 = *((_DWORD *)this + 11);
  v28 = v13;
  v14 = v8 - v12 - v13;
  v35 = v12;
  v15 = 0;
  LODWORD(v16) = v4 - v11;
  if ( v34 > 0 )
  {
    if ( v10 )
      v15 = *((_DWORD *)this + 2) * v10;
    v17 = v14;
    v18 = v15;
    v16 = (int)v16;
    v30 = v15;
    v31 = (int)v16;
    do
    {
      v19 = v5 + v6;
      v20 = *((_DWORD *)this + 14);
      v21 = v7;
      if ( v13 )
      {
        v22 = v20 + v33 < v20;
        *v9 = *v7;
        v20 += v33;
        ++v9;
        v21 = &v7[v22 + (unsigned __int64)v32];
      }
      v23 = &v9[v17];
      if ( v9 != v23 )
      {
        do
        {
          v24 = *v21;
          v25 = v20 + v33;
          v22 = v20 + v33 < v20;
          v20 += v33 + v33;
          v26 = &v21[v22 + (unsigned __int64)v32];
          v21 = &v26[(v20 < v25) + (unsigned __int64)v32];
          *(_DWORD *)v9 = v24 | (*v26 << 16);
          v9 += 2;
        }
        while ( v9 != v23 );
        v12 = v35;
        v13 = v28;
        v18 = v30;
        v16 = v31;
      }
      if ( v12 )
        *v9++ = *v21;
      v7 = (unsigned __int16 *)((char *)v7 + v18);
      if ( v19 < v6 )
        v7 = (unsigned __int16 *)((char *)v7 + *((int *)this + 2));
      v17 = v14;
      v9 = (unsigned __int16 *)((char *)v9 + v16);
      v27 = v34-- == 1;
      v6 = v19;
      v5 = v29;
    }
    while ( !v27 );
  }
}
