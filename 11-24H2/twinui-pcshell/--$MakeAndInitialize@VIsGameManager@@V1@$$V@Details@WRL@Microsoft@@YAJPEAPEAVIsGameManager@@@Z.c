/*
 * XREFs of ??$MakeAndInitialize@VIsGameManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIsGameManager@@@Z @ 0x1800629B0
 * Callers:
 *     ?CreateIsGameManager@@YAJPEAPEAUIIsGameManager@@@Z @ 0x180062CA0 (-CreateIsGameManager@@YAJPEAPEAUIIsGameManager@@@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@IsGameManager@@QEAAJXZ @ 0x180062A7C (-RuntimeClassInitialize@IsGameManager@@QEAAJXZ.c)
 *     ??0IsGameManager@@QEAA@XZ @ 0x180062BAC (--0IsGameManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<IsGameManager,IsGameManager,>(IsGameManager **a1)
{
  void *v2; // rax
  IsGameManager *v3; // rbx
  int v4; // edi
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  IsGameManager *v7; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = (IsGameManager *)v2;
  if ( !v2 )
  {
    v4 = -2147024882;
LABEL_11:
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
    return (unsigned int)v4;
  }
  v3 = IsGameManager::IsGameManager((IsGameManager *)v2);
  v7 = v3;
  v6 = 0LL;
  v4 = IsGameManager::RuntimeClassInitialize(v3);
  if ( v4 < 0 )
  {
    if ( v3 )
      (*(void (__fastcall **)(IsGameManager *))(*(_QWORD *)v3 + 16LL))(v3);
    goto LABEL_11;
  }
  if ( v3 )
    (*(void (__fastcall **)(IsGameManager *))(*(_QWORD *)v3 + 8LL))(v3);
  *a1 = v3;
  if ( v3 )
    (*(void (__fastcall **)(IsGameManager *))(*(_QWORD *)v3 + 16LL))(v3);
  return 0LL;
}
