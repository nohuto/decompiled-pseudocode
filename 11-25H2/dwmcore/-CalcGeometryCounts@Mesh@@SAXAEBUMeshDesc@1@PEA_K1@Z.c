/*
 * XREFs of ?CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z @ 0x18016B550
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18016A110 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z @ 0x18016B550 (-CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z.c)
 * Callees:
 *     ?CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z @ 0x18016B550 (-CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall Mesh::CalcGeometryCounts(const struct Mesh::MeshDesc *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  __int64 v5; // rdx
  unsigned int v7; // ecx
  int v8; // eax
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rax
  char v12; // r12
  unsigned __int64 v13; // r14
  int v14; // r15d
  int v15; // ecx
  int v16; // r10d
  int v17; // eax
  int v18; // r8d
  int v19; // r8d
  int v20; // r8d
  int v21; // eax
  int v22; // eax
  int v23; // r8d
  int v24; // ecx
  int v25; // xmm0_4
  char v26; // al
  __int64 v27; // rbx
  __int64 v28; // rcx
  char v29; // si
  unsigned int v30; // r8d
  char v31; // cl
  bool v32; // cf
  __int64 v33; // rax
  int v34; // [rsp+20h] [rbp-88h] BYREF
  __int64 v35; // [rsp+28h] [rbp-80h]
  __int64 v36; // [rsp+30h] [rbp-78h]
  _DWORD *v37; // [rsp+38h] [rbp-70h]
  __int64 v38; // [rsp+40h] [rbp-68h]
  char *v39; // [rsp+48h] [rbp-60h]
  int v40; // [rsp+50h] [rbp-58h]
  char v41; // [rsp+54h] [rbp-54h]
  char v42; // [rsp+55h] [rbp-53h]
  _DWORD v43[4]; // [rsp+58h] [rbp-50h] BYREF

  v5 = 0LL;
  if ( !*((_BYTE *)a1 + 52) )
  {
    v9 = *((_QWORD *)a1 + 1);
    v10 = 0LL;
    if ( v9 < 3 )
    {
LABEL_14:
      *a2 = v10;
      *a3 = v5;
      return;
    }
    v11 = *((_QWORD *)a1 + 1);
    v12 = *((_BYTE *)a1 + 53);
    v10 = v11;
    v13 = v9 - 2;
    v14 = *((_DWORD *)a1 + 12);
    if ( v12 )
    {
      v11 = *((_QWORD *)a1 + 1);
    }
    else
    {
      v13 = 0LL;
      v10 = 0LL;
    }
    if ( !v14 )
    {
LABEL_13:
      v5 = 3 * v13;
      goto LABEL_14;
    }
    v27 = *((_QWORD *)a1 + 3);
    v28 = (unsigned int)(v11 - 1);
    if ( *(_DWORD *)(v27 + 4 * v28) == 3 )
    {
      switch ( v14 )
      {
        case 3:
          v29 = *(_BYTE *)(v28 + *((_QWORD *)a1 + 5)) == 0;
          goto LABEL_29;
        case 1:
          v29 = 1;
          goto LABEL_29;
        case 2:
          v29 = *(_BYTE *)(v28 + *((_QWORD *)a1 + 5));
          goto LABEL_29;
      }
    }
    v29 = 0;
LABEL_29:
    v30 = 0;
    while ( 1 )
    {
      if ( *(_DWORD *)(v27 + 4 * v5) != 3 )
        goto LABEL_31;
      if ( v14 == 3 )
        break;
      if ( v14 == 1 )
      {
LABEL_37:
        v32 = v29 != 0;
        v29 = 1;
        v33 = 2 * (2LL - v32);
        if ( v12 )
          v33 = 2LL - v32;
        v10 += v33;
        v13 += 2LL;
        goto LABEL_32;
      }
      if ( v14 == 2 )
      {
        v31 = *(_BYTE *)(v5 + *((_QWORD *)a1 + 5));
LABEL_36:
        if ( v31 )
          goto LABEL_37;
      }
LABEL_31:
      v29 = 0;
LABEL_32:
      v5 = ++v30;
      if ( v30 >= v9 )
        goto LABEL_13;
    }
    v31 = *(_BYTE *)(v5 + *((_QWORD *)a1 + 5)) == 0;
    goto LABEL_36;
  }
  *a2 = 0LL;
  *a3 = 0LL;
  v7 = *((_DWORD *)a1 + 12);
  if ( v7 > 1 )
    goto LABEL_16;
  v8 = *((_DWORD *)a1 + 6);
  if ( !v8 )
  {
    if ( *((_BYTE *)a1 + 53) )
    {
      *a2 = 4LL;
      *a3 = 6LL;
    }
    return;
  }
  if ( v8 == 50529027 )
  {
    if ( v7 == 1 )
    {
      *a2 = 8LL;
    }
    else if ( *((_BYTE *)a1 + 53) )
    {
      *a2 = 4LL;
    }
    if ( *((_DWORD *)a1 + 12) == 1 )
      *a3 += 24LL;
    if ( *((_BYTE *)a1 + 53) )
      *a3 += 6LL;
  }
  else
  {
LABEL_16:
    v15 = *((_DWORD *)a1 + 6);
    v16 = 2;
    v17 = v15 & 0x3000000;
    if ( (v15 & 0x3000000) == 0x3000000 )
    {
      v18 = 3;
    }
    else if ( v17 == 0x1000000 )
    {
      v18 = 1;
    }
    else
    {
      v18 = 2;
      if ( v17 != 0x2000000 )
        v18 = 0;
    }
    v43[3] = v18;
    v19 = v15 & 3;
    if ( v19 == 3 )
    {
      v21 = 3;
    }
    else
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 == 1 )
          v21 = 2;
        else
          v21 = 0;
      }
      else
      {
        v21 = 1;
      }
    }
    v43[0] = v21;
    v22 = v15 & 0x300;
    if ( v22 == 768 )
    {
      v23 = 3;
    }
    else if ( v22 == 256 )
    {
      v23 = 1;
    }
    else
    {
      v23 = 2;
      if ( v22 != 512 )
        v23 = 0;
    }
    v24 = v15 & 0x30000;
    v43[1] = v23;
    if ( v24 == 196608 )
    {
      v16 = 3;
    }
    else if ( v24 == 0x10000 )
    {
      v16 = 1;
    }
    else if ( v24 != 0x20000 )
    {
      v16 = 0;
    }
    v25 = *(_DWORD *)a1;
    v37 = v43;
    v41 = 0;
    v39 = (char *)a1 + 28;
    v40 = *((_DWORD *)a1 + 12);
    v26 = *((_BYTE *)a1 + 53);
    v36 = 0LL;
    v38 = 0LL;
    v42 = v26;
    v34 = v25;
    v43[2] = v16;
    v35 = 4LL;
    Mesh::CalcGeometryCounts((const struct Mesh::MeshDesc *)&v34, a2, a3);
  }
}
