/*
 * XREFs of ??0MaybeEnterLeaveCritSharedOnly@@QEAA@_N@Z @ 0x140010C58
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x14016B770 (NtUserDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     EnterSharedCrit @ 0x140010CB0 (EnterSharedCrit.c)
 */

MaybeEnterLeaveCritSharedOnly *__fastcall MaybeEnterLeaveCritSharedOnly::MaybeEnterLeaveCritSharedOnly(
        MaybeEnterLeaveCritSharedOnly *this,
        char a2)
{
  *(_BYTE *)this = a2;
  if ( a2 )
    EnterSharedCrit(1LL, 1LL);
  return this;
}
