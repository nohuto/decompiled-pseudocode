/*
 * XREFs of ??1CKernelTransport@@UEAA@XZ @ 0x18026F1DC
 * Callers:
 *     ??_ECKernelTransport@@UEAAPEAXI@Z @ 0x18026F250 (--_ECKernelTransport@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180236804 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CKernelTransport::~CKernelTransport(CKernelTransport *this, void *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CKernelTransport::`vftable';
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3D,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\kerneltransport.cpp",
        (const char *)(unsigned int)v4);
  }
  if ( *((_QWORD *)this + 1) )
  {
    NtDCompositionDestroyConnection();
    *((_QWORD *)this + 1) = 0LL;
  }
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    (wil::details **)this + 2,
    a2);
}
