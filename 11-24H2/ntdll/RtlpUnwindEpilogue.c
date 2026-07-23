/*
 * XREFs of RtlpUnwindEpilogue @ 0x180112328
 * Callers:
 *     RtlpxVirtualUnwind @ 0x180043630 (RtlpxVirtualUnwind.c)
 * Callees:
 *     RtlpVirtualPopShadowStack @ 0x1800458B0 (RtlpVirtualPopShadowStack.c)
 *     RtlpUnwindOpSlots @ 0x1800EC2E4 (RtlpUnwindOpSlots.c)
 */

__int64 __fastcall RtlpUnwindEpilogue(__int64 a1, __int64 a2, unsigned int a3, _BYTE *a4, __int64 a5, __int64 a6)
{
  int v6; // r15d
  int v7; // r12d
  _BYTE *v8; // r13
  unsigned int v9; // r14d
  unsigned int v10; // esi
  unsigned int i; // edi
  unsigned __int16 v12; // cx
  char v13; // al
  int v14; // ecx
  __int64 v15; // rax
  unsigned int v17; // r9d
  unsigned int v18; // r15d
  __int16 v19; // ax
  unsigned int v20; // esi
  _QWORD *v21; // r11
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  _QWORD *v24; // r9
  _QWORD *v25; // rdx
  __int64 v26; // [rsp+90h] [rbp+8h]

  v26 = a1;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = (_BYTE *)(a1 + *((unsigned int *)a4 + 2));
    v9 = (unsigned __int8)v8[2];
    v10 = v9;
    for ( i = 0; i < v9; i += RtlpUnwindOpSlots(v12) )
    {
      v12 = *(_WORD *)&v8[2 * i + 4];
      v13 = HIBYTE(v12) & 0xF;
      if ( (v12 & 0xF00) == 0 || v13 == 10 )
        break;
      if ( v13 != 2 || (v12 & 0xF000u) != 0 )
      {
        if ( v10 != v9 )
          v10 = -1;
      }
      else
      {
        v10 = i;
      }
      if ( (HIBYTE(v12) & 0xF) == 2 || (HIBYTE(v12) & 0xF) == 1 )
        ++v7;
    }
    if ( i < v9 || (*v8 & 0x20) == 0 )
      break;
    if ( (unsigned int)++v6 > 0x20 )
      return 3221225727LL;
    v14 = (unsigned __int8)v8[2];
    v15 = (unsigned int)(v14 + 1);
    if ( (v14 & 1) == 0 )
      v15 = (unsigned __int8)v8[2];
    a4 = &v8[2 * v15 + 4];
    a1 = v26;
  }
  if ( v10 < v9 && v7 == 2 && i == v9 )
    i = v10;
  v17 = 0;
  while ( 1 )
  {
    v18 = v17;
    if ( i >= v9 )
      goto LABEL_53;
    v19 = *(_WORD *)&v8[2 * i + 4];
    v20 = HIBYTE(v19) >> 4;
    if ( (v19 & 0xF00) != 0 )
      break;
    if ( v17 >= a3 )
    {
      v21 = *(_QWORD **)(a5 + 152);
      if ( *(_QWORD *)a6
        && ((unsigned __int64)v21 < **(_QWORD **)a6 || (unsigned __int64)v21 > **(_QWORD **)(a6 + 8) - 8LL) )
      {
        return 3221225512LL;
      }
      *(_QWORD *)(a5 + 152) += 8LL;
      *(_QWORD *)(a5 + 120 + 8LL * v20) = *v21;
      v22 = *(_QWORD *)(a6 + 16);
      if ( v22 )
        *(_QWORD *)(v22 + 8LL * v20 + 128) = v21;
    }
    ++v17;
    if ( v20 >= 8 )
      v17 = v18 + 2;
    ++i;
  }
  if ( i >= v9 )
    goto LABEL_53;
  if ( (HIBYTE(v19) & 0xF) == 2 && !v20 )
  {
    if ( v17 >= a3 )
      *(_QWORD *)(a5 + 152) += 8LL;
    ++i;
  }
  if ( i >= v9 || (v8[2 * i + 5] & 0xF) != 0xA )
  {
LABEL_53:
    v25 = *(_QWORD **)(a5 + 152);
    if ( !*(_QWORD *)a6
      || (unsigned __int64)v25 >= **(_QWORD **)a6 && (unsigned __int64)v25 <= **(_QWORD **)(a6 + 8) - 8LL )
    {
      *(_QWORD *)(a5 + 248) = *v25;
      *(_QWORD *)(a5 + 152) += 8LL;
      RtlpVirtualPopShadowStack(a5);
      return 0LL;
    }
    return 3221225512LL;
  }
  v23 = *(_QWORD **)(a5 + 152);
  v24 = v23 + 3;
  if ( *(_QWORD *)a6 && ((unsigned __int64)v23 < **(_QWORD **)a6 || (unsigned __int64)v23 > **(_QWORD **)(a6 + 8) - 8LL)
    || *(_QWORD *)a6 && ((unsigned __int64)v24 < **(_QWORD **)a6 || (unsigned __int64)v24 > **(_QWORD **)(a6 + 8) - 8LL) )
  {
    return 3221225512LL;
  }
  *(_QWORD *)(a5 + 248) = *v23;
  *(_QWORD *)(a5 + 152) = *v24;
  return 0LL;
}
