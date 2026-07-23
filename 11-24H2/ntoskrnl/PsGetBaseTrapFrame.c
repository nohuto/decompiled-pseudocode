/*
 * XREFs of PsGetBaseTrapFrame @ 0x140438650
 * Callers:
 *     PsPicoWalkUserStack @ 0x140AA1E90 (PsPicoWalkUserStack.c)
 *     PsCallEnclave @ 0x140AD0080 (PsCallEnclave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetBaseTrapFrame(__int64 a1, _DWORD *a2)
{
  __int64 i; // r8
  int v3; // eax

  for ( i = *(_QWORD *)(a1 + 40); (*(_BYTE *)(i + 8) & 1) != 0; i = *(_QWORD *)(i + 40) )
    ;
  v3 = 0;
  if ( a2 )
  {
    LOBYTE(v3) = *(_QWORD *)(i + 32) != 0LL;
    *a2 = v3;
  }
  return i - 400;
}
