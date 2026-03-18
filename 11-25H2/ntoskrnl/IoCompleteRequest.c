/*
 * XREFs of IoCompleteRequest @ 0x140593270
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 */

void __fastcall IoCompleteRequest(IRP *a1, CCHAR a2)
{
  IofCompleteRequest(a1, a2);
}
