/*
 * XREFs of IsIAMThread @ 0x140156680
 * Callers:
 *     NtUserSetActivationFilter @ 0x1400F4130 (NtUserSetActivationFilter.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1401565F8 (IsAdaptiveQueueDetachExempted.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1402405A4 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsIAMThread(__int64 a1)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *(_QWORD *)(a1 + 496);
  result = 0;
  if ( v1 )
  {
    if ( *(_QWORD *)(v1 + 288) == a1 )
      return 1;
  }
  return result;
}
