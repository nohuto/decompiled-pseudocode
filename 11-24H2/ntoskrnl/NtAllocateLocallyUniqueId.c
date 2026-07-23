/*
 * XREFs of NtAllocateLocallyUniqueId @ 0x1409F70F0
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAllocateLocallyUniqueId(PLUID Luid)
{
  __int64 v2; // rcx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((unsigned __int8)Luid & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v2 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Luid < 0x7FFFFFFF0000LL )
      v2 = (__int64)Luid;
    *(_BYTE *)v2 = *(_BYTE *)v2;
    *(_BYTE *)(v2 + 7) = *(_BYTE *)(v2 + 7);
  }
  *Luid = (struct _LUID)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
  return 0;
}
