/*
 * XREFs of TpCallbackSendPendingAlpcMessage @ 0x1800E5100
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x1800E5178 (TppCallbackSendAndDestroyAlpcMessage.c)
 */

__int64 __fastcall TpCallbackSendPendingAlpcMessage(__int64 a1)
{
  __int64 result; // rax

  if ( a1 && (*(_BYTE *)(a1 + 228) & 1) != 0 )
  {
    result = TppCallbackSendAndDestroyAlpcMessage(a1);
    *(_DWORD *)(a1 + 228) &= ~1u;
  }
  else
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  return result;
}
