/*
 * XREFs of PnpCollectOpenHandles @ 0x14072DB24
 * Callers:
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x14073A198 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 * Callees:
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1404BD5E0 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     IopDebugPrint @ 0x1405A58A4 (IopDebugPrint.c)
 */

__int64 __fastcall PnpCollectOpenHandles(PVOID **a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 result; // rax

  v4 = (unsigned int)a2;
  if ( *(_BYTE *)(a3 + 36) )
    IopDebugPrint(0x14u, (int)"Beginning handle dump:\n");
  *(_DWORD *)(a3 + 32) = 0;
  result = a3 + 16;
  *(_QWORD *)(a3 + 24) = a3 + 16;
  *(_QWORD *)(a3 + 16) = a3 + 16;
  if ( (*(_BYTE *)(a3 + 36) || *(_BYTE *)(a3 + 37)) && (_DWORD)v4 )
  {
    do
    {
      *(_QWORD *)a3 = *a1;
      result = PnpHandleEnumerateHandlesAgainstPdoStack(*a1++, a2, a3);
      --v4;
    }
    while ( v4 );
  }
  if ( *(_BYTE *)(a3 + 36) )
    return IopDebugPrint(0x14u, (int)"Dump complete - %d total handles found.\n", *(unsigned int *)(a3 + 32));
  return result;
}
