/*
 * XREFs of ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x18015651C
 * Callers:
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x180156004 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 * Callees:
 *     std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_b07e6d4d1a74fa50f03de8a08b13a0b6___ @ 0x1801565DC (std--find_if_std--_Deque_iterator_std--_Deque_val_std--_Deque_simple_types_Microsoft--WRL--ComPt.c)
 *     ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18015666C (-erase@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 */

void __fastcall CEffectCompilationService::TryReviveDeadTask(
        CEffectCompilationService *this,
        const struct CEffectCompilationTask *a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // [rsp+20h] [rbp-50h] BYREF
  __int64 v7; // [rsp+28h] [rbp-48h]
  __int64 v8; // [rsp+30h] [rbp-40h]
  __int64 v9; // [rsp+38h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-30h]
  __int64 v11; // [rsp+48h] [rbp-28h]
  _QWORD v12[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp-10h]
  const struct CEffectCompilationTask *v14; // [rsp+88h] [rbp+18h] BYREF

  v14 = a2;
  v7 = 0LL;
  v2 = (__int64 *)((char *)this + 160);
  v3 = *((_QWORD *)this + 23);
  v4 = *v2;
  v10 = 0LL;
  v5 = v3 + v2[4];
  v11 = v3;
  v6 = v4;
  v8 = v5;
  v9 = v4 & -(__int64)(v2 != 0LL);
  ((void (__fastcall *)(_QWORD *, __int64 *, __int64 *, const struct CEffectCompilationTask **))std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_b07e6d4d1a74fa50f03de8a08b13a0b6___)(
    v12,
    &v9,
    &v6,
    &v14);
  if ( v13 != v5 )
  {
    v10 = 0LL;
    v7 = 0LL;
    v9 = v12[0];
    v6 = v12[0];
    v8 = v13;
    v11 = v13 + 1;
    ((void (__fastcall *)(__int64 *, _QWORD *, __int64 *, __int64 *))std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::erase)(
      v2,
      v12,
      &v6,
      &v9);
  }
}
