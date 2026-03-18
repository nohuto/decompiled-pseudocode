/*
 * XREFs of ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAUDXGK_PRESENT_PARAMS@@1@Z @ 0x1401EB208
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1402C3A40 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F5CF8 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140301EA0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1403A620C (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@@Z @ 0x1403F8340 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DD50 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?VidSchSubmitSignalToHwQueue@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x140039410 (-VidSchSubmitSignalToHwQueue@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@IPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAI@Z @ 0x140039D8C (-VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEA.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1402F94BC (-GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x1402FA1CC (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x14035E2D0 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 */

__int64 __fastcall DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(
        DXGCONTEXT *this,
        struct DXGCONTEXT **a2,
        unsigned int a3,
        char a4,
        struct VIDSCH_SUBMIT_DATA_BASE *a5,
        struct DXGK_PRESENT_PARAMS *a6,
        bool a7)
{
  __int64 v7; // r13
  char v9; // r15
  __int64 v10; // r14
  __int64 v11; // rdx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v13; // rax
  int SyncObject; // eax
  unsigned int v15; // edi
  unsigned int v17; // r12d
  unsigned int RenderHwQueueCount; // esi
  __int64 v19; // r8
  DXGCONTEXT **v20; // r8
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *Pool2; // rdi
  __int64 v24; // r8
  struct DXGCONTEXT **v25; // r14
  int IsAllocationInPresentQueue; // r15d
  struct VIDSCH_SUBMIT_DATA_BASE *v27; // rax
  unsigned int *v28; // r9
  struct VIDMM_MULTI_ALLOC *v29; // r8
  _QWORD *i; // rdx
  __int64 v31; // r11
  _QWORD *v32; // r10
  _QWORD *v33; // r9
  _QWORD *j; // rdx
  __int64 **k; // rdi
  struct VIDMM_MULTI_ALLOC *v36; // rax
  _QWORD *v37; // r14
  __int64 v38; // r12
  __int64 ***v39; // rdi
  __int64 **m; // rsi
  struct VIDMM_MULTI_ALLOC *v41; // rax
  _BYTE v42[16]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v43[16]; // [rsp+88h] [rbp-80h] BYREF
  PVOID P; // [rsp+98h] [rbp-70h]
  _BYTE v45[64]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v46; // [rsp+E0h] [rbp-28h]
  _QWORD v47[16]; // [rsp+E8h] [rbp-20h] BYREF
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+178h] [rbp+70h] BYREF
  struct DXGCONTEXT **v49; // [rsp+180h] [rbp+78h]
  char v50; // [rsp+190h] [rbp+88h]

  v50 = a4;
  v49 = a2;
  v7 = a3;
  v9 = 0;
  v10 = 0LL;
  if ( a6 )
  {
    v11 = *((_QWORD *)a6 + 188);
    if ( v11 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 5028LL) & 0x80u) != 0
        && !*((_DWORD *)a6 + 23) )
      {
        v9 = 1;
        v10 = *(_QWORD *)(*(_QWORD *)v11 + 40LL);
      }
    }
  }
  if ( !*((_QWORD *)this + 30) )
  {
    memset(v47, 0, 0x50uLL);
    HIDWORD(v47[0]) |= 0x80u;
    LODWORD(v47[0]) = 5;
    *((_QWORD *)this + 31) = 0LL;
    v47[1] = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v42, Global, 1);
    if ( !a7 )
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v42);
    v13 = DXGGLOBAL::GetGlobal();
    SyncObject = DXGGLOBAL::CreateSyncObject(
                   v13,
                   *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
                   *((_QWORD *)this + 2),
                   (unsigned int)(1 << *((_DWORD *)this + 97)),
                   v47,
                   17,
                   0,
                   0LL,
                   0LL,
                   (char *)this + 240,
                   0LL,
                   0LL,
                   0LL,
                   0LL);
    v15 = SyncObject;
    if ( SyncObject < 0 )
    {
      WdLogSingleEntry2(3LL, this, SyncObject);
      WdLogGlobalForLineNumber = 2839;
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v42);
      return v15;
    }
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v42);
  }
  a6 = (struct DXGK_PRESENT_PARAMS *)++*((_QWORD *)this + 31);
  v17 = v7 + 1;
  RenderHwQueueCount = DXGCONTEXT::GetRenderHwQueueCount(this);
  if ( (unsigned int)(v7 + 1) > 1 )
  {
    v20 = (DXGCONTEXT **)(v19 + 8);
    do
    {
      RenderHwQueueCount += DXGCONTEXT::GetRenderHwQueueCount(*v20);
      v20 = (DXGCONTEXT **)(v21 + 8);
    }
    while ( v22 != 1 );
  }
  Pool2 = 0LL;
  v46 = 0;
  P = 0LL;
  if ( RenderHwQueueCount <= 8 )
  {
    Pool2 = v45;
    P = v45;
    if ( RenderHwQueueCount )
    {
      memset(v45, 0, 8LL * RenderHwQueueCount);
      Pool2 = P;
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / RenderHwQueueCount < 8 )
      goto LABEL_21;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * RenderHwQueueCount, 1265072196LL);
    P = Pool2;
  }
  v46 = RenderHwQueueCount;
