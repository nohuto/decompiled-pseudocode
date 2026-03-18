/*
 * XREFs of ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x18012CF8C
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800817A0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x18012D1B0 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 *     std::_Func_impl_no_alloc__lambda_6fd6f184957a643251d7d3699d74716f__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Move @ 0x18012D860 (std--_Func_impl_no_alloc__lambda_6fd6f184957a643251d7d3699d74716f__void_void___unsigned_long_uns.c)
 *     ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x18012D964 (-AcquireExclusive@CReadWriteLock@@QEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSITOR_PROCESS_INFO@@I@Z @ 0x1801E5450 (-AddMultipleAndSet@-$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSIT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CEnergyReporter::SendReportToE3(CEnergyReporter *this)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  _QWORD *v4; // rdx
  int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  _QWORD v9[7]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD *v10; // [rsp+58h] [rbp-50h]
  _BYTE v11[56]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v12; // [rsp+98h] [rbp-10h]

  v1 = *((_QWORD *)this + 6);
  v12 = 0LL;
  v9[0] = off_1802FF5F0;
  v10 = v9;
  v3 = *(_QWORD *)(v1 + 8);
  v12 = std::_Func_impl_no_alloc__lambda_6fd6f184957a643251d7d3699d74716f__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const___::_Move(
          v9,
          v11);
  CProcessAttributionManager::EnumerateChangedProcessAttributions(v3, v1, this, v11);
  if ( v10 )
  {
    v4 = v9;
    LOBYTE(v4) = v10 != v9;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v10 + 32LL))(v10, v4);
  }
  if ( *((_DWORD *)this + 10) )
  {
    v5 = 0;
    CReadWriteLock::AcquireExclusive((CEnergyReporter *)((char *)this + 56));
    if ( *((_BYTE *)this + 80) )
    {
      if ( *((_BYTE *)this + 81) )
      {
        if ( (unsigned int)dword_1803F8C64 < MEMORY[0x7FFE037C] && !(unsigned __int8)EtwCheckCoverage(&off_1803F8C58) )
          NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessAffinityMask|0x40, &off_1803F8C58, 0x18u);
      }
      else if ( *((_DWORD *)this + 28) >= 0xFFFFu )
      {
        v5 = -2147467259;
      }
      else
      {
        v5 = DynArray<_CIT_SI_COMPOSITOR_PROCESS_INFO,0>::AddMultipleAndSet(
               (char *)this + 88,
               *((_QWORD *)this + 2),
               *((unsigned int *)this + 10));
      }
    }
    else
    {
      v6 = *((_QWORD *)this + 11);
      *((_QWORD *)this + 11) = *((_QWORD *)this + 2);
      v7 = *((_DWORD *)this + 9);
      *((_QWORD *)this + 2) = v6;
      LODWORD(v6) = *((_DWORD *)this + 27);
      *((_DWORD *)this + 27) = v7;
      v8 = *((_DWORD *)this + 10);
      *((_DWORD *)this + 9) = v6;
      LODWORD(v6) = *((_DWORD *)this + 28);
      *((_DWORD *)this + 28) = v8;
      *((_DWORD *)this + 10) = v6;
      SubmitThreadpoolWork(*((PTP_WORK *)this + 9));
      *((_BYTE *)this + 80) = 1;
    }
    *((_DWORD *)this + 16) = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)this + 7);
    if ( v5 < 0
      && (unsigned int)dword_1803F8C34 < MEMORY[0x7FFE037C]
      && !(unsigned __int8)EtwCheckCoverage(&off_1803F8C28) )
    {
      NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessAffinityMask|0x40, &off_1803F8C28, 0x18u);
    }
    *((_DWORD *)this + 10) = 0;
  }
}
