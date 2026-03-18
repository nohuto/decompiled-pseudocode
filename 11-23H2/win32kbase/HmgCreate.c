/*
 * XREFs of HmgCreate @ 0x1C007C9D4
 * Callers:
 *     InitializeGre @ 0x1C02DB800 (InitializeGre.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0029EC8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C003FBE0 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     GreCreateSemaphoreInternal @ 0x1C0077FFC (GreCreateSemaphoreInternal.c)
 *     ?HmgrStacksInit@@YAXXZ @ 0x1C007BE64 (-HmgrStacksInit@@YAXXZ.c)
 *     bLoadProcessHandleQuota @ 0x1C007BFF8 (bLoadProcessHandleQuota.c)
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x1C007CE14 (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     GreCreateFastMutex @ 0x1C007E708 (GreCreateFastMutex.c)
 *     ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x1C007E750 (-Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z.c)
 *     Win32CreateSection @ 0x1C007E7E8 (Win32CreateSection.c)
 *     ?InitializeReferenceTracker@@YA_NXZ @ 0x1C007EDF8 (-InitializeReferenceTracker@@YA_NXZ.c)
 *     ?InitializeTypeIsolation@@YA_NXZ @ 0x1C007EE9C (-InitializeTypeIsolation@@YA_NXZ.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C00A9640 (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 */

