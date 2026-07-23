/*
 * XREFs of IovpValidateDeviceObject @ 0x140B84C20
 * Callers:
 *     IovpCallDriverWithStackBuffer @ 0x140B84950 (IovpCallDriverWithStackBuffer.c)
 *     IovCallDriver @ 0x140BA9D40 (IovCallDriver.c)
 * Callees:
 *     <none>
 */

bool __fastcall IovpValidateDeviceObject(__int64 a1)
{
  return a1 && *(_WORD *)a1 == 3 && *(_QWORD *)(a1 + 8) && *(_DWORD *)(a1 + 4) >= 0;
}
