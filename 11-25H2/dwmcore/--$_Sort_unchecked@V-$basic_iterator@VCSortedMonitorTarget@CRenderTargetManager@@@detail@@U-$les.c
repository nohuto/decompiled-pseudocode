/*
 * XREFs of ??$_Sort_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0_JU?$less@X@0@@Z @ 0x18013FF0C
 * Callers:
 *     ??$_Sort_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0_JU?$less@X@0@@Z @ 0x18013FF0C (--$_Sort_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U-$les.c)
 *     ?SortMonitorTargets@CRenderTargetManager@@AEAAXPEAV?$vector_facade@VCSortedMonitorTarget@CRenderTargetManager@@V?$buffer_impl@VCSortedMonitorTarget@CRenderTargetManager@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180140050 (-SortMonitorTargets@CRenderTargetManager@@AEAAXPEAV-$vector_facade@VCSortedMonitorTarget@CRender.c)
 * Callees:
 *     ??$_Sort_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0_JU?$less@X@0@@Z @ 0x18013FF0C (--$_Sort_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U-$les.c)
 *     ??$_Make_heap_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0U?$less@X@0@@Z @ 0x180267F04 (--$_Make_heap_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U.c)
 *     ??$_Partition_by_median_guess_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YA?AU?$pair@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@V12@@0@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0U?$less@X@0@@Z @ 0x180267FFC (--$_Partition_by_median_guess_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetMan.c)
 *     ??$_Sort_heap_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0U?$less@X@0@@Z @ 0x18026828C (--$_Sort_heap_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U.c)
 */

signed __int64 __fastcall std::_Sort_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
        signed __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  __int64 v5; // rdi
  __int64 v8; // r11
  signed __int64 v9; // r10
  signed __int64 result; // rax
  unsigned __int64 v11; // r8
  signed __int64 v12; // rcx
  __int128 v13; // xmm1
  _OWORD *i; // rdx
  signed __int64 v15; // r8
  _OWORD *v16; // rdx
  __int128 v17; // xmm0
  __int64 v18; // r15
  __int64 v19; // r9
  signed __int64 v20; // r12
  __int64 v21; // r8
  __int64 v22; // [rsp+20h] [rbp-10h] BYREF
  signed __int64 v23; // [rsp+28h] [rbp-8h]
  __int64 v24; // [rsp+60h] [rbp+30h] BYREF
  signed __int64 v25; // [rsp+68h] [rbp+38h] BYREF

  v4 = a4;
  v5 = a3;
  while ( 1 )
  {
    v8 = *a2;
    v9 = *a1;
    result = (*a2 - *a1) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( result <= 512 )
      break;
    v24 = *a2;
    v25 = v9;
    if ( v5 <= 0 )
    {
      LOBYTE(a3) = v4;
      std::_Make_heap_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
        &v25,
        &v24,
        a3);
      v24 = *a2;
      LOBYTE(v21) = v4;
      v25 = *a1;
      return std::_Sort_heap_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
               &v25,
               &v24,
               v21);
    }
    LOBYTE(a4) = v4;
    std::_Partition_by_median_guess_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
      &v22,
      &v25,
      &v24,
      a4);
    v18 = v22;
    LOBYTE(v19) = v4;
    v20 = v23;
    v5 = (v5 >> 2) + (v5 >> 1);
    if ( (__int64)((v22 - *a1) & 0xFFFFFFFFFFFFFFF0uLL) >= (__int64)((*a2 - v23) & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v24 = *a2;
      v25 = v23;
      std::_Sort_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
        &v25,
        &v24,
        v5,
        v19);
      *a2 = v18;
    }
    else
    {
      v25 = *a1;
      v24 = v22;
      std::_Sort_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
        &v25,
        &v24,
        v5,
        v19);
      *a1 = v20;
    }
  }
  if ( v9 != v8 )
  {
    result = *a1;
    while ( 1 )
    {
      result += 16LL;
      if ( result == v8 )
        break;
      v11 = *(_QWORD *)(result + 8);
      v12 = result;
      v13 = *(_OWORD *)result;
      if ( v11 < *(_QWORD *)(v9 + 8) )
      {
        v15 = result;
        v16 = (_OWORD *)(result + 16);
        while ( v9 != v12 )
        {
          v12 = v15 - 16;
          --v16;
          v17 = *(_OWORD *)(v15 - 16);
          v15 -= 16LL;
          *v16 = v17;
        }
        *(_OWORD *)v9 = v13;
      }
      else
      {
        for ( i = (_OWORD *)result; ; i = (_OWORD *)v12 )
        {
          v12 -= 16LL;
          if ( v11 >= *(_QWORD *)(v12 + 8) )
            break;
          *i = *(_OWORD *)v12;
        }
        *i = v13;
      }
    }
  }
  return result;
}
