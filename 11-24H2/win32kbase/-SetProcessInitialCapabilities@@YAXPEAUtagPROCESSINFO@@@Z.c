/*
 * XREFs of ?SetProcessInitialCapabilities@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401A369C
 * Callers:
 *     xxxInitProcessInfo @ 0x140161084 (xxxInitProcessInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?UpdateCapabilities@tagPROCESSINFO@@QEAA?AW4Win32ProcessCapabilities@@W42@0@Z @ 0x1401A6260 (-UpdateCapabilities@tagPROCESSINFO@@QEAA-AW4Win32ProcessCapabilities@@W42@0@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall SetProcessInitialCapabilities(struct tagPROCESSINFO *a1)
{
  char v2; // di
  char v3; // bp
  int v4; // ebx
  __int64 UserSessionState; // rax
  __int64 v6; // rdi
  unsigned __int8 (__fastcall **v7)(struct tagPROCESSINFO *); // rbx

  if ( _bittest64((const signed __int64 *)a1 + 102, 0x28u) )
  {
    v2 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = *((_DWORD *)a1 + 14);
      UserSessionState = W32GetUserSessionState(a1);
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v2,
        v3,
        *(_QWORD *)(UserSessionState + 69400),
        4u,
        8u,
        0x16u,
        (__int64)&WPP_ab198495905d31ffcdd691cf04187f1c_Traceguids,
        v4);
    }
  }
  else
  {
    if ( (dword_14029E4B8 & 1) == 0 )
    {
      qword_14029B2A0 = 2LL;
      dword_14029E4B8 |= 1u;
      qword_14029B298 = (__int64)lambda_341836b4cfbb1a5bccc71938d3338954_::_lambda_invoker_cdecl_;
      qword_14029B2A8 = (__int64)DirectComposition::CLegacyRenderTargetMarshaler::IsShellResource;
      qword_14029B2B8 = (__int64)lambda_ba18e81ca637b69fb1f891ffe3f4f6cd_::_lambda_invoker_cdecl_;
      qword_14029B2C0 = 0x100000000LL;
      qword_14029B2C8 = (__int64)lambda_e36063bdc5aa44eb1fd63d58d5e6f1dc_::_lambda_invoker_cdecl_;
      qword_14029B2B0 = 4LL;
    }
    v6 = 0LL;
    v7 = (unsigned __int8 (__fastcall **)(struct tagPROCESSINFO *))&unk_14029B290;
    do
    {
      if ( v7[1](a1) )
        v6 |= (unsigned __int64)*v7;
      v7 += 2;
    }
    while ( v7 != (unsigned __int8 (__fastcall **)(struct tagPROCESSINFO *))&FP_90_0 );
    tagPROCESSINFO::UpdateCapabilities(a1, v6, v6);
  }
}
