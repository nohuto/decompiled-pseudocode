/*
 * XREFs of wcslen @ 0x1404FD790
 * Callers:
 *     MiShowBadMapper @ 0x140275730 (MiShowBadMapper.c)
 *     PopFxStopDeviceAccounting @ 0x1402B79AC (PopFxStopDeviceAccounting.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x1402B7DE8 (PopDiagTraceFxDeviceAccounting.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1403BAF3C (SepVerifyDesktopAppxPackageName.c)
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     PiUEventHashStringIntoBucket @ 0x140477414 (PiUEventHashStringIntoBucket.c)
 *     BapdWriteEtwEvents @ 0x14049F614 (BapdWriteEtwEvents.c)
 *     PopOpenKey @ 0x1404A4918 (PopOpenKey.c)
 *     PopReadRegKeyValue @ 0x1404A667C (PopReadRegKeyValue.c)
 *     PnpMultiSzContainsString @ 0x1404B23C0 (PnpMultiSzContainsString.c)
 *     PopQueryPowerButtonConfiguration @ 0x1404B9FDC (PopQueryPowerButtonConfiguration.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1404BAB5C (RtlpMuiRegLoadLicInformation.c)
 *     PrpWriteLogsToRegistry @ 0x1404BBC04 (PrpWriteLogsToRegistry.c)
 *     IopAllowRemoteDASD @ 0x1404C4890 (IopAllowRemoteDASD.c)
 *     wcscat @ 0x1404FD5D0 (wcscat.c)
 *     wcscpy @ 0x1404FD610 (wcscpy.c)
 *     wcsncat @ 0x1404FD820 (wcsncat.c)
 *     RtlCreateUnicodeString @ 0x1409D2A00 (RtlCreateUnicodeString.c)
 *     QueryRegistryHideMachine @ 0x140C614F4 (QueryRegistryHideMachine.c)
 *     PspInitPhase0 @ 0x140C676AC (PspInitPhase0.c)
 *     PopSleepstudyInitialize @ 0x140C68FEC (PopSleepstudyInitialize.c)
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
