/*
 * XREFs of USBType1NeedLockDelay @ 0x14003D558
 * Callers:
 *     USBType1StateChangePin @ 0x140004AC0 (USBType1StateChangePin.c)
 *     USBType1RenderCreatePin @ 0x14003D140 (USBType1RenderCreatePin.c)
 * Callees:
 *     <none>
 */

bool __fastcall USBType1NeedLockDelay(__int64 a1)
{
  __int64 v1; // rcx
  bool result; // al

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 160LL);
  result = 0;
  if ( *(_BYTE *)(v1 + 4) )
    return *(_WORD *)(v1 + 5) != 0;
  return result;
}
