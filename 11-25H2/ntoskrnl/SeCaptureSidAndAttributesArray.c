/*
 * XREFs of SeCaptureSidAndAttributesArray @ 0x1408A38E0
 * Callers:
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     SepLengthSidAndAttributesArray @ 0x1408A3830 (SepLengthSidAndAttributesArray.c)
 *     NtAdjustGroupsToken @ 0x140996CB0 (NtAdjustGroupsToken.c)
 *     NtFilterToken @ 0x1409970E0 (NtFilterToken.c)
 *     NtCreateTokenEx @ 0x1409974A0 (NtCreateTokenEx.c)
 *     SepDuplicateClaimAttributes @ 0x140999D24 (SepDuplicateClaimAttributes.c)
 *     SepSetTokenCapabilities @ 0x140A08CB8 (SepSetTokenCapabilities.c)
 *     SepCreateClaimAttributes @ 0x140A53380 (SepCreateClaimAttributes.c)
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140ACDB00 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlLengthSid @ 0x140458B00 (RtlLengthSid.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     RtlValidSid @ 0x140918DF0 (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x140918FE0 (RtlLengthRequiredSid.c)
 *     ExAllocatePoolWithTag @ 0x140B62010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCaptureSidAndAttributesArray(
        char *a1,
        unsigned int a2,
        char a3,
        char *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        PVOID *a8,
        unsigned int *a9)
{
  char *v9; // rsi
  char v10; // r14
  __int64 v11; // r13
  __int64 v13; // r15
  unsigned int v14; // ebx
  char *v15; // rax
  __int64 v16; // r8
  unsigned int *PoolWithTag; // r8
  PVOID *v18; // r12
  char *v19; // rsi
  const void **v20; // r14
  __int64 v21; // r15
  unsigned int v22; // ebx
  char *v24; // rsi
  unsigned int v25; // r14d
  unsigned int v26; // r15d
  void *v27; // rbx
  unsigned int v28; // eax
  __int64 v29; // rsi
  __int64 v30; // rbx
  __int64 v31; // rax
  ULONG v32; // ecx
  ULONG v33; // eax
  int v34; // ecx
  int v35; // [rsp+20h] [rbp-68h]
  int v36; // [rsp+24h] [rbp-64h]
  int i; // [rsp+28h] [rbp-60h]
  unsigned int *P; // [rsp+30h] [rbp-58h]
  _QWORD *v39; // [rsp+40h] [rbp-48h]

  v9 = a4;
  v10 = a3;
  v11 = a2;
  P = 0LL;
  v35 = 0;
  if ( !a2 )
  {
    *a8 = 0LL;
    *a9 = 0;
    return 0LL;
  }
  if ( a2 > 0x1000 )
    return 3221225485LL;
  v13 = 16 * a2;
  v14 = 16 * a2;
  v36 = 16 * a2;
  if ( a3 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag((POOL_TYPE)1025, 16 * a2, 0x61546553u);
    P = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    if ( (_DWORD)v13 )
    {
      if ( ((unsigned __int8)a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a1[v13] > 0x7FFFFFFF0000LL || &a1[v13] < a1 )
        v14 = 16 * v11;
    }
    v28 = 0;
    for ( i = 0; ; ++i )
    {
      if ( v28 >= (unsigned int)v11 )
      {
        v34 = 0;
        goto LABEL_54;
      }
      v29 = 2LL * v28;
      v30 = *(_QWORD *)&a1[16 * v28];
      v31 = v30 + 1;
      if ( (unsigned __int64)(v30 + 1) >= 0x7FFFFFFF0000LL )
        v31 = 0x7FFFFFFF0000LL;
      v32 = *(unsigned __int8 *)v31;
      if ( v32 > 0xF )
        break;
      *(_QWORD *)&PoolWithTag[2 * v29] = v30;
      v33 = RtlLengthRequiredSid(v32);
      PoolWithTag = P;
      P[2 * v29 + 2] = v33;
      if ( v33 && (v30 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = ((P[2 * v29 + 2] + 3) & 0xFFFFFFFC) + v36;
      v36 = v14;
      v28 = i + 1;
    }
    v34 = -1073741704;
    v35 = -1073741704;
    v14 = v36;
LABEL_54:
    if ( v34 < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      return (unsigned int)v35;
    }
    v9 = a4;
    v10 = a3;
  }
  else
  {
    v15 = a1;
    v16 = a2;
    do
    {
      v14 += (4 * *(unsigned __int8 *)(*(_QWORD *)v15 + 1LL) + 11) & 0xFFFFFFFC;
      v15 += 16;
      --v16;
    }
    while ( v16 );
    PoolWithTag = 0LL;
  }
  *a9 = v14;
  if ( !v9 )
  {
    v9 = (char *)ExAllocatePoolWithTag((POOL_TYPE)1025, v14, 0x61536553u);
    v18 = a8;
    *a8 = v9;
    if ( v9 )
      goto LABEL_10;
    if ( v10 )
      ExFreePoolWithTag(P, 0);
    return 3221225626LL;
  }
  if ( v14 <= a5 )
  {
    v18 = a8;
    *a8 = v9;
LABEL_10:
    if ( v10 )
    {
      memmove(v9, a1, (unsigned int)v13);
      v24 = &v9[((_DWORD)v13 + 3) & 0xFFFFFFFC];
      v25 = 0;
      v39 = *v18;
      while ( v25 < (unsigned int)v11 && !v35 )
      {
        memmove(v24, *(const void **)&P[4 * v25], P[4 * v25 + 2]);
        v39[2 * v25] = v24;
        v26 = P[4 * v25 + 2];
        v24 += (v26 + 3) & 0xFFFFFFFC;
        if ( (v39[2 * v25 + 1] & 0x1FFFFF80) != 0 )
        {
          v35 = -1073741811;
        }
        else
        {
          v27 = (void *)v39[2 * v25];
          if ( !RtlValidSid(v27) || RtlLengthSid(v27) != v26 )
            v35 = -1073741704;
        }
        ++v25;
      }
    }
    else
    {
      memmove(v9, a1, (unsigned int)v13);
      v19 = &v9[((_DWORD)v13 + 3) & 0xFFFFFFFC];
      v20 = (const void **)*v18;
      if ( (_DWORD)v11 )
      {
        v21 = v11;
        do
        {
          v22 = 4 * *((unsigned __int8 *)*v20 + 1) + 8;
          memmove(v19, *v20, v22);
          *v20 = v19;
          v20 += 2;
          v19 += (v22 + 3) & 0xFFFFFFFC;
          --v21;
        }
        while ( v21 );
      }
    }
    if ( a3 )
      ExFreePoolWithTag(P, 0);
    if ( !a4 && v35 < 0 )
    {
      ExFreePoolWithTag(*v18, 0);
      *v18 = 0LL;
    }
    return (unsigned int)v35;
  }
  if ( v10 )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 3221225507LL;
}
