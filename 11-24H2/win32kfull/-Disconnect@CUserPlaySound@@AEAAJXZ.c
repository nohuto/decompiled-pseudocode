/*
 * XREFs of ?Disconnect@CUserPlaySound@@AEAAJXZ @ 0x14020472C
 * Callers:
 *     ?DisconnectPlaySound@CUserPlaySound@@SAJXZ @ 0x140204704 (-DisconnectPlaySound@CUserPlaySound@@SAJXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BB10 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BCE8 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     PlaySoundDisconnect @ 0x1403D1714 (PlaySoundDisconnect.c)
 */

__int64 __fastcall CUserPlaySound::Disconnect(void **this)
{
  void *v2; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+30h] [rbp+8h] BYREF

  Binding = 0LL;
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(this + 1), 0);
  v2 = *this;
  if ( *this )
  {
    *this = 0LL;
    Binding = v2;
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(this + 1), 0LL);
  if ( Binding )
    return PlaySoundDisconnect(&Binding);
  else
    return 3221225506LL;
}
