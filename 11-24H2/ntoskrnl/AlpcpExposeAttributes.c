/*
 * XREFs of AlpcpExposeAttributes @ 0x1408980D0
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x14086392C (AlpcpProcessConnectionRequest.c)
 *     AlpcpCompleteDispatchMessage @ 0x1408912A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessage @ 0x140899160 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140A304CC (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140890590 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x140890620 (AlpcpUnlockBlob.c)
 *     AlpcpReferenceBlob @ 0x1408966C0 (AlpcpReferenceBlob.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x1408986E0 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     AlpcpExposeHandleAttribute @ 0x140898760 (AlpcpExposeHandleAttribute.c)
 *     AlpcpExposeTokenAttribute @ 0x140898930 (AlpcpExposeTokenAttribute.c)
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
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  int v38; // ecx
  int v39; // edx
  __int64 v40; // rax
  int v41; // r8d
  _DWORD *v42; // r13
  __int64 v43; // rax
  _DWORD *v44; // rcx
  _QWORD *v45; // rax
  int v46; // edx
  int v47; // eax
  int v48; // r12d
  __int64 v49; // rcx
  __int64 v50; // r13
  _DWORD *v51; // r13
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rcx
  ULONG_PTR v57; // rsi
  ULONG_PTR v58; // rdi
  int v59; // ebp
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rcx
  __int128 v66; // [rsp+20h] [rbp-58h] BYREF
  __int64 v67; // [rsp+30h] [rbp-48h]
  __int64 v68; // [rsp+38h] [rbp-40h]
  __int64 v70; // [rsp+A0h] [rbp+28h]

  result = 0LL;
  v7 = a4;
  v9 = a1;
  *(_DWORD *)(a5 + 4) = 0;
  if ( a2 < 0 )
  {
    v38 = 0;
    if ( a4 < 0 && *(_QWORD *)(a3 + 136) )
    {
      *(_DWORD *)(a5 + 8) = 0;
      result = *(_QWORD *)(a3 + 136);
      *(_DWORD *)(a5 + 16) = *(_DWORD *)(result + 8);
      *(_DWORD *)(a5 + 4) |= 0x80000000;
      v38 = *(_DWORD *)(a5 + 4);
    }
    v39 = a4 & 0x40000000;
    if ( (a4 & 0x40000000) != 0 )
    {
      v40 = *(_QWORD *)(a3 + 144);
      v41 = 0;
      v67 = 0LL;
      v42 = (_DWORD *)(a5 + (((__int64)a4 >> 63) & 0xC) + 8);
      v66 = 0LL;
      if ( v40 )
      {
        v57 = *(_QWORD *)(v40 + 16);
        AlpcpReferenceBlob(v57);
        v58 = *(_QWORD *)(*(_QWORD *)(a3 + 144) + 16LL);
        AlpcpLockForCachedReferenceBlob(v58);
        v59 = *(_DWORD *)(v58 + 48);
        AlpcpUnlockBlob(v58, v60, v61, v62);
        AlpcpDereferenceBlobEx(v57, 1, v63, v64);
        *(_DWORD *)(a3 + 40) |= 0x4000u;
        v65 = *(_QWORD *)(a3 + 144);
        *((_QWORD *)&v66 + 1) = 0LL;
        v67 = *(_QWORD *)(v65 + 40);
        v68 = *(_QWORD *)(v65 + 48);
        result = (v59 & 1) != 0 ? 0x40000LL : (unsigned int)v66;
        *(_DWORD *)(a5 + 4) |= 0x40000000u;
        v38 = *(_DWORD *)(a5 + 4);
        v41 = v68;
        v9 = a1;
        v39 = v7 & 0x40000000;
      }
      else
      {
        result = (unsigned int)v66;
      }
      if ( (v38 & 0x40000000) != 0 )
      {
        *v42 = result;
        v42[1] = DWORD2(v66);
        result = (unsigned int)v67;
        v42[2] = v67;
        v42[3] = v41;
      }
    }
    if ( (v7 & 0x20000000) != 0 )
    {
      v43 = ((v7 >> 63) & 0xC) + 24;
      if ( !v39 )
        v43 = ((v7 >> 63) & 0xC) + 8;
      v44 = (_DWORD *)(v43 + a5);
      v45 = (_QWORD *)(a3 + 64);
      if ( *(_QWORD *)(a3 + 56) == v9 || *v45 == v9 )
        v46 = *(_DWORD *)(a3 + 128);
      else
        v46 = *(_DWORD *)(a3 + 120);
      *v44 = v46;
      if ( *(_QWORD *)(a3 + 56) == v9 || *v45 == v9 )
        v47 = *(_DWORD *)(a3 + 72);
      else
        v47 = *(_DWORD *)(a3 + 44);
      v44[2] = v47;
      if ( (*(_DWORD *)(v9 + 416) & 6) == 4 )
        result = *(unsigned int *)(a3 + 104);
      else
        result = *(unsigned int *)(a3 + 112);
      v44[1] = result;
      if ( v46 )
        *(_DWORD *)(a5 + 4) |= 0x20000000u;
    }
    v48 = v7 & 0x10000000;
    if ( (v7 & 0x10000000) != 0 )
    {
      v66 = 0LL;
      v49 = ((v7 >> 63) & 0xC) + 24;
      if ( (v7 & 0x40000000) == 0 )
        v49 = ((v7 >> 63) & 0xC) + 8;
      v50 = v49 + 20;
      if ( (v7 & 0x20000000) == 0 )
        v50 = v49;
      LODWORD(v67) = 0;
      v51 = (_DWORD *)(a5 + v50);
      result = AlpcpExposeHandleAttribute(v9, a3, &v66, a5 + 4);
      if ( (*(_DWORD *)(a5 + 4) & 0x10000000) != 0 )
      {
        *v51 = v66;
        v48 = v7 & 0x10000000;
        v51[1] = DWORD2(v66);
        v51[2] = v67;
        result = HIDWORD(v67);
        v51[3] = HIDWORD(v67);
      }
    }
    if ( (v7 & 0x8000000) != 0 )
    {
      v52 = ((v7 >> 63) & 0xC) + 24;
      if ( (v7 & 0x40000000) == 0 )
        v52 = ((v7 >> 63) & 0xC) + 8;
      v53 = v52 + 20;
      if ( (v7 & 0x20000000) == 0 )
        v53 = v52;
      v54 = v53 + 16;
      if ( (v7 & 0x10000000) == 0 )
        v54 = v53;
      result = AlpcpExposeTokenAttribute(v9, a3, a5 + v54, a5 + 4);
    }
    else
    {
      v48 = v7 & 0x10000000;
    }
    if ( (v7 & 0x2000000) != 0 )
    {
      v55 = ((v7 >> 63) & 0xC) + 24;
      if ( (v7 & 0x40000000) == 0 )
        v55 = ((v7 >> 63) & 0xC) + 8;
      v56 = v55 + 20;
      if ( (v7 & 0x20000000) == 0 )
        v56 = v55;
      v26 = v56 + 16;
      if ( !v48 )
        v26 = v56;
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
      v70 = a5 + (((__int64)a4 >> 63) & 0x18) + 8;
      result = *(_QWORD *)(a3 + 144);
      if ( result )
      {
        v29 = *(_QWORD *)(result + 16);
        AlpcpReferenceBlob(v29);
        v30 = *(_QWORD *)(*(_QWORD *)(a3 + 144) + 16LL);
        AlpcpLockForCachedReferenceBlob(v30);
        v31 = *(_DWORD *)(v30 + 48);
        AlpcpUnlockBlob(v30, v32, v33, v34);
        AlpcpDereferenceBlobEx(v29, 1, v35, v36);
        *(_DWORD *)(a3 + 40) |= 0x4000u;
        v37 = *(_QWORD *)(a3 + 144);
        *(_OWORD *)v70 = 0LL;
        *(_OWORD *)(v70 + 16) = 0LL;
        *(_QWORD *)(v70 + 16) = *(_QWORD *)(v37 + 40);
        result = *(_QWORD *)(v37 + 48);
        *(_QWORD *)(v70 + 24) = result;
        if ( (v31 & 1) != 0 )
          *(_DWORD *)v70 = 0x40000;
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
