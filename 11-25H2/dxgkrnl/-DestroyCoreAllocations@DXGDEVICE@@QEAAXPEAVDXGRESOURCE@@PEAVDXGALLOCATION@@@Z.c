/*
 * XREFs of ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x140339754
 * Callers:
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1401B927C (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1403396CC (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1400135A0 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140041804 (-VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_L.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x140047804 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ?VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x140047878 (-VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x140052FC4 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x14018887C (-TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1401AF8A8 (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 *     ?IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1402E0C5C (-IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402E15DC (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x140315D68 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x140339C04 (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z @ 0x140339FE4 (-DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x14033A0A0 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 */

void __fastcall DXGDEVICE::DestroyCoreAllocations(
        ADAPTER_RENDER **this,
        struct DXGRESOURCE *a2,
        struct DXGALLOCATION *a3)
{
  struct DXGALLOCATION *v6; // r9
  void **v7; // r12
  struct DXGALLOCATION *v8; // rbx
  struct DXGALLOCATION *v9; // rax
  struct DXGALLOCATION *v10; // r14
  struct DXGALLOCATION *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // r14
  struct VIDMM_MULTI_ALLOC *v14; // r8
  void *v15; // rcx
  ADAPTER_RENDER *v16; // rdx
  ADAPTER_RENDER *v17; // rcx
  void *v18; // r13
  int v19; // ebx
  unsigned int v20; // edx
  struct DXGALLOCATION *v21; // r14
  struct DXGADAPTERALLOCATION *v22; // rdx
  void *v23; // rcx
  unsigned int v24; // r14d
  struct VIDMM_MULTI_ALLOC *v25; // r13
  unsigned int v26; // r14d
  __int64 v27; // r8
  struct COREDEVICEACCESS *v28; // r9
  __int64 v29; // rax
  __int64 v31; // rax
  unsigned int v32; // r8d
  _QWORD v33[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGALLOCATION *v34; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGALLOCATION *v35; // [rsp+68h] [rbp-98h]
  _DXGKARG_CLOSEALLOCATION v36; // [rsp+70h] [rbp-90h] BYREF
  _DXGKARG_DESTROYALLOCATION v37; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-60h] BYREF
  char v39; // [rsp+A8h] [rbp-58h]
  void *v40[16]; // [rsp+B0h] [rbp-50h] BYREF

