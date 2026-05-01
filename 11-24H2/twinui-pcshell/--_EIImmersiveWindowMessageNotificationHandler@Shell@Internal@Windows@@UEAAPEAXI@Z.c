/*
 * XREFs of ??_EIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x18037A400
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@UEAA@XZ @ 0x18037A110 (--1IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *__fastcall Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::`vector deleting destructor'(
        Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *this,
        char a2)
{
  Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::~IImmersiveWindowMessageNotificationHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA0);
  return this;
}
