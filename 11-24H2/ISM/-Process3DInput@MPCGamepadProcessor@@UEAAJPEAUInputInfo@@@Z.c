/*
 * XREFs of ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801BFF00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x1800118EC (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800121C4 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800133C4 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAULegacyInputInfo@@@Z @ 0x1800328D0 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800621E0 (-Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180068890 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x1800691F8 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ @ 0x1800B2988 (-ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x1800C61B4 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?Copy@GameControllerInputInfo@@QEBAPEAU1@XZ @ 0x180130A44 (-Copy@GameControllerInputInfo@@QEBAPEAU1@XZ.c)
 *     ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x1801BE760 (-AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ.c)
 *     ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_K@Z @ 0x1801BE940 (-ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_K@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z @ 0x1801C01B8 (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGamepadProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  struct InputInfo *v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  struct GameControllerInputInfo *v8; // rax
  void *v9; // rcx
  __int64 v10; // rax
  MPCGamepadInputHelper *Instance; // rax
  char ShouldHandleMPCInput; // al
  char v13; // si
  int v14; // eax
  unsigned int v15; // esi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  const char *v19; // r9
  MPCHolographicInputManager *v20; // rbx
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rcx
  struct IMPCTarget *v24[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v25[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h]
  int v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+60h] [rbp-A0h]
  int v29; // [rsp+80h] [rbp-80h]
  wil::details::in1diag3 *retaddr; // [rsp+C28h] [rbp+B28h]

  v2 = a2;
  if ( (*(_BYTE *)a2 & 0x40) != 0 )
  {
    if ( *((_DWORD *)MPCHolographicInputManager::GetInstance() + 912) != 1 )
      return MPCGamepadProcessor::Process2DInput((MPCGamepadProcessor *)this, v2);
    v8 = GameControllerInputInfo::Copy(v2, v4, v5, v6);
    v9 = *(void **)(this + 3664);
    *(_QWORD *)(this + 3664) = v8;
    if ( v9 )
      operator delete(v9, (const struct std::nothrow_t *)0x58);
    v10 = *(_QWORD *)(this + 3664);
    *(_OWORD *)(this + 3676) = *(_OWORD *)(v10 + 48);
    *(_QWORD *)(this + 3692) = *(_QWORD *)(v10 + 64);
    *(_DWORD *)(this + 3700) = *(_DWORD *)(v10 + 72);
    Instance = MPCGamepadInputHelper::GetInstance();
    ShouldHandleMPCInput = MPCGamepadInputHelper::ShouldHandleMPCInput(Instance);
    v13 = ShouldHandleMPCInput;
    if ( *(_BYTE *)(this + 4157) && !ShouldHandleMPCInput )
      MPCGamepadProcessor::ClearControllerProcessorState((MPCGamepadProcessor *)(this - 32), v2, *((_QWORD *)v2 + 4));
    *(_BYTE *)(this + 4157) = v13;
    MPCButtonHoldHelper::UpdateState(
      *(MPCButtonHoldHelper **)(this + 4248),
      *(_BYTE *)(this + 3676) & 1,
      *((_QWORD *)v2 + 2));
    if ( v13 )
    {
      memset_0(v25, 0, 0xBC0uLL);
      v27 = 3008;
      v14 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 0, 0, *((_DWORD *)v2 + 1), (__int64)v25);
      v15 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9B,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
          (const char *)(unsigned int)v14);
        return v15;
      }
      v25[2] = *((_DWORD *)v2 + 2);
      v26 = *((_QWORD *)v2 + 2);
      v27 = 3008;
      v28 = *((_QWORD *)v2 + 4);
      if ( (*(_BYTE *)(this + 3676) & 4) != 0 )
      {
        v16 = v29;
        if ( (*(_DWORD *)(this + 3672) & 4) == 0 )
          v16 = 2;
        v29 = v16;
      }
      if ( !MPCInputProviderBase::IsPrimary(this) )
      {
        if ( MPCGamepadProcessor::AnyInputPressed((MPCGamepadProcessor *)(this - 32), v17, v18, v19) )
          MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
      }
      v24[0] = 0LL;
      v20 = MPCHolographicInputManager::GetInstance();
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v24);
      v21 = MPCHolographicInputManager::Process3DInput(
              v20,
              (struct LegacyInputInfo *)v25,
              (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
              v24);
      v22 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB8,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
          (const char *)(unsigned int)v21);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v24);
        return v22;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v24);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(this + 3640) + 48LL))(
        *(_QWORD *)(this + 3640),
        *(_QWORD *)(this + 3664));
    }
    *(_DWORD *)(this + 3672) = *(_DWORD *)(this + 3676);
  }
  else
  {
    if ( *(char *)a2 >= 0 )
    {
      if ( (*(_BYTE *)a2 & 4) == 0 )
        return 0LL;
      MPCGamepadProcessor::ProcessInteractionMode((MPCGamepadProcessor *)(this - 32), a2);
      if ( *((_WORD *)v2 + 30) == 7 )
        return 0LL;
      v23 = *(_QWORD *)(this + 3640);
      a2 = v2;
    }
    else
    {
      v23 = *(_QWORD *)(this + 3640);
    }
    (*(void (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v23 + 48LL))(v23, a2);
  }
  return 0LL;
}
