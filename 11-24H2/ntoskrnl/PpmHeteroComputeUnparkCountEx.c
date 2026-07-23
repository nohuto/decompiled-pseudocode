/*
 * XREFs of PpmHeteroComputeUnparkCountEx @ 0x1405DDBCC
 * Callers:
 *     PpmCheckComputeMultiClassHeteroResponseEx @ 0x1405DD1F4 (PpmCheckComputeMultiClassHeteroResponseEx.c)
 *     PpmHeteroComputeMultiClassUnparkCountEx @ 0x1405DD850 (PpmHeteroComputeMultiClassUnparkCountEx.c)
 * Callees:
 *     PpmHeteroUtilityGreaterThanOrEqualThreshold @ 0x140417E9C (PpmHeteroUtilityGreaterThanOrEqualThreshold.c)
 */

__int64 __fastcall PpmHeteroComputeUnparkCountEx(
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
  unsigned int v10; // ebp
  unsigned int v11; // edi
  __int64 v13; // r11
  unsigned int *v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rbx
  unsigned int *v19; // r12
  unsigned __int64 *v20; // rax
  __int64 v21; // rbp
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  unsigned int v24; // r9d
  int v25; // r12d
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  unsigned int v28; // r9d
  __int64 result; // rax
  unsigned __int64 *v30; // [rsp+30h] [rbp-48h]
  __int64 v31; // [rsp+88h] [rbp+10h]
  __int64 v33; // [rsp+98h] [rbp+20h]

  v33 = a4;
  v31 = a2;
  v10 = a8;
  v11 = 0;
  v13 = a3;
  if ( a8 )
  {
    v15 = a6;
    v16 = a8;
    do
    {
      v17 = *v15++;
      a7 -= v17;
      --v16;
    }
    while ( v16 );
    a4 = v33;
    a2 = v31;
  }
  LODWORD(v18) = a8;
  if ( a8 < a9 )
  {
    v19 = &a6[a8];
    v20 = (unsigned __int64 *)(a5 + 8LL * a8);
    v30 = v20;
    v21 = a4 - (_QWORD)a6;
    do
    {
      v22 = 0LL;
      if ( a5 )
        v22 = *v20;
      v23 = 63LL;
      if ( (unsigned int)v18 < 0x3F )
        v23 = (unsigned int)v18;
      if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                            v13,
                            *(unsigned int *)((char *)v19 + v21),
                            v22,
                            *(unsigned __int8 *)((a1 != 0 ? 371LL : 307LL) + v23 + a2),
                            a1) )
        break;
      if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(a3, a7, 0LL, v24, a1) )
        break;
      LODWORD(v18) = v18 + 1;
      v13 = a3;
      a7 -= *v19++;
      a2 = v31;
      v20 = ++v30;
    }
    while ( (unsigned int)v18 < a9 );
    v10 = a8;
    if ( (unsigned int)v18 > a8 )
    {
      v11 = 2;
      goto LABEL_29;
    }
    v13 = a3;
  }
  if ( (_DWORD)v18 )
  {
    while ( 1 )
    {
      v25 = v18;
      v18 = (unsigned int)(v18 - 1);
      v26 = 0LL;
      a7 += a6[v18];
      if ( a5 )
        v26 = *(_QWORD *)(a5 + 8 * v18);
      v27 = 63LL;
      if ( (unsigned int)v18 < 0x3F )
        v27 = (unsigned int)v18;
      if ( (unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                           v13,
                           *(unsigned int *)(v33 + 4 * v18),
                           v26,
                           *(unsigned __int8 *)((a1 != 0 ? 243LL : 179LL) + v27 + v31),
                           a1)
        && (unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(a3, a7, 0LL, v28, a1) )
      {
        break;
      }
      if ( !(_DWORD)v18 )
        goto LABEL_27;
      v13 = a3;
    }
    LODWORD(v18) = v25;
  }
LABEL_27:
  if ( (unsigned int)v18 < v10 )
    v11 = 1;
LABEL_29:
  result = v11;
  *a10 = v18;
  return result;
}
