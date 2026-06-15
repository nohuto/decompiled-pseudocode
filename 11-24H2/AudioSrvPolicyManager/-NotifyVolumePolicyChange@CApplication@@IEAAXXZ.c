/*
 * XREFs of ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x18000C7D0
 * Callers:
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000A540 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000AAF0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000B560 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x18000C730 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18000C910 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18000CE00 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002067C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18002AE04 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@?$vector@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@V?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@@std@@AEAAPEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@QEAPEAU2@AEBQEAU2@@Z @ 0x18002FE1C (--$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@-$vector@PEAUIMixedR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CApplication::NotifyVolumePolicyChange(CApplication *this)
{
  char *v2; // rsi
  struct std::nothrow_t *v3; // rbx
  const char *v4; // r9
  _QWORD *v5; // r14
  char *v6; // r15
  _QWORD *v7; // r8
  _QWORD *v8; // r8
  _BYTE *v9; // rbx
  char *i; // r14
  struct std::nothrow_t *v11; // rdx
  void *v12[2]; // [rsp+20h] [rbp-48h] BYREF
  char *v13; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct std::nothrow_t *v15; // [rsp+70h] [rbp+8h] BYREF
  void *v16; // [rsp+78h] [rbp+10h] BYREF

  *(_OWORD *)v12 = 0LL;
  v2 = 0LL;
  v13 = 0LL;
  v3 = (CApplication *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v15 = v3;
  v5 = (_QWORD *)*((_QWORD *)this + 15);
  v6 = (char *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  try
  {
    while ( v5 )
    {
      v7 = v5;
      v5 = (_QWORD *)*v5;
      v8 = v7 + 2;
      if ( v6 == v2 )
      {
        std::vector<IMixedRealitySpatialAudioFormatPolicyChange *>::_Emplace_reallocate<IMixedRealitySpatialAudioFormatPolicyChange * const &>(
          v12,
          v6,
          v8);
        v2 = v13;
        v6 = (char *)v12[1];
      }
      else
      {
        *(_QWORD *)v6 = *v8;
        v6 += 8;
        v12[1] = v6;
      }
    }
    if ( v3 )
      LeaveCriticalSection((LPCRITICAL_SECTION)v3);
    v9 = v12[0];
    for ( i = (char *)v12[0]; i != v6; i += 8 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)i + 24LL))(
        *(_QWORD *)i,
        *((unsigned int *)this + 4),
        *((_QWORD *)this + 3));
    if ( v9 )
    {
      v11 = (struct std::nothrow_t *)(8 * ((v2 - v9) >> 3));
      v15 = v11;
      v16 = v9;
      if ( (unsigned __int64)v11 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v16, (unsigned __int64 *)&v15);
        v11 = v15;
        v9 = v16;
      }
      operator delete(v9, v11);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x96D,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      v4);
  }
}
