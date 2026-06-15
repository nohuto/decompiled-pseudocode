/*
 * XREFs of ??$?0V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@$0A@@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAA@AEBV?$weak_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@1@@Z @ 0x1400080A4
 * Callers:
 *     ?AcquireReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA?AVReadWriteAccess@12@XZ @ 0x140008048 (-AcquireReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReader.c)
 *     ?AcquireReadAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA?AVReadAccess@12@XZ @ 0x14008DB98 (-AcquireReadAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockP.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x14005A0F0 (_CxxThrowException_0.c)
 */

_QWORD *__fastcall std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // r9
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( !v2 )
  {
LABEL_6:
    pExceptionObject = &std::bad_weak_ptr::`vftable';
    v7 = 0LL;
    throw (std::bad_weak_ptr *)&pExceptionObject;
  }
  v3 = *(_DWORD *)(v2 + 8);
  do
  {
    if ( !v3 )
      goto LABEL_6;
    v4 = v3;
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3);
  }
  while ( v4 != v3 );
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}
