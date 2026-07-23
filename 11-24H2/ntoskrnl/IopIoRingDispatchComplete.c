/*
 * XREFs of IopIoRingDispatchComplete @ 0x1406F5B84
 * Callers:
 *     IopProcessIoRingEntry @ 0x1406F5A58 (IopProcessIoRingEntry.c)
 * Callees:
 *     IopCompleteIoRingEntry @ 0x1403B4AE0 (IopCompleteIoRingEntry.c)
 */

int __fastcall IopIoRingDispatchComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  v5 = a3;
  return IopCompleteIoRingEntry(a1, v3, &v5, 0);
}
