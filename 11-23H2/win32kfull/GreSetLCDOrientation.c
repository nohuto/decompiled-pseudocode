/*
 * XREFs of GreSetLCDOrientation @ 0x1C00D59CC
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00D433C (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00D9A30 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSetLCDOrientation(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rax
  void *v3; // rcx
  __int64 result; // rax

  v1 = a1;
  v2 = SGDGetSessionState(a1);
  v3 = &unk_1C0311F00;
  if ( (v1 & 1) == 0 )
    v3 = &unk_1C031EEE0;
  result = *(_QWORD *)(v2 + 32);
  *(_QWORD *)(result + 8592) = v3;
  return result;
}
