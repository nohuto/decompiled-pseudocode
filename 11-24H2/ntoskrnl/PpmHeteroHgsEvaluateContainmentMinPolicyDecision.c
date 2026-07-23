/*
 * XREFs of PpmHeteroHgsEvaluateContainmentMinPolicyDecision @ 0x1404B9270
 * Callers:
 *     PpmHeteroHgsEvaluateContainmentDecision @ 0x14044C47C (PpmHeteroHgsEvaluateContainmentDecision.c)
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmHeteroHgsEvaluateContainmentMinPolicyDecision(__int64 a1)
{
  char result; // al
  __int64 v2; // r9
  __int64 v3; // r8
  _WORD *v4; // rcx
  unsigned __int16 v5; // dx

  result = 0;
  if ( *(_BYTE *)(a1 + 12) )
  {
    v2 = *(_QWORD *)(a1 + 1280);
    v3 = *(unsigned __int8 *)(a1 + 12);
    v4 = *(_WORD **)(a1 + 1288);
    do
    {
      if ( *v4 )
      {
        v5 = v4[1];
        if ( v5 > *(_WORD *)(v2 + 8) || v5 > *(_WORD *)(v2 + 10) )
          result = 1;
      }
      v4 += 320;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
