/*
 * XREFs of MiAssignTopLevelRanges @ 0x140C54828
 * Callers:
 *     MiInitializeSystemVa @ 0x140C67230 (MiInitializeSystemVa.c)
 * Callees:
 *     MiHyperSpaceSize @ 0x140235D2C (MiHyperSpaceSize.c)
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     qsort @ 0x1404FED20 (qsort.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiAddSubRegionEntropy @ 0x140C54574 (MiAddSubRegionEntropy.c)
 *     MiAssignSystemVa @ 0x140C54738 (MiAssignSystemVa.c)
 */

__int64 __fastcall MiAssignTopLevelRanges(unsigned int a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int8 v9; // cf
  __int64 v10; // rax
  __int64 v11; // rdi
  char *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // rdx
  __int64 v16; // rdi
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  char *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 result; // rax
  unsigned __int64 v36; // rcx
  int *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  _DWORD v40[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v41; // [rsp+30h] [rbp-D0h]
  char Base[4]; // [rsp+38h] [rbp-C8h] BYREF
  char v43; // [rsp+3Ch] [rbp-C4h] BYREF
  int v44; // [rsp+C8h] [rbp-38h]
  char v45; // [rsp+CCh] [rbp-34h] BYREF
  __int64 v46; // [rsp+D8h] [rbp-28h]
  int v47[4]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v48; // [rsp+F0h] [rbp-10h]
  int v49; // [rsp+F8h] [rbp-8h]
  __int64 v50; // [rsp+108h] [rbp+8h]

  memset_0(v40, 0, 0x1B0uLL);
  v41 = a2;
  LODWORD(v4) = 1;
  v5 = 0;
  do
  {
    v6 = (unsigned int)v4;
    ++v5;
    v4 = (unsigned int)(v4 + 1);
    v7 = 3 * v6;
    v40[2 * v7] = v5;
    *(_QWORD *)&Base[8 * v7 - 8] = 0x100000000000LL;
  }
  while ( v5 < 4 );
  v8 = 3 * v4;
  *(_QWORD *)&Base[8 * v8 - 8] = 0LL;
  v9 = _bittest64(&MiFlags, 0x23u);
  v40[2 * v8] = 5;
  if ( v9 )
    *(_QWORD *)&Base[24 * v4 - 8] = 0x100000000000LL;
  v10 = 3LL * (unsigned int)(v4 + 1);
  v11 = 6LL;
  v40[2 * v10] = 6;
  v12 = &v43;
  *(_QWORD *)&Base[8 * v10 - 8] = 0x100000000000LL;
  do
  {
    *(_DWORD *)v12 = ExGenRandom(1);
    v12 += 24;
    --v11;
  }
  while ( v11 );
  qsort(Base, 6uLL, 0x18uLL, MiRegionAssignmentSort);
  v44 = 7;
  v46 = 0x28000000000LL;
  v47[0] = 8;
  v13 = MiHyperSpaceSize();
  v50 = 0LL;
  LODWORD(v15) = 9;
  v16 = 11LL;
  v49 = 11;
  v48 = ((v13 + 0x7FFFFFFFFFLL) & 0xFFFFFF8000000000uLL) + 0x10000000000LL;
  v17 = 0;
  do
  {
    v15 = (unsigned int)(v15 + 1);
    v18 = v17 + 9;
    ++v17;
    v19 = 3 * v15;
    v40[2 * v19] = v18;
    *(_QWORD *)&Base[8 * v19 - 8] = 0x10000000000LL;
  }
  while ( v17 < 2 );
  v20 = (unsigned int)(v15 + 1);
  v21 = &v45;
  v22 = 3 * v20;
  v23 = (unsigned int)(v20 + 1);
  v40[2 * v22] = 12;
  *(_QWORD *)&Base[8 * v22 - 8] = v14;
  v24 = 3 * v23;
  v25 = (unsigned int)(v23 + 1);
  v40[2 * v24] = 14;
  *(_QWORD *)&Base[8 * v24 - 8] = v14;
  v26 = 3 * v25;
  v27 = (unsigned int)(v25 + 1);
  v40[2 * v26] = 13;
  *(_QWORD *)&Base[8 * v26 - 8] = v14;
  v28 = 3 * v27;
  v29 = (unsigned int)(v27 + 1);
  v40[2 * v28] = 15;
  *(_QWORD *)&Base[8 * v28 - 8] = v14;
  v30 = 3 * v29;
  *(_QWORD *)&v40[2 * v30 + 2] = 0x140000000LL & 0xFFFFFF8000000000uLL;
  v31 = 3LL * (unsigned int)(v29 + 1);
  v40[2 * v30] = 17;
  *(_QWORD *)&Base[8 * v30 - 8] = v14;
  v40[2 * v31] = 16;
  *(_QWORD *)&Base[8 * v31 - 8] = v14;
  do
  {
    *(_DWORD *)v21 = ExGenRandom(1);
    v21 += 24;
    --v16;
  }
  while ( v16 );
  qsort(v47, 0xAuLL, 0x18uLL, MiRegionAssignmentSort);
  v32 = 0LL;
  v33 = 18LL;
  while ( (unsigned int)v32 < 0x12 )
  {
    v34 = *(_QWORD *)&Base[24 * v32 - 8];
    if ( v34 )
    {
      result = *(_QWORD *)&v40[6 * v32 + 2];
      if ( !result )
      {
        v36 = (v34 + 0x7FFFFFFFFFLL) & 0xFFFFFF8000000000uLL;
        *(_QWORD *)&Base[24 * v32 - 8] = v36;
        result = MiAssignSystemVa(v36 >> 39, a1);
        if ( !result )
          return result;
      }
      *(_QWORD *)&v40[6 * v32 + 2] = result;
    }
    v32 = (unsigned int)(v32 + 1);
  }
  v37 = v40;
  do
  {
    v38 = *((_QWORD *)v37 + 1);
    v39 = *v37;
    v37 += 6;
    v39 *= 2LL;
    qword_140E38AA8[v39] = v38;
    qword_140E38AB0[v39] = *((_QWORD *)v37 - 1);
    --v33;
  }
  while ( v33 );
  qword_140E38B30 -= 0x10000000000LL;
  qword_140E38B58 = qword_140E38B28;
  qword_140E38B60 = 0x10000000000LL;
  qword_140E38B28 += 0x10000000000LL;
  qword_140E2F298 = qword_140E38B58 + 0x8000000000LL;
  MiAddSubRegionEntropy();
  return 1LL;
}
