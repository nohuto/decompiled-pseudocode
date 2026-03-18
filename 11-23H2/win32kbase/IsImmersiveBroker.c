/*
 * XREFs of IsImmersiveBroker @ 0x1C009BEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IsImmersiveBroker(__int64 a1)
{
  PVOID v1; // rcx

  return (*(_DWORD *)(a1 + 824) & 0x30) == 0x20
      || (v1 = *(PVOID *)a1) != 0LL && v1 == *(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      || v1 == gpepCSRSS;
}
