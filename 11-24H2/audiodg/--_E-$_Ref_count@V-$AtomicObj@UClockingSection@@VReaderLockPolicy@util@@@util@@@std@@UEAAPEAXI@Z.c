/*
 * XREFs of ??_E?$_Ref_count@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@UEAAPEAXI@Z @ 0x14008DB70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall std::_Ref_count<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
