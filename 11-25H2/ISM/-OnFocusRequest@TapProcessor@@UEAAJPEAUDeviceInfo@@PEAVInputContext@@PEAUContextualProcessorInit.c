/*
 * XREFs of ?OnFocusRequest@TapProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180072070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TapProcessor::OnFocusRequest(
        TapProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  *(_DWORD *)a4 = 0;
  if ( (*((_DWORD *)a2 + 1) & 0xC6) == 4 )
    *(_DWORD *)a4 = 3;
  return 0LL;
}
