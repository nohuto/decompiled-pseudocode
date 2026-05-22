/*
 * XREFs of ?OnFocusRequest@SystemButtonProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18006DBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemButtonProcessor::OnFocusRequest(
        SystemButtonProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  *(_DWORD *)a4 = 0;
  if ( *((char *)a2 + 4) < 0 )
    *(_DWORD *)a4 = 1;
  return 0LL;
}
