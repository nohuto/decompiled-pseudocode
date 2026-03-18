/*
 * XREFs of ??1CEnergyReporter@@AEAA@XZ @ 0x18026CF00
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1802670A4 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CEnergyReporter::~CEnergyReporter(PTP_WORK *this)
{
  void (__fastcall ***v2)(_QWORD, _QWORD); // rcx

  WaitForThreadpoolWorkCallbacks(this[9], 1);
  CloseThreadpoolWork(this[9]);
  v2 = (void (__fastcall ***)(_QWORD, _QWORD))this[6];
  if ( v2 )
    (**v2)(v2, 1LL);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 11));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 2));
}
