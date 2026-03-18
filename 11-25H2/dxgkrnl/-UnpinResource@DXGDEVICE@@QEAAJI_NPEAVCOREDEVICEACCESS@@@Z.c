/*
 * XREFs of ?UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1402E0900
 * Callers:
 *     NtDxgkUnpinResources @ 0x1402E0370 (NtDxgkUnpinResources.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x140056908 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402A0560 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1402A1CA8 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1402E0C5C (-IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAXIPEAVDXGALLOCATION@@@Z @ 0x1402E10A4 (-RemoveDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAXIPEAVDXGALLOCATION@@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402E15DC (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinResource(DXGDEVICE *this, unsigned int a2, char a3, struct COREDEVICEACCESS *a4)
{
  __int64 v4; // rbx
  __int64 v7; // r14
  unsigned int v9; // eax
  __int64 v10; // r9
  int v11; // edx
  struct _EX_RUNDOWN_REF *v12; // rdx
  struct _EX_RUNDOWN_REF *v13; // rbx
  ULONG_PTR i; // rbx
  unsigned int v15; // edi
  unsigned int v16; // edi
  DXGDEVICE *v17; // rcx
  unsigned int v18; // edi
  unsigned int v20; // r8d
  int v21; // eax
  __int64 v22; // rcx
  struct _EX_RUNDOWN_REF *v23; // [rsp+50h] [rbp-38h] BYREF
  struct DXGALLOCATION *v24; // [rsp+58h] [rbp-30h] BYREF
  struct _EX_RUNDOWN_REF *v25; // [rsp+90h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 5);
  v7 = a2;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v4 + 248));
  v9 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( v9 < *(_DWORD *)(v4 + 296) )
  {
    v10 = *(_QWORD *)(v4 + 280);
    if ( (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x60)
      && (*(_DWORD *)(v10 + 16LL * v9 + 8) & 0x2000) == 0 )
    {
      v11 = *(_DWORD *)(v10 + 16LL * v9 + 8) & 0x1F;
      if ( v11 )
      {
        if ( v11 == 4 )
        {
          v12 = *(struct _EX_RUNDOWN_REF **)(v10 + 16LL * v9);
          goto LABEL_7;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v12 = 0LL;
LABEL_7:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v25, v12);
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 264));
  ExReleasePushLockSharedEx(v4 + 248, 0LL);
  KeLeaveCriticalRegion();
  v13 = v25;
  v25 = 0LL;
  v23 = v13;
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v25);
  if ( v13 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v13[1].Count + 16) + 16LL) == *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
    {
      for ( i = v13[3].Count; ; i = *(_QWORD *)(i + 64) )
      {
        v24 = (struct DXGALLOCATION *)i;
        if ( !i )
        {
          v18 = 0;
          goto LABEL_16;
        }
        v15 = *(_DWORD *)(*(_QWORD *)(i + 48) + 4LL);
        if ( (v15 & 0x2000) != 0 )
        {
          v16 = (v15 >> 6) & 0xF;
          if ( a3 && !*((_DWORD *)this + 473) )
          {
            v18 = -1073741790;
            WdLogSingleEntry1(3LL, -1073741790LL);
            WdLogGlobalForLineNumber = 7031;
            goto LABEL_16;
          }
          if ( DXGDEVICE::IsDirectFlipAllocationRequestedPinned(this, (const struct DXGALLOCATION *)i) )
          {
            DXGDEVICE::RemoveDirectFlipAllocationFromRequestedPinnedList(v17, v16, (struct DXGALLOCATION *)i);
            v21 = DXGDEVICE::UnpinDirectFlipAllocation(this, v16, v20, &v24, a4);
            v18 = v21;
            if ( v21 < 0 )
            {
              WdLogSingleEntry2(3LL, i, v21);
              WdLogGlobalForLineNumber = 7047;
              goto LABEL_16;
            }
          }
        }
        else
        {
          v22 = *((_QWORD *)this + 2);
          if ( (*(_DWORD *)(*(_QWORD *)(v22 + 16) + 444LL) & 0x200) == 0 )
          {
            v18 = -1073741811;
            WdLogSingleEntry2(3LL, v7, -1073741811LL);
            WdLogGlobalForLineNumber = 7009;
            goto LABEL_16;
          }
          if ( (*(_DWORD *)(i + 72) & 0x800) != 0 )
          {
            VIDMM_EXPORT::VidMmUnpinAllocation(
              *(VIDMM_EXPORT **)(v22 + 760),
              *(struct VIDMM_GLOBAL **)(v22 + 768),
              *(struct VIDMM_MULTI_ALLOC **)(i + 24));
            *(_DWORD *)(i + 72) &= ~0x800u;
          }
        }
      }
    }
    v18 = -1073741811;
    WdLogSingleEntry3(2LL, this, v13, -1073741811LL);
    WdLogGlobalForLineNumber = 6996;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%p does not match resource 0x%p owner, returning 0x%I64x",
      (__int64)this,
      (__int64)v13,
      -1073741811LL,
      0LL,
      0LL);
  }
  else
  {
    v18 = -1073741811;
    WdLogSingleEntry2(3LL, v7, -1073741811LL);
    WdLogGlobalForLineNumber = 6988;
  }
LABEL_16:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v23);
  return v18;
}
