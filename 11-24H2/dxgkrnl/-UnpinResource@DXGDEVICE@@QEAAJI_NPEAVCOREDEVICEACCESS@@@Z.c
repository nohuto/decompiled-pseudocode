/*
 * XREFs of ?UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1403ADAF0
 * Callers:
 *     NtDxgkUnpinResources @ 0x1403AD560 (NtDxgkUnpinResources.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1400560B8 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     Feature_4078915896__private_IsEnabledDeviceUsageNoInline @ 0x14006B7A8 (Feature_4078915896__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402E58BC (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x14032B83C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x14032CC54 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1403B0794 (-IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAXIPEAVDXGALLOCATION@@@Z @ 0x1403B27E8 (-RemoveDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAXIPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinResource(DXGDEVICE *this, unsigned int a2, char a3, struct COREDEVICEACCESS *a4)
{
  __int64 v4; // rbx
  __int64 v8; // r15
  unsigned int v9; // eax
  __int64 v10; // r9
  int v11; // edx
  struct _EX_RUNDOWN_REF *v12; // rdx
  struct _EX_RUNDOWN_REF *v13; // rbx
  unsigned int v14; // edi
  ULONG_PTR Count; // rbx
  ULONG_PTR v16; // rax
  unsigned int v17; // edi
  __int64 v18; // rcx
  unsigned int v19; // edi
  DXGDEVICE *v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  struct _EX_RUNDOWN_REF *v24; // [rsp+50h] [rbp-20h] BYREF
  struct DXGALLOCATION *v25; // [rsp+58h] [rbp-18h] BYREF
  _BYTE v26[16]; // [rsp+60h] [rbp-10h] BYREF
  struct _EX_RUNDOWN_REF *v27; // [rsp+A0h] [rbp+30h] BYREF

  v4 = *((_QWORD *)this + 5);
  v27 = 0LL;
  v8 = a2;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v4 + 248));
  v9 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( v9 < *(_DWORD *)(v4 + 296) )
  {
    v10 = *(_QWORD *)(v4 + 280);
    if ( (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x60)
      && (*(_DWORD *)(v10 + 16LL * v9 + 8) & 0x2000) == 0 )
    {
      v11 = *(_DWORD *)(v10 + 16LL * v9 + 8) & 0x1F;
      if ( v11 )
      {
        if ( v11 == 4 )
        {
          v12 = *(struct _EX_RUNDOWN_REF **)(v10 + 16LL * v9);
          goto LABEL_8;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v12 = 0LL;
LABEL_8:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v24, v12);
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 264));
  ExReleasePushLockSharedEx(v4 + 248, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::MoveAssign(&v27, &v24);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v24);
  v13 = v27;
  if ( !v27 )
  {
    v14 = -1073741811;
    WdLogSingleEntry2(3LL, v8, -1073741811LL);
    WdLogGlobalForLineNumber = 7217;
    goto LABEL_28;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v27[1].Count + 16) + 16LL) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
  {
    v14 = -1073741811;
    WdLogSingleEntry3(2LL, this, v27, -1073741811LL);
    WdLogGlobalForLineNumber = 7225;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Device 0x%p does not match resource 0x%p owner, returning 0x%I64x",
      (__int64)this,
      (__int64)v13,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_28;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (struct DXGFASTMUTEX *const)&v27[10], 0);
  if ( (unsigned int)Feature_4078915896__private_IsEnabledDeviceUsageNoInline() )
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  Count = v13[3].Count;
  v25 = (struct DXGALLOCATION *)Count;
  if ( !Count )
  {
LABEL_26:
    v14 = 0;
    goto LABEL_27;
  }
  v16 = Count;
  while ( 1 )
  {
    v17 = *(_DWORD *)(*(_QWORD *)(v16 + 48) + 4LL);
    if ( (v17 & 0x2000) == 0 )
    {
      v18 = *((_QWORD *)this + 2);
      if ( (*(_DWORD *)(*(_QWORD *)(v18 + 16) + 444LL) & 0x200) == 0 )
      {
        v14 = -1073741811;
        WdLogSingleEntry2(3LL, v8, -1073741811LL);
        WdLogGlobalForLineNumber = 7248;
        goto LABEL_27;
      }
      if ( (*(_DWORD *)(Count + 72) & 0x800) != 0 )
      {
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(v18 + 760),
          *(struct VIDMM_GLOBAL **)(v18 + 768),
          *(struct VIDMM_MULTI_ALLOC **)(Count + 24));
        *(_DWORD *)(Count + 72) &= ~0x800u;
      }
      goto LABEL_25;
    }
    v19 = (v17 >> 6) & 0xF;
    if ( a3 && !*((_DWORD *)this + 477) )
    {
      v14 = -1073741790;
      WdLogSingleEntry1(3LL, -1073741790LL);
      WdLogGlobalForLineNumber = 7270;
      goto LABEL_27;
    }
    if ( DXGDEVICE::IsDirectFlipAllocationRequestedPinned(this, (const struct DXGALLOCATION *)Count) )
    {
      DXGDEVICE::RemoveDirectFlipAllocationFromRequestedPinnedList(v20, v19, (struct DXGALLOCATION *)Count);
      v22 = DXGDEVICE::UnpinDirectFlipAllocation(this, v19, v21, &v25, a4);
      v14 = v22;
      if ( v22 < 0 )
        break;
    }
LABEL_25:
    Count = *(_QWORD *)(Count + 64);
    v25 = (struct DXGALLOCATION *)Count;
    v16 = Count;
    if ( !Count )
      goto LABEL_26;
  }
  WdLogSingleEntry2(3LL, Count, v22);
  WdLogGlobalForLineNumber = 7286;
LABEL_27:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v26);
LABEL_28:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v27);
  return v14;
}
