/*
 * XREFs of memmove_0 @ 0x140010BC8
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x14000A310 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000F228 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x1400105D0 (-DoStackCapture@@YAXJIPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
