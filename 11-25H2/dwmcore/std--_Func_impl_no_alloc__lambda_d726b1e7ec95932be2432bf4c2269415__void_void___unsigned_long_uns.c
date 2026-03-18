/*
 * XREFs of std::_Func_impl_no_alloc__lambda_d726b1e7ec95932be2432bf4c2269415__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x1801812E0
 * Callers:
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x180180A90 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@?$vector@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@std@@@std@@AEAAPEAUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@QEAU23@AEBU23@@Z @ 0x180180330 (--$_Emplace_reallocate@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@-$ve.c)
 *     ??$?4U?$default_delete@UHighResourceUsageReport@CProcessResourceAttributionReporter@@@std@@$0A@@?$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U?$default_delete@UHighResourceUsageReport@CProcessResourceAttributionReporter@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180180500 (--$-4U-$default_delete@UHighResourceUsageReport@CProcessResourceAttributionReporter@@@std@@$0A@@.c)
 *     ??_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z @ 0x180181278 (--_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 */

char __fastcall std::_Func_impl_no_alloc__lambda_d726b1e7ec95932be2432bf4c2269415__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const___::_Do_call(
        __int64 a1,
        __int64 a2,
        int *a3,
        __int64 *a4,
        int a5,
        int *a6,
        _DWORD *a7)
{
  int v8; // ebx
  int v9; // esi
  int v10; // r14d
  int v11; // r15d
  int v12; // r12d
  int v13; // r13d
  __int64 v14; // rax
  int v15; // ebx
  _OWORD *v16; // rax
  _QWORD **v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  CProcessResourceAttributionReporter::HighResourceUsageReport *v26; // [rsp+28h] [rbp-81h] BYREF
  int v27; // [rsp+30h] [rbp-79h]
  __int64 v28; // [rsp+38h] [rbp-71h]
  _OWORD v29[4]; // [rsp+48h] [rbp-61h] BYREF
  __int128 v30; // [rsp+88h] [rbp-21h]
  __int128 v31; // [rsp+98h] [rbp-11h]
  __int64 v32; // [rsp+A8h] [rbp-1h]

  v8 = *a6;
  v28 = *a4;
  v27 = *a3;
  v9 = a7[20];
  v10 = a7[16];
  v11 = a7[19];
  v12 = a7[15];
  v13 = a7[18];
  LODWORD(v26) = a7[17];
  LOBYTE(v14) = (int)v26 > 5000 || v9 > 1000 || v12 > 500 || v13 > 1000 || v11 > 200 || v10 > 10000;
  v15 = v8 & 0x20;
  if ( (_BYTE)v14 || v15 )
  {
    memset_0(v29, 0, 0x68uLL);
    LODWORD(v29[0]) = v27;
    *((_QWORD *)&v29[0] + 1) = v28;
    LODWORD(v32) = v9;
    *(_QWORD *)&v31 = __PAIR64__((unsigned int)v26, v10);
    HIDWORD(v30) = v12;
    *((_QWORD *)&v31 + 1) = __PAIR64__(v11, v13);
    HIDWORD(v32) = v15 != 0;
    if ( !**(_QWORD **)(a1 + 8) )
    {
      v16 = operator new(0x30uLL);
      if ( v16 )
      {
        *v16 = 0LL;
        v16[1] = 0LL;
        v16[2] = 0LL;
        *((_QWORD *)v16 + 3) = 0LL;
        *((_QWORD *)v16 + 4) = 0LL;
      }
      else
      {
        v16 = 0LL;
      }
      v17 = *(_QWORD ***)(a1 + 8);
      v26 = (CProcessResourceAttributionReporter::HighResourceUsageReport *)v16;
      std::unique_ptr<CProcessResourceAttributionReporter::HighResourceUsageReport>::operator=<std::default_delete<CProcessResourceAttributionReporter::HighResourceUsageReport>,0>(
        v17,
        &v26);
      if ( v26 )
        CProcessResourceAttributionReporter::HighResourceUsageReport::`scalar deleting destructor'(v26);
    }
    v14 = *(_QWORD *)(a1 + 8);
    v18 = *(_QWORD *)v14 + 16LL;
    v19 = *(_QWORD *)(*(_QWORD *)v14 + 24LL);
    if ( v19 == *(_QWORD *)(*(_QWORD *)v14 + 32LL) )
    {
      LOBYTE(v14) = (unsigned __int8)std::vector<CProcessResourceAttributionReporter::ProcessResourceUsageRecord>::_Emplace_reallocate<CProcessResourceAttributionReporter::ProcessResourceUsageRecord const &>(
                                       v18,
                                       (_BYTE *)v19,
                                       (__int64)v29);
    }
    else
    {
      v20 = v29[1];
      *(_OWORD *)v19 = v29[0];
      v21 = v29[2];
      *(_OWORD *)(v19 + 16) = v20;
      v22 = v29[3];
      *(_OWORD *)(v19 + 32) = v21;
      v23 = v30;
      *(_OWORD *)(v19 + 48) = v22;
      v24 = v31;
      *(_OWORD *)(v19 + 64) = v23;
      *(_QWORD *)&v23 = v32;
      *(_OWORD *)(v19 + 80) = v24;
      *(_QWORD *)(v19 + 96) = v23;
      *(_QWORD *)(v18 + 8) += 104LL;
    }
  }
  return v14;
}
