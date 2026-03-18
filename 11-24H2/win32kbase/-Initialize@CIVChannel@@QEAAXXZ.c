/*
 * XREFs of ?Initialize@CIVChannel@@QEAAXXZ @ 0x14021B18C
 * Callers:
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x140188D70 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x140210670 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x140210D10 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     IVWorkerThread @ 0x140217C48 (IVWorkerThread.c)
 * Callees:
 *     isRootPartition @ 0x14004FB7C (isRootPartition.c)
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     ?ivrIVRegisterChildLifetimeNotifications@@YAJPEAU_ETHREAD@@0P6AJPEAX@ZKPEAPEAX@Z @ 0x140217814 (-ivrIVRegisterChildLifetimeNotifications@@YAJPEAU_ETHREAD@@0P6AJPEAX@ZKPEAPEAX@Z.c)
 *     ?Receive@CIVChannel@@AEAAJXZ @ 0x14021B38C (-Receive@CIVChannel@@AEAAJXZ.c)
 *     ?Reconnect@CIVChannel@@AEAAJXZ @ 0x14021B480 (-Reconnect@CIVChannel@@AEAAJXZ.c)
 */

void __fastcall CIVChannel::Initialize(CIVChannel *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rax
  int (*v5)(void *); // r8
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  struct _ETHREAD *CurrentThread; // rdi
  __int64 UserSessionState; // rax
  int (*v11)(void *); // r8

  if ( !isRootPartition((__int64)this) )
  {
    if ( !isChildPartition(v2) )
      goto LABEL_5;
    v8 = *((_DWORD *)this + 2);
    CurrentThread = KeGetCurrentThread();
    UserSessionState = W32GetUserSessionState(v7);
    if ( (int)ivrIVRegisterChildLifetimeNotifications(
                *(struct _ETHREAD **)(UserSessionState + 19424),
                CurrentThread,
                v11,
                v8) < 0 )
      goto LABEL_11;
    if ( *((_BYTE *)this + 44) )
      v6 = CIVChannel::Reconnect(this);
    else
      v6 = CIVChannel::Receive(this);
LABEL_4:
    if ( v6 >= 0 )
      goto LABEL_5;
LABEL_11:
    KeBugCheck(0x164u);
  }
  if ( !*((_BYTE *)this + 44) )
  {
    v3 = *((_DWORD *)this + 2);
    v4 = W32GetUserSessionState(v2);
    v6 = ivrIVRegisterChildLifetimeNotifications(*(struct _ETHREAD **)(v4 + 19424), 0LL, v5, v3);
    goto LABEL_4;
  }
LABEL_5:
  *((_BYTE *)this + 44) = 1;
}
