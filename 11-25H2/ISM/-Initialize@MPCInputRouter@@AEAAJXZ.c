/*
 * XREFs of ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x180034544
 * Callers:
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x180034474 (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180032CFC (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x180033448 (-Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800334CC (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180034634 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0P8MPCInputRouter@@EAAX_N@ZPEAV0@AEBU?$_Ph@$00@std@@@?$_Compressed_pair@P8MPCInputRouter@@EAAX_N@ZV?$tuple@PEAVMPCInputRouter@@U?$_Ph@$00@std@@@std@@$0A@@std@@QEAA@U_One_then_variadic_args_t@1@$$QEAP8MPCInputRouter@@EAAX_N@Z$$QEAPEAV3@AEBU?$_Ph@$00@1@@Z @ 0x180095808 (--$-0P8MPCInputRouter@@EAAX_N@ZPEAV0@AEBU-$_Ph@$00@std@@@-$_Compressed_pair@P8MPCInputRouter@@EA.c)
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800FC5C0 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 */

__int64 __fastcall MPCInputRouter::Initialize(MPCInputRouter *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rdx
  PSRWLOCK v6; // r11
  RTL_SRWLOCK *Instance; // rax
  int v8; // [rsp+20h] [rbp-29h]
  void (__fastcall *v9)(MPCInputRouter *__hidden, bool); // [rsp+30h] [rbp-19h] BYREF
  int v10; // [rsp+38h] [rbp-11h]
  __int128 v11; // [rsp+40h] [rbp-9h] BYREF
  char v12; // [rsp+50h] [rbp+7h]
  __int64 v13; // [rsp+58h] [rbp+Fh]
  void **v14; // [rsp+60h] [rbp+17h] BYREF
  __int128 v15; // [rsp+68h] [rbp+1Fh]
  char v16; // [rsp+78h] [rbp+2Fh]
  __int64 v17; // [rsp+80h] [rbp+37h]
  void ***v18; // [rsp+98h] [rbp+4Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  MPCInputRouter *v20; // [rsp+B8h] [rbp+6Fh] BYREF

  v2 = DWMInputRouter::Initialize(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    MPC3DStateHelper::GetInstance();
    v10 = 0;
    v20 = this;
    v9 = MPCInputRouter::On3DCompositorRunningChanged;
    std::_Compressed_pair<void (MPCInputRouter::*)(bool),std::tuple<MPCInputRouter *,std::_Ph<1>>,0>::_Compressed_pair<void (MPCInputRouter::*)(bool),std::tuple<MPCInputRouter *,std::_Ph<1>>,0>(
      &v11,
      v5,
      &v9,
      &v20);
    v16 = v12;
    v17 = v13;
    v14 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCInputRouter::*)(bool),MPCInputRouter *,std::_Ph<1> const &>,void,bool>::`vftable';
    v18 = &v14;
    v15 = v11;
    MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(v6, (__int64)&v14, (_DWORD *)this + 183);
    Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    if ( MPC3DStateHelper::Is3DCompositorRunning(Instance) )
      MPCInputRouter::On3DCompositorRunningChanged(this, 1);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v2,
      v8);
    return v3;
  }
}
