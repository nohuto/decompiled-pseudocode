/*
 * XREFs of HalpAcquireSecondaryIcEntryExclusive @ 0x1405557E8
 * Callers:
 *     HalpDeleteSecondaryIcEntry @ 0x140555A18 (HalpDeleteSecondaryIcEntry.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     HalpReleaseHighLevelLock @ 0x1403B9898 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403B9FD0 (HalpAcquireHighLevelLock.c)
 */

__int64 __fastcall HalpAcquireSecondaryIcEntryExclusive(volatile signed __int32 *a1, unsigned __int8 *a2)
{
  unsigned __int8 i; // al
  unsigned __int8 v5; // cl
  __int64 result; // rax

  _InterlockedIncrement(a1 + 29);
  KeWaitForSingleObject((PVOID)(a1 + 30), Executive, 0, 0, 0LL);
  for ( i = HalpAcquireHighLevelLock(&SecondaryIcListSpinLock); ; i = HalpAcquireHighLevelLock(&SecondaryIcListSpinLock) )
  {
    v5 = i;
    result = (unsigned int)_InterlockedCompareExchange(a1 + 28, 2, 1);
    if ( (_DWORD)result == 1 )
      break;
    HalpReleaseHighLevelLock((volatile signed __int64 *)&SecondaryIcListSpinLock, v5);
    KeWaitForSingleObject((PVOID)(a1 + 30), Executive, 0, 0, 0LL);
  }
  _InterlockedDecrement(a1 + 29);
  *a2 = v5;
  return result;
}
