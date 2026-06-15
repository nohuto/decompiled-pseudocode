/*
 * XREFs of ?FindStreamGroups@CDeviceGraphObjectsStore@@UEAAJPEBGU_GUID@@AEAV?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F9FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800517D0 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180051CB8 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??$_Construct_in_place@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@AEBV123@@std@@YAXAEAV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@AEBV123@@Z @ 0x1800F3150 (--$_Construct_in_place@V-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@AEBV123@@std@@YAXAEAV-$Co.c)
 *     ??$_Emplace_reallocate@AEAVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEAV234@@Z @ 0x1800F90C0 (--$_Emplace_reallocate@AEAVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall CDeviceGraphObjectsStore::FindStreamGroups(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  __int64 *i; // rbx
  unsigned int v10; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-68h] BYREF
  __int64 v17; // [rsp+28h] [rbp-60h] BYREF
  __int64 v18; // [rsp+30h] [rbp-58h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v20[16]; // [rsp+40h] [rbp-48h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v19 = v8;
  for ( i = *(__int64 **)(a1 + 72); i != *(__int64 **)(a1 + 80); ++i )
  {
    v12 = *i;
    v18 = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v16 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v18, (__int64 *)&v16) >= 0 && v16 )
    {
      v17 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v16, &v17) >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 152LL))(v17);
        if ( !(unsigned int)_o__wcsicmp(a2, v13) )
        {
          v14 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17 + 136LL))(v17, v20);
          v15 = *a3 - *v14;
          if ( *a3 == *v14 )
            v15 = a3[1] - v14[1];
          if ( !v15 )
          {
            if ( a4[1] == a4[2] )
            {
              std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef &>(a4, a4[1], &v18);
            }
            else
            {
              std::_Construct_in_place<Microsoft::WRL::ComPtr<IProcessSubmixProxy>,Microsoft::WRL::ComPtr<IProcessSubmixProxy> const &>(
                (__int64 *)a4[1],
                &v18);
              a4[1] += 8LL;
            }
          }
        }
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v17);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v16);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v18);
  }
  v10 = -2147023728;
  if ( *a4 != a4[1] )
    v10 = 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
  return v10;
}
