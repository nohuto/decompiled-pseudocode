/*
 * XREFs of _lambda_4223d05ba65e9276aa35258dd9088577_::operator() @ 0x1803EC514
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4223d05ba65e9276aa35258dd9088577___::Run @ 0x1803EE070 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4223d05ba65e9276aa35258dd9088577___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x18009D6A4 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_4223d05ba65e9276aa35258dd9088577_::operator()(CMarshaledInterface *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v7);
  v2 = CMarshaledInterface::_Unmarshal(this, &GUID_c0d2dfdf_8b97_41f6_9f0c_13247f43abb8, &v7, 0);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)v7 + 24LL))(
           v7,
           *((_QWORD *)this + 1),
           *((_QWORD *)this + 2));
    v3 = v2;
    if ( v2 >= 0 )
    {
      v3 = 0;
      goto LABEL_7;
    }
    v4 = 956LL;
  }
  else
  {
    v4 = 955LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
    (const char *)(unsigned int)v2);
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v7);
  return v3;
}
