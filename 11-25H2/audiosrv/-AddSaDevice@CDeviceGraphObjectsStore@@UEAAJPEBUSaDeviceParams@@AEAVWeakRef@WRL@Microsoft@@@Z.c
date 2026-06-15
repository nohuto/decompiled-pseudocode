/*
 * XREFs of ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x180023410
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Move_backward_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00@Z @ 0x180022E00 (--$_Move_backward_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft.c)
 *     ??$construct@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V123@@?$_Default_allocator_traits@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@SAXAEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@1@QEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@$$QEAV345@@Z @ 0x1800230E8 (--$construct@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V123@@-$_Default_allocator_traits@V-$all.c)
 *     ??$_Construct_in_place@VWeakRef@WRL@Microsoft@@AEBV123@@std@@YAXAEAVWeakRef@WRL@Microsoft@@AEBV123@@Z @ 0x1800235A0 (--$_Construct_in_place@VWeakRef@WRL@Microsoft@@AEBV123@@std@@YAXAEAVWeakRef@WRL@Microsoft@@AEBV1.c)
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180024BC0 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     ??$construct@VWeakRef@WRL@Microsoft@@AEBV123@@?$_Default_allocator_traits@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@SAXAEAV?$allocator@VWeakRef@WRL@Microsoft@@@1@QEAVWeakRef@WRL@Microsoft@@AEBV345@@Z @ 0x1800255B8 (--$construct@VWeakRef@WRL@Microsoft@@AEBV123@@-$_Default_allocator_traits@V-$allocator@VWeakRef@.c)
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall CDeviceGraphObjectsStore::AddSaDevice(
        CDeviceGraphObjectsStore *this,
        const struct SaDeviceParams *a2,
        struct Microsoft::WRL::WeakRef *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rcx
  __int64 **v8; // rdi
  __int64 *v9; // r15
  __int64 *v10; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15[6]; // [rsp+28h] [rbp-30h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v8 = (__int64 **)((char *)this + 24 * *((int *)a2 + 2) + 96);
  v9 = *v8;
  v10 = v8[1];
  if ( v10 == v8[2] )
  {
    std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(v8, *v8, a3);
  }
  else if ( v9 == v10 )
  {
    std::_Construct_in_place<Microsoft::WRL::WeakRef,Microsoft::WRL::WeakRef const &>(v8[1]++, a3);
  }
  else
  {
    std::_Default_allocator_traits<std::allocator<Microsoft::WRL::WeakRef>>::construct<Microsoft::WRL::WeakRef,Microsoft::WRL::WeakRef const &>(
      v7,
      v15,
      a3);
    std::_Default_allocator_traits<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>::construct<Microsoft::WRL::ComPtr<ISaDeviceProxy>,Microsoft::WRL::ComPtr<ISaDeviceProxy>>(
      v12,
      v10,
      v10 - 1);
    ++v8[1];
    std::_Move_backward_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *>(v9, v10 - 1, v10);
    v13 = v15[0];
    v15[0] = 0LL;
    v14 = *v9;
    *v9 = v13;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v15);
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_315cf95596543faf822237737ca2f47c_Traceguids, 0LL);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
