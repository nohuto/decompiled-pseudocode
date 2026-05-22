/*
 * XREFs of ?OnDeviceUpdate@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800CAEF0
 * Callers:
 *     ?OnDeviceUpdate@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z @ 0x1800CB040 (-OnDeviceUpdate@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InputStateManager::OnDeviceUpdate(InputStateManager *this, struct DeviceInfo *a2)
{
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rbx
  __int64 i; // r8
  __int64 v6; // rdi
  int (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rdi
  const char *v8; // r9
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  __int64 v15; // [rsp+50h] [rbp+30h] BYREF
  __int64 v16; // [rsp+60h] [rbp+40h] BYREF
  __int64 v17; // [rsp+68h] [rbp+48h] BYREF

  v4 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  for ( i = *((_QWORD *)this + 10); ; i += 16LL )
  {
    if ( i == *((_QWORD *)this + 11) )
    {
      v10 = -2147467259;
      v12 = 2147500037LL;
      v11 = 362LL;
      goto LABEL_18;
    }
    if ( *(_DWORD *)i == *(_DWORD *)a2 )
      break;
  }
  v6 = *(_QWORD *)(i + 8);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*(_QWORD *)(i + 8));
    v17 = 0LL;
    v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v6;
    v16 = v6;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  }
  v7 = **v4;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  if ( v7(v4, &GUID_3cc27501_dfa8_48b9_9841_43a516320b1d, &v15) < 0
    || (v9 = (*(__int64 (__fastcall **)(__int64, struct DeviceInfo *))(*(_QWORD *)v15 + 24LL))(v15, a2),
        v10 = v9,
        v9 >= 0) )
  {
    if ( !ISMScenarios::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
        v8);
    if ( *(_DWORD *)ISMScenarios::s_instance
      || (v9 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 5) + 32LL))(
                 *((_QWORD *)this + 5),
                 a2),
          v10 = v9,
          v9 >= 0) )
    {
      v10 = 0;
      goto LABEL_19;
    }
    v11 = 354LL;
  }
  else
  {
    v11 = 349LL;
  }
  v12 = (unsigned int)v9;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
    (const char *)v12);
LABEL_19:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  return v10;
}
