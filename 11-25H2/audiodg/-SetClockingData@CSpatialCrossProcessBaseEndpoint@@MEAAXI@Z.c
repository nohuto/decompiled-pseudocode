/*
 * XREFs of ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXI@Z @ 0x140007CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Commit@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@IEAAXXZ @ 0x140007F74 (-_Commit@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util.c)
 *     ?AcquireReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA?AVReadWriteAccess@12@XZ @ 0x140008018 (-AcquireReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReader.c)
 *     ?reset@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ @ 0x14000815C (-reset@-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14000897C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::SetClockingData(CSpatialCrossProcessBaseEndpoint *this, int a2)
{
  signed __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v7; // [rsp+30h] [rbp-18h]

  if ( a2 )
  {
    util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::AcquireReadWriteAccess(
      *((_QWORD *)this + 90),
      &v5);
    if ( v5 )
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this + 163) + 32LL), 0LL, 0LL);
      v4 = v5;
      *(_QWORD *)(v5 + 80) += *(unsigned int *)(v5 + 96);
      if ( *(_QWORD *)(v4 + 80) > v3 )
        *(_QWORD *)(v4 + 80) = v3;
      v5 = 0LL;
      util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::_Commit(v6);
      std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::reset(&v6);
      if ( v5 )
      {
        v5 = 0LL;
        std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::reset(&v6);
      }
    }
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
  }
}
