/*
 * XREFs of ??1?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@QEAA@XZ @ 0x180289888
 * Callers:
 *     ?Release@?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@AEAAKXZ @ 0x180289840 (-Release@-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@AEAAKXZ.c)
 * Callees:
 *     ?on_destroy@?$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ @ 0x18028A9DC (-on_destroy@-$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>::~merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>(
        _QWORD *a1)
{
  _QWORD *v1; // rbx

  v1 = a1 + 1;
  *a1 = &tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>::`vftable';
  tip2::details::shared_data<0,0,0>::on_destroy(a1 + 1);
  return tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>(v1);
}
