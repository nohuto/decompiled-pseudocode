/*
 * XREFs of ?PostAsyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI@Z @ 0x14020BFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMessageToChannel@DXGVMBUSCHANNEL@@IEAAJIPEAXI0PEAI_N@Z @ 0x14020AF68 (-AddMessageToChannel@DXGVMBUSCHANNEL@@IEAAJIPEAXI0PEAI_N@Z.c)
 */

__int64 __fastcall DXGCHANNELENDPOINTPROXY::PostAsyncMessage(
        DXGCHANNELENDPOINTPROXY *this,
        _DWORD *a2,
        unsigned int a3)
{
  return DXGVMBUSCHANNEL::AddMessageToChannel(
           *((DXGVMBUSCHANNEL **)this + 16),
           *((_DWORD *)this + 9),
           a2,
           a3,
           0LL,
           0LL,
           0);
}
