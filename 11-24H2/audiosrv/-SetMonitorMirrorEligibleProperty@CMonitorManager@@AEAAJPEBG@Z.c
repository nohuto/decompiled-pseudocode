/*
 * XREFs of ?SetMonitorMirrorEligibleProperty@CMonitorManager@@AEAAJPEBG@Z @ 0x18011B70C
 * Callers:
 *     ?UpdateRoutedEndpointId@CMonitorManager@@AEAAXPEA_N@Z @ 0x18011BC38 (-UpdateRoutedEndpointId@CMonitorManager@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMonitorManager::SetMonitorMirrorEligibleProperty(CMonitorManager *this, const unsigned __int16 *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, const unsigned __int16 *, __int64 *); // rbx
  int v5; // ebx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64, __int64 *); // rdi
  __int64 v8; // rcx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-10h]
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v11 = 0LL;
  v3 = *((_QWORD *)this + 8);
  v4 = *(__int64 (__fastcall **)(__int64, const unsigned __int16 *, __int64 *))(*(_QWORD *)v3 + 40LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v13);
  v5 = v4(v3, a2, &v13);
  if ( v5 >= 0 )
  {
    v6 = v13;
    v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v13 + 32LL);
    v8 = v12;
    v12 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v5 = v7(v6, 1LL, &v12);
    if ( v5 >= 0 )
    {
      LOWORD(pvar[0]) = 11;
      LOWORD(pvar[1]) = -1;
      v5 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v12 + 48LL))(
             v12,
             &PKEY_MonitorMirrorEligible,
             pvar);
    }
  }
  PropVariantClear(pvar);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
  return (unsigned int)v5;
}
