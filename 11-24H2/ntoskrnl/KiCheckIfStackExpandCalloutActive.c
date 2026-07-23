/*
 * XREFs of KiCheckIfStackExpandCalloutActive @ 0x1402D6890
 * Callers:
 *     KeTerminateThread @ 0x1402D5BB8 (KeTerminateThread.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall KiCheckIfStackExpandCalloutActive(ULONG_PTR BugCheckParameter1)
{
  if ( (*(_BYTE *)(BugCheckParameter1 + 125) & 1) != 0 )
    KeBugCheckEx(0x107u, BugCheckParameter1, 0LL, 0LL, 0LL);
}
