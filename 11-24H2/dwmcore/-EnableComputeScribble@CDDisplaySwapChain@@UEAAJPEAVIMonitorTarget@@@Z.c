/*
 * XREFs of ?EnableComputeScribble@CDDisplaySwapChain@@UEAAJPEAVIMonitorTarget@@@Z @ 0x18022BC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplaySwapChain::EnableComputeScribble(CScribbleSwapChain *this, struct IMonitorTarget *a2)
{
  __int64 result; // rax

  if ( *((_BYTE *)this + 410) )
    return CScribbleSwapChain::EnableComputeScribble(this, a2);
  *((_BYTE *)this + 410) = 1;
  result = 2291662990LL;
  *((_BYTE *)this + 408) = 1;
  return result;
}
