/*
 * XREFs of ?StartStream@CStreamInstanceProxy@@UEAAJXZ @ 0x180080510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamInstanceProxy::StartStream(CStreamInstanceProxy *this)
{
  return CStreamInstanceProxyImpl::StartStream((CStreamInstanceProxy *)((char *)this - 40));
}
