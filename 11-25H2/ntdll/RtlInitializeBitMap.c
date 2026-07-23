/*
 * XREFs of RtlInitializeBitMap @ 0x1800F64D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlInitializeBitMap(PRTL_BITMAP BitMapHeader, PULONG BitMapBuffer, ULONG SizeOfBitMap)
{
  BitMapHeader->SizeOfBitMap = SizeOfBitMap;
  BitMapHeader->Buffer = BitMapBuffer;
}
