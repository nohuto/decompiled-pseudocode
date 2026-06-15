/*
 * XREFs of ??$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Z @ 0x180117AA8
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800CF034 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180050C50 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A6194 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800AB328 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ??0CSpatialAudioResourceManager@Sarm@@QEAA@XZ @ 0x180117CA4 (--0CSpatialAudioResourceManager@Sarm@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioResourceManager@@UIAudioAppVolumePolicyChange@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18011A0B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioRes.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Sarm::CSpatialAudioResourceManager,ISpatialAudioResourceManager,IAudioPolicyManager * &>(
        LARGE_INTEGER a1,
        __int64 *a2)
{
  void *v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rbx
  const struct _GUID *v7; // rcx
  __int64 v8; // rdx
  const struct _GUID *v9; // rcx
  __int64 v10; // rcx
  int IsEqualGUID; // eax
  struct ISpatialAudioResourceManager *v12; // r8
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF
  void *v15; // [rsp+40h] [rbp+18h] BYREF
  void *v16; // [rsp+48h] [rbp+20h]

  Frequency = a1;
  g_SpatialAudioResourceManager = 0LL;
  v3 = operator new(0x290uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v3;
  Frequency.QuadPart = (LONGLONG)v3;
  if ( v3 )
  {
    v16 = v3;
    v5 = Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager((Sarm::CSpatialAudioResourceManager *)v3);
    v15 = 0LL;
    v6 = *a2;
    Frequency.QuadPart = 0LL;
    QueryPerformanceFrequency(&Frequency);
    g_u64QPCFrequency = Frequency.QuadPart;
    *(_QWORD *)(v5 + 296) = v6;
    if ( IsGetDefaultSpatialRenderingModePresent() )
      *(_BYTE *)(v5 + 105) = (unsigned int)IsSpatialAllowedOnPlatform() != 0;
    *(_BYTE *)(v5 + 104) = 1;
    g_SpatialAudioResourceManager = 0LL;
    if ( InlineIsEqualGUID(&GUID_2c794bb5_12d9_433a_b0a1_e3e5c6f54b6b, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      g_SpatialAudioResourceManager = (struct ISpatialAudioResourceManager *)v5;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v4 = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v7, v7) )
      {
        g_SpatialAudioResourceManager = (struct ISpatialAudioResourceManager *)v5;
        v4 = 0;
        v10 = v5;
      }
      else
      {
        IsEqualGUID = InlineIsEqualGUID(v9, &GUID_e60ae324_1652_4fcc_a7f2_36aab2a4f68b);
        v10 = 0LL;
        if ( IsEqualGUID )
        {
          g_SpatialAudioResourceManager = v12;
          v10 = (__int64)v12;
        }
        v8 = (unsigned int)-IsEqualGUID;
        v4 = IsEqualGUID == 0 ? 0x80004002 : 0;
        if ( !IsEqualGUID )
          goto LABEL_13;
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, v8);
    }
LABEL_13:
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioResourceManager,IAudioAppVolumePolicyChange>::Release(
      v5,
      v8);
    goto LABEL_14;
  }
  v4 = -2147024882;
LABEL_14:
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v15);
  return v4;
}
