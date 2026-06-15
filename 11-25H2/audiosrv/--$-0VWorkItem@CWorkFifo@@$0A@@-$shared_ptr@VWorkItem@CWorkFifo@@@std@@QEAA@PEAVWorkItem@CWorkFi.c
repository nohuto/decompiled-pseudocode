/*
 * XREFs of ??$?0VWorkItem@CWorkFifo@@$0A@@?$shared_ptr@VWorkItem@CWorkFifo@@@std@@QEAA@PEAVWorkItem@CWorkFifo@@@Z @ 0x180117A38
 * Callers:
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180082958 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 *     ??1?$_Temporary_owner@VWorkItem@CWorkFifo@@@std@@QEAA@XZ @ 0x180117ED0 (--1-$_Temporary_owner@VWorkItem@CWorkFifo@@@std@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::shared_ptr<CWorkFifo::WorkItem>::shared_ptr<CWorkFifo::WorkItem>(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = operator new(0x18uLL);
  if ( v4 )
  {
    v4[2] = a2;
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &std::_Ref_count<CWorkFifo::WorkItem>::`vftable';
  }
  v6 = 0LL;
  *a1 = a2;
  a1[1] = v4;
  std::_Temporary_owner<CWorkFifo::WorkItem>::~_Temporary_owner<CWorkFifo::WorkItem>(&v6);
  return a1;
}
