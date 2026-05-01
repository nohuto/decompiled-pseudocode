/*
 * XREFs of _lambda_f70600182f61e42d33a098fa6c0f9983_::operator() @ 0x180025670
 * Callers:
 *     ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x180014BF0 (-GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@P.c)
 * Callees:
 *     ?CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800257A8 (-CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ??4?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUITaskWindow@@@Z @ 0x1800258FC (--4-$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUITaskWindow@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall lambda_f70600182f61e42d33a098fa6c0f9983_::operator()(int *a1, __int64 a2)
{
  char v4; // di
  char v5; // si
  int v6; // ecx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  HWND v9; // rax
  const struct _GUID *v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  _QWORD *v13; // rsi
  void *v14; // rbp
  void *v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = 1;
  v5 = 1;
  v6 = *a1;
  if ( v6 && (unsigned int)(v6 - 1) > 1 )
  {
    **((_DWORD **)a1 + 5) = -2147418113;
    return 0;
  }
  v7 = (_QWORD *)*((_QWORD *)a1 + 3);
  v8 = *v7 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
  if ( *v7 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
    v8 = v7[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
  if ( !v8 )
  {
    Microsoft::WRL::ComPtr<ITaskWindow>::operator=(*((_QWORD *)a1 + 4), a2);
    return 0;
  }
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  v9 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v11 = CImmersiveApplicationWindow_CreateInstance(v9, v10, &v16);
  **((_DWORD **)a1 + 5) = v11;
  if ( v11 >= 0 )
  {
    v12 = **((_QWORD **)a1 + 1);
    if ( v12 )
    {
      **((_DWORD **)a1 + 5) = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v12 + 40LL))(v12, v16);
    }
    else
    {
      v13 = (_QWORD *)*((_QWORD *)a1 + 2);
      v14 = v16;
      v16 = 0LL;
      if ( *v13 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 16LL))(*v13);
      *v13 = v14;
      v5 = 0;
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  if ( !v5 || **((int **)a1 + 5) < 0 )
    return 0;
  return v4;
}
