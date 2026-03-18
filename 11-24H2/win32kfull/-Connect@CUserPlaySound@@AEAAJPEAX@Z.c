/*
 * XREFs of ?Connect@CUserPlaySound@@AEAAJPEAX@Z @ 0x14020466C
 * Callers:
 *     NtUserDoSoundConnect @ 0x140204530 (NtUserDoSoundConnect.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BB10 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BCE8 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     PlaySoundConnect @ 0x1403D14FC (PlaySoundConnect.c)
 *     PlaySoundDisconnect @ 0x1403D1714 (PlaySoundDisconnect.c)
 */

__int64 __fastcall CUserPlaySound::Connect(CUserPlaySound *this, void *a2)
{
  unsigned int CurrentWin32kSessionId; // eax
  int v5; // edi
  RPC_BINDING_HANDLE v7; // rcx
  RPC_BINDING_HANDLE Binding; // [rsp+40h] [rbp+18h] BYREF

  Binding = 0LL;
  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
  v5 = PlaySoundConnect(CurrentWin32kSessionId, a2, &Binding);
  if ( v5 >= 0 )
  {
    W32AcquirePushLockExclusiveEx((CUserPlaySound *)((char *)this + 8), 0);
    if ( !*(_QWORD *)this )
    {
      v7 = Binding;
      Binding = 0LL;
      *(_QWORD *)this = v7;
    }
    W32ReleasePushLockExclusiveEx((CUserPlaySound *)((char *)this + 8), 0LL);
  }
  if ( Binding )
  {
    PlaySoundDisconnect(&Binding);
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v5;
}
