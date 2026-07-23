/*
 * XREFs of PspDeletePartition @ 0x14077AE80
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     PspRemovePartitionFromGlobalList @ 0x1405E3FBC (PspRemovePartitionFromGlobalList.c)
 */

void __fastcall PspDeletePartition(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // r9

  v1 = *(_QWORD *)(BugCheckParameter2 + 40);
  if ( v1 )
    KeBugCheckEx(0x18Eu, 0LL, BugCheckParameter2, v1, 0LL);
  if ( *(_QWORD *)(BugCheckParameter2 + 56) )
    PspRemovePartitionFromGlobalList(BugCheckParameter2);
}
