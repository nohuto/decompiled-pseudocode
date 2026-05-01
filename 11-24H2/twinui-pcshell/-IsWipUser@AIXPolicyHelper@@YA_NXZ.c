/*
 * XREFs of ?IsWipUser@AIXPolicyHelper@@YA_NXZ @ 0x1805917B0
 * Callers:
 *     ?IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ @ 0x180591634 (-IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180294914 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall AIXPolicyHelper::IsWipUser(AIXPolicyHelper *this)
{
  char v1; // bl
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int16 v5; // [rsp+40h] [rbp+8h] BYREF
  LPVOID v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  v1 = 1;
  if ( CoCreateInstance(
         &GUID_3185a766_b338_11e4_a71e_12e3f512a338,
         0LL,
         1u,
         &GUID_e833feb2_c58a_45e4_8d93_08874744febb,
         &v6) < 0 )
    goto LABEL_5;
  v5 = 0;
  v2 = (*(__int64 (__fastcall **)(LPVOID, __int16 *))(*(_QWORD *)v6 + 24LL))(v6, &v5);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x197,
      (int)"shellcommon\\internal\\shell\\inc\\aixpolicyhelper.h",
      (const char *)(unsigned int)v2);
LABEL_5:
    v1 = 0;
    goto LABEL_6;
  }
  if ( v5 != -1 )
    goto LABEL_5;
LABEL_6:
  wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)&v6);
  return v1;
}