  v38 = 0LL;
  v39 = 0;
  v36 = 0LL;
  if ( a2 )
  {
    DXGAUTOMUTEX::Initialize((DXGAUTOMUTEX *)&v38, (struct DXGRESOURCE *)((char *)a2 + 80), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v38);
  }
  memset(v40, 0, sizeof(v40));
  if ( !a2 || (v7 = (void **)*((_QWORD *)a2 + 8)) == 0LL )
    v7 = v40;
  v8 = a3;
  v34 = a3;
  if ( a3 )
  {
    v9 = a3;
    v10 = a3;
    do
    {
      v11 = (struct DXGALLOCATION *)*((_QWORD *)v9 + 8);
      v12 = *((_QWORD *)v10 + 6);
      v33[0] = v11;
      v35 = v11;
      if ( v12 )
      {
        v20 = *(_DWORD *)(v12 + 4);
        if ( (v20 & 0x200B) != 0 )
          DXGDEVICE::TestAndSetDisplayedPrimary((DXGDEVICE *)this, (v20 >> 6) & 0xF, v8, v6);
      }
      v13 = *((_QWORD *)v10 + 6);
      if ( v13 )
      {
        v24 = *(_DWORD *)(v13 + 4);
        if ( (v24 & 0x2000) != 0 )
        {
          v25 = (struct VIDMM_MULTI_ALLOC *)*((_QWORD *)v8 + 3);
          if ( v25 )
          {
            v26 = (v24 >> 6) & 0xF;
            if ( DXGDEVICE::IsDirectFlipAllocationRequestedPinned((DXGDEVICE *)this, v8) )
            {
              if ( (unsigned __int8)VIDMM_EXPORT::VidMmIsAllocationPinned(
                                      *((VIDMM_EXPORT **)this[2] + 95),
                                      *((struct VIDMM_GLOBAL **)this[2] + 96),
                                      v25) )
              {
                if ( *(int *)(*((_QWORD *)this[2] + 2) + 3004LL) >= 2200 )
                  DXGDEVICE::UnpinDirectFlipAllocation((DXGDEVICE *)this, v26, v27, &v34, 0LL);
                else
                  DXGDEVICE::UnpinAllDirectFlipAllocations((DXGDEVICE *)this, v26, v27, v28);
              }
            }
          }
          v11 = (struct DXGALLOCATION *)v33[0];
        }
      }
      if ( (*((_DWORD *)v8 + 18) & 0x80000) != 0 )
        UnlockParavirtualizedAllocationOnGuest(v8, 0);
      v14 = (struct VIDMM_MULTI_ALLOC *)*((_QWORD *)v8 + 3);
      if ( v14 )
      {
        VIDMM_EXPORT::VidMmCloseAllocation(
          *((VIDMM_EXPORT **)this[2] + 95),
          *((struct VIDMM_GLOBAL **)this[2] + 96),
          v14,
          (struct VIDMM_LOCAL_ALLOC **)v8 + 10,
          0);
        *((_DWORD *)v8 + 18) |= 1u;
        *((_QWORD *)v8 + 3) = 0LL;
      }
      else
      {
        DXGDEVICE::TraceCloseParavirtualizedAllocation((DXGDEVICE *)this, v8);
      }
      v15 = (void *)*((_QWORD *)v8 + 4);
      if ( v15 )
      {
        v7[v36.NumAllocations++] = v15;
        *((_QWORD *)v8 + 4) = 0LL;
      }
      v9 = v35;
      v8 = v11;
      v34 = v11;
      v10 = v35;
    }
    while ( v11 );
  }
  if ( v36.NumAllocations )
  {
    v16 = this[77];
    v17 = this[2];
    v36.pOpenHandleList = v7;
    ADAPTER_RENDER::DdiCloseAllocation(v17, v16, &v36);
  }
  v18 = 0LL;
  v19 = 1;
  if ( a2 )
  {
    if ( (*((_DWORD *)a2 + 1) & 1) != 0 )
    {
      v29 = *(_QWORD *)(*((_QWORD *)a2 + 7) + 152LL);
      if ( v29 )
      {
        if ( *(ADAPTER_RENDER ***)(v29 + 80) == this && (*(_DWORD *)(v29 + 72))-- == 1 )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX(
            (DXGAUTOMUTEX *)v33,
            (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 152LL) + 8LL),
            0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 152LL) + 80LL) = 0LL;
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v33);
        }
      }
      v31 = *((_QWORD *)a2 + 3);
      v32 = 0;
      while ( v31 )
      {
        v31 = *(_QWORD *)(v31 + 64);
        ++v32;
      }
      DXGSHAREDRESOURCE::ReleaseReference(*((DXGSHAREDRESOURCE **)a2 + 7), v7, v32);
      *((_QWORD *)a2 + 7) = 0LL;
      v19 = 0;
    }
    else
    {
      v18 = (void *)*((_QWORD *)a2 + 7);
    }
  }
  memset(&v37, 0, sizeof(v37));
  if ( a3 )
  {
    v21 = a3;
    do
    {
      v22 = (struct DXGADAPTERALLOCATION *)*((_QWORD *)v21 + 6);
      a3 = (struct DXGALLOCATION *)*((_QWORD *)a3 + 8);
      if ( v22 )
      {
        if ( !v19 )
          goto LABEL_58;
        DXGDEVICE::DestroyAdapterAllocation((DXGDEVICE *)this, v22);
        v23 = *(void **)(*((_QWORD *)v21 + 6) + 16LL);
        if ( v23 )
        {
          v7[v37.NumAllocations++] = v23;
          *(_QWORD *)(*((_QWORD *)v21 + 6) + 16LL) = 0LL;
        }
      }
      else if ( !v19 )
      {
LABEL_58:
        if ( !a2 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 743;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pResource", 743LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( (*((_DWORD *)a2 + 1) & 1) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 744;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"pResource->m_SharedResource",
            744LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      v34 = a3;
      v21 = a3;
    }
    while ( a3 );
  }
  if ( v19 )
  {
    v37.hResource = v18;
    v37.Flags.Value = a2 != 0LL;
    if ( v37.NumAllocations )
    {
      v37.pAllocationList = v7;
    }
    else
    {
      v37.pAllocationList = 0LL;
      if ( !v18 )
        goto LABEL_21;
    }
    ADAPTER_RENDER::DdiDestroyAllocation(this[2], &v37, 0);
  }
LABEL_21:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v38);
}
