/*
 * XREFs of MiInitializeDecayPfns @ 0x140C4AF58
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 *     KcsanMarkAddressIgnored @ 0x1404A4140 (KcsanMarkAddressIgnored.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY MiInitializeDecayPfns()
{
  __int64 v0; // rdi
  _SLIST_ENTRY *v1; // rbx
  PSLIST_ENTRY result; // rax

  v0 = 2048LL;
  dword_140E358E8 = 2048;
  qword_140E358F0 = (__int64)&qword_140E358F8;
  KcsanMarkAddressIgnored((ULONG_PTR)&qword_140E358F8, 0x100uLL);
  if ( ((unsigned __int8)&ListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  ListHead = 0LL;
  v1 = (_SLIST_ENTRY *)(48 * qword_140E358C0 - 0x21FFFFFE8030LL);
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
