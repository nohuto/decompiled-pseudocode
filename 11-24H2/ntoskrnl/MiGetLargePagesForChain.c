/*
 * XREFs of MiGetLargePagesForChain @ 0x140251524
 * Callers:
 *     MiGetPageChain @ 0x140307540 (MiGetPageChain.c)
 * Callees:
 *     MiGetLargePage @ 0x1402517B0 (MiGetLargePage.c)
 *     MiConvertLargeActivePageToChain @ 0x1403122A0 (MiConvertLargeActivePageToChain.c)
 *     MiIssuePageHeatList @ 0x140435CBC (MiIssuePageHeatList.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiGetLargePagesForChain(__int64 a1, int a2)
{
  _OWORD *v4; // rdx
  int v5; // r8d
  __int64 result; // rax
  int v7; // r8d
  int v8; // r15d
  _QWORD *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // rcx
  int v13; // r8d
  char v14; // sp
  _DWORD *v15; // r9
  __int64 v16; // rcx
  int v17; // [rsp+40h] [rbp-C0h]
  _OWORD *v18; // [rsp+48h] [rbp-B8h]
  _OWORD v19[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v20; // [rsp+70h] [rbp-90h]
  __int128 v21; // [rsp+80h] [rbp-80h]
  __int128 v22; // [rsp+90h] [rbp-70h] BYREF
  char v23[128]; // [rsp+A0h] [rbp-60h] BYREF

  memset_0(v23, 0, sizeof(v23));
  v4 = *(_OWORD **)(a1 + 64);
  v5 = *(_DWORD *)(a1 + 32);
  result = 0LL;
  *(_QWORD *)&v21 = 0LL;
  DWORD2(v21) = 0;
  v7 = 16 * (v5 & 1) + 2;
  v18 = v4;
  v17 = v7;
  v8 = 1;
  v22 = 0LL;
  LODWORD(v22) = 129;
  memset(v19, 0, sizeof(v19));
  v20 = 0LL;
  if ( !v4 )
  {
    v13 = (unsigned __int16)KeNumberNodes;
    if ( ((v14 + 80) & 4) != 0 )
      LODWORD(v19[0]) = (unsigned __int16)KeNumberNodes;
    v15 = v19;
    if ( ((v14 + 80) & 4) != 0 )
      v15 = (_DWORD *)v19 + 1;
    memset64(v15, (unsigned __int16)KeNumberNodes | ((unsigned __int64)(unsigned __int16)KeNumberNodes << 32), 1uLL);
    if ( ((v14 + 80) & 4) == 0 )
      v15[2] = v13;
    v16 = 0LL;
    for ( result = 0LL; (unsigned int)result < 3; result = (unsigned int)(result + 1) )
    {
      if ( MiPageSizes[result] == 16 )
      {
        v16 = MiDemandLargePageCoalesceTimeBounds[result];
        break;
      }
    }
    v7 = v17;
    v4 = v19;
    v18 = v19;
    v21 = 0LL;
    *((_QWORD *)&v20 + 1) = v16;
  }
  if ( *(_QWORD *)(a1 + 80) - *(_QWORD *)(a1 + 104) >= 0x10uLL )
  {
    while ( 1 )
    {
      v9 = (_QWORD *)(a1 + 16);
      while ( *(_QWORD *)(a1 + 80) - *(_QWORD *)(a1 + 104) >= (unsigned __int64)MiPageSizes[v8] )
      {
        result = MiGetLargePage(
                   *(_QWORD *)a1,
                   *v9,
                   v8,
                   a2,
                   (*(_DWORD *)(a1 + 48) >> 18) & 3,
                   v7,
                   (__int64)v4,
                   (__int64)&v22);
        v10 = result;
        if ( !result )
          break;
        v11 = MiPageSizes[v8];
        MiConvertLargeActivePageToChain(result);
        result = v11 << 12;
        *v9 += v11 << 12;
        v12 = v10 + 48 * v11 - 48;
        if ( *(_QWORD *)(a1 + 88) )
        {
          result = *(_QWORD *)(a1 + 96);
          *(_QWORD *)result = v10;
          *(_QWORD *)(a1 + 104) += v11;
          *(_QWORD *)(a1 + 96) = v12;
        }
        else
        {
          *(_QWORD *)(a1 + 88) = v10;
          *(_QWORD *)(a1 + 96) = v12;
          *(_QWORD *)(a1 + 104) = v11;
        }
        v4 = v18;
        v7 = v17;
        if ( *(_QWORD *)(a1 + 80) - *(_QWORD *)(a1 + 104) < 0x10uLL )
          goto LABEL_9;
      }
      if ( v8 == 2 )
        break;
      v4 = v18;
      ++v8;
      v7 = v17;
    }
  }
LABEL_9:
  if ( DWORD1(v22) )
    return MiIssuePageHeatList(&v22);
  return result;
}
