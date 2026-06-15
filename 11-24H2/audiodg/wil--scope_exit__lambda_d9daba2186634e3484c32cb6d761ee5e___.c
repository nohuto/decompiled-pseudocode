/*
 * XREFs of wil::scope_exit__lambda_d9daba2186634e3484c32cb6d761ee5e___ @ 0x140061478
 * Callers:
 *     ?UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x140017640 (-UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::scope_exit__lambda_d9daba2186634e3484c32cb6d761ee5e___(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax

  v2 = *a2;
  *(_BYTE *)(a1 + 16) = 1;
  result = a1;
  *(_OWORD *)a1 = v2;
  return result;
}
