/*
 * XREFs of HmgCreate @ 0x1400798EC
 * Callers:
 *     InitializeGre @ 0x1402E6D50 (InitializeGre.c)
 * Callees:
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 *     ?InitializeTypeIsolation@@YA_NXZ @ 0x140078DD0 (-InitializeTypeIsolation@@YA_NXZ.c)
 *     ?InitializeReferenceTracker@@YA_NXZ @ 0x140078F3C (-InitializeReferenceTracker@@YA_NXZ.c)
 *     ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x140078FFC (-Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z.c)
 *     ?HmgrStacksInit@@YAXXZ @ 0x140079094 (-HmgrStacksInit@@YAXXZ.c)
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x140079624 (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     Win32CreateSection @ 0x1400796CC (Win32CreateSection.c)
 *     bLoadProcessHandleQuota @ 0x140079730 (bLoadProcessHandleQuota.c)
 *     ?HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z @ 0x14007AA44 (-HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x14019DA38 (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall HmgCreate(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 (*v5)(void); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rdi
  __int64 (*v10)(void); // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int (*v13)(void); // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 (*v17)(void); // rax
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r8
  _QWORD *v24; // rsi
  void *v25; // rcx
  struct _ENTRY **v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 CurrentProcess; // r15
  struct _ENTRY *v33; // rdx
  unsigned int v34; // ecx
  struct GdiHandleManager *v35; // rax
  struct _ENTRY *v36; // rcx
  _DWORD *v37; // rax
  __int64 *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned int i; // edi
  int AllocationType; // [rsp+20h] [rbp-58h]
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-28h] BYREF
  __int64 v44; // [rsp+58h] [rbp-20h] BYREF
  _QWORD v45[3]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v46; // [rsp+B0h] [rbp+38h] BYREF
  ULONG_PTR RegionSize; // [rsp+B8h] [rbp+40h] BYREF
  PVOID BaseAddress; // [rsp+C0h] [rbp+48h] BYREF
  int v49; // [rsp+C8h] [rbp+50h] BYREF
  int v50; // [rsp+CCh] [rbp+54h]

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v4 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v3, v2) + 24);
  v5 = *(__int64 (**)(void))(v4 + 1176);
  if ( v5 )
    LODWORD(v5) = v5();
  *(_DWORD *)(v1 + 1752) = (_DWORD)v5;
  if ( !(unsigned int)bLoadProcessHandleQuota(v4) )
    *(_DWORD *)(v1 + 2216) = 10000;
  v8 = *(_DWORD *)(v1 + 1752);
  v9 = 0x10000LL;
  if ( v8 < 0x10000 )
    v9 = v8;
  v10 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 24) + 1632LL);
  if ( v10 )
    v10 = (__int64 (*)(void))v10();
  *(_QWORD *)(v1 + 1744) = v10;
  memset((void *)(v1 + 2040), 0, 0x7CuLL);
  v13 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v12, v11) + 24) + 1640LL);
  if ( v13 && v13() >= 0 )
  {
    v17 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v16, v15) + 24) + 1648LL);
    if ( v17 )
      LODWORD(v17) = v17();
    if ( !HmgInitializeLookAsideList(10LL, (unsigned int)v17, v18, 0x40u) )
      return 0LL;
  }
  if ( !HmgInitializeLookAsideList(1LL, 0x850u, v14, 0x28u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(4LL, 0x70u, v19, 0x60u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(5LL, 0x3B8u, v20, 0x28u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(8LL, 0xC8u, v21, 0xCu) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(16LL, 0xB8u, v22, 0x60u) )
    return 0LL;
  *(_QWORD *)(v1 + 2168) = 0LL;
  v24 = (_QWORD *)(v1 + 2184);
  *(_QWORD *)(v1 + 2176) = 0LL;
  v50 = 0;
  v49 = 1573528;
  if ( (int)Win32CreateSection((_QWORD *)(v1 + 2184), 6LL, v23, (__int64)&v49, AllocationType, 0x4000000) < 0 )
    return 0LL;
  v25 = (void *)*v24;
  v26 = (struct _ENTRY **)(v1 + 1768);
  ViewSize = 0LL;
  if ( MmMapViewInSessionSpace(v25, (PVOID *)(v1 + 1768), &ViewSize) < 0 )
    return 0LL;
  v44 = 0LL;
  v46 = 0LL;
  v45[0] = 0LL;
  CurrentProcess = PsGetCurrentProcess(v28, v27, v29, v30);
  if ( (int)MmMapViewOfSection(*v24, CurrentProcess, &v46, 0LL, 4096LL, v45, &v44, 2, 0x400000, 4) < 0 )
    return 0LL;
  RegionSize = 24 * v9;
  BaseAddress = (PVOID)v46;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 0LL;
  BaseAddress = (PVOID)(v46 + 1572864);
  RegionSize = 664LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 0LL;
  MmUnmapViewOfSection(CurrentProcess);
  v33 = *v26;
  v34 = *(_DWORD *)(v1 + 1752);
  *(_QWORD *)(v1 + 1776) = *v26;
  *(_QWORD *)(v1 + 1760) = (char *)v33 + 1572864;
  v35 = GdiHandleManager::Create(v34, v33, v9);
  *(_QWORD *)(v1 + 5672) = v35;
  if ( v35 )
  {
    for ( i = 0; i < 0xA; ++i )
    {
      LODWORD(v46) = 0;
      if ( !HmgpAcquireHandleIndex((struct Gre::Base::SESSION_GLOBALS *)v1, 0LL, (unsigned int *)&v46) )
      {
        GdiHandleManager::Destroy(*(PVOID *)(v1 + 5672));
        *(_QWORD *)(v1 + 5672) = 0LL;
        break;
      }
    }
  }
  if ( !*(_QWORD *)(v1 + 5672) )
    return 0LL;
  v36 = *v26;
  *(_QWORD *)(v1 + 3008) = (char *)*v26 + 1573040;
  *(_QWORD *)(v1 + 3016) = (char *)v36 + 1573216;
  *(_QWORD *)(v1 + 3024) = (char *)v36 + 1573392;
  HmgrStacksInit();
  v37 = Win32AllocPoolImpl(0x40uLL, 8uLL, 0x6C6D6847u);
  *(_QWORD *)(v1 + 2192) = v37;
  if ( !v37 )
    return 0LL;
  *v37 = -100000;
  *(_DWORD *)(*(_QWORD *)(v1 + 2192) + 4LL) = -1;
  *(_QWORD *)(v1 + 2208) = PALLOCNOZ(4096LL, 0x6D746847u);
  v38 = (__int64 *)Win32AllocPoolImpl(0x40uLL, 8uLL, 0x6D746847u);
  v39 = *(_QWORD *)(v1 + 2208);
  *(_QWORD *)(v1 + 2200) = v38;
  if ( v39 && v38 && (*v38 = v39, InitializeReferenceTracker(v39)) && InitializeTypeIsolation(v40) )
    return 1LL;
  else
    return 0LL;
}
