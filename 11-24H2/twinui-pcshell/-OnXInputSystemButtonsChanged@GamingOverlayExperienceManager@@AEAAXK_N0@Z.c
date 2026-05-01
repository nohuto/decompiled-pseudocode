/*
 * XREFs of ?OnXInputSystemButtonsChanged@GamingOverlayExperienceManager@@AEAAXK_N0@Z @ 0x180357030
 * Callers:
 *     ?ProcessControllerInput@GamingOverlayExperienceManager@@AEAA_NKPEA_NPEAK@Z @ 0x180357C08 (-ProcessControllerInput@GamingOverlayExperienceManager@@AEAA_NKPEA_NPEAK@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBUGamepadButtonCollectionTracker@@@?$vector@UGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@AEAAPEAUGamepadButtonCollectionTracker@@QEAU2@AEBU2@@Z @ 0x180343348 (--$_Emplace_reallocate@AEBUGamepadButtonCollectionTracker@@@-$vector@UGamepadButtonCollectionTra.c)
 *     ??0GamepadButtonCollectionTracker@@QEAA@AEBU0@@Z @ 0x180347378 (--0GamepadButtonCollectionTracker@@QEAA@AEBU0@@Z.c)
 *     ??1GamepadButtonCollectionTracker@@QEAA@XZ @ 0x180348084 (--1GamepadButtonCollectionTracker@@QEAA@XZ.c)
 *     ?CreateGamepadButtonTracker@GamepadButtonTracker@@SA?AV?$shared_ptr@UGamepadButtonTracker@@@std@@KP6AKKPEAU_XINPUT_VIBRATION@@@_EV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@3@22V?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@3@@Z @ 0x18036A5A8 (-CreateGamepadButtonTracker@GamepadButtonTracker@@SA-AV-$shared_ptr@UGamepadButtonT_ea_18036A5A8.c)
 *     ?HandleButtonEvent@GamepadButtonTracker@@QEAAX_N_K@Z @ 0x18036AA04 (-HandleButtonEvent@GamepadButtonTracker@@QEAAX_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall GamingOverlayExperienceManager::OnXInputSystemButtonsChanged(
        GamingOverlayExperienceManager *this,
        int a2,
        bool a3,
        bool a4)
{
  GamepadButtonTracker **i; // rdi
  unsigned __int64 v9; // rbx
  __int128 v10; // [rsp+48h] [rbp-C0h]
  __int128 v11; // [rsp+58h] [rbp-B0h]
  __int16 v12; // [rsp+68h] [rbp-A0h]
  _QWORD v13[3]; // [rsp+78h] [rbp-90h] BYREF
  __int16 v14; // [rsp+90h] [rbp-78h]
  GamingOverlayExperienceManager *v15; // [rsp+98h] [rbp-70h]
  _QWORD *v16; // [rsp+B0h] [rbp-58h]
  std::_Ref_count_base *v17[2]; // [rsp+B8h] [rbp-50h] BYREF
  RTL_SRWLOCK *v18; // [rsp+C8h] [rbp-40h] BYREF
  std::_Ref_count_base *v19[2]; // [rsp+D0h] [rbp-38h] BYREF
  __m256i v20; // [rsp+E8h] [rbp-20h] BYREF
  GamingOverlayExperienceManager *v21; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v22[2]; // [rsp+118h] [rbp+10h] BYREF

  v11 = 0LL;
  LOBYTE(v11) = a2;
  v18 = 0LL;
  wil::AcquireSRWLockExclusive(&v18, (RTL_SRWLOCK *)this + 44);
  for ( i = (GamepadButtonTracker **)*((_QWORD *)this + 45); i != *((GamepadButtonTracker ***)this + 46); i += 8 )
  {
    if ( *(unsigned __int8 *)i == a2 )
      goto LABEL_12;
  }
  *(_OWORD *)v19 = 0LL;
  v17[0] = (std::_Ref_count_base *)GamingOverlayExperienceManager::HandleNexusButtonEvent;
  LODWORD(v17[1]) = 0;
  v13[0] = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (GamingOverlayExperienceManager::*)(APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind),GamingOverlayExperienceManager *,std::_Ph<1> const &,std::_Ph<2> const &>,void,APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind>::`vftable';
  *(_OWORD *)&v13[1] = *(_OWORD *)v17;
  v14 = v12;
  v15 = this;
  v16 = v13;
  GamepadButtonTracker::CreateGamepadButtonTracker(
    (unsigned int)v19,
    a2,
    *((_QWORD *)this + 39),
    *((_QWORD *)this + 48),
    *((_QWORD *)this + 49),
    *((_QWORD *)this + 50),
    (__int64)v13);
  *(_OWORD *)v17 = 0LL;
  *(_QWORD *)&v10 = GamingOverlayExperienceManager::HandleShareButtonEvent;
  DWORD2(v10) = 0;
  v20.m256i_i64[0] = (__int64)&std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (GamingOverlayExperienceManager::*)(APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind),GamingOverlayExperienceManager *,std::_Ph<1> const &,std::_Ph<2> const &>,void,APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind>::`vftable';
  *(_OWORD *)&v20.m256i_u64[1] = v10;
  v20.m256i_i16[12] = v12;
  v21 = this;
  v22[1] = &v20;
  GamepadButtonTracker::CreateGamepadButtonTracker(
    (unsigned int)v17,
    a2,
    *((_QWORD *)this + 39),
    *((_QWORD *)this + 48),
    *((_QWORD *)this + 49),
    *((_QWORD *)this + 50),
    (__int64)&v20);
  *(_OWORD *)v20.m256i_i8 = v11;
  *(_OWORD *)&v20.m256i_u64[2] = 0LL;
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v21, v19);
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v22, v17);
  if ( *((_QWORD *)this + 46) == *((_QWORD *)this + 47) )
  {
    std::vector<GamepadButtonCollectionTracker>::_Emplace_reallocate<GamepadButtonCollectionTracker const &>(
      (__int64 *)this + 45,
      *((_QWORD *)this + 46),
      (const struct GamepadButtonCollectionTracker *)&v20);
  }
  else
  {
    GamepadButtonCollectionTracker::GamepadButtonCollectionTracker(
      *((GamepadButtonCollectionTracker **)this + 46),
      (const struct GamepadButtonCollectionTracker *)&v20);
    *((_QWORD *)this + 46) += 64LL;
  }
  i = (GamepadButtonTracker **)(*((_QWORD *)this + 46) - 64LL);
  GamepadButtonCollectionTracker::~GamepadButtonCollectionTracker((GamepadButtonCollectionTracker *)&v20);
  if ( v17[1] )
    std::_Ref_count_base::_Decref(v17[1]);
  if ( v19[1] )
    std::_Ref_count_base::_Decref(v19[1]);
LABEL_12:
  v9 = 1000 * GetTickCount64();
  GamepadButtonTracker::HandleButtonEvent(i[4], a3, v9);
  GamepadButtonTracker::HandleButtonEvent(i[6], a4, v9);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v18);
}
