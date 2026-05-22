/*
 * XREFs of ?ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1800C14A4
 * Callers:
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800C0E70 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000EDDC (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800133C4 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x1800143C4 (-GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF0B0 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?GetTicks@PerfCounter@@YA_JXZ @ 0x1800BFE30 (-GetTicks@PerfCounter@@YA_JXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall MPCHandProcessor::ShouldRequestPrimary(MPCHandProcessor *this, struct LegacyInputInfo *a2)
{
  char v4; // bl
  bool v5; // bp
  MPCHolographicInputManager *Instance; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  struct IMPCInputPostProcessor *PostProcessor; // rax
  PerfCounter *v11; // rcx
  bool v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  const char *v15; // r9
  float v16; // xmm6_4
  struct MPCConstantManager *v17; // rax
  __int128 v19; // [rsp+20h] [rbp-1E8h] BYREF
  _BYTE v20[416]; // [rsp+30h] [rbp-1D8h] BYREF

  v4 = 1;
  if ( byte_180251678 )
  {
    v5 = (*(_DWORD *)a2 & 0x662600) != 0 && *((_DWORD *)a2 + 16) == 2 || *((_QWORD *)this + 453);
    memset_0(v20, 0, sizeof(v20));
    Instance = MPCHolographicInputManager::GetInstance();
    PostProcessor = MPCHolographicInputManager::GetPostProcessor(Instance, v7, v8, v9);
    (*(void (__fastcall **)(struct IMPCInputPostProcessor *, _QWORD, _BYTE *))(*(_QWORD *)PostProcessor + 72LL))(
      PostProcessor,
      *((unsigned int *)a2 + 1),
      v20);
    v12 = v20[410] != 0;
    if ( !v5 )
    {
      if ( *((_DWORD *)MPCHolographicInputManager::GetInstance() + 840) != 512
        || (v16 = *((float *)a2 + 268),
            v17 = MPCConstantManager::GetInstance((__int64)v11, v13, v14, v15),
            *((_QWORD *)&v19 + 1) = 27LL,
            *(_QWORD *)&v19 = L"HandGuidanceScoreForPrimary",
            v16 < MPCConstantManager::GetConstant<float>(
                    (__int64)v17,
                    ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                    &v19)) )
      {
        if ( !v12 )
          return 0;
      }
    }
    if ( *(_QWORD *)&PerfCounter::GetTicks(v11) - MPCHandProcessor::m_lastKeyboardKeyPressTimeInTicks <= *((_QWORD *)this + 1244) )
      return 0;
  }
  else
  {
    byte_180251678 = 1;
  }
  return v4;
}
