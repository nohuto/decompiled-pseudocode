/*
 * XREFs of ?TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x18006DBD8
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800776E0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?EnsurePropertyStore@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x1800C15F0 (-EnsurePropertyStore@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x18001735C (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18001B198 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001B2B0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     _lambda_a8a3ec141be49a0429a3d190c13e56dc_::_lambda_a8a3ec141be49a0429a3d190c13e56dc_ @ 0x1800B4E3C (_lambda_a8a3ec141be49a0429a3d190c13e56dc_--_lambda_a8a3ec141be49a0429a3d190c13e56dc_.c)
 *     wil::scope_exit__lambda_b69ea153785b6672bcf93b875c697000___ @ 0x1800C0960 (wil--scope_exit__lambda_b69ea153785b6672bcf93b875c697000___.c)
 *     wil::details::lambda_call__lambda_2dbeb383abe4e3058f79ce1fc26f8e50___::_lambda_call__lambda_2dbeb383abe4e3058f79ce1fc26f8e50___ @ 0x1800C09A0 (wil--details--lambda_call__lambda_2dbeb383abe4e3058f79ce1fc26f8e50___--_lambda_call__lambda_2dbe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPerStreamVolumeAudioSession::TryOpenSessionPropertyStore(
        const void **this,
        struct IPropertyStore **a2)
{
  int v4; // eax
  unsigned int AudioSessionPropertyStore; // ebx
  __int64 v6; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v11; // [rsp+70h] [rbp+18h] BYREF
  wchar_t *v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = (wchar_t *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v4 = CAudioSessionInstanceId::ToPersistedString(this + 73, &v12, 1);
  AudioSessionPropertyStore = v4;
  if ( v4 >= 0 )
  {
    v11 = -2147023728;
    v6 = lambda_a8a3ec141be49a0429a3d190c13e56dc_::_lambda_a8a3ec141be49a0429a3d190c13e56dc_(v8, &v12, &v11);
    wil::scope_exit__lambda_b69ea153785b6672bcf93b875c697000___(v9, v6);
    AudioSessionPropertyStore = CPolicyConfig::GetAudioSessionPropertyStore(
                                  g_PolicyConfig,
                                  (struct IAudioSessionInfo *)((unsigned __int64)(this + 1) & -(__int64)(this != 0LL)),
                                  a2);
    v11 = AudioSessionPropertyStore;
    wil::details::lambda_call__lambda_2dbeb383abe4e3058f79ce1fc26f8e50___::_lambda_call__lambda_2dbeb383abe4e3058f79ce1fc26f8e50___(v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF9C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v4);
  }
  ATL::CStringData::Release((ATL::CStringData *)(v12 - 12));
  return AudioSessionPropertyStore;
}
