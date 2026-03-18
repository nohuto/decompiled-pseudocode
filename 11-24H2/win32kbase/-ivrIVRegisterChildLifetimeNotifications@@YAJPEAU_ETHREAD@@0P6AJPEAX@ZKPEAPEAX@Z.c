/*
 * XREFs of ?ivrIVRegisterChildLifetimeNotifications@@YAJPEAU_ETHREAD@@0P6AJPEAX@ZKPEAPEAX@Z @ 0x140217814
 * Callers:
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x14021B18C (-Initialize@CIVChannel@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ivrIVRegisterChildLifetimeNotifications(
        struct _ETHREAD *a1,
        struct _ETHREAD *a2,
        int (*a3)(void *),
        unsigned int a4)
{
  __int64 (__fastcall *v7)(struct _ETHREAD *, struct _ETHREAD *, __int64 (__fastcall *)(void *), _QWORD, _QWORD); // rax

  v7 = *(__int64 (__fastcall **)(struct _ETHREAD *, struct _ETHREAD *, __int64 (__fastcall *)(void *), _QWORD, _QWORD))(W32GetUserSessionState(a1) + 19584);
  if ( v7 )
    return v7(a1, a2, CIVChannel::sOnChildNotification, a4, 0LL);
  else
    return 3221225659LL;
}
