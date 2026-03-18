/*
 * XREFs of KdpQuickMoveMemory @ 0x140B65490
 * Callers:
 *     KdpGetContextEx @ 0x1405AC2F0 (KdpGetContextEx.c)
 *     KdpSetContextEx @ 0x1405AC3D4 (KdpSetContextEx.c)
 *     KdpCopyContext @ 0x140B651E8 (KdpCopyContext.c)
 *     KdpSearchMemory @ 0x140B67EF4 (KdpSearchMemory.c)
 *     KdpPrint @ 0x140B68F08 (KdpPrint.c)
 *     KdpPrompt @ 0x140B690AC (KdpPrompt.c)
 * Callees:
 *     <none>
 */

char __fastcall KdpQuickMoveMemory(__int64 a1, char *a2, int a3)
{
  __int64 v3; // rcx
  char result; // al

  if ( a3 )
  {
    v3 = a1 - (_QWORD)a2;
    do
    {
      result = *a2;
      a2[v3] = *a2;
      ++a2;
      --a3;
    }
    while ( a3 );
  }
  return result;
}
