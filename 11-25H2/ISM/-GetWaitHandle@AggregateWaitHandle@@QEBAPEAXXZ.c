/*
 * XREFs of ?GetWaitHandle@AggregateWaitHandle@@QEBAPEAXXZ @ 0x18010D510
 * Callers:
 *     ?GetCallbackWaitHandle@SipcServer@@UEAAPEAXXZ @ 0x18010D0E0 (-GetCallbackWaitHandle@SipcServer@@UEAAPEAXXZ.c)
 * Callees:
 *     SipcFailFast @ 0x18010E99C (SipcFailFast.c)
 */

void *__fastcall AggregateWaitHandle::GetWaitHandle(AggregateWaitHandle *this)
{
  void *result; // rax

  result = (void *)*((_QWORD *)this + 1);
  if ( !result )
  {
    SipcFailFast(2147549183LL);
    __debugbreak();
  }
  return result;
}
