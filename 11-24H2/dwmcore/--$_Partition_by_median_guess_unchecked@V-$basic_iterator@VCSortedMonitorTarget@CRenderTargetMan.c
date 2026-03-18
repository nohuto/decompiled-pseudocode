/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YA?AU?$pair@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@V12@@0@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0U?$less@X@0@@Z @ 0x18025E0C0
 * Callers:
 *     ??$_Sort_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0_JU?$less@X@0@@Z @ 0x1801042CC (--$_Sort_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U-$les.c)
 * Callees:
 *     ??$_Guess_median_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@00U?$less@X@0@@Z @ 0x18025DEBC (--$_Guess_median_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail.c)
 */

__int64 *__fastcall std::_Partition_by_median_guess_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
        __int64 *a1,
        __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rbx
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  _OWORD *v14; // rdx
  unsigned __int64 v15; // r8
  __int128 v16; // xmm1
  _OWORD *i; // r8
  bool v18; // zf
  unsigned __int64 v19; // r9
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  __int128 v23; // xmm1
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  unsigned __int64 v27; // [rsp+40h] [rbp+8h] BYREF
  __int64 v28; // [rsp+48h] [rbp+10h] BYREF
  __int64 v29; // [rsp+50h] [rbp+18h] BYREF

  v4 = *a3;
  v6 = *a3;
  v29 = *a2;
  v8 = v29 + 16 * ((__int64)(v6 - v29) >> 5);
  v28 = v8;
  v27 = v4 - 16;
  std::_Guess_median_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
    &v29,
    &v28,
    (__int64 *)&v27);
  v9 = v8 + 16;
  v10 = v8;
  while ( *a2 < v10 )
  {
    v11 = *(_QWORD *)(v8 + 8);
    v10 = v8 - 16;
    if ( *(_QWORD *)(v8 - 16 + 8) < v11 || *(_QWORD *)(v8 - 16 + 8) > v11 )
      break;
    v8 -= 16LL;
  }
  while ( v9 < *a3 )
  {
    v12 = *(_QWORD *)(v8 + 8);
    if ( *(_QWORD *)(v9 + 8) < v12 || *(_QWORD *)(v9 + 8) > v12 )
      break;
    v9 += 16LL;
  }
  v13 = v9;
  v14 = (_OWORD *)v8;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v13 < *a3 )
      {
        v15 = *(_QWORD *)(v13 + 8);
        if ( *(_QWORD *)(v8 + 8) < v15 )
          goto LABEL_35;
        if ( *(_QWORD *)(v8 + 8) <= v15 )
        {
          if ( v9 != v13 )
          {
            v16 = *(_OWORD *)v9;
            *(_OWORD *)v9 = *(_OWORD *)v13;
            *(_OWORD *)v13 = v16;
          }
          v9 += 16LL;
          goto LABEL_35;
        }
      }
      for ( i = v14 - 1; ; --i )
      {
        v18 = v14 == (_OWORD *)*a2;
        if ( (unsigned __int64)v14 <= *a2 )
          break;
        v19 = *(_QWORD *)(v8 + 8);
        if ( *((_QWORD *)i + 1) >= v19 )
        {
          if ( *((_QWORD *)i + 1) > v19 )
          {
            v18 = v14 == (_OWORD *)*a2;
            break;
          }
          v8 -= 16LL;
          if ( (_OWORD *)v8 != i )
          {
            v20 = *(_OWORD *)v8;
            *(_OWORD *)v8 = *i;
            *i = v20;
          }
        }
        --v14;
      }
      if ( v18 )
        break;
      --v14;
      if ( v13 != *a3 )
      {
        v25 = *(_OWORD *)v13;
        *(_OWORD *)v13 = *v14;
        *v14 = v25;
        goto LABEL_35;
      }
      v8 -= 16LL;
      if ( v14 != (_OWORD *)v8 )
      {
        v23 = *v14;
        *v14 = *(_OWORD *)v8;
        *(_OWORD *)v8 = v23;
      }
      v24 = *(_OWORD *)v8;
      v9 -= 16LL;
      *(_OWORD *)v8 = *(_OWORD *)v9;
      *(_OWORD *)v9 = v24;
    }
    if ( v13 == *a3 )
      break;
    if ( v9 != v13 )
    {
      v21 = *(_OWORD *)v8;
      *(_OWORD *)v8 = *(_OWORD *)v9;
      *(_OWORD *)v9 = v21;
    }
    v22 = *(_OWORD *)v8;
    v9 += 16LL;
    *(_OWORD *)v8 = *(_OWORD *)v13;
    v8 += 16LL;
    *(_OWORD *)v13 = v22;
LABEL_35:
    v13 += 16LL;
  }
  *a1 = v8;
  a1[1] = v9;
  return a1;
}
