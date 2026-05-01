/*
 * XREFs of ?GetApplicationViewsById@CApplicationViewManager@@AEAAJPEBG_K_NPEAPEAUIObjectArray@@@Z @ 0x1801CE668
 * Callers:
 *     ?GetViewsByAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1801CE640 (-GetViewsByAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     ?SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@Z @ 0x18030DEE0 (-SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@.c)
 *     ?SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_STATE@@@Z @ 0x18030DF80 (-SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_ST.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18008FA98 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RefreshCollection@CApplicationViewManager@@UEAAJXZ @ 0x18008FE20 (-RefreshCollection@CApplicationViewManager@@UEAAJXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??$As@UIApplicationView2@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationView2@@@WRL@Microsoft@@@Details@12@@Z @ 0x18030C0AC (--$As@UIApplicationView2@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationViewManager::GetApplicationViewsById(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        __int64 a3,
        char a4,
        struct IObjectArray **a5)
{
  const struct _GUID *v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  void *v13; // rcx
  __int64 v15; // rdx
  void *i; // rsi
  _QWORD *v17; // rcx
  int v18; // edi
  int v19; // eax
  unsigned int v20; // edi
  int v21; // eax
  void *v22; // rcx
  int v23; // eax
  void *v24; // [rsp+20h] [rbp-20h] BYREF
  __int64 v25; // [rsp+28h] [rbp-18h] BYREF
  RTL_SRWLOCK *v26; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v28; // [rsp+88h] [rbp+48h] BYREF

  *a5 = 0LL;
  if ( a4 == 1 )
  {
    if ( a3 != -1 )
      goto LABEL_4;
    v15 = 861LL;
LABEL_9:
    v12 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)0x80070057LL);
    return v12;
  }
  if ( !a4 && !a2 )
  {
    v15 = 862LL;
    goto LABEL_9;
  }
LABEL_4:
  v24 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
  v11 = CEnumerableObjectCollection::CreateInstance(v10, v9, &v24);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v26 = this + 66;
    AcquireSRWLockShared(this + 66);
    for ( i = 0LL; i < this[68].Ptr; i = (char *)i + 1 )
    {
      v28 = 0;
      v17 = (char *)this[67].Ptr + 8 * (_QWORD)i;
      if ( a4 )
      {
        v25 = 0LL;
        v23 = Microsoft::WRL::ComPtr<IApplicationView>::As<IApplicationView2>(v17, &v25);
        v20 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x36E,
            (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v23);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
          goto LABEL_31;
        }
        v18 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v25 + 56LL))(v25, a3, &v28);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
      }
      else
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, int *))(*(_QWORD *)*v17 + 152LL))(
                *v17,
                a2,
                &v28);
      }
      if ( v18 >= 0 )
      {
        if ( v28 )
        {
          v19 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v24 + 40LL))(
                  v24,
                  *((_QWORD *)this[67].Ptr + (_QWORD)i));
          v20 = v19;
          if ( v19 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x378,
              (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
              (const char *)(unsigned int)v19);
LABEL_31:
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v26);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
            return v20;
          }
        }
      }
    }
    if ( this != (RTL_SRWLOCK *)-528LL )
      ReleaseSRWLockShared(this + 66);
    CApplicationViewManager::RefreshCollection((CApplicationViewManager *)&this[17]);
    v21 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v24)(
            v24,
            &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
            a5);
    v12 = v21;
    if ( v21 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x381,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v21);
    v22 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 16LL))(v22);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x361,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v11);
    v13 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  return v12;
}
