/*
 * XREFs of ?RotationWnfCallback@RotationWatcher@@SAJAEBV?$com_ptr_t@UIMessageSession@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18010981C
 * Callers:
 *     wistd::__function::__func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl(void)_::operator() @ 0x1801096A0 (wistd--__function--__func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?value@?$optional@K@std@@QEGAAAEAKXZ @ 0x180109A8C (-value@-$optional@K@std@@QEGAAAEAKXZ.c)
 *     ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x180109AAC (-wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall RotationWatcher::RotationWnfCallback(_QWORD *a1)
{
  wil *v2; // rcx
  void *v3; // r9
  int v4; // eax
  unsigned int v5; // ebx
  char *v7; // rcx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  char v11; // al
  unsigned int *v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  unsigned __int64 *v15; // [rsp+28h] [rbp-C0h]
  _WNF_STATE_NAME v16; // [rsp+30h] [rbp-B8h] BYREF
  int v17; // [rsp+38h] [rbp-B0h] BYREF
  char v18; // [rsp+3Ch] [rbp-ACh]
  unsigned __int64 v19; // [rsp+40h] [rbp-A8h] BYREF
  bool v20[8]; // [rsp+50h] [rbp-98h] BYREF
  char v21; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v22[40]; // [rsp+A8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v18 = 0;
  LOBYTE(v16.Data[0]) = 0;
  v19 = 0LL;
  memset_0(v20, 0, 0x80uLL);
  v4 = wil::wnf_query_nothrow(
         v2,
         &v16,
         v20,
         v3,
         (unsigned __int64)&v19,
         v15,
         *(struct wil::WNF_CHANGE_STAMP_STRUCT **)&v16);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\rotationwatcher\\rotationwatcher.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  if ( !LOBYTE(v16.Data[0]) || v19 != 128 )
    goto LABEL_18;
  v7 = &v21;
  do
  {
    if ( *(_DWORD *)v7 )
      break;
    v7 += 8;
  }
  while ( v7 != v22 );
  if ( v7 == v22 )
    goto LABEL_18;
  v8 = *((_DWORD *)v7 + 1);
  if ( !v8 )
  {
    v17 = 0;
    v11 = 1;
    v18 = 1;
    goto LABEL_19;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v17 = 90;
    goto LABEL_14;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v17 = 180;
    goto LABEL_14;
  }
  if ( v10 != 1 )
  {
LABEL_18:
    v11 = v18;
LABEL_19:
    if ( !v11 )
      return 0LL;
    goto LABEL_20;
  }
  v17 = 270;
LABEL_14:
  v18 = 1;
LABEL_20:
  v12 = (unsigned int *)std::optional<unsigned long>::value(&v17);
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 (*)(), _QWORD, __int64))(*(_QWORD *)*a1 + 152LL))(
          *a1,
          lambda_7c701a0f37b5b1b9743965e15f2d8f4f_::_lambda_invoker_cdecl_,
          *v12,
          3LL);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\rotationwatcher\\rotationwatcher.cpp",
      (const char *)(unsigned int)v13);
    return v14;
  }
  return 0LL;
}
