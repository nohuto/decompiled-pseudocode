/*
 * XREFs of RtlDoesFileExists_U @ 0x18010CD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlDoesFileExists_U(PCWSTR FileName)
{
  __int64 v1; // rdx

  LOBYTE(v1) = 1;
  return RtlDoesFileExists_UEx(FileName, v1);
}
