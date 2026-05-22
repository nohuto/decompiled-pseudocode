/*
 * XREFs of ?OnFocusRequest@RawButtonProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801B2870
 * Callers:
 *     <none>
 * Callees:
 *     ?FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ @ 0x1801B2600 (-FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ.c)
 */

__int64 __fastcall RawButtonProcessor::OnFocusRequest(
        RawButtonProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v4; // ebx

  v4 = 0;
  if ( *((char *)a2 + 4) < 0 )
  {
    if ( !*((_QWORD *)this + 5) || !*((_QWORD *)this + 4) )
      RawButtonProcessor::FindRemoteEndpoint(this);
    if ( *((_QWORD *)this + 5) && *((_QWORD *)this + 4) )
      v4 = 1;
  }
  *(_DWORD *)a4 = v4;
  return 0LL;
}
