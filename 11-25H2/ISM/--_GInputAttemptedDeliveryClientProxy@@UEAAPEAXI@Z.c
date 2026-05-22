/*
 * XREFs of ??_GInputAttemptedDeliveryClientProxy@@UEAAPEAXI@Z @ 0x18015C0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1InputAttemptedDeliveryClientProxy@@UEAA@XZ @ 0x18015C0C0 (--1InputAttemptedDeliveryClientProxy@@UEAA@XZ.c)
 */

InputAttemptedDeliveryClientProxy *__fastcall InputAttemptedDeliveryClientProxy::`scalar deleting destructor'(
        InputAttemptedDeliveryClientProxy *this,
        char a2)
{
  InputAttemptedDeliveryClientProxy::~InputAttemptedDeliveryClientProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
