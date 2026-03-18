/*
 * XREFs of PlaySoundDisconnect @ 0x1403D1714
 * Callers:
 *     ?Connect@CUserPlaySound@@AEAAJPEAX@Z @ 0x14020466C (-Connect@CUserPlaySound@@AEAAJPEAX@Z.c)
 *     ?Disconnect@CUserPlaySound@@AEAAJXZ @ 0x14020472C (-Disconnect@CUserPlaySound@@AEAAJXZ.c)
 *     CleanupPlaySound @ 0x14021DF70 (CleanupPlaySound.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall PlaySoundDisconnect(RPC_BINDING_HANDLE *Binding)
{
  RPC_STATUS result; // eax

  result = RpcBindingUnbind(*Binding);
  if ( !result )
  {
    result = RpcBindingFree(Binding);
    if ( !result )
      *Binding = 0LL;
  }
  return result;
}
