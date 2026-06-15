/*
 * XREFs of ?FindPreferredStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x1800F4B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x18002368C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ?FindStreamGroups@CDeviceGraphObjectsStore@@IEAAJPEBUStreamGroupParams@@AEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800246AC (-FindStreamGroups@CDeviceGraphObjectsStore@@IEAAJPEBUStreamGroupParams@@AEAV-$vector@V-$ComPtr@U.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180064D38 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDeviceGraphObjectsStore::FindPreferredStreamGroup(
        CDeviceGraphObjectsStore *this,
        const struct StreamGroupParams *a2,
        struct IStreamGroupProxy **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  int StreamGroups; // eax
  unsigned int v8; // ebx
  char *v9; // rbx
  const char *v10; // r9
  __int64 result; // rax
  char *v12; // rdi
  __int64 *v13; // rbx
  struct IStreamGroupProxy *v14; // rsi
  _QWORD *v15; // rax
  unsigned __int64 v16; // rdi
  unsigned __int64 i; // r14
  _QWORD *v18; // rax
  __int64 v19; // rdi
  _QWORD *v20; // rax
  unsigned int v21; // esi
  int v22[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v25; // [rsp+70h] [rbp+8h] BYREF
  struct IStreamGroupProxy *v26; // [rsp+80h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+88h] [rbp+20h] BYREF

  *a3 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v27 = v6;
  *(_OWORD *)v22 = 0LL;
  v23 = 0LL;
  try
  {
    StreamGroups = CDeviceGraphObjectsStore::FindStreamGroups((__int64)this, (__int64)a2, (__int64 *)v22);
    v8 = StreamGroups;
    if ( StreamGroups >= 0 )
    {
      v13 = *(__int64 **)v22;
      v14 = **(struct IStreamGroupProxy ***)v22;
      v25 = **(_QWORD **)v22;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v25);
      v15 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v13 + 416LL))(*v13);
      v16 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(v15[1] - *v15) >> 2);
      for ( i = 1LL; i < (__int64)(*(_QWORD *)&v22[2] - (_QWORD)v13) >> 3; ++i )
      {
        v18 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13[i] + 416LL))(v13[i]);
        if ( 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(v18[1] - *v18) >> 2) < v16 )
        {
          v19 = v13[i];
          if ( v14 != (struct IStreamGroupProxy *)v19 )
          {
            v26 = (struct IStreamGroupProxy *)v13[i];
            Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v26);
            v26 = v14;
            v14 = (struct IStreamGroupProxy *)v19;
            v25 = v19;
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v26);
          }
          v20 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13[i] + 416LL))(v13[i]);
          v16 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(v20[1] - *v20) >> 2);
        }
      }
      v25 = 0LL;
      *a3 = v14;
      v21 = v14 == 0LL ? 0x80070490 : 0;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v25);
      if ( v13 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v13, *(__int64 **)&v22[2]);
        std::_Deallocate<16,0>(
          (char *)v13,
          (const struct std::nothrow_t *)((v23 - (_QWORD)v13) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v27);
      result = v21;
    }
    else if ( StreamGroups == -2147023728 )
    {
      v9 = *(char **)v22;
      if ( *(_QWORD *)v22 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          *(__int64 **)v22,
          *(__int64 **)&v22[2]);
        std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)((v23 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v27);
      result = 2147943568LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
        (const char *)(unsigned int)StreamGroups);
      v12 = *(char **)v22;
      if ( *(_QWORD *)v22 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          *(__int64 **)v22,
          *(__int64 **)&v22[2]);
        std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)((v23 - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v27);
      result = v8;
    }
  }
  catch ( ... )
  {
    LODWORD(v25) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x9A,
                     (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                     v10);
    return (unsigned int)v25;
  }
  return result;
}
