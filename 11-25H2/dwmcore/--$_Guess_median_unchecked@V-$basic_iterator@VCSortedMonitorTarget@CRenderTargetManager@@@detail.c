/*
 * XREFs of ??$_Guess_median_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@00U?$less@X@0@@Z @ 0x180267DF8
 * Callers:
 *     ??$_Partition_by_median_guess_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YA?AU?$pair@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@V12@@0@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0U?$less@X@0@@Z @ 0x180267FFC (--$_Partition_by_median_guess_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetMan.c)
 * Callees:
 *     ??$_Med3_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@00U?$less@X@0@@Z @ 0x180267F90 (--$_Med3_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U-$les.c)
 */

__int64 __fastcall std::_Guess_median_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // r9
  __int64 v5; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rax
  _QWORD v15[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+70h] [rbp+40h] BYREF

  v3 = *a1;
  v5 = *a3;
  v7 = *a3;
  v15[0] = v3;
  v8 = (v7 - v3) >> 4;
  if ( v8 <= 40 )
  {
    v16 = v5;
    v13 = *a2;
  }
  else
  {
    v10 = (v8 + 1) >> 3;
    v11 = 16 * v10;
    v10 *= 32LL;
    v16 = v10 + v3;
    v17 = v11 + v3;
    std::_Med3_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
      v15,
      &v17,
      &v16);
    v17 = *a2;
    v15[0] = v17 - v11;
    v16 = v17 + v11;
    std::_Med3_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
      v15,
      &v17,
      &v16);
    v16 = *a3;
    v15[0] = v16 - v10;
    v17 = v16 - v11;
    std::_Med3_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
      v15,
      &v17,
      &v16);
    v12 = *a3 - v11;
    v13 = *a2;
    v15[0] = v11 + *a1;
    v16 = v12;
  }
  v17 = v13;
  return std::_Med3_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
           v15,
           &v17,
           &v16);
}
