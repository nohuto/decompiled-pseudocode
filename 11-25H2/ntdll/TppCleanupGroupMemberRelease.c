/*
 * XREFs of TppCleanupGroupMemberRelease @ 0x1800D6DF0
 * Callers:
 *     TpReleaseJobNotification @ 0x1800D6920 (TpReleaseJobNotification.c)
 *     TpReleaseAlpcCompletion @ 0x1800D6B30 (TpReleaseAlpcCompletion.c)
 *     TpReleaseIoCompletion @ 0x1800D6CA0 (TpReleaseIoCompletion.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 */

_BOOL8 __fastcall TppCleanupGroupMemberRelease(__int64 a1, int a2)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett

  _m_prefetchw((const void *)(a1 + 168));
  v2 = *(_DWORD *)(a1 + 168);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 168), v2 | 0x10000, v2);
  }
  while ( v3 != v2 );
  if ( !a2 || (v2 & 0x10000) == 0 )
    return (v2 & 0x30000) == 0;
  TppRaiseInvalidParameter();
  return 0LL;
}
