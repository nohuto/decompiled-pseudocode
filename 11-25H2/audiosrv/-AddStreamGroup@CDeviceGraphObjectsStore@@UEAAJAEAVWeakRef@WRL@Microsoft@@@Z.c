/*
 * XREFs of ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x1800238C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Move_backward_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00@Z @ 0x180022E00 (--$_Move_backward_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft.c)
 *     ??$construct@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V123@@?$_Default_allocator_traits@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@SAXAEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@1@QEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@$$QEAV345@@Z @ 0x1800230E8 (--$construct@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V123@@-$_Default_allocator_traits@V-$all.c)
 *     ??$_Construct_in_place@VWeakRef@WRL@Microsoft@@AEBV123@@std@@YAXAEAVWeakRef@WRL@Microsoft@@AEBV123@@Z @ 0x1800235A0 (--$_Construct_in_place@VWeakRef@WRL@Microsoft@@AEBV123@@std@@YAXAEAVWeakRef@WRL@Microsoft@@AEBV1.c)
 *     ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x1800244C8 (-RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180024BC0 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     ??$construct@VWeakRef@WRL@Microsoft@@AEBV123@@?$_Default_allocator_traits@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@SAXAEAV?$allocator@VWeakRef@WRL@Microsoft@@@1@QEAVWeakRef@WRL@Microsoft@@AEBV345@@Z @ 0x1800255B8 (--$construct@VWeakRef@WRL@Microsoft@@AEBV123@@-$_Default_allocator_traits@V-$allocator@VWeakRef@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall CDeviceGraphObjectsStore::AddStreamGroup(
        CDeviceGraphObjectsStore *this,
        struct Microsoft::WRL::WeakRef *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // rcx
  char *v6; // rdi
  __int64 *v7; // r14
  __int64 *v8; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13[6]; // [rsp+28h] [rbp-30h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  CDeviceGraphObjectsStore::RemoveStaleObjects(this);
  v6 = (char *)this + 72;
  v7 = *(__int64 **)v6;
  v8 = (__int64 *)*((_QWORD *)v6 + 1);
  if ( v8 == *((__int64 **)v6 + 2) )
  {
    std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(v6, *(_QWORD *)v6, a2);
  }
  else if ( v7 == v8 )
  {
    std::_Construct_in_place<Microsoft::WRL::WeakRef,Microsoft::WRL::WeakRef const &>(
      *((__int64 **)v6 + 1),
      (__int64 *)a2);
    *((_QWORD *)v6 + 1) += 8LL;
  }
  else
  {
    std::_Default_allocator_traits<std::allocator<Microsoft::WRL::WeakRef>>::construct<Microsoft::WRL::WeakRef,Microsoft::WRL::WeakRef const &>(
      v5,
      v13,
      a2);
    std::_Default_allocator_traits<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>::construct<Microsoft::WRL::ComPtr<ISaDeviceProxy>,Microsoft::WRL::ComPtr<ISaDeviceProxy>>(
      v10,
      v8,
      v8 - 1);
    *((_QWORD *)v6 + 1) += 8LL;
    std::_Move_backward_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *>(v7, v8 - 1, v8);
    v11 = v13[0];
    v13[0] = 0LL;
    v12 = *v7;
    *v7 = v11;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v13);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
