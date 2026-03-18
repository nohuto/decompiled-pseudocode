/*
 * XREFs of PpmHeteroComputeUnparkCount @ 0x14040A700
 * Callers:
 *     PpmHeteroComputeMultiClassUnparkCount @ 0x140407898 (PpmHeteroComputeMultiClassUnparkCount.c)
 * Callees:
 *     PpmHeteroUtilityGreaterThanOrEqualThreshold @ 0x14040A458 (PpmHeteroUtilityGreaterThanOrEqualThreshold.c)
 */

__int64 __fastcall PpmHeteroComputeUnparkCount(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6,
        __int64 a7,
        unsigned int a8,
        unsigned int a9,
        _DWORD *a10)
{
  unsigned int v10; // edi
  unsigned int v12; // r15d
  __int64 v13; // r11
  unsigned int *v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned int *v18; // r15
  unsigned __int64 *v19; // r13
  unsigned __int8 *v20; // rbp
  __int64 v21; // rax
  unsigned __int64 v22; // r8
  unsigned int v23; // r9d
  unsigned int v24; // ebp
  unsigned __int64 v25; // r8
  int v26; // eax
  unsigned int v27; // r9d
  int v28; // eax
  __int64 result; // rax
  __int64 v30; // [rsp+30h] [rbp-58h]
  __int64 v32; // [rsp+98h] [rbp+10h]
  __int64 v34; // [rsp+A8h] [rbp+20h]

  v34 = a4;
  v32 = a2;
  v10 = 0;
  v12 = a1;
  v13 = a3;
  if ( a8 )
  {
    v14 = a6;
    v15 = a8;
    do
    {
      v16 = *v14++;
      a7 -= v16;
      --v15;
    }
    while ( v15 );
    a4 = v34;
    a2 = v32;
  }
  LODWORD(v17) = a8;
  if ( a8 < a9 )
  {
    v18 = &a6[a8];
    v19 = (unsigned __int64 *)(a5 + 8LL * a8);
    v20 = (unsigned __int8 *)(a2 + a8 + (a1 != 0 ? 371LL : 307LL));
    v21 = a4 - (_QWORD)a6;
    v30 = a4 - (_QWORD)a6;
    do
    {
      v22 = 0LL;
      if ( a5 )
        v22 = *v19;
      if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                            v13,
                            *(unsigned int *)((char *)v18 + v21),
                            v22,
                            *v20,
                            a1) )
        break;
      if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(a3, a7, 0LL, v23, a1) )
        break;
      LODWORD(v17) = v17 + 1;
      v13 = a3;
      a7 -= *v18;
      v21 = v30;
      ++v19;
      ++v20;
      ++v18;
    }
    while ( (unsigned int)v17 < a9 );
    if ( (unsigned int)v17 > a8 )
    {
      v10 = 2;
      goto LABEL_22;
    }
    v12 = a1;
    v13 = a3;
  }
  while ( 1 )
  {
    v24 = v17;
    if ( !(_DWORD)v17 )
      break;
    v17 = (unsigned int)(v17 - 1);
    v25 = 0LL;
    a7 += a6[v17];
    if ( a5 )
      v25 = *(_QWORD *)(a5 + 8 * v17);
    v26 = PpmHeteroUtilityGreaterThanOrEqualThreshold(
            v13,
            *(unsigned int *)(v34 + 4 * v17),
            v25,
            *(unsigned __int8 *)((unsigned int)v17 + 179LL + (v12 != 0 ? 0x40 : 0) + v32),
            v12);
    v13 = a3;
    if ( v26 )
    {
      v28 = PpmHeteroUtilityGreaterThanOrEqualThreshold(a3, a7, 0LL, v27, v12);
      v13 = a3;
      if ( v28 )
        break;
    }
  }
  LODWORD(v17) = v24;
  if ( v24 < a8 )
    v10 = 1;
LABEL_22:
  result = v10;
  *a10 = v17;
  return result;
}
