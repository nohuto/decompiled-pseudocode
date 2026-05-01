/*
 * XREFs of memcmp_0 @ 0x1801C9363
 * Callers:
 *     ?MatchesTrayInfoTipAppIdFormat@TrayUtility@SystemTray@@YA_NPEAUHSTRING__@@@Z @ 0x18018A438 (-MatchesTrayInfoTipAppIdFormat@TrayUtility@SystemTray@@YA_NPEAUHSTRING__@@@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x1802CE6C8 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ??RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z @ 0x1803FA350 (--RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
