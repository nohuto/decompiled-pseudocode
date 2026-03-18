/*
 * XREFs of IrqLibFreeMessageTarget @ 0x1400A8C30
 * Callers:
 *     <none>
 * Callees:
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1400464E8 (ProcessorDeleteDeviceIdtAssignment.c)
 *     IrqLibAcquireArbiterLock @ 0x14004F218 (IrqLibAcquireArbiterLock.c)
 *     IrqLibReleaseArbiterLock @ 0x1400564C4 (IrqLibReleaseArbiterLock.c)
 *     ProcessorIdtEntryToGsiv @ 0x1400AA7F8 (ProcessorIdtEntryToGsiv.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1400B3264 (ProcessorGetDeviceIdtAssignment.c)
 */

KIRQL __fastcall IrqLibFreeMessageTarget(PVOID Owner, unsigned int a2, __int64 a3)
{
  KIRQL result; // al
  __int64 v7; // r8
  unsigned int v8; // ebx
  _BYTE v9[16]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h]
  ULONGLONG End; // [rsp+68h] [rbp+20h] BYREF

  LODWORD(End) = 0;
  v10 = 0LL;
  result = KeGetCurrentIrql();
  if ( !result )
  {
    IrqLibAcquireArbiterLock(1);
    if ( (int)ProcessorIdtEntryToGsiv(a2, a3, v7, &End) >= 0 )
    {
      v8 = End;
      if ( (int)ProcessorGetDeviceIdtAssignment(Owner, (unsigned int)End, 0LL, v9) >= 0 )
      {
        ProcessorDeleteDeviceIdtAssignment(Owner, v8, DWORD1(v10), 0);
        RtlDeleteRange(RangeList, v8, v8, Owner);
      }
    }
    return IrqLibReleaseArbiterLock();
  }
  return result;
}
