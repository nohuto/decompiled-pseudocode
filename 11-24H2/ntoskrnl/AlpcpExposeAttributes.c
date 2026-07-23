/*
 * XREFs of AlpcpExposeAttributes @ 0x1408A0770
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140867F3C (AlpcpProcessConnectionRequest.c)
 *     AlpcpCompleteDispatchMessage @ 0x14089A890 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessage @ 0x1408A1800 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140A24FBC (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x1408980A0 (AlpcpUnlockBlob.c)
 *     AlpcpReferenceBlob @ 0x14089EB60 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14089ED30 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x1408A0D80 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     AlpcpExposeHandleAttribute @ 0x1408A0E00 (AlpcpExposeHandleAttribute.c)
 *     AlpcpExposeTokenAttribute @ 0x1408A0FD0 (AlpcpExposeTokenAttribute.c)
 */

__int64 __fastcall AlpcpExposeAttributes(__int64 a1, int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v7; // r14
  __int64 v9; // rsi
  _DWORD *v10; // r13
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r13d
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  bool v27; // zf
  __int64 v28; // r8
  ULONG_PTR v29; // rsi
  ULONG_PTR v30; // rdi
  int v31; // ebp
  __int64 v32; // rcx
  int v33; // ecx
  int v34; // edx
  __int64 v35; // rax
  int v36; // r8d
  _DWORD *v37; // r13
  __int64 v38; // rax
  _DWORD *v39; // rcx
  _QWORD *v40; // rax
  int v41; // edx
  int v42; // eax
  int v43; // r12d
  __int64 v44; // rcx
  __int64 v45; // r13
  _DWORD *v46; // r13
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rcx
  ULONG_PTR v52; // rsi
  ULONG_PTR v53; // rdi
  int v54; // ebp
  __int64 v55; // rcx
  __int128 v56; // [rsp+20h] [rbp-58h] BYREF
  __int64 v57; // [rsp+30h] [rbp-48h]
  __int64 v58; // [rsp+38h] [rbp-40h]
  __int64 v60; // [rsp+A0h] [rbp+28h]

  result = 0LL;
  v7 = a4;
  v9 = a1;
  *(_DWORD *)(a5 + 4) = 0;
  if ( a2 < 0 )
  {
    v33 = 0;
    if ( a4 < 0 && *(_QWORD *)(a3 + 136) )
    {
      *(_DWORD *)(a5 + 8) = 0;
      result = *(_QWORD *)(a3 + 136);
      *(_DWORD *)(a5 + 16) = *(_DWORD *)(result + 8);
      *(_DWORD *)(a5 + 4) |= 0x80000000;
      v33 = *(_DWORD *)(a5 + 4);
    }
    v34 = a4 & 0x40000000;
    if ( (a4 & 0x40000000) != 0 )
    {
      v35 = *(_QWORD *)(a3 + 144);
      v36 = 0;
      v57 = 0LL;
      v37 = (_DWORD *)(a5 + (((__int64)a4 >> 63) & 0xC) + 8);
      v56 = 0LL;
      if ( v35 )
      {
        v52 = *(_QWORD *)(v35 + 16);
        AlpcpReferenceBlob(v52);
        v53 = *(_QWORD *)(*(_QWORD *)(a3 + 144) + 16LL);
        AlpcpLockForCachedReferenceBlob(v53);
        v54 = *(_DWORD *)(v53 + 48);
        AlpcpUnlockBlob(v53);
        AlpcpDereferenceBlobEx(v52, 1);
        *(_DWORD *)(a3 + 40) |= 0x4000u;
        v55 = *(_QWORD *)(a3 + 144);
        *((_QWORD *)&v56 + 1) = 0LL;
        v57 = *(_QWORD *)(v55 + 40);
        v58 = *(_QWORD *)(v55 + 48);
        result = (v54 & 1) != 0 ? 0x40000LL : (unsigned int)v56;
        *(_DWORD *)(a5 + 4) |= 0x40000000u;
        v33 = *(_DWORD *)(a5 + 4);
        v36 = v58;
        v9 = a1;
        v34 = v7 & 0x40000000;
      }
      else
      {
        result = (unsigned int)v56;
      }
      if ( (v33 & 0x40000000) != 0 )
      {
        *v37 = result;
        v37[1] = DWORD2(v56);
        result = (unsigned int)v57;
        v37[2] = v57;
        v37[3] = v36;
      }
    }
    if ( (v7 & 0x20000000) != 0 )
    {
      v38 = ((v7 >> 63) & 0xC) + 24;
      if ( !v34 )
        v38 = ((v7 >> 63) & 0xC) + 8;
      v39 = (_DWORD *)(v38 + a5);
      v40 = (_QWORD *)(a3 + 64);
      if ( *(_QWORD *)(a3 + 56) == v9 || *v40 == v9 )
        v41 = *(_DWORD *)(a3 + 128);
      else
        v41 = *(_DWORD *)(a3 + 120);
      *v39 = v41;
      if ( *(_QWORD *)(a3 + 56) == v9 || *v40 == v9 )
        v42 = *(_DWORD *)(a3 + 72);
      else
        v42 = *(_DWORD *)(a3 + 44);
      v39[2] = v42;
      if ( (*(_DWORD *)(v9 + 416) & 6) == 4 )
        result = *(unsigned int *)(a3 + 104);
      else
        result = *(unsigned int *)(a3 + 112);
      v39[1] = result;
      if ( v41 )
        *(_DWORD *)(a5 + 4) |= 0x20000000u;
    }
    v43 = v7 & 0x10000000;
    if ( (v7 & 0x10000000) != 0 )
    {
      v56 = 0LL;
      v44 = ((v7 >> 63) & 0xC) + 24;
      if ( (v7 & 0x40000000) == 0 )
        v44 = ((v7 >> 63) & 0xC) + 8;
      v45 = v44 + 20;
      if ( (v7 & 0x20000000) == 0 )
        v45 = v44;
      LODWORD(v57) = 0;
      v46 = (_DWORD *)(a5 + v45);
      result = AlpcpExposeHandleAttribute(v9, a3, &v56, a5 + 4);
      if ( (*(_DWORD *)(a5 + 4) & 0x10000000) != 0 )
      {
        *v46 = v56;
        v43 = v7 & 0x10000000;
        v46[1] = DWORD2(v56);
        v46[2] = v57;
        result = HIDWORD(v57);
        v46[3] = HIDWORD(v57);
      }
    }
    if ( (v7 & 0x8000000) != 0 )
    {
      v47 = ((v7 >> 63) & 0xC) + 24;
      if ( (v7 & 0x40000000) == 0 )
        v47 = ((v7 >> 63) & 0xC) + 8;
      v48 = v47 + 20;
      if ( (v7 & 0x20000000) == 0 )
        v48 = v47;
      v49 = v48 + 16;
      if ( (v7 & 0x10000000) == 0 )
        v49 = v48;
      result = AlpcpExposeTokenAttribute(v9, a3, a5 + v49, a5 + 4);
    }
    else
    {
      v43 = v7 & 0x10000000;
    }
    if ( (v7 & 0x2000000) != 0 )
    {
      v50 = ((v7 >> 63) & 0xC) + 24;
      if ( (v7 & 0x40000000) == 0 )
        v50 = ((v7 >> 63) & 0xC) + 8;
      v51 = v50 + 20;
      if ( (v7 & 0x20000000) == 0 )
        v51 = v50;
      v26 = v51 + 16;
      if ( !v43 )
        v26 = v51;
      v27 = (v7 & 0x8000000) == 0;
      goto LABEL_43;
    }
  }
  else
  {
    v10 = (_DWORD *)(a5 + 4);
    if ( a4 < 0 )
    {
      v10 = (_DWORD *)(a5 + 4);
      if ( *(_QWORD *)(a3 + 136) )
      {
        *(_DWORD *)(a5 + 8) = 0;
        v10 = (_DWORD *)(a5 + 4);
        result = *(_QWORD *)(a3 + 136);
        *(_QWORD *)(a5 + 24) = *(_QWORD *)(result + 8);
        *(_DWORD *)(a5 + 4) |= 0x80000000;
      }
    }
    v11 = a4 & 0x40000000;
    if ( (a4 & 0x40000000) != 0 )
    {
      v60 = a5 + (((__int64)a4 >> 63) & 0x18) + 8;
      result = *(_QWORD *)(a3 + 144);
      if ( result )
      {
        v29 = *(_QWORD *)(result + 16);
        AlpcpReferenceBlob(v29);
        v30 = *(_QWORD *)(*(_QWORD *)(a3 + 144) + 16LL);
        AlpcpLockForCachedReferenceBlob(v30);
        v31 = *(_DWORD *)(v30 + 48);
        AlpcpUnlockBlob(v30);
        AlpcpDereferenceBlobEx(v29, 1);
        *(_DWORD *)(a3 + 40) |= 0x4000u;
        v32 = *(_QWORD *)(a3 + 144);
        *(_OWORD *)v60 = 0LL;
        *(_OWORD *)(v60 + 16) = 0LL;
        *(_QWORD *)(v60 + 16) = *(_QWORD *)(v32 + 40);
        result = *(_QWORD *)(v32 + 48);
        *(_QWORD *)(v60 + 24) = result;
        if ( (v31 & 1) != 0 )
          *(_DWORD *)v60 = 0x40000;
        *(_DWORD *)(a5 + 4) |= 0x40000000u;
        v9 = a1;
        v11 = v7 & 0x40000000;
      }
    }
    if ( (v7 & 0x20000000) != 0 )
    {
      v12 = ((v7 >> 63) & 0x18) + 40;
      if ( !v11 )
        v12 = ((v7 >> 63) & 0x18) + 8;
      v13 = v12 + a5;
      v14 = (_QWORD *)(a3 + 64);
      if ( *(_QWORD *)(a3 + 56) == v9 || *v14 == v9 )
        v15 = *(_QWORD *)(a3 + 128);
      else
        v15 = *(_QWORD *)(a3 + 120);
      *(_QWORD *)v13 = v15;
      if ( *(_QWORD *)(a3 + 56) == v9 || *v14 == v9 )
        v16 = *(_DWORD *)(a3 + 72);
      else
        v16 = *(_DWORD *)(a3 + 44);
      *(_DWORD *)(v13 + 16) = v16;
      if ( (*(_DWORD *)(v9 + 416) & 6) == 4 )
        v17 = *(_QWORD *)(a3 + 104);
      else
        v17 = *(_QWORD *)(a3 + 112);
      *(_QWORD *)(v13 + 8) = v17;
      *(_DWORD *)(v13 + 20) = *(_DWORD *)(a3 + 264);
      result = *(unsigned int *)(a3 + 272);
      *(_DWORD *)(v13 + 24) = result;
      if ( v10 && v15 )
        *v10 |= 0x20000000u;
    }
    if ( (v7 & 0x10000000) != 0 )
    {
      v18 = ((v7 >> 63) & 0x18) + 40;
      if ( (v7 & 0x40000000) == 0 )
        v18 = ((v7 >> 63) & 0x18) + 8;
      v19 = v18 + 32;
      if ( (v7 & 0x20000000) == 0 )
        v19 = v18;
      result = AlpcpExposeHandleAttribute(v9, a3, a5 + v19, a5 + 4);
      v20 = v7 & 0x10000000;
    }
    else
    {
      v20 = 0;
    }
    if ( (v7 & 0x8000000) != 0 )
    {
      v21 = ((v7 >> 63) & 0x18) + 40;
      if ( (v7 & 0x40000000) == 0 )
        v21 = ((v7 >> 63) & 0x18) + 8;
      v22 = v21 + 32;
      if ( (v7 & 0x20000000) == 0 )
        v22 = v21;
      v23 = v22 + 24;
      if ( (v7 & 0x10000000) == 0 )
        v23 = v22;
      result = AlpcpExposeTokenAttribute(v9, a3, a5 + v23, a5 + 4);
    }
    else
    {
      v20 = v7 & 0x10000000;
    }
    if ( (v7 & 0x2000000) != 0 )
    {
      v24 = ((v7 >> 63) & 0x18) + 40;
      if ( (v7 & 0x40000000) == 0 )
        v24 = ((v7 >> 63) & 0x18) + 8;
      v25 = v24 + 32;
      if ( (v7 & 0x20000000) == 0 )
        v25 = v24;
      v26 = v25 + 24;
      if ( !v20 )
        v26 = v25;
      v27 = (v7 & 0x8000000) == 0;
LABEL_43:
      v28 = v26 + 24;
      if ( v27 )
        v28 = v26;
      return AlpcpExposeWorkOnBehalfAttribute(v9, a3, a5 + v28, a5 + 4);
    }
  }
  return result;
}
