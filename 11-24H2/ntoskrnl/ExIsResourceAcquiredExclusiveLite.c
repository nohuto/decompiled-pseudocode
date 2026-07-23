/*
 * XREFs of ExIsResourceAcquiredExclusiveLite @ 0x1403FE4D0
 * Callers:
 *     DifExIsResourceAcquiredExclusiveLiteWrapper @ 0x14061DD90 (DifExIsResourceAcquiredExclusiveLiteWrapper.c)
 *     CmpTestRegistryLockExclusive @ 0x1406669D4 (CmpTestRegistryLockExclusive.c)
 *     HvpTruncateBins @ 0x140967554 (HvpTruncateBins.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall ExIsResourceAcquiredExclusiveLite(PERESOURCE Resource)
{
  USHORT Flag; // dx
  BOOLEAN v2; // r8
  unsigned __int8 v4; // al
  unsigned __int8 CurrentIrql; // al

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    v4 = KeGetCurrentIrql();
    if ( v4 > 2u )
      KeBugCheckEx(0x1C6u, 0LL, v4, 2uLL, 0LL);
    return Resource->Reserved2 == KeGetCurrentThread();
  }
  else
  {
    v2 = 0;
    if ( (Flag & 0x80u) != 0 )
      return Resource->OwnerEntry.OwnerThread == (_QWORD)KeGetCurrentThread();
    return v2;
  }
}
