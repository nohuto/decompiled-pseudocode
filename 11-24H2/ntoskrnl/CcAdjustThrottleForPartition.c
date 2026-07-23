/*
 * XREFs of CcAdjustThrottleForPartition @ 0x14057765C
 * Callers:
 *     CcLazyWriteScan @ 0x1402654C8 (CcLazyWriteScan.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CcAdjustThrottleForPartition(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // r15
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rbp
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  unsigned __int64 v16; // rax
  bool v17; // cc
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rcx
  bool v20; // cf
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  int v23; // edx
  unsigned __int64 result; // rax
  unsigned __int64 v25; // rcx

  v4 = *(_QWORD *)a2;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = a1[145];
  v8 = *(_DWORD *)(a2 + 16) - a4;
  v9 = *(unsigned int *)(a3 + 24);
  v10 = *(_QWORD *)a3;
  v11 = *(_QWORD *)(a3 + 8);
  v12 = *(_QWORD *)(a3 + 16);
  if ( v7 )
  {
    if ( v7 > 0xFFFFFFFF || v8 <= v7 )
      v8 = 0;
    else
      v8 -= *((_DWORD *)a1 + 290);
    a1[145] = 0LL;
  }
  v13 = v8;
  v14 = v10;
  if ( v8 < 0x200 )
    v13 = 512;
  v15 = v13 >> 2;
  if ( v15 <= v10 )
    v14 = v15;
  if ( v4 >= v9 + ((3 * (v10 - v9)) >> 2) )
  {
    v16 = v10 - v14;
    v10 = v12;
    v17 = v16 <= v12;
LABEL_13:
    if ( !v17 )
      v10 = v16;
    goto LABEL_31;
  }
  if ( v11 >= v10 )
  {
    if ( v4 >= v10 - v14 || v6 > v10 )
      goto LABEL_31;
    v18 = v11 - v10;
    v19 = (v10 - v4) >> 3;
    if ( v19 <= v14 )
    {
      if ( v18 > v14 )
        v10 += v14;
      else
        v10 = v11;
      goto LABEL_31;
    }
    v16 = v19 + v10;
    v17 = v18 <= v19;
    v10 = v11;
    goto LABEL_13;
  }
  v20 = v8 < 0x200;
  v21 = v10 - v11;
  if ( v20 )
  {
    v21 >>= 2;
    if ( v21 <= 0x5000 )
      v21 = v10 - v11;
  }
  else if ( v10 - v14 >= v11 )
  {
    v21 = v14;
  }
  v10 -= v21;
LABEL_31:
  *(_QWORD *)(a3 + 8) = v11;
  v22 = (v10 >> 1) + (v10 >> 2);
  *(_QWORD *)(a3 + 16) = v12;
  *(_QWORD *)a3 = v10;
  if ( v22 > 0xFFFFFFFF )
    LODWORD(v22) = -1;
  *(_DWORD *)(a3 + 24) = v22;
  v23 = (unsigned __int8)dword_140FC521C;
  result = (a1[143] + a1[144]) >> 1;
  *(_QWORD *)(a3 + 8) = result;
  v25 = result >> 2;
  *(_QWORD *)(a3 + 16) = result >> 2;
  if ( result >> 2 < 0x200 )
  {
    *(_QWORD *)(a3 + 16) = 512LL;
    v25 = 512LL;
  }
  if ( result >= v25 && v23 || (*(_QWORD *)(a3 + 8) = v25, v23) )
  {
    if ( (unsigned int)CcAzure_TopBottomDPTEqual <= 1 )
    {
      *(_QWORD *)(a3 + 16) = result;
      *(_QWORD *)(a3 + 8) = result;
    }
  }
  return result;
}
