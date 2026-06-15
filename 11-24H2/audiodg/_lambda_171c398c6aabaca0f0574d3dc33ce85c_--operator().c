/*
 * XREFs of _lambda_171c398c6aabaca0f0574d3dc33ce85c_::operator() @ 0x14005525C
 * Callers:
 *     wil::init_once__lambda_171c398c6aabaca0f0574d3dc33ce85c___ @ 0x1400551D4 (wil--init_once__lambda_171c398c6aabaca0f0574d3dc33ce85c___.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCRTThreadManager@@V1@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVCRTThreadManager@@AEAH@Z @ 0x1400552C8 (--$MakeAndInitialize@VCRTThreadManager@@V1@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVCRTThreadManage.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_171c398c6aabaca0f0574d3dc33ce85c_::operator()(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  v2 = gRTThreadManager;
  gRTThreadManager = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CRTThreadManager,CRTThreadManager,int &>(&gRTThreadManager, v1);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
