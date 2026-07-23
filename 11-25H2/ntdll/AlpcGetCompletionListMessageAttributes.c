/*
 * XREFs of AlpcGetCompletionListMessageAttributes @ 0x180137FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PALPC_MESSAGE_ATTRIBUTES __cdecl AlpcGetCompletionListMessageAttributes(PVOID CompletionList, PPORT_MESSAGE Message)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( !*((_DWORD *)CompletionList + 9) )
    return 0LL;
  if ( (((_BYTE)Message + (unsigned __int8)Message->u1.s1.TotalLength) & 7) != 0 )
    v2 = 8 - (((_BYTE)Message + (unsigned __int8)Message->u1.s1.TotalLength) & 7);
  return (PALPC_MESSAGE_ATTRIBUTES)((char *)Message + (unsigned __int16)Message->u1.s1.TotalLength + v2);
}
