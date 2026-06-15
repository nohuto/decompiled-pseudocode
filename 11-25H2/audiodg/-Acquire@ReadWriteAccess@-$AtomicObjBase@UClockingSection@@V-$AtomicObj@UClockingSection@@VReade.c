/*
 * XREFs of ?Acquire@ReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAAJV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@@Z @ 0x1400089F8
 * Callers:
 *     ??0ReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA@V?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@@Z @ 0x1400080E4 (--0ReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockP.c)
 * Callees:
 *     ?reset@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ @ 0x14000815C (-reset@-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14000897C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_AcquireReadWrite@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@IEAAJAEAPEAUClockingSection@@@Z @ 0x140008AA8 (-_AcquireReadWrite@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockP.c)
 */

__int64 __fastcall util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadWriteAccess::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  std::_Ref_count_base **v2; // rbx
  _QWORD *v4; // r14
  __int64 v5; // rax
  std::_Ref_count_base *v6; // rdx
  std::_Ref_count_base *v7; // rcx
  int v8; // edi

  v2 = (std::_Ref_count_base **)(a2 + 1);
  if ( *(_QWORD *)a1 )
  {
    v8 = -2147024891;
  }
  else
  {
    v4 = (_QWORD *)(a1 + 8);
    if ( *v2 )
      _InterlockedIncrement((volatile signed __int32 *)*v2 + 2);
    v5 = *a2;
    v6 = *v2;
    *v4 = v5;
    v7 = *(std::_Ref_count_base **)(a1 + 16);
    v4[1] = v6;
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    if ( *v4 )
    {
      v8 = util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::_AcquireReadWrite(
             *v4,
             a1);
      if ( v8 < 0 )
        std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::reset(v4);
    }
    else
    {
      v8 = -2147024809;
    }
  }
  *(_DWORD *)(a1 + 24) = v8;
  if ( *v2 )
    std::_Ref_count_base::_Decref(*v2);
  return (unsigned int)v8;
}
