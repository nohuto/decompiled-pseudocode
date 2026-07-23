/*
 * XREFs of PfpFileBuildReadSupport @ 0x140937944
 * Callers:
 *     PfpPrefetchFiles @ 0x140937198 (PfpPrefetchFiles.c)
 *     PfpPrefetchFilesTrickle @ 0x140938928 (PfpPrefetchFilesTrickle.c)
 * Callees:
 *     PfpFileCheckAttributesForPrefetch @ 0x140469800 (PfpFileCheckAttributesForPrefetch.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     PfpFileBuildReadList @ 0x1409376B0 (PfpFileBuildReadList.c)
 *     MiCreateSectionCommon @ 0x140954024 (MiCreateSectionCommon.c)
 *     PfpOpenHandleClose @ 0x140954390 (PfpOpenHandleClose.c)
 *     PfpOpenHandleCreate @ 0x1409543F8 (PfpOpenHandleCreate.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpFileBuildReadSupport(_QWORD *a1, __int64 a2, unsigned int a3, char a4, __int64 a5)
{
  void *v5; // r15
  void *v6; // r14
  __int64 v9; // rcx
  __int64 v12; // rdx
  int v13; // r10d
  int v14; // r9d
  __int128 *v15; // rbx
  __int64 v16; // rax
  int v17; // edx
  __int16 v18; // cx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rdx
  int List; // edi
  __m128i v24; // xmm1
  unsigned __int64 v25; // rbx
  __int64 v26; // rbx
  int SectionCommon; // eax
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int64 v31; // rcx
  __int128 v32; // xmm0
  void *v33; // rax
  __int128 v34; // xmm1
  int v35; // [rsp+28h] [rbp-89h]
  ULONGLONG v36; // [rsp+40h] [rbp-71h]
  _OWORD v37[2]; // [rsp+60h] [rbp-51h] BYREF
  __m256i v38; // [rsp+80h] [rbp-31h] BYREF
  int v39[4]; // [rsp+A0h] [rbp-11h] BYREF
  __int128 v40; // [rsp+B0h] [rbp-1h]
  __int128 v41; // [rsp+C0h] [rbp+Fh]
  void *v42; // [rsp+110h] [rbp+5Fh] BYREF
  void *v43; // [rsp+118h] [rbp+67h] BYREF
  int v44; // [rsp+128h] [rbp+77h]

  v5 = 0LL;
  memset(&v38, 0, 24);
  v6 = 0LL;
  *(_QWORD *)&v41 = 0LL;
  DWORD2(v41) = 0;
  v43 = 0LL;
  v38.m256i_i64[3] = 0x200000000LL;
  v42 = 0LL;
  v9 = *a1;
  v12 = a1[1];
  v13 = a4 != 0 ? 32 : 129;
  *(_OWORD *)v39 = 0LL;
  v14 = a4 != 0 ? 285212672 : 0x4000000;
  v40 = 0LL;
  v44 = v14;
  v37[0] = 0LL;
  v15 = (__int128 *)(v12 + 0x5555555555555560LL * ((a2 - *(unsigned int *)(v9 + 40) - v9) >> 4));
  if ( v12 && _bittest64((const signed __int64 *)v15 + 3, 0x22u) )
  {
    v29 = *v15;
    v30 = v15[1];
    v25 = *((_QWORD *)v15 + 3);
    *(_OWORD *)v38.m256i_i8 = v29;
    *(_OWORD *)&v38.m256i_u64[2] = v30;
    goto LABEL_9;
  }
  v16 = *(_QWORD *)(a2 + 32);
  v17 = (*(_DWORD *)a2 & 2) != 0 ? 16417 : 96;
  if ( !v16 || (*(_DWORD *)a2 & 4) != 0 )
  {
    v19 = a1[2];
    *((_QWORD *)&v37[0] + 1) = a2 + 8;
    v17 |= 0x2000u;
    v20 = (unsigned __int64)a3 << 6;
    LODWORD(v37[0]) = 524296;
    v21 = *(_QWORD *)(v19 + v20);
  }
  else
  {
    v18 = *(_WORD *)(a2 + 40);
    *((_QWORD *)&v37[0] + 1) = v16 + 2;
    WORD1(v37[0]) = 2 * v18;
    v19 = a1[2];
    LOWORD(v37[0]) = WORD1(v37[0]) - 2;
    v20 = (unsigned __int64)a3 << 6;
    v21 = *(_QWORD *)(v19 + v20 + 32);
  }
  v39[0] = 48;
  v35 = v17;
  v22 = a1[5];
  *(_QWORD *)&v40 = v37;
  *(_QWORD *)&v39[2] = v21;
  DWORD2(v40) = 576;
  v41 = 0LL;
  List = PfpOpenHandleCreate((unsigned int)&v38, v22, (unsigned int)v37, v21, v13, v35, 128, v19 + v20);
  if ( List < 0 )
    goto LABEL_15;
  List = PfpFileCheckAttributesForPrefetch((void *)v38.m256i_i64[0], 21248);
  if ( List < 0 )
  {
    v26 = v38.m256i_i64[3];
    goto LABEL_35;
  }
  v14 = v44;
  if ( a1[1] )
  {
    v24 = *(__m128i *)&v38.m256i_u64[2];
    *v15 = *(_OWORD *)v38.m256i_i8;
    v15[1] = (__int128)v24;
    v25 = _mm_srli_si128(v24, 8).m128i_u64[0];
LABEL_9:
    v26 = v25 | 0x1000000000LL;
    v38.m256i_i64[3] = v26;
    goto LABEL_10;
  }
  v26 = v38.m256i_i64[3];
LABEL_10:
  if ( (*(_DWORD *)a2 & 1) != 0 && !a4 && *(_QWORD *)(*(_QWORD *)(v38.m256i_i64[1] + 40) + 16LL) )
  {
    List = -1073741791;
LABEL_16:
    if ( (v26 & 0x100000000LL) == 0 )
      goto LABEL_17;
    goto LABEL_35;
  }
  *(_QWORD *)&v39[2] = 0LL;
  *(_QWORD *)&v40 = 0LL;
  v41 = 0LL;
  v39[0] = 48;
  v37[1] = 0LL;
  DWORD2(v40) = 576;
  LODWORD(v36) = 0;
  SectionCommon = MiCreateSectionCommon(
                    (int)&v43,
                    5,
                    (int)v39,
                    0,
                    2,
                    v14,
                    v38.m256i_i64[0],
                    0LL,
                    v36,
                    1,
                    KeGetCurrentThread()->PreviousMode);
  List = SectionCommon;
  if ( SectionCommon >= 0 )
  {
    List = PfpFileBuildReadList((__int64)a1, a2, a4, (__int64 *)&v42);
    if ( List >= 0 )
    {
      v31 = a5;
      v26 = 0x200000000LL;
      v32 = *(_OWORD *)v38.m256i_i8;
      v33 = v43;
      v34 = *(_OWORD *)&v38.m256i_u64[2];
      v38.m256i_i64[0] = 0LL;
      *(_OWORD *)(a5 + 8) = v32;
      *(_QWORD *)(v31 + 40) = v33;
      List = 0;
      *(_OWORD *)&v38.m256i_u64[1] = 0LL;
      *(_QWORD *)v31 = v42;
      *(_OWORD *)(v31 + 24) = v34;
      v38.m256i_i64[3] = 0x200000000LL;
      *(_QWORD *)(v31 + 48) = a2;
      goto LABEL_16;
    }
    goto LABEL_14;
  }
  if ( a4 && SectionCommon == -1073740749 )
  {
LABEL_14:
    v6 = v42;
    v5 = v43;
LABEL_15:
    v26 = v38.m256i_i64[3];
    goto LABEL_16;
  }
  v26 = v38.m256i_i64[3];
  v6 = v42;
  v5 = v43;
LABEL_35:
  if ( (*(_DWORD *)a2 & 8) == 0 )
  {
    *(_DWORD *)a2 |= 8u;
    ++*(_DWORD *)(*a1 + 124LL);
  }
LABEL_17:
  if ( v5 )
    NtClose(v5);
  if ( (v26 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&v38, a1[5]);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)List;
}
