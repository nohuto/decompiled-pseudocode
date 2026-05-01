/*
 * XREFs of ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180089540
 * Callers:
 *     ?RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18002387C (-RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerIntero.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x180421D58 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_379fb6251cfae0942258739af0295e77___ @ 0x180089624 (Windows--Internal--ComTaskPool--QueueTask__lambda_379fb6251cfae0942258739af0295e77___.c)
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x18008A788 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     ?_Throw_bad_weak_ptr@std@@YAXXZ @ 0x180296EB0 (-_Throw_bad_weak_ptr@std@@YAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ConnectedStandbyHelper::HandleViewCreated(
        ConnectedStandbyHelper *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  std::_Ref_count_base *v4; // rcx
  __int64 v5; // rbp
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v10; // [rsp+30h] [rbp-18h]
  __int64 v11[2]; // [rsp+38h] [rbp-10h] BYREF

  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( !v4 || !std::_Ref_count_base::_Incref_nz(v4) )
    std::_Throw_bad_weak_ptr();
  v5 = *(_QWORD *)this;
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  v9[0] = this;
  if ( v6 )
    _InterlockedIncrement(v6 + 2);
  v9[1] = v5;
  v10 = (std::_Ref_count_base *)v6;
  v11[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
  ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD *))Windows::Internal::ComTaskPool::QueueTask__lambda_379fb6251cfae0942258739af0295e77___)(
    v8,
    v7,
    *((unsigned int *)this + 4),
    v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v11);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v6 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
}
