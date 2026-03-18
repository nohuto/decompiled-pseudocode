/*
 * XREFs of ??1TagManager@SecureVersionTag@XWinRT@@QEAA@XZ @ 0x1802C1710
 * Callers:
 *     ??1?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@MEAA@XZ @ 0x1802C1488 (--1-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collections@Foundation@W.c)
 * Callees:
 *     ?Release@Tag@SecureVersionTag@XWinRT@@QEAAJXZ @ 0x1802C5904 (-Release@Tag@SecureVersionTag@XWinRT@@QEAAJXZ.c)
 */

void __fastcall XWinRT::SecureVersionTag::TagManager::~TagManager(XWinRT::SecureVersionTag::Tag **this)
{
  XWinRT::SecureVersionTag::Tag *v1; // rcx

  v1 = *this;
  if ( v1 )
    XWinRT::SecureVersionTag::Tag::Release(v1);
}
