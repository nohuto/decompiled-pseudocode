/*
 * XREFs of ??$MakeAndInitialize@VPositionerPriority@@V1@AEAW4SHELL_POSITIONER_TYPE@@@Details@WRL@Microsoft@@YAJPEAPEAVPositionerPriority@@AEAW4SHELL_POSITIONER_TYPE@@@Z @ 0x1805106DC
 * Callers:
 *     ?PositionerPriority_CreateInstance@@YAJW4SHELL_POSITIONER_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1805108B0 (-PositionerPriority_CreateInstance@@YAJW4SHELL_POSITIONER_TYPE@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0PositionerPriority@@QEAA@XZ @ 0x18016CBB4 (--0PositionerPriority@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEAAXPEAVPositionerPriority@@@Z @ 0x1801B1FC4 (-Attach@-$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEAAXPEAVPositionerPriority@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PositionerPriority,PositionerPriority,enum SHELL_POSITIONER_TYPE &>(
        __int64 *a1,
        int *a2)
{
  unsigned int v4; // edi
  void *v5; // rax
  PositionerPriority *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v5;
  if ( v5 )
  {
    v6 = PositionerPriority::PositionerPriority((PositionerPriority *)v5);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<PositionerPriority>::Attach(&v10, (__int64)v6);
    v11 = 0LL;
    v7 = *a2;
    v8 = v10;
    *(_QWORD *)(v10 + 64) = 0LL;
    *(_WORD *)(v8 + 72) = 0;
    *(_BYTE *)(v8 + 74) = 0;
    *(_BYTE *)(v7 + v8 + 64) = 1;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    *a1 = v8;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v11);
  return v4;
}
