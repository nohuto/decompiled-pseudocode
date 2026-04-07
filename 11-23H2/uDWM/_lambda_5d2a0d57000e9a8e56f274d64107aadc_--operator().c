/*
 * XREFs of _lambda_5d2a0d57000e9a8e56f274d64107aadc_::operator() @ 0x1800A4714
 * Callers:
 *     ?OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ @ 0x1800A5614 (-OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@UDwmTrace@@SA_NE_K@Z @ 0x1800A5458 (-IsEnabled@UDwmTrace@@SA_NE_K@Z.c)
 *     ?UDwmDisplayIsPhysicalMonitorDevice_@UDwmTrace@@QEAAXXZ @ 0x1800A5D18 (-UDwmDisplayIsPhysicalMonitorDevice_@UDwmTrace@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x1800A60E4 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_5d2a0d57000e9a8e56f274d64107aadc_::operator()(__int64 **a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64 *); // rbx
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, GUID *, __int64 *); // rdi
  int v10; // eax
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int8 v13; // cl
  __int64 v14; // rcx
  UDwmTrace *v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-18h] BYREF
  __int64 v17[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  char v19; // [rsp+60h] [rbp+28h] BYREF
  char v20; // [rsp+68h] [rbp+30h] BYREF
  int v21; // [rsp+70h] [rbp+38h] BYREF
  int v22; // [rsp+78h] [rbp+40h] BYREF

  v19 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)**a1 + 72LL))(**a1, &v19);
  if ( v2 < 0 )
  {
    v3 = 336LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  if ( v19 )
  {
    v21 = 0;
    v2 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)**a1 + 96LL))(**a1, &v21);
    if ( v2 < 0 )
    {
      v3 = 341LL;
      goto LABEL_3;
    }
    v22 = 0;
    v2 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)**a1 + 104LL))(**a1, &v22);
    if ( v2 < 0 )
    {
      v3 = 344LL;
      goto LABEL_3;
    }
    if ( !v21 && !v22 )
    {
      v17[0] = 0LL;
      v5 = **a1;
      v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 48LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v17);
      v7 = v6(v5, v17);
      v2 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x160,
          (__int64)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
          (const char *)(unsigned int)v7);
LABEL_19:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v17);
        return (unsigned int)v2;
      }
      v16 = 0LL;
      v8 = v17[0];
      v9 = **(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v17[0];
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
      v10 = v9(v8, &GUID_34dd25d3_8367_589a_9c46_1802727fb1ea, &v16);
      v2 = v10;
      if ( v10 < 0 )
      {
        v11 = 355LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
        goto LABEL_19;
      }
      v20 = 0;
      v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v16 + 120LL))(v16, &v20);
      v2 = v10;
      if ( v10 < 0 )
      {
        v11 = 358LL;
        goto LABEL_18;
      }
      if ( !v20 )
      {
        if ( UDwmTrace::IsEnabled(v13, v12) )
        {
          wil::details::static_lazy<UDwmTrace>::get(
            v14,
            _lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_);
          UDwmTrace::UDwmDisplayIsPhysicalMonitorDevice_(v15);
        }
        *(_BYTE *)a1[1] = 1;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v17);
    }
  }
  return 0LL;
}
