/*
 * XREFs of ??1?$_Temporary_owner@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAA@XZ @ 0x14008DA84
 * Callers:
 *     ??$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@3@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@0@@Z @ 0x14008D724 (--$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@-$AtomicObjBase@UClockingSec.c)
 *     _util::MakeAtomicObj_ClockingSection_util::ReaderLockPolicy_util::AtomicObjBase_ClockingSection_util::AtomicObj_ClockingSection_util::ReaderLockPolicy__util::AtomicObjState_util::ReaderLockPolicy_::Storage__::_1_::dtor$8 @ 0x140096F3C (_util--MakeAtomicObj_ClockingSection_util--ReaderLockPolicy_util--AtomicObjBase_Clo_ea_140096F3C.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Temporary_owner<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::~_Temporary_owner<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
