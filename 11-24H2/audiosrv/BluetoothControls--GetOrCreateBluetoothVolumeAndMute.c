/*
 * XREFs of BluetoothControls::GetOrCreateBluetoothVolumeAndMute @ 0x1800D466C
 * Callers:
 *     ?MakeAndInitializeMute@BluetoothControls@@YAJPEAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D54D8 (-MakeAndInitializeMute@BluetoothControls@@YAJPEAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEBGPEAU.c)
 *     ?MakeAndInitializeVolume@BluetoothControls@@YAJPEAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D561C (-MakeAndInitializeVolume@BluetoothControls@@YAJPEAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEBG.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180019F28 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A320 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18004DC2C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004E1FC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18006C370 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VBluetoothVolumeAndMute@BluetoothControls@@V12@AEAPEAUIMMDevice@@AEAPEBGAEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothVolumeAndMute@BluetoothControls@@AEAPEAUIMMDevice@@AEAPEBGAEAPEAUIControlChangeNotify@@@Z @ 0x1800D17B0 (--$MakeAndInitialize@VBluetoothVolumeAndMute@BluetoothControls@@V12@AEAPEAUIMMDevice@@AEAPEBGAEA.c)
 *     ??$_Emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D1BC4 (--$_Emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$com_ptr_t@VBluetoot.c)
 *     ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800D1E48 (--$_Find_lower_bound@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_ea_1800D1E48.c)
 *     ??$_Lower_bound_duplicate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800D1F1C (--$_Lower_bound_duplicate@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree.c)
 *     ??1?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800D25A4 (--1-$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@.c)
 *     ??4?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVBluetoothVolumeAndMute@BluetoothControls@@@Z @ 0x1800D286C (--4-$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAAA.c)
 *     ?reset@?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D9974 (-reset@-$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall BluetoothControls::GetOrCreateBluetoothVolumeAndMute(
        struct IMMDevice *a1,
        const unsigned __int16 *a2,
        struct IControlChangeNotify *a3,
        volatile signed __int32 **a4)
{
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  char v11; // al
  __int64 v12; // rdx
  struct IMMDevice *v13; // rbx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  volatile signed __int32 *v19; // [rsp+20h] [rbp-49h] BYREF
  __int64 v20; // [rsp+28h] [rbp-41h] BYREF
  RTL_SRWLOCK *v21; // [rsp+30h] [rbp-39h] BYREF
  struct IControlChangeNotify *v22; // [rsp+38h] [rbp-31h] BYREF
  const unsigned __int16 *v23; // [rsp+40h] [rbp-29h] BYREF
  struct IMMDevice *v24[2]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v25[16]; // [rsp+58h] [rbp-11h] BYREF
  struct IMMDevice *v26; // [rsp+68h] [rbp-1h]
  _BYTE v27[32]; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v24[0] = a1;
  v23 = a2;
  v22 = a3;
  v20 = 0LL;
  GetId = a1->lpVtbl->GetId;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v20,
    0LL);
  v7 = ((__int64 (__fastcall *)(struct IMMDevice *, __int64 *))GetId)(a1, &v20);
  v8 = v7;
  if ( v7 >= 0 )
  {
    AcquireSRWLockExclusive(&stru_1801DBBC8);
    v21 = &stru_1801DBBC8;
    std::wstring::wstring((__int64)v27, v20);
    std::_Tree<std::_Tmap_traits<std::wstring,wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>>>,0>>::_Find_lower_bound<std::wstring>(
      v9,
      (__int64)v25,
      (__int64)v27);
    v11 = std::_Tree<std::_Tmap_traits<std::wstring,enum AEC_LOOPBACK_SELECTION_MODE,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>>,0>>::_Lower_bound_duplicate<std::wstring>(
            v10,
            (__int64)v26,
            (__int64)v27);
    v13 = (struct IMMDevice *)qword_1801DB6A0;
    if ( v11 )
      v13 = v26;
    std::wstring::_Tidy_deallocate((__int64)v27, v12);
    if ( v13 == (struct IMMDevice *)qword_1801DB6A0 )
    {
      v19 = 0LL;
      wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::reset(&v19);
      v14 = Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothVolumeAndMute,BluetoothControls::BluetoothVolumeAndMute,IMMDevice * &,unsigned short const * &,IControlChangeNotify * &>(
              (__int64 *)&v19,
              v24,
              &v23,
              &v22);
      v8 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x81E,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
          (const char *)(unsigned int)v14);
        wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::~com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>(&v19);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v21);
        goto LABEL_10;
      }
      v15 = std::wstring::wstring((__int64)v25, v20);
      std::_Tree<std::_Tmap_traits<std::wstring,wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>>>,0>>::_Emplace<std::wstring,wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>>(
        v16,
        (__int64)v24,
        v15,
        (__int64 *)&v19);
      std::wstring::_Tidy_deallocate((__int64)v25, v17);
      wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::~com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>(&v19);
      v13 = v24[0];
    }
    wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::operator=(
      a4,
      (volatile int *)v13[8].lpVtbl);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v21);
    v8 = 0;
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x816,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
    (const char *)(unsigned int)v7);
LABEL_10:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v20);
  return v8;
}
