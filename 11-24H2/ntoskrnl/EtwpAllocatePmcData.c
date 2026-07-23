/*
 * XREFs of EtwpAllocatePmcData @ 0x1407A71A4
 * Callers:
 *     EtwpUpdatePmcEvents @ 0x1407A94B8 (EtwpUpdatePmcEvents.c)
 *     EtwpUpdatePmcCounters @ 0x140A9A104 (EtwpUpdatePmcCounters.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x14031D920 (KeQueryMaximumProcessorCountEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocatePmcData(__int64 a1)
{
  ULONG MaximumProcessorCount; // eax
  __int64 *Pool2; // rbx
  __int64 v5; // rax

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  Pool2 = (__int64 *)ExAllocatePool2(0x40uLL, 8 * MaximumProcessorCount + 24, 0x58777445u);
  if ( !Pool2 )
    return 3221225495LL;
  v5 = ExAllocatePool2(0x40uLL, 4LL * (unsigned int)EtwpMaxPmcCounter, 0x58777445u);
  *Pool2 = v5;
  if ( !v5 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225495LL;
  }
  *(_QWORD *)(a1 + 1064) = Pool2;
  return 0LL;
}
