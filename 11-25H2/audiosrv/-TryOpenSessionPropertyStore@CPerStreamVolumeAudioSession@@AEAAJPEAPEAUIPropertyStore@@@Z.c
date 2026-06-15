/*
 * XREFs of ?TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x180022EB4
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800757A0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x180024098 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180028B78 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180028C90 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     wil::scope_exit__lambda_9f23d6fe501abb0fc5ed1ea6387a8792___ @ 0x1800C2314 (wil--scope_exit__lambda_9f23d6fe501abb0fc5ed1ea6387a8792___.c)
 *     _lambda_cd6f2b70438ec48af9647ef981891005_::_lambda_cd6f2b70438ec48af9647ef981891005_ @ 0x1800C232C (_lambda_cd6f2b70438ec48af9647ef981891005_--_lambda_cd6f2b70438ec48af9647ef981891005_.c)
 *     wil::details::lambda_call__lambda_5bdd7bf6d3721722daf8bf205058dd9d___::_lambda_call__lambda_5bdd7bf6d3721722daf8bf205058dd9d___ @ 0x1800C2368 (wil--details--lambda_call__lambda_5bdd7bf6d3721722daf8bf205058dd9d___--_lambda_call__lambda_5bdd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPerStreamVolumeAudioSession::TryOpenSessionPropertyStore(
        CPerStreamVolumeAudioSession *this,
        struct IPropertyStore **a2)
{
  int v4; // eax
  unsigned int AudioSessionPropertyStore; // ebx
  __int64 v6; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v4 = CAudioSessionInstanceId::ToPersistedString((char *)this + 584, &v12, 1LL);
  AudioSessionPropertyStore = v4;
  if ( v4 >= 0 )
  {
    v11 = -2147023728;
    v6 = lambda_cd6f2b70438ec48af9647ef981891005_::_lambda_cd6f2b70438ec48af9647ef981891005_(v8, &v12, &v11);
    wil::scope_exit__lambda_9f23d6fe501abb0fc5ed1ea6387a8792___(v9, v6);
    AudioSessionPropertyStore = CPolicyConfig::GetAudioSessionPropertyStore(
                                  g_PolicyConfig,
                                  (struct IAudioSessionInfo *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
                                  a2);
    v11 = AudioSessionPropertyStore;
    wil::details::lambda_call__lambda_5bdd7bf6d3721722daf8bf205058dd9d___::_lambda_call__lambda_5bdd7bf6d3721722daf8bf205058dd9d___(v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF81,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v4);
  }
  ATL::CStringData::Release((ATL::CStringData *)(v12 - 24));
  return AudioSessionPropertyStore;
}
