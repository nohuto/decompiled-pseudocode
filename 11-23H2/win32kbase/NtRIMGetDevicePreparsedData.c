/*
 * XREFs of NtRIMGetDevicePreparsedData @ 0x1C0174DA0
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetDevicePreparsedData @ 0x1C0177A80 (RIMGetDevicePreparsedData.c)
 */

__int64 __fastcall NtRIMGetDevicePreparsedData(int a1, int a2, int a3, int a4)
{
  return RIMGetDevicePreparsedData(a1, a2, a3, a4, 1);
}
