/*
 * XREFs of ?GetCallbackWaitHandle@SipcServer@@UEAAPEAXXZ @ 0x18010EFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall SipcServer::GetCallbackWaitHandle(SipcServer *this)
{
  return AggregateWaitHandle::GetWaitHandle((SipcServer *)((char *)this + 64));
}