__int64 __fastcall HmgCreate(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // eax
  __int64 v5; // rdi
  __int64 (*v6)(void); // rax
  __int64 SemaphoreInternal; // rax
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  __int64 FastMutex; // rax
  int v16; // r8d
  _QWORD *v17; // rsi
  void *v18; // rcx
  struct _ENTRY **v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 CurrentProcess; // r15
  struct _ENTRY *v24; // rdx
  unsigned int v25; // ecx
  struct GdiHandleManager *v26; // rax
  int v27; // edi
  GdiHandleManager *v28; // rcx
  struct _ENTRY *v29; // rcx
  _DWORD *v30; // rax
  NSInstrumentation::CLeakTrackingAllocator *v31; // rcx
  __int64 v32; // rax
  NSInstrumentation::CLeakTrackingAllocator *v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-28h] BYREF
  __int64 v38; // [rsp+58h] [rbp-20h] BYREF
  _QWORD v39[3]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v40; // [rsp+B0h] [rbp+38h] BYREF
  ULONG_PTR RegionSize; // [rsp+B8h] [rbp+40h] BYREF
  PVOID BaseAddress; // [rsp+C0h] [rbp+48h] BYREF
  int v43; // [rsp+C8h] [rbp+50h] BYREF
  int v44; // [rsp+CCh] [rbp+54h]

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v3 = (int)qword_1C02948D8;
  if ( qword_1C02948D8 )
    v3 = qword_1C02948D8();
  *(_DWORD *)(v2 + 1904) = v3;
  if ( !(unsigned int)bLoadProcessHandleQuota(v1) )
    *(_DWORD *)(v2 + 2376) = 10000;
  v4 = *(_DWORD *)(v2 + 1904);
  v5 = 0x10000LL;
  if ( v4 < 0x10000 )
    v5 = v4;
  v6 = qword_1C0294B10;
  if ( qword_1C0294B10 )
    v6 = (__int64 (*)(void))qword_1C0294B10();
  *(_QWORD *)(v2 + 1896) = v6;
  SemaphoreInternal = GreCreateSemaphoreInternal(0);
  *(_QWORD *)(v2 + 1912) = SemaphoreInternal;
  if ( !SemaphoreInternal )
    return 0LL;
  memset((void *)(v2 + 2200), 0, 0x7CuLL);
  if ( !HmgInitializeLookAsideList(1u, 0x888u, v8, 0x28u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(4u, 0x78u, v9, 0x60u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(5u, 0x458u, v10, 0x28u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(8u, 0xC8u, v11, 0xCu) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(0x10u, 0xB8u, v12, 0x60u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(0xAu, 0x278u, v13, 0x40u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(0xBu, 0x390u, v14, 0x37u) )
    return 0LL;
  FastMutex = GreCreateFastMutex();
  *(_QWORD *)(v2 + 144) = FastMutex;
  if ( !FastMutex )
    return 0LL;
  *(_QWORD *)(v2 + 2328) = 0LL;
  v17 = (_QWORD *)(v2 + 2344);
  *(_QWORD *)(v2 + 2336) = 0LL;
  v44 = 0;
  v43 = 1573528;
  if ( (int)Win32CreateSection((int)v2 + 2344, 6, v16, (unsigned int)&v43) < 0 )
    return 0LL;
  v18 = (void *)*v17;
  v19 = (struct _ENTRY **)(v2 + 1928);
  ViewSize = 0LL;
  if ( MmMapViewInSessionSpace(v18, (PVOID *)(v2 + 1928), &ViewSize) < 0 )
    return 0LL;
  v38 = 0LL;
  v40 = 0LL;
  v39[0] = 0LL;
  CurrentProcess = PsGetCurrentProcess(v21, v20, v22);
  if ( (int)MmMapViewOfSection(*v17, CurrentProcess, &v40, 0LL, 4096LL, v39, &v38, 2, 0x400000, 4, ViewSize) < 0 )
    return 0LL;
  RegionSize = 24 * v5;
  BaseAddress = (PVOID)v40;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 0LL;
  BaseAddress = (PVOID)(v40 + 1572864);
  RegionSize = 664LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 0LL;
  MmUnmapViewOfSection(CurrentProcess);
  v24 = *v19;
  v25 = *(_DWORD *)(v2 + 1904);
  *(_QWORD *)(v2 + 1936) = *v19;
  *(_QWORD *)(v2 + 1920) = (char *)v24 + 1572864;
  v26 = GdiHandleManager::Create(v25, v24, v5);
  *(_QWORD *)(v2 + 8008) = v26;
  if ( v26 )
  {
    v27 = 0;
    while ( 1 )
    {
      v28 = *(GdiHandleManager **)(v2 + 8008);
      LODWORD(v40) = 0;
      if ( !GdiHandleManager::AcquireEntryIndex(v28, (unsigned int *)&v40) )
        break;
      if ( (unsigned int)++v27 >= 0xA )
        goto LABEL_27;
    }
    GdiHandleManager::Destroy(*(struct GdiHandleManager **)(v2 + 8008));
    *(_QWORD *)(v2 + 8008) = 0LL;
  }
LABEL_27:
  if ( !*(_QWORD *)(v2 + 8008) )
    return 0LL;
  v29 = *v19;
  *(_QWORD *)(v2 + 3168) = (char *)*v19 + 1573040;
  *(_QWORD *)(v2 + 3176) = (char *)v29 + 1573216;
  *(_QWORD *)(v2 + 3184) = (char *)v29 + 1573392;
  HmgrStacksInit();
  v30 = (_DWORD *)NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 68LL, 8uLL, 0x6C6D6847u);
  *(_QWORD *)(v2 + 2352) = v30;
  if ( !v30 )
    return 0LL;
  v31 = gpLeakTrackingAllocator;
  *v30 = -100000;
  *(_DWORD *)(*(_QWORD *)(v2 + 2352) + 4LL) = -1;
  v32 = NSInstrumentation::CLeakTrackingAllocator::Allocate(v31, 260LL, 0x1000uLL, 0x6D746847u);
  v33 = gpLeakTrackingAllocator;
  *(_QWORD *)(v2 + 2368) = v32;
  v34 = (_QWORD *)NSInstrumentation::CLeakTrackingAllocator::Allocate(v33, 68LL, 8uLL, 0x6D746847u);
  v35 = *(_QWORD *)(v2 + 2368);
  *(_QWORD *)(v2 + 2360) = v34;
  if ( !v35 )
    return 0LL;
  if ( v34 && (*v34 = v35, InitializeReferenceTracker()) && InitializeTypeIsolation() )
    return 1LL;
  else
    return 0LL;
}
