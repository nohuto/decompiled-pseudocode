/*
 * XREFs of ?ShutdownSnapFlyoutsAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@V?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@@Z @ 0x1805B3FB0
 * Callers:
 *     SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x180271B00 (SnapFlyoutHost--HideAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@std@@@?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@1@PEAU01@@Z @ 0x1805B0E50 (--$_Freenode@V-$allocator@U-$_List_node@U-$com_ptr@USnapFlyoutInstance@implementation@SnapCompon.c)
 *     SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_InitCoro$2 @ 0x1805B3C9C (SnapFlyoutHost--ShutdownSnapFlyoutsAsync$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall SnapFlyoutHost::ShutdownSnapFlyoutsAsync(__int64 a1, _BYTE *a2, _QWORD *a3)
{
  void *v6; // rax
  _QWORD *v7; // rcx
  _QWORD **v8; // rdx
  _QWORD *v9; // rbx
  int v11; // [rsp+E8h] [rbp+10h] BYREF
  _QWORD *v12; // [rsp+F0h] [rbp+18h]

  v12 = a3;
  v6 = operator new(0x90uLL);
  v11 = 0;
  SnapFlyoutHost::ShutdownSnapFlyoutsAsync__InitCoro_2(&v11, (__int64)v6, a2, a3, a1);
  v7 = (_QWORD *)*a3;
  **(_QWORD **)(*a3 + 8LL) = 0LL;
  v8 = (_QWORD **)*v7;
  if ( *v7 )
  {
    do
    {
      v9 = *v8;
      std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>::_Freenode<std::allocator<std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>>>(
        (__int64)v7,
        v8);
      v8 = (_QWORD **)v9;
    }
    while ( v9 );
  }
  std::_Deallocate<16,0>((void *)*a3, (const struct std::nothrow_t *)0x18);
  return a2;
}
