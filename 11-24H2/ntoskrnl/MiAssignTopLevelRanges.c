/*
 * XREFs of MiAssignTopLevelRanges @ 0x140C569B8
 * Callers:
 *     MiInitializeSystemVa @ 0x140C693AC (MiInitializeSystemVa.c)
 * Callees:
 *     MiHyperSpaceSize @ 0x14020FEBC (MiHyperSpaceSize.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiAddSubRegionEntropy @ 0x140C56704 (MiAddSubRegionEntropy.c)
 *     MiAssignSystemVa @ 0x140C568C8 (MiAssignSystemVa.c)
 */

__int64 __fastcall MiAssignTopLevelRanges(unsigned int a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned __int8 v10; // cf
  __int64 v11; // rax
  __int64 v12; // rdi
  char *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  char *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbx
  __int64 v37; // rsi
  __int64 v38; // rcx
  __int64 result; // rax
  unsigned __int64 v40; // rcx
  int *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  _DWORD v45[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v46; // [rsp+30h] [rbp-D0h]
  _BYTE Base[4]; // [rsp+38h] [rbp-C8h] BYREF
  char v48; // [rsp+3Ch] [rbp-C4h] BYREF
  int v49; // [rsp+C8h] [rbp-38h]
  char v50; // [rsp+CCh] [rbp-34h] BYREF
  __int64 v51; // [rsp+D8h] [rbp-28h]
  int v52[4]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v53; // [rsp+F0h] [rbp-10h]
  int v54; // [rsp+F8h] [rbp-8h]
  __int64 v55; // [rsp+108h] [rbp+8h]

  memset_0(v45, 0, 0x1B0uLL);
  v46 = a2;
  LODWORD(v4) = 1;
  LODWORD(v5) = 0;
  v6 = 0x100000000000LL;
  do
  {
    v7 = (unsigned int)v4;
    v5 = (unsigned int)(v5 + 1);
    v4 = (unsigned int)(v4 + 1);
    v8 = 3 * v7;
    v45[2 * v8] = v5;
    *(_QWORD *)&Base[8 * v8 - 8] = 0x100000000000LL;
  }
  while ( (int)v5 < 4 );
  v9 = 3 * v4;
  *(_QWORD *)&Base[8 * v9 - 8] = 0LL;
  v10 = _bittest64(&MiFlags, 0x23u);
  v45[2 * v9] = 5;
  if ( v10 )
    *(_QWORD *)&Base[24 * v4 - 8] = 0x100000000000LL;
  v11 = 3LL * (unsigned int)(v4 + 1);
  v12 = 6LL;
  v45[2 * v11] = 6;
  v13 = &v48;
  *(_QWORD *)&Base[8 * v11 - 8] = 0x100000000000LL;
  do
  {
    *(_DWORD *)v13 = ExGenRandom(1, v4, v5, v6);
    v13 += 24;
    --v12;
  }
  while ( v12 );
  qsort(Base, 6uLL, 0x18uLL, MiRegionAssignmentSort);
  v49 = 7;
  v51 = 0x28000000000LL;
  v52[0] = 8;
  v14 = MiHyperSpaceSize();
  v55 = 0LL;
  LODWORD(v16) = 9;
  v17 = 0xFFFFFF8000000000uLL;
  v18 = 11LL;
  v54 = 11;
  v53 = ((v14 + 0x7FFFFFFFFFLL) & 0xFFFFFF8000000000uLL) + 0x10000000000LL;
  LODWORD(v19) = 0;
  do
  {
    v16 = (unsigned int)(v16 + 1);
    v20 = v19 + 9;
    v19 = (unsigned int)(v19 + 1);
    v21 = 3 * v16;
    v45[2 * v21] = v20;
    *(_QWORD *)&Base[8 * v21 - 8] = 0x10000000000LL;
  }
  while ( (int)v19 < 2 );
  v22 = (unsigned int)(v16 + 1);
  v23 = &v50;
  v24 = 3 * v22;
  v25 = (unsigned int)(v22 + 1);
  v45[2 * v24] = 12;
  *(_QWORD *)&Base[8 * v24 - 8] = v15;
  v26 = 3 * v25;
  v27 = (unsigned int)(v25 + 1);
  v45[2 * v26] = 14;
  *(_QWORD *)&Base[8 * v26 - 8] = v15;
  v28 = 3 * v27;
  v29 = (unsigned int)(v27 + 1);
  v45[2 * v28] = 13;
  *(_QWORD *)&Base[8 * v28 - 8] = v15;
  v30 = 3 * v29;
  v31 = (unsigned int)(v29 + 1);
  v45[2 * v30] = 15;
  *(_QWORD *)&Base[8 * v30 - 8] = v15;
  v32 = 3 * v31;
  *(_QWORD *)&v45[2 * v32 + 2] = 0x140000000LL & 0xFFFFFF8000000000uLL;
  v33 = 3LL * (unsigned int)(v31 + 1);
  v45[2 * v32] = 17;
  *(_QWORD *)&Base[8 * v32 - 8] = v15;
  v45[2 * v33] = 16;
  *(_QWORD *)&Base[8 * v33 - 8] = v15;
  do
  {
    *(_DWORD *)v23 = ExGenRandom(1, v31, v19, v17);
    v23 += 24;
    --v18;
  }
  while ( v18 );
  qsort(v52, 0xAuLL, 0x18uLL, MiRegionAssignmentSort);
  v36 = 0LL;
  v37 = 18LL;
  while ( (unsigned int)v36 < 0x12 )
  {
    v38 = *(_QWORD *)&Base[24 * v36 - 8];
    if ( v38 )
    {
      result = *(_QWORD *)&v45[6 * v36 + 2];
      if ( !result )
      {
        v40 = (v38 + 0x7FFFFFFFFFLL) & 0xFFFFFF8000000000uLL;
        *(_QWORD *)&Base[24 * v36 - 8] = v40;
        result = MiAssignSystemVa(v40 >> 39, a1, v34, v35);
        if ( !result )
          return result;
      }
      *(_QWORD *)&v45[6 * v36 + 2] = result;
    }
    v36 = (unsigned int)(v36 + 1);
  }
  v41 = v45;
  do
  {
    v42 = *((_QWORD *)v41 + 1);
    v43 = *v41;
    v41 += 6;
    v43 *= 2LL;
    qword_140E38BE8[v43] = v42;
    qword_140E38BF0[v43] = *((_QWORD *)v41 - 1);
    --v37;
  }
  while ( v37 );
  v44 = qword_140E38C68;
  qword_140E38C70 -= 0x10000000000LL;
  qword_140E38C98 = qword_140E38C68;
  qword_140E38CA0 = 0x10000000000LL;
  qword_140E38C68 += 0x10000000000LL;
  qword_140E2F3D8 = qword_140E38C98 + 0x8000000000LL;
  MiAddSubRegionEntropy(qword_140E38C98 + 0x8000000000LL, v44, 0x140000000LL, v35);
  return 1LL;
}
