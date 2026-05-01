/*
 * XREFs of ??1?$unique_ptr@VApplicationFlyoutView@@U?$default_delete@VApplicationFlyoutView@@@std@@@std@@QEAA@XZ @ 0x1805FA8A0
 * Callers:
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1805F3C08 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ApplicationFlyoutView@@QEAA@XZ @ 0x1805FA8D0 (--1ApplicationFlyoutView@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<ApplicationFlyoutView>::~unique_ptr<ApplicationFlyoutView>(ApplicationFlyoutView **a1)
{
  ApplicationFlyoutView *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    ApplicationFlyoutView::~ApplicationFlyoutView(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x68);
  }
}
