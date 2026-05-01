/*
 * XREFs of ??R?$default_delete@VProtocolLauncher@Utils@@@std@@QEBAXPEAVProtocolLauncher@Utils@@@Z @ 0x1805F31EC
 * Callers:
 *     ??1?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@QEAA@XZ @ 0x1802288A4 (--1-$unique_ptr@VProtocolLauncher@Utils@@U-$default_delete@VProtocolLauncher@Utils@@@std@@@std@@.c)
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1805F3C08 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 * Callees:
 *     ??1ProtocolLauncher@Utils@@QEAA@XZ @ 0x180211C98 (--1ProtocolLauncher@Utils@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::default_delete<Utils::ProtocolLauncher>::operator()(__int64 a1, void **a2)
{
  if ( a2 )
  {
    Utils::ProtocolLauncher::~ProtocolLauncher(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x30);
  }
}
