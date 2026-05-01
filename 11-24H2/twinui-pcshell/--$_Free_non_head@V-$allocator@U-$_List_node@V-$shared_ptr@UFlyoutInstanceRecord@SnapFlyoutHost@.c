/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAX@std@@@std@@@?$_List_node@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1805B0E00
 * Callers:
 *     ?OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x180272490 (-OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Intern.c)
 *     ??1?$list@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@QEAA@XZ @ 0x1805B1610 (--1-$list@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V-$allocator@V-$shared_ptr@U.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_G?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@QEAAPEAXI@Z @ 0x1801C79F0 (--_G-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@QEAAPEAXI@Z.c)
 */

void __fastcall std::_List_node<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>,void *>::_Free_non_head<std::allocator<std::_List_node<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>::`scalar deleting destructor'((__int64)(v2 + 2));
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x20);
      v2 = v3;
    }
    while ( v3 );
  }
}
