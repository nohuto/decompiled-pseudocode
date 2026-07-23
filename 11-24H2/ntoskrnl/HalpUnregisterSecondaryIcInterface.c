/*
 * XREFs of HalpUnregisterSecondaryIcInterface @ 0x140553730
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x1403754EC (HalpReleaseSecondaryIcEntryShared.c)
 *     HalpDeleteSecondaryIcEntry @ 0x140553358 (HalpDeleteSecondaryIcEntry.c)
 */

__int64 __fastcall HalpUnregisterSecondaryIcInterface(int a1, int a2, __int64 a3)
{
  unsigned __int8 v6; // al
  __int64 v7; // r9
  void *v8; // rdi
  int v9; // ebx

  v6 = HalpAcquireHighLevelLock(&SecondaryIcListSpinLock);
  v7 = SecondaryIcList;
  v8 = 0LL;
  while ( (__int64 *)v7 != &SecondaryIcList )
  {
    if ( *(_DWORD *)(v7 + 16) == a1 && *(_DWORD *)(v7 + 20) == a2 && *(_QWORD *)(v7 + 48) == a3 )
    {
      v8 = (void *)v7;
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 112));
      break;
    }
    v7 = *(_QWORD *)v7;
  }
  HalpReleaseHighLevelLock((volatile signed __int64 *)&SecondaryIcListSpinLock, v6);
  if ( v8 )
  {
    v9 = HalpDeleteSecondaryIcEntry(v8);
    if ( v9 < 0 )
      HalpReleaseSecondaryIcEntryShared((__int64)v8, 1);
  }
  else
  {
    return (unsigned int)-1073700575;
  }
  return (unsigned int)v9;
}
