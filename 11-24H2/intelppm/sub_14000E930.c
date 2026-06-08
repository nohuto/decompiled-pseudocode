/*
 * XREFs of sub_14000E930 @ 0x14000E930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_14000E930(_QWORD *BugCheckParameter4)
{
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp+8h] BYREF

  LOBYTE(BugCheckParameter3) = 0;
  if ( (int)PoFxProcessorNotification(*BugCheckParameter4, 8LL, &BugCheckParameter3) < 0 )
    KeBugCheckEx(0x143u, 1uLL, 8uLL, (ULONG_PTR)&BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  return BugCheckParameter3;
}
