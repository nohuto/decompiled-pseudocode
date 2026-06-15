/*
 * XREFs of ?DestroyStream@CStreamInstanceProxy@@UEAAJXZ @ 0x18006EF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamInstanceProxy::DestroyStream(CStreamInstanceProxy *this)
{
  return CStreamInstanceProxyImpl::DestroyStream((CStreamInstanceProxy *)((char *)this - 40));
}
