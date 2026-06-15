/*
 * XREFs of ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x180034C00
 * Callers:
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800B3870 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180032DC0 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?GetSystemEffect@EffectPack@@QEAAJW4APO_TYPE@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180034B50 (-GetSystemEffect@EffectPack@@QEAAJW4APO_TYPE@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18003B110 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioEffectsWatcher::ReloadApos(AudioEffectsWatcher *this)
{
  int v2; // eax
  int v3; // ebx
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rax
  bool v8; // r14
  unsigned int i; // esi
  int v10; // edx
  char *v11; // rbx
  __int64 v12; // rdx
  GUID *v13; // rax
  int SystemEffect; // eax
  __int64 v16; // [rsp+28h] [rbp-69h]
  __int64 v17; // [rsp+30h] [rbp-61h]
  __int64 v18; // [rsp+38h] [rbp-59h]
  __int128 v19; // [rsp+88h] [rbp-9h] BYREF
  __int64 v20; // [rsp+98h] [rbp+7h]
  GUID v21; // [rsp+A8h] [rbp+17h] BYREF
  __int128 v22; // [rsp+B8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v19 = 0LL;
  v20 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, __int128 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                            + 40LL))(
         g_pEndpointCharacteristicsCache,
         *((_QWORD *)this + 7),
         0LL,
         0LL,
         &v19);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = (unsigned int)v2;
    v5 = 185LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)v4);
    goto LABEL_28;
  }
  v22 = 0LL;
  LODWORD(v18) = 0;
  LODWORD(v17) = 0;
  LODWORD(v16) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 56LL))(v19) != 0;
  v3 = DeriveAudioProcessingModeConfiguration(*((unsigned int *)this + 45), *((unsigned int *)this + 46), 0LL, &v19);
  if ( v3 >= 0 )
  {
    v7 = v22 - *((_QWORD *)this + 8);
    if ( (_QWORD)v22 == *((_QWORD *)this + 8) )
      v7 = *((_QWORD *)&v22 + 1) - *((_QWORD *)this + 9);
    v8 = v7 == 0;
    for ( i = 0; i < 3; ++i )
    {
      v10 = *((_DWORD *)this + 47);
      if ( (v10 & 1) == 0 || (v11 = (char *)this + 16 * i, *((_DWORD *)v11 + 26) != 1) )
      {
        if ( (v10 & 2) == 0 || (v11 = (char *)this + 16 * i, *((_DWORD *)v11 + 26) != 2) )
        {
          if ( (v10 & 4) == 0 )
            continue;
          v11 = (char *)this + 16 * i;
          if ( *((_DWORD *)v11 + 26) != 3 )
            continue;
        }
      }
      if ( !v8 )
      {
        v12 = *((_QWORD *)this + 2 * i + 14);
        if ( v12 )
        {
          *((_QWORD *)this + 2 * i + 14) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
      if ( !*((_QWORD *)v11 + 14) )
      {
        v13 = (GUID *)&v22;
        if ( v11[108] )
          v13 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v21 = *v13;
        SystemEffect = EffectPack::GetSystemEffect(
                         *((EffectPack **)&v19 + 1),
                         *((_DWORD *)v11 + 26),
                         &v21,
                         v6,
                         v16,
                         v17,
                         v18,
                         (struct IAudioSystemEffects2 **)v11 + 14);
        v3 = SystemEffect;
        if ( SystemEffect < 0 )
        {
          v4 = (unsigned int)SystemEffect;
          v5 = 217LL;
          goto LABEL_7;
        }
      }
    }
    v3 = 0;
  }
  else
  {
    if ( v3 != -2004287449 )
    {
      v4 = (unsigned int)v3;
      v5 = 191LL;
      goto LABEL_7;
    }
    v3 = -2004287449;
  }
LABEL_28:
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v19);
  return (unsigned int)v3;
}
