/*
 * XREFs of ??1?$merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@U12@@details@tip2@@QEAA@XZ @ 0x18028A170
 * Callers:
 *     ?Release@?$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@AEAAKXZ @ 0x18028A128 (-Release@-$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@A.c)
 * Callees:
 *     ?on_destroy@?$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ @ 0x18028A9DC (-on_destroy@-$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ.c)
 */

__int64 __fastcall tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest,XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest,XamlExplorerHostTipTests::_tip_OnLaunchedTest>(
        _QWORD *a1)
{
  _QWORD *v1; // rbx

  v1 = a1 + 1;
  *a1 = &tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest,XamlExplorerHostTipTests::_tip_OnLaunchedTest>::`vftable';
  tip2::details::shared_data<0,0,0>::on_destroy(a1 + 1);
  return tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>(v1);
}
