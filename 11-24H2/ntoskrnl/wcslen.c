/*
 * XREFs of wcslen @ 0x1404FFED0
 * Callers:
 *     PopQueryPowerButtonConfiguration @ 0x1402C9F64 (PopQueryPowerButtonConfiguration.c)
 *     PopFxStopDeviceAccounting @ 0x14032F168 (PopFxStopDeviceAccounting.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x14032F5A4 (PopDiagTraceFxDeviceAccounting.c)
 *     SepVerifyDesktopAppxPackageName @ 0x140355758 (SepVerifyDesktopAppxPackageName.c)
 *     MiShowBadMapper @ 0x1403D0830 (MiShowBadMapper.c)
 *     RtlAppendUnicodeToString @ 0x14040BAE0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     PiUEventHashStringIntoBucket @ 0x14047B794 (PiUEventHashStringIntoBucket.c)
 *     BapdWriteEtwEvents @ 0x1404A4884 (BapdWriteEtwEvents.c)
 *     PopOpenKey @ 0x1404AA718 (PopOpenKey.c)
 *     PopReadRegKeyValue @ 0x1404AC224 (PopReadRegKeyValue.c)
 *     PnpMultiSzContainsString @ 0x1404B7A70 (PnpMultiSzContainsString.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1404BF62C (RtlpMuiRegLoadLicInformation.c)
 *     PrpWriteLogsToRegistry @ 0x1404C05E4 (PrpWriteLogsToRegistry.c)
 *     IopAllowRemoteDASD @ 0x1404CB370 (IopAllowRemoteDASD.c)
 *     wcscat @ 0x1404FFD10 (wcscat.c)
 *     wcscpy @ 0x1404FFD50 (wcscpy.c)
 *     wcsncat @ 0x1404FFF60 (wcsncat.c)
 *     RtlCreateUnicodeString @ 0x140833010 (RtlCreateUnicodeString.c)
 *     QueryRegistryHideMachine @ 0x140C5F3A4 (QueryRegistryHideMachine.c)
 *     PspInitPhase0 @ 0x140C65530 (PspInitPhase0.c)
 *     PopSleepstudyInitialize @ 0x140C66E70 (PopSleepstudyInitialize.c)
 * Callees:
 *     <none>
 */

size_t __cdecl wcslen(const wchar_t *Str)
{
  __m128i *i; // rdx
  unsigned __int64 v2; // r9
  const wchar_t *v3; // rax
  size_t v4; // rdx

  i = (__m128i *)Str;
  if ( ((unsigned __int8)Str & 1) != 0 )
  {
    while ( i->m128i_i16[0] )
      i = (__m128i *)((char *)i + 2);
    return ((char *)i - (char *)Str) >> 1;
  }
  v2 = ((16LL - ((unsigned __int8)Str & 0xF)) & (unsigned __int64)-(__int64)(((unsigned __int8)Str & 0xF) != 0LL)) >> 1;
  v3 = &Str[v2];
  if ( Str != v3 )
  {
    do
    {
      if ( !i->m128i_i16[0] )
        break;
      i = (__m128i *)((char *)i + 2);
    }
    while ( i != (__m128i *)v3 );
  }
  v4 = ((char *)i - (char *)Str) >> 1;
  if ( v4 == v2 )
  {
    for ( i = (__m128i *)&Str[v4]; !_mm_movemask_epi8(_mm_cmpeq_epi16((__m128i)0LL, *i)); ++i )
      ;
    while ( i->m128i_i16[0] )
      i = (__m128i *)((char *)i + 2);
    return ((char *)i - (char *)Str) >> 1;
  }
  return v4;
}
