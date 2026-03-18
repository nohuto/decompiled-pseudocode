/*
 * XREFs of PpmHeteroHgsEvaluateContainmentMinPolicyDecision @ 0x1404AF28C
 * Callers:
 *     PpmHeteroHgsEvaluateContainmentDecision @ 0x1404AF170 (PpmHeteroHgsEvaluateContainmentDecision.c)
 *     PpmEventTraceControlCallback @ 0x140AC4110 (PpmEventTraceControlCallback.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmHeteroHgsEvaluateContainmentMinPolicyDecision(__int64 a1)
{
  char result; // al
  __int64 v2; // r9
  __int64 v3; // r8
  _BYTE *v4; // rcx
  unsigned __int8 v5; // dl

  result = 0;
  if ( *(_BYTE *)(a1 + 11) )
  {
    v2 = *(_QWORD *)(a1 + 192);
    v3 = *(unsigned __int8 *)(a1 + 11);
    v4 = *(_BYTE **)(a1 + 200);
    do
    {
      if ( *v4 )
      {
        v5 = v4[1];
        if ( v5 > *(_BYTE *)(v2 + 8) || v5 > *(_BYTE *)(v2 + 9) )
          result = 1;
      }
      v4 += 104;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
