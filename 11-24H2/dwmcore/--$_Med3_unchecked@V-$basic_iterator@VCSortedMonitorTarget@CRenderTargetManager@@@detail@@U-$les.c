/*
 * XREFs of ??$_Med3_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@00U?$less@X@0@@Z @ 0x18025E054
 * Callers:
 *     ??$_Guess_median_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@00U?$less@X@0@@Z @ 0x18025DEBC (--$_Guess_median_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::_Med3_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
        __int128 **a1,
        __int128 **a2,
        __int128 **a3)
{
  __int128 *v5; // rdx
  __int128 *v6; // r10
  __int128 v7; // xmm1
  __int128 *v8; // rcx
  __int128 *v9; // rdx
  unsigned __int64 result; // rax
  __int128 v11; // xmm1
  __int128 *v12; // rcx
  __int128 *v13; // rdx
  __int128 v14; // xmm1

  v5 = *a1;
  v6 = *a2;
  if ( *((_QWORD *)*a2 + 1) < *((_QWORD *)*a1 + 1) )
  {
    v7 = *v6;
    *v6 = *v5;
    *v5 = v7;
  }
  v8 = *a2;
  v9 = *a3;
  result = *((_QWORD *)*a2 + 1);
  if ( *((_QWORD *)*a3 + 1) < result )
  {
    v11 = *v9;
    *v9 = *v8;
    *v8 = v11;
    v12 = *a1;
    v13 = *a2;
    result = *((_QWORD *)*a1 + 1);
    if ( *((_QWORD *)*a2 + 1) < result )
    {
      v14 = *v13;
      *v13 = *v12;
      *v12 = v14;
    }
  }
  return result;
}
