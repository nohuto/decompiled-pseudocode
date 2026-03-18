/*
 * XREFs of memmove_0 @ 0x14000F1E8
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x140009AF0 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000D848 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x14000EBF0 (-DoStackCapture@@YAXJIPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
