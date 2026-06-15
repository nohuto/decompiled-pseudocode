/*
 * XREFs of ?FindStreamGroups@CDeviceGraphObjectsStore@@IEAAJPEBUStreamGroupParams@@AEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18007C710
 * Callers:
 *     ?FindPreferredStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x1800F9BB0 (-FindPreferredStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800517D0 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$_Emplace_reallocate@AEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV234@AEAV234@@Z @ 0x180051B3C (--$_Emplace_reallocate@AEAV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISt.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180051CB8 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x1800568AC (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800A7F1C (memcmp_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId@@@details@wil@@QEAA_NXZ @ 0x1800EFBDC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDeviceGraphObjectsStore::FindStreamGroups(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 *i; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdi
  unsigned __int16 *v11; // rsi
  __int64 v12; // rdi
  const void *v13; // rax
  int v14; // eax
  unsigned int v15; // edi
  __int64 *v16; // rdx
  unsigned int v18; // ebx
  __int64 v19; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-38h] BYREF
  int v21; // [rsp+30h] [rbp-30h] BYREF
  __int64 v22; // [rsp+38h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v24[16]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v23 = v6;
  for ( i = *(__int64 **)(a1 + 72); i != *(__int64 **)(a1 + 80); ++i )
  {
    v8 = *i;
    v22 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v20 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v22, (__int64 *)&v20) >= 0 && v20 )
    {
      v19 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v20, &v19) >= 0 )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId>::GetImpl'::`2'::impl);
        if ( *(_QWORD *)(a2 + 24) == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 128LL))(v19) )
        {
          v9 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v19 + 136LL))(v19, v24);
          if ( *(_QWORD *)(a2 + 32) == *v9
            && *(_QWORD *)(a2 + 40) == v9[1]
            && *(_DWORD *)(a2 + 8) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v19 + 192LL))(v19) )
          {
            v10 = *(_QWORD *)(a2 + 16);
            if ( *(_WORD *)(v10 + 16) == *(_WORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 144LL))(v19)
                                                  + 16) )
            {
              v11 = *(unsigned __int16 **)(a2 + 16);
              v12 = v11[8];
              v13 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 144LL))(v19);
              if ( !memcmp_0(v11, v13, v12 + 18)
                && *(_BYTE *)(a2 + 49) == (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v19 + 168LL))(v19)
                && *(_BYTE *)(a2 + 48) == (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v19 + 184LL))(v19)
                && *(_BYTE *)(a2 + 50) == (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v19 + 264LL))(v19) )
              {
                v21 = 0;
                v14 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v19 + 440LL))(v19, a2 + 56, &v21);
                v15 = v14;
                if ( v14 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x78,
                    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                    (const char *)(unsigned int)v14);
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v19);
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v20);
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
                  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v23);
                  return v15;
                }
                if ( v21 )
                {
                  v16 = (__int64 *)a3[1];
                  if ( v16 == (__int64 *)a3[2] )
                  {
                    std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IStreamGroupProxy> &>(
                      a3,
                      (__int64)v16,
                      (__int64)&v19);
                  }
                  else
                  {
                    *v16 = v19;
                    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v16);
                    a3[1] += 8LL;
                  }
                }
              }
            }
          }
        }
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v19);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v20);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
  }
  v18 = -2147023728;
  if ( *a3 != a3[1] )
    v18 = 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v23);
  return v18;
}
