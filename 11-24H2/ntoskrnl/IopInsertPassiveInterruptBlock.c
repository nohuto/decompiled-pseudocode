/*
 * XREFs of IopInsertPassiveInterruptBlock @ 0x14044C664
 * Callers:
 *     IopAllocatePassiveInterruptBlock @ 0x140AA6280 (IopAllocatePassiveInterruptBlock.c)
 * Callees:
 *     IopFindPassiveInterruptBlockLocked @ 0x14044C858 (IopFindPassiveInterruptBlockLocked.c)
 *     IopReleaseGlobalPassiveInterruptListLock @ 0x14044C950 (IopReleaseGlobalPassiveInterruptListLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x14044C9C4 (IopAcquireGlobalPassiveInterruptListLock.c)
 */

__int64 __fastcall IopInsertPassiveInterruptBlock(__int64 a1, _BYTE *a2)
{
  __int64 *v4; // rcx
  __int64 PassiveInterruptBlockLocked; // rsi
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  *a2 = 1;
  IopAcquireGlobalPassiveInterruptListLock(&v7);
  PassiveInterruptBlockLocked = IopFindPassiveInterruptBlockLocked(*(unsigned int *)(a1 + 20));
  if ( !PassiveInterruptBlockLocked )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 192));
    v4 = (__int64 *)qword_140F8C108;
    if ( *(__int64 **)qword_140F8C108 != &PassiveInterruptList )
      __fastfail(3u);
    *(_QWORD *)a1 = &PassiveInterruptList;
    *(_QWORD *)(a1 + 8) = v4;
    *v4 = a1;
    qword_140F8C108 = a1;
  }
  LOBYTE(v4) = v7;
  IopReleaseGlobalPassiveInterruptListLock(v4);
  if ( PassiveInterruptBlockLocked )
    *a2 = 0;
  return 0LL;
}
