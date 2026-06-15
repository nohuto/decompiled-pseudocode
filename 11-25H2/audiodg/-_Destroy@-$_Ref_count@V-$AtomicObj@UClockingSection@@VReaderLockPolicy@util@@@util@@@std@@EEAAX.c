/*
 * XREFs of ?_Destroy@?$_Ref_count@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@EEAAXXZ @ 0x14008F7E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Ref_count<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::_Destroy(__int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 16);
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
