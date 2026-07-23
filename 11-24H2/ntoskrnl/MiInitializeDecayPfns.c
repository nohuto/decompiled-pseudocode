/*
 * XREFs of MiInitializeDecayPfns @ 0x140C5E468
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     KcsanMarkAddressIgnored @ 0x14049F1A0 (KcsanMarkAddressIgnored.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY MiInitializeDecayPfns()
{
  __int64 v0; // rdi
  _SLIST_ENTRY *v1; // rbx
  PSLIST_ENTRY result; // rax

  v0 = 2048LL;
  dword_140E35C68 = 2048;
  qword_140E35C70 = (__int64)&qword_140E35C78;
  KcsanMarkAddressIgnored((ULONG_PTR)&qword_140E35C78, 0x100uLL);
  if ( ((unsigned __int8)&stru_140E35C50 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  stru_140E35C50 = 0LL;
  v1 = (_SLIST_ENTRY *)(48 * qword_140E35C40 - 0x21FFFFFE8030LL);
  MiSetPfnContainingFrame((__int64)v1, 1LL);
  do
  {
    result = RtlpInterlockedPushEntrySList(&stru_140E35C50, v1);
    v1 -= 3;
    --v0;
  }
  while ( v0 );
  return result;
}
