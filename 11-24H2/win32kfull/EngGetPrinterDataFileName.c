/*
 * XREFs of EngGetPrinterDataFileName @ 0x14032F700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPWSTR __stdcall EngGetPrinterDataFileName(HDEV hdev)
{
  return (LPWSTR)*((_QWORD *)hdev + 188);
}
