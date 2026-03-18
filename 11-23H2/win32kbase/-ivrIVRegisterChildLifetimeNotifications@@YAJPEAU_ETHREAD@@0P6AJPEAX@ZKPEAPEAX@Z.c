/*
 * XREFs of ?ivrIVRegisterChildLifetimeNotifications@@YAJPEAU_ETHREAD@@0P6AJPEAX@ZKPEAPEAX@Z @ 0x1C01EE82C
 * Callers:
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x1C01F38B0 (-Initialize@CIVChannel@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

int __fastcall ivrIVRegisterChildLifetimeNotifications(
        struct _ETHREAD *a1,
        struct _ETHREAD *a2,
        int (*a3)(void *),
        unsigned int a4)
{
  if ( gpfnIVRegisterChildLifetimeNotifications )
    return gpfnIVRegisterChildLifetimeNotifications(a1, a2, (int (*)(void *))CIVChannel::sOnChildNotification, a4, 0LL);
  else
    return -1073741637;
}
