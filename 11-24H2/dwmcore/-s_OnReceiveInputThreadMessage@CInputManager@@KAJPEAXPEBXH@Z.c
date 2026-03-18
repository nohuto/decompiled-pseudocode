/*
 * XREFs of ?s_OnReceiveInputThreadMessage@CInputManager@@KAJPEAXPEBXH@Z @ 0x180257430
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801BEBA0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z @ 0x18028A7BC (-OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInputManager::s_OnReceiveInputThreadMessage(
        void *a1,
        const struct EdgyDetectedParams *a2,
        int a3,
        const char *a4)
{
  __int64 v5; // rdi
  CManipulation *v6; // rbx
  int v7; // edi
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CManipulation *v11; // [rsp+58h] [rbp+20h] BYREF

  if ( a3 != 56 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x9E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\inputmanager.cpp",
      a4);
  v5 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    v6 = 0LL;
    v11 = 0LL;
    v9 = (struct _RTL_CRITICAL_SECTION *)(v5 + 16);
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 16));
    if ( *(_QWORD *)(v5 + 64) )
    {
      v11 = *(CManipulation **)(v5 + 64);
      v6 = v11;
      (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)v6 + 8LL))(v6);
      v7 = 0;
    }
    else
    {
      v7 = -2147467261;
    }
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
    if ( v7 >= 0 )
      CManipulation::OnEdgyDetected(v6, a2);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
  }
  return 0LL;
}
