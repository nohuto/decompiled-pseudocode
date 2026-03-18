/*
 * XREFs of IovpValidateDeviceObject @ 0x140B72C38
 * Callers:
 *     IovpCallDriverWithStackBuffer @ 0x140B72950 (IovpCallDriverWithStackBuffer.c)
 *     IovCallDriver @ 0x140B97D60 (IovCallDriver.c)
 * Callees:
 *     <none>
 */

bool __fastcall IovpValidateDeviceObject(__int64 a1)
{
  return a1 && *(_WORD *)a1 == 3 && *(_QWORD *)(a1 + 8) && *(_DWORD *)(a1 + 4) >= 0;
}
