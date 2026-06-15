/*
 * XREFs of _lambda_7d39c7945004e0f8faeb33c5c213bd53_::operator() @ 0x1800EB0B0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7d39c7945004e0f8faeb33c5c213bd53__bool_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_____::_Do_call @ 0x1800EFB30 (std--_Func_impl_no_alloc__lambda_7d39c7945004e0f8faeb33c5c213bd53__bool_std--basic__ea_1800EFB30.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18004DC2C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall lambda_7d39c7945004e0f8faeb33c5c213bd53_::operator()(_QWORD *a1, __int64 a2)
{
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 *v10; // [rsp+20h] [rbp-50h]
  __int64 v11; // [rsp+40h] [rbp-30h] BYREF
  __int64 *v12; // [rsp+48h] [rbp-28h] BYREF
  int v13; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+58h] [rbp-18h]

  v14 = a2;
  v12 = 0LL;
  GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v12);
  v6 = std::wstring::c_str(a2, v5);
  if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, __int64, __int64 **))GetDevice)(g_DeviceEnumerator, v6, &v12) >= 0 )
  {
    v11 = 0LL;
    v7 = *v12;
    v11 = 0LL;
    v10 = &v11;
    if ( (*(int (__fastcall **)(__int64 *, GUID *, __int64))(v7 + 24))(
           v12,
           &GUID_28f54685_06fd_11d2_b27a_00a0c9223196,
           23LL) >= 0 )
    {
      v13 = 0;
      LODWORD(v10) = 516;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64 *, int *))(*(_QWORD *)v11 + 24LL))(
        v11,
        *a1,
        24LL,
        a1[1],
        v10,
        &v13);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v12);
  std::wstring::_Tidy_deallocate(a2, v8);
  return 1;
}
