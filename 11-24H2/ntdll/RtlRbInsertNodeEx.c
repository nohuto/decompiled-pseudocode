/*
 * XREFs of RtlRbInsertNodeEx @ 0x180054EB0
 * Callers:
 *     EtwpInsertRegistration @ 0x18001D8C0 (EtwpInsertRegistration.c)
 *     RtlpHpVsChunkSplit @ 0x180052BD0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpSegFreeRangeInsert @ 0x180053980 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpVsChunkFree @ 0x180053BC0 (RtlpHpVsChunkFree.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800544A0 (RtlpHpSegPageRangeShrink.c)
 *     LdrpCheckForRetryLoading @ 0x18007234C (LdrpCheckForRetryLoading.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x1800740B8 (LdrpInsertModuleToIndexLockHeld.c)
 *     RtlpHpVaMgrFree @ 0x180093150 (RtlpHpVaMgrFree.c)
 *     RtlpHpLargeAlloc @ 0x180093F08 (RtlpHpLargeAlloc.c)
 *     RtlpCreateWnfNameSubscription @ 0x180099A4C (RtlpCreateWnfNameSubscription.c)
 *     RtlpHpVsFreeChunkInsert @ 0x1800DB080 (RtlpHpVsFreeChunkInsert.c)
 *     EtwpInsertGuidEntry @ 0x18010C374 (EtwpInsertGuidEntry.c)
 *     RtlCompareExchangePointerMapping @ 0x180142ED0 (RtlCompareExchangePointerMapping.c)
 *     LdrpAddRedirectedFunction @ 0x180160C30 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlRbInsertNodeEx(unsigned __int64 a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rsi
  bool v5; // bp
  unsigned __int64 v6; // r10
  char v8; // di
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  char v13; // cl
  __int64 v14; // rcx
  char v15; // dl
  unsigned __int64 v16; // rdi
  char v17; // r14
  __int64 v18; // r15
  unsigned __int64 v19; // r8
  BOOL v20; // eax
  _BOOL8 v21; // r13
  _BOOL8 v22; // r15
  _BOOL8 v23; // r12
  bool v24; // zf
  BOOL v25; // r14d
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  int v28; // edx
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // r15
  unsigned int v32; // edi
  unsigned __int64 v33; // rcx
  __int64 v34; // rbx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdi
  __int64 v37; // rbx
  unsigned __int64 v38; // rax
  int v39; // r9d
  __int64 v40; // rdi
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  unsigned __int64 v54; // [rsp+0h] [rbp-58h]
  _BOOL8 v55; // [rsp+8h] [rbp-50h]
  _BOOL8 v56; // [rsp+10h] [rbp-48h]
  BOOL v57; // [rsp+68h] [rbp+10h]
  int v58; // [rsp+68h] [rbp+10h]
  BOOL v59; // [rsp+78h] [rbp+20h]

  v4 = 0LL;
  v5 = a3;
  *(_QWORD *)a4 = 0LL;
  v6 = a2;
  *(_QWORD *)(a4 + 8) = 0LL;
  v8 = *(_BYTE *)(a1 + 8) & 1;
  if ( !a2 )
  {
    v9 = a1 ^ a4;
    v10 = a1 ^ a4;
    if ( !v8 )
      v10 = a4;
    *(_QWORD *)a1 = v10;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    {
      *(_QWORD *)(a1 + 8) = v9;
      *(_BYTE *)(a1 + 8) = v9 | 1;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = a4;
    }
    *(_QWORD *)(a4 + 16) = 0LL;
    return v10;
  }
  v11 = a2;
  v12 = a2 ^ a4;
  if ( !v8 )
    v12 = a4;
  *(_QWORD *)(a2 + 8LL * a3) = v12;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    v11 = a2 ^ a4;
  v10 = v11 | 1;
  *(_QWORD *)(a4 + 16) = v10;
  if ( !a3 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    if ( (v10 & 1) != 0 )
    {
      if ( v10 == 1 )
        goto LABEL_12;
      v14 = v10 ^ (a1 | 1);
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 8);
    }
    if ( a2 == v14 )
    {
      if ( (v10 & 1) != 0 )
      {
        *(_QWORD *)(a1 + 8) = a4 ^ a1;
        LOBYTE(v10) = a4 ^ a1 | 1;
        *(_BYTE *)(a1 + 8) = v10;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = a4;
      }
    }
  }
  while ( 1 )
  {
LABEL_12:
    v13 = *(_BYTE *)(v6 + 16);
    if ( (v13 & 1) == 0 )
      return v10;
    v15 = *(_BYTE *)(a1 + 8);
    v16 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v17 = v15 & 1;
    if ( (v15 & 1) != 0 && v16 )
    {
      v19 = v6 ^ v16;
      v54 = v6 ^ v16;
      v18 = *(_QWORD *)(v6 ^ v16);
    }
    else
    {
      v18 = *(_QWORD *)v16;
      v19 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v54 = v19;
      if ( !v17 )
        goto LABEL_21;
    }
    if ( !v18 )
    {
LABEL_21:
      v20 = v18 != v6;
      v21 = v20;
      v22 = v18 == v6;
      v23 = v20;
      v24 = v17 == 0;
      v59 = v20;
      v57 = v20;
      v25 = v20;
      v56 = v20;
      v26 = *(_QWORD *)(v19 + 8 * v22);
      v55 = v21;
      if ( v24 )
        goto LABEL_22;
      goto LABEL_30;
    }
    v59 = (v19 ^ v18) != v6;
    LODWORD(v21) = v59;
    v57 = v59;
    v25 = v59;
    v56 = (v19 ^ v18) != v6;
    v23 = v56;
    v55 = v56;
    v22 = (v19 ^ v18) == v6;
    v26 = *(_QWORD *)(v54 + 8 * v22);
LABEL_30:
    if ( !v26 )
      break;
    v26 ^= v19;
LABEL_22:
    if ( !v26 || (*(_BYTE *)(v26 + 16) & 1) == 0 )
      break;
    a4 = v19;
    *(_BYTE *)(v6 + 16) = v13 & 0xFE;
    *(_BYTE *)(v26 + 16) &= ~1u;
    v10 = *(_QWORD *)(v19 + 16);
    v6 = v10 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    {
      if ( !v6 )
        return v10;
      v6 ^= v19;
    }
    if ( !v6 )
      return v10;
    *(_BYTE *)(v19 + 16) = v10 | 1;
    v10 = *(_QWORD *)v6;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v10 )
      v10 ^= v6;
    v5 = v19 != v10;
  }
  if ( v5 == v21 )
  {
    v31 = v54;
  }
  else
  {
    v27 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v28 = v15 & 1;
    if ( v28 && v27 )
      v27 ^= a4;
    if ( v27 != v6 )
      goto LABEL_51;
    v29 = *(_QWORD *)(v6 + 8 * v22);
    if ( v28 && v29 )
      v29 ^= v6;
    if ( v29 != a4 )
      goto LABEL_51;
    v30 = *(_QWORD *)(v19 + 8 * v23);
    if ( v28 && v30 )
      v30 ^= v19;
    if ( v30 != v6 )
      goto LABEL_51;
    if ( v28 && v16 )
      v16 ^= v6;
    if ( v16 != v19 )
      goto LABEL_51;
    v31 = v54;
    v32 = v59;
    v33 = a4 ^ v54;
    v57 = v25;
    if ( v28 )
    {
      *(_QWORD *)(v54 + 8 * v55) = v33;
    }
    else
    {
      v33 = v19;
      *(_QWORD *)(v54 + 8 * v56) = a4;
    }
    *(_QWORD *)(a4 + 16) = v33 | *(_DWORD *)(a4 + 16) & 3;
    v34 = *(_QWORD *)(a4 + 8 * v23);
    if ( !v28 )
    {
LABEL_43:
      if ( !v34 )
        goto LABEL_44;
      v40 = *(_QWORD *)(v34 + 16);
      v41 = v40 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v28 && v41 )
        v41 ^= v34;
      if ( v41 == a4 )
      {
        v42 = v6;
        if ( v28 )
          v42 = v6 ^ v34;
        *(_QWORD *)(v34 + 16) = v42 | v40 & 3;
        v32 = v59;
        goto LABEL_44;
      }
LABEL_51:
      __fastfail(0x1Du);
    }
    if ( v34 )
    {
      v34 ^= a4;
      goto LABEL_43;
    }
LABEL_44:
    if ( v28 && v34 )
    {
      *(_QWORD *)(v6 + 8 * (v32 ^ 1LL)) = v6 ^ v34;
LABEL_58:
      *(_QWORD *)(a4 + 8LL * v32) = a4 ^ v6;
      v35 = a4 ^ v6;
    }
    else
    {
      *(_QWORD *)(v6 + 8 * !v21) = v34;
      if ( v28 )
        goto LABEL_58;
      v35 = a4;
      v57 = v25;
      *(_QWORD *)(a4 + 8LL * v32) = v6;
    }
    *(_QWORD *)(v6 + 16) = v35 | *(_DWORD *)(v6 + 16) & 3;
    v6 = a4;
  }
  v36 = *(_QWORD *)a1;
  if ( (*(_QWORD *)(a1 + 8) & 1) != 0 && v36 )
    v36 ^= a1;
  v37 = !v57;
  v38 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v58 = !v57;
  v39 = *(_QWORD *)(a1 + 8) & 1;
  if ( (*(_QWORD *)(a1 + 8) & 1) != 0 && v38 )
    v38 ^= v6;
  if ( v38 != v19 )
    goto LABEL_51;
  v52 = *(_QWORD *)(v19 + 8 * ((unsigned int)v37 ^ 1LL));
  if ( (*(_QWORD *)(a1 + 8) & 1) != 0 && v52 )
    v52 ^= v19;
  if ( v52 != v6 )
    goto LABEL_51;
  v43 = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_QWORD *)(a1 + 8) & 1) != 0 )
  {
    if ( v43 )
    {
      v43 ^= v19;
      goto LABEL_84;
    }
    goto LABEL_99;
  }
LABEL_84:
  if ( !v43 )
  {
LABEL_99:
    if ( v36 != v19 )
      goto LABEL_51;
    v36 = v6;
    goto LABEL_90;
  }
  v44 = *(_QWORD *)(v43 + 8);
  if ( (*(_QWORD *)(a1 + 8) & 1) != 0 && v44 )
    v44 ^= v43;
  if ( v44 == v19 )
  {
    v45 = v6;
    if ( (*(_QWORD *)(a1 + 8) & 1) != 0 )
      v45 = v6 ^ v43;
    *(_QWORD *)(v43 + 8) = v45;
  }
  else
  {
    v50 = *(_QWORD *)v43;
    if ( (*(_QWORD *)(a1 + 8) & 1) != 0 && v50 )
      v50 ^= v43;
    if ( v50 != v19 )
      goto LABEL_51;
    v51 = v6;
    if ( (*(_QWORD *)(a1 + 8) & 1) != 0 )
      v51 = v6 ^ v43;
    *(_QWORD *)v43 = v51;
  }
LABEL_90:
  if ( v39 && v43 )
    v43 ^= v6;
  *(_QWORD *)(v6 + 16) = v43 | *(_DWORD *)(v6 + 16) & 3;
  v46 = *(_QWORD *)(v6 + 8 * v37);
  if ( v39 )
  {
    if ( v46 )
    {
      v46 ^= v6;
      goto LABEL_92;
    }
  }
  else
  {
LABEL_92:
    if ( v46 )
    {
      v37 = *(_QWORD *)(v46 + 16);
      v48 = v37 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v39 && v48 )
        v48 ^= v46;
      if ( v48 != v6 )
        goto LABEL_51;
      v49 = v19;
      if ( v39 )
        v49 = v19 ^ v46;
      *(_QWORD *)(v46 + 16) = v49 | v37 & 3;
      LODWORD(v37) = v58;
    }
  }
  if ( v39 && v46 )
  {
    *(_QWORD *)(v31 + 8 * ((unsigned int)v37 ^ 1LL)) = v19 ^ v46;
LABEL_101:
    *(_QWORD *)(v6 + 8LL * (unsigned int)v37) = v6 ^ v19;
    v47 = v6 ^ v19;
  }
  else
  {
    *(_QWORD *)(v19 + 8 * ((unsigned int)v37 ^ 1LL)) = v46;
    if ( v39 )
      goto LABEL_101;
    v47 = v6;
    *(_QWORD *)(v6 + 8LL * (unsigned int)v37) = v19;
  }
  v10 = *(_QWORD *)(v19 + 16) & 3LL;
  *(_QWORD *)(v19 + 16) = v10 | v47;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    LOBYTE(v10) = a1 ^ v36;
    if ( v36 )
      v4 = a1 ^ v36;
    *(_QWORD *)a1 = v4;
    *(_BYTE *)(v19 + 16) |= 1u;
    *(_BYTE *)(v6 + 16) &= ~1u;
  }
  else
  {
    *(_QWORD *)a1 = v36;
    *(_BYTE *)(v19 + 16) |= 1u;
    *(_BYTE *)(v6 + 16) &= ~1u;
  }
  return v10;
}
