/*
 * XREFs of ?value@?$optional@I@std@@QEGAAAEAIXZ @ 0x18021E950
 * Callers:
 *     ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2@@Z @ 0x1800E18B8 (-ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2.c)
 *     ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1803620B0 (-ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?IsC2DDisabledByUserSetting@AIXPolicyHelper@@YA_NXZ @ 0x18059176C (-IsC2DDisabledByUserSetting@AIXPolicyHelper@@YA_NXZ.c)
 *     _lambda_769b61f6f6b2eb7f998a18e0401ed182_::operator() @ 0x1805CBF40 (_lambda_769b61f6f6b2eb7f998a18e0401ed182_--operator().c)
 *     _lambda_a44a1a72576a729f64e0a6d83c71a024_::operator() @ 0x1805CC610 (_lambda_a44a1a72576a729f64e0a6d83c71a024_--operator().c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1802BB350 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

__int64 __fastcall std::optional<unsigned int>::value(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 4) )
    std::_Throw_bad_optional_access();
  return a1;
}
