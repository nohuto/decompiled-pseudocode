/*
 * XREFs of MiInitializeDecayPfns @ 0x140C5C2D8
 * Callers:
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     KcsanMarkAddressIgnored @ 0x1404A4410 (KcsanMarkAddressIgnored.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY MiInitializeDecayPfns()
{
  __int64 v0; // rdi
  struct _SLIST_ENTRY *v1; // rbx
  PSLIST_ENTRY result; // rax

  v0 = 2048LL;
  dword_140E35B28 = 2048;
  qword_140E35B30 = (__int64)&qword_140E35B38;
  KcsanMarkAddressIgnored((ULONG_PTR)&qword_140E35B38, 0x100uLL);
  if ( ((unsigned __int8)&ListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  ListHead = 0LL;
  v1 = (struct _SLIST_ENTRY *)(48 * qword_140E35B00 - 0x21FFFFFE8030LL);
  MiSetPfnContainingFrame((__int64)v1, 1LL);
  do
  {
    result = RtlpInterlockedPushEntrySList(&ListHead, v1);
    v1 -= 3;
    --v0;
  }
  while ( v0 );
  return result;
}
