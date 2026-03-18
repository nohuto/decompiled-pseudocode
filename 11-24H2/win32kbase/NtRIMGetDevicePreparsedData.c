/*
 * XREFs of NtRIMGetDevicePreparsedData @ 0x1401510D0
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetDevicePreparsedData @ 0x1401510F0 (RIMGetDevicePreparsedData.c)
 */

__int64 __fastcall NtRIMGetDevicePreparsedData(int a1, int a2, int a3, int a4)
{
  return RIMGetDevicePreparsedData(a1, a2, a3, a4, 1);
}
