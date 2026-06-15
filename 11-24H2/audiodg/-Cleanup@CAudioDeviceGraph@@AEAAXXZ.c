/*
 * XREFs of ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x14001CF0C
 * Callers:
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x14001CD0C (--1CAudioDeviceGraph@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x14000EB8C (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 *     ?CleanupPipeInstanceList@@YAXAEAV?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@@Z @ 0x14001CFA4 (-CleanupPipeInstanceList@@YAXAEAV-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstan.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDeviceGraph::Cleanup(CAudioDeviceGraph *this)
{
  __int64 *v2; // rbx

  (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)this + 80LL))(this);
  v2 = (__int64 *)*((_QWORD *)this + 15);
  if ( v2 )
  {
    *v2 = (__int64)&CProtectedOutputController::`vftable';
    ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(v2 + 2);
    operator delete(v2);
  }
  *((_QWORD *)this + 15) = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  CleanupPipeInstanceList((char *)this + 168);
  if ( this != (CAudioDeviceGraph *)-216LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
}
