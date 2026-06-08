/*
 * XREFs of sub_14000E9A0 @ 0x14000E9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_14000E9A0(_QWORD *BugCheckParameter4)
{
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp+8h] BYREF

  LOBYTE(BugCheckParameter3) = 0;
  if ( (int)PoFxProcessorNotification(*BugCheckParameter4, 7LL, &BugCheckParameter3) < 0 )
    KeBugCheckEx(0x143u, 1uLL, 7uLL, (ULONG_PTR)&BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  return BugCheckParameter3;
}
