/*
 * XREFs of ?TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z @ 0x180212624
 * Callers:
 *     ?Release@CEffectCompilationTask@@UEAAKXZ @ 0x180134060 (-Release@CEffectCompilationTask@@UEAAKXZ.c)
 * Callees:
 *     std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_b07e6d4d1a74fa50f03de8a08b13a0b6___ @ 0x18013C0AC (std--find_if_std--_Deque_iterator_std--_Deque_val_std--_Deque_simple_types_Microsoft--WRL--ComPt.c)
 *     ??$_Emplace_back_internal@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@AEAAX$$QEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@Z @ 0x180212734 (--$_Emplace_back_internal@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@-$deque@V-$ComPtr@.c)
 *     ?pop_front@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18023775C (-pop_front@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CEffectCompilationService::TryAddDeadTask(
        CEffectCompilationService *this,
        struct CEffectCompilationTask *a2)
{
  struct CEffectCompilationTask *v2; // rdi
  __int64 *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 *v7; // rbx
  _QWORD v9[3]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v10[3]; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v11; // [rsp+50h] [rbp-20h] BYREF
  struct CEffectCompilationTask *v12; // [rsp+90h] [rbp+20h] BYREF
  struct CEffectCompilationTask *v13; // [rsp+98h] [rbp+28h] BYREF

  v13 = a2;
  v2 = a2;
  if ( *((_WORD *)this + 120) )
    return 0;
  v9[1] = 0LL;
  v4 = (__int64 *)((char *)this + 160);
  v5 = *((_QWORD *)this + 23);
  v6 = *v4;
  v10[1] = 0LL;
  v7 = (__int64 *)(v5 + v4[4]);
  v10[2] = v5;
  v9[0] = v6;
  v9[2] = v7;
  v10[0] = v6 & -(__int64)(v4 != 0LL);
  if ( std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_b07e6d4d1a74fa50f03de8a08b13a0b6___(
         &v11,
         (__int64)v10,
         (__int64)v9,
         &v13)[2] != v7 )
    return 0;
  if ( *((_QWORD *)this + 24) > 0x40uLL )
  {
    *((_BYTE *)this + 241) = 1;
    std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_front(v4);
    v2 = v13;
    *((_BYTE *)this + 241) = 0;
  }
  v12 = v2;
  if ( v2 )
    (**(void (__fastcall ***)(struct CEffectCompilationTask *))v2)(v2);
  std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::_Emplace_back_internal<Microsoft::WRL::ComPtr<CEffectCompilationTask>>(
    v4,
    &v12);
  if ( v12 )
    (*(void (__fastcall **)(struct CEffectCompilationTask *))(*(_QWORD *)v12 + 8LL))(v12);
  return 1;
}