LABEL_21:
  if ( !Pool2 )
    return 3221225495LL;
  v24 = 0LL;
  if ( v9 && v10 )
  {
    *Pool2 = v10;
    RenderHwQueueCount = 1;
  }
  else
  {
    for ( i = (_QWORD *)*((_QWORD *)this + 50); i != (_QWORD *)((char *)this + 400) && i; i = (_QWORD *)*i )
    {
      Pool2[v24] = i[5];
      v24 = (unsigned int)(v24 + 1);
    }
    if ( v17 > 1 )
    {
      v25 = v49;
      v31 = v7;
      v32 = v49 + 1;
      do
      {
        v33 = (_QWORD *)(*v32 + 400LL);
        for ( j = (_QWORD *)*v33; j != v33 && j; j = (_QWORD *)*j )
        {
          Pool2[v24] = j[5];
          v24 = (unsigned int)(v24 + 1);
        }
        ++v32;
        --v31;
      }
      while ( v31 );
      goto LABEL_27;
    }
  }
  v25 = v49;
LABEL_27:
  DXGAUTOMUTEX::DXGAUTOMUTEX(
    (DXGAUTOMUTEX *)v43,
    (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 30) + 32LL) + 32LL),
    0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v43);
  VidSchSyncObject = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(*((DXGDEVICESYNCOBJECT **)this + 30));
  IsAllocationInPresentQueue = VIDSCH_EXPORT::VidSchSubmitSignalToHwQueue(
                                 *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                                 RenderHwQueueCount,
                                 (struct VIDSCH_HW_QUEUE **)Pool2,
                                 1u,
                                 &VidSchSyncObject,
                                 0,
                                 (const unsigned __int64 *)&a6);
  if ( IsAllocationInPresentQueue >= 0 )
  {
    v27 = a5;
    v28 = (unsigned int *)a6;
    v29 = VidSchSyncObject;
    if ( a5 )
    {
      *((_QWORD *)a5 + 66) = VidSchSyncObject;
      *((_QWORD *)v27 + 67) = v28;
    }
    if ( v50 )
    {
      IsAllocationInPresentQueue = VIDMM_EXPORT::VidMmIsAllocationInPresentQueue(
                                     *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                                     *((struct VIDMM_GLOBAL **)this + 36),
                                     v29,
                                     v28);
    }
    else
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v43);
      for ( k = (__int64 **)*((_QWORD *)this + 50); k != (__int64 **)((char *)this + 400) && k; k = (__int64 **)*k )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v42, (struct DXGFASTMUTEX *const)(k[9][4] + 32), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v42);
        v36 = DXGDEVICESYNCOBJECT::GetVidSchSyncObject((DXGDEVICESYNCOBJECT *)k[9]);
        IsAllocationInPresentQueue = VIDMM_EXPORT::VidMmIsAllocationInPresentQueue(
                                       *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                                       *((struct VIDMM_GLOBAL **)this + 36),
                                       v36,
                                       (unsigned int *)k[10]);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v42);
      }
      if ( v17 > 1 )
      {
        v37 = v25 + 1;
        v38 = v7;
        do
        {
          v39 = (__int64 ***)(*v37 + 400LL);
          for ( m = *v39; m != (__int64 **)v39 && m; m = (__int64 **)*m )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v42, (struct DXGFASTMUTEX *const)(m[9][4] + 32), 0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v42);
            v41 = DXGDEVICESYNCOBJECT::GetVidSchSyncObject((DXGDEVICESYNCOBJECT *)m[9]);
            IsAllocationInPresentQueue = VIDMM_EXPORT::VidMmIsAllocationInPresentQueue(
                                           *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                                           *((struct VIDMM_GLOBAL **)this + 36),
                                           v41,
                                           (unsigned int *)m[10]);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v42);
          }
          ++v37;
          --v38;
        }
        while ( v38 );
      }
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v43);
  if ( P != v45 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return (unsigned int)IsAllocationInPresentQueue;
}
