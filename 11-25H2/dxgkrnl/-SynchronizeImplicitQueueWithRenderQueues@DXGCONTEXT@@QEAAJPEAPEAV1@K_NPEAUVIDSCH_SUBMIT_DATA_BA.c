/*
 * XREFs of ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x14032C7C4
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1402B61C0 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140317D20 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14034E19C (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1403B4660 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@@Z @ 0x1403FE340 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D5E0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D6D0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAI@Z @ 0x14003B7CC (-VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEA.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x14032CE90 (-GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x14032D508 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x14037A70C (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 */

__int64 __fastcall DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(
        DXGCONTEXT *this,
        struct DXGCONTEXT **a2,
        unsigned int a3,
        __int64 a4,
        struct VIDSCH_SUBMIT_DATA_BASE *a5,
        bool a6)
{
  char *v6; // r15
  __int64 v7; // r13
  _QWORD *v9; // r14
  unsigned int v10; // esi
  _QWORD *v11; // rax
  unsigned int v12; // r12d
  _BYTE *Pool2; // rbx
  _QWORD *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  int IsAllocationInPresentQueue; // r15d
  struct VIDSCH_SUBMIT_DATA_BASE *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  _QWORD *k; // rbx
  __int64 v26; // r12
  _QWORD *v27; // r14
  __int64 ***v28; // rbx
  __int64 **m; // rsi
  __int64 v30; // rcx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  _QWORD *v32; // rdx
  _QWORD *j; // rax
  _QWORD *v34; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v36; // rax
  int SyncObject; // eax
  unsigned int v38; // ebx
  DXGCONTEXT **v39; // r8
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r11
  _QWORD *v43; // r10
  _QWORD *v44; // r9
  _QWORD *i; // rdx
  struct VIDMM_MULTI_ALLOC *v46; // rax
  _BYTE v47[8]; // [rsp+70h] [rbp-90h] BYREF
  char v48; // [rsp+78h] [rbp-88h]
  __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  char v50; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+90h] [rbp-70h] BYREF
  __int64 v52; // [rsp+98h] [rbp-68h] BYREF
  char v53; // [rsp+A0h] [rbp-60h]
  PVOID P; // [rsp+B0h] [rbp-50h]
  _BYTE v55[64]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v56; // [rsp+F8h] [rbp-8h]
  _QWORD v57[16]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v58; // [rsp+190h] [rbp+90h] BYREF
  struct DXGCONTEXT **v59; // [rsp+198h] [rbp+98h]
  char v60; // [rsp+1A8h] [rbp+A8h]

  v60 = a4;
  v59 = a2;
  v6 = (char *)this + 240;
  v7 = a3;
  if ( !*((_QWORD *)this + 30) )
  {
    memset(v57, 0, 0x50uLL);
    HIDWORD(v57[0]) |= 0x80u;
    LODWORD(v57[0]) = 5;
    *((_QWORD *)this + 31) = 0LL;
    v57[1] = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v47, Global, 1);
    if ( !a6 )
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v47);
    v36 = DXGGLOBAL::GetGlobal();
    SyncObject = DXGGLOBAL::CreateSyncObject(
                   v36,
                   *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
                   *((_QWORD *)this + 2),
                   (unsigned int)(1 << *((_DWORD *)this + 97)),
                   v57,
                   17,
                   0,
                   0LL,
                   0LL,
                   v6,
                   0LL,
                   0LL,
                   0LL,
                   0LL);
    v38 = SyncObject;
    if ( SyncObject < 0 )
    {
      WdLogSingleEntry2(3LL, this, SyncObject);
      WdLogGlobalForLineNumber = 2823;
      if ( v48 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v47);
      return v38;
    }
    if ( v48 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v47);
    a2 = v59;
  }
  ++*((_QWORD *)this + 31);
  v9 = (_QWORD *)((char *)this + 400);
  v10 = 0;
  v58 = *((_QWORD *)this + 31);
  v11 = (_QWORD *)*((_QWORD *)this + 50);
  while ( v11 != v9 && v11 )
  {
    v11 = (_QWORD *)*v11;
    ++v10;
  }
  v12 = v7 + 1;
  if ( (unsigned int)(v7 + 1) > 1 )
  {
    v39 = a2 + 1;
    do
    {
      v10 += DXGCONTEXT::GetRenderHwQueueCount(*v39);
      v39 = (DXGCONTEXT **)(v40 + 8);
      a4 = v41 - 1;
    }
    while ( a4 );
  }
  Pool2 = 0LL;
  v56 = 0;
  P = 0LL;
  if ( v10 <= 8 )
  {
    Pool2 = v55;
    P = v55;
    if ( v10 )
    {
      memset(v55, 0, 8LL * v10);
      Pool2 = P;
    }
    goto LABEL_10;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v10 >= 8 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8LL * v10, 1265072196LL, a4);
    P = Pool2;
LABEL_10:
    v56 = v10;
  }
  if ( !Pool2 )
    return 3221225495LL;
  v14 = (_QWORD *)*v9;
  v15 = 0LL;
  while ( v14 != v9 && v14 )
  {
    *(_QWORD *)&Pool2[8 * v15] = v14[5];
    v15 = (unsigned int)(v15 + 1);
    v14 = (_QWORD *)*v14;
  }
  if ( v12 > 1 )
  {
    v42 = v7;
    v43 = v59 + 1;
    do
    {
      v44 = (_QWORD *)(*v43 + 400LL);
      for ( i = (_QWORD *)*v44; i != v44 && i; i = (_QWORD *)*i )
      {
        *(_QWORD *)&Pool2[8 * v15] = i[5];
        v15 = (unsigned int)(v15 + 1);
      }
      ++v43;
      --v42;
    }
    while ( v42 );
  }
  v16 = *(_QWORD *)(*(_QWORD *)v6 + 32LL);
  v50 = 0;
  v49 = v16 + 32;
  if ( v16 == -32 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(struct _KTHREAD **)(v49 + 24) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v49);
  v17 = *(_QWORD *)(*(_QWORD *)v6 + 32LL);
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 16LL) + 16LL);
  if ( (*(_DWORD *)(v17 + 408) & 4) != 0 )
  {
    v32 = (_QWORD *)(v17 + 424);
    for ( j = *(_QWORD **)(v17 + 424); j != v32; j = (_QWORD *)*j )
    {
      v34 = j - 14;
      if ( !v18 || v34[2] == v18 )
        goto LABEL_53;
    }
    v34 = 0LL;
LABEL_53:
    v19 = v34[4];
  }
  else
  {
    v19 = *(_QWORD *)(v17 + 456);
  }
  v51 = v19;
  IsAllocationInPresentQueue = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL) + 656LL))(
                                 v10,
                                 Pool2,
                                 1LL,
                                 &v51,
                                 0,
                                 &v58);
  if ( IsAllocationInPresentQueue < 0 )
  {
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v49);
  }
  else
  {
    v21 = a5;
    v22 = v58;
    v23 = v51;
    if ( a5 )
    {
      *((_QWORD *)a5 + 66) = v51;
      *((_QWORD *)v21 + 67) = v22;
    }
    if ( v60 )
    {
      IsAllocationInPresentQueue = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL)
                                                                                       + 640LL))(
                                     *((_QWORD *)this + 36),
                                     v23,
                                     v22);
    }
    else
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v49);
      for ( k = (_QWORD *)*v9; k != v9 && k; k = (_QWORD *)*k )
      {
        v30 = *(_QWORD *)(k[9] + 32LL);
        v53 = 0;
        v52 = v30 + 32;
        if ( v30 == -32 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 638;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( *(struct _KTHREAD **)(v52 + 24) == KeGetCurrentThread() )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 645;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
        }
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v52);
        VidSchSyncObject = DXGDEVICESYNCOBJECT::GetVidSchSyncObject((DXGDEVICESYNCOBJECT *)k[9]);
        IsAllocationInPresentQueue = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL) + 640LL))(
                                       *((_QWORD *)this + 36),
                                       VidSchSyncObject,
                                       k[10]);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v52);
      }
      if ( v12 > 1 )
      {
        v26 = v7;
        v27 = v59 + 1;
        do
        {
          v28 = (__int64 ***)(*v27 + 400LL);
          for ( m = *v28; m != (__int64 **)v28 && m; m = (__int64 **)*m )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v47, (struct DXGFASTMUTEX *const)(m[9][4] + 32), 0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
            v46 = DXGDEVICESYNCOBJECT::GetVidSchSyncObject((DXGDEVICESYNCOBJECT *)m[9]);
            IsAllocationInPresentQueue = VIDMM_EXPORT::VidMmIsAllocationInPresentQueue(
                                           *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                                           *((struct VIDMM_GLOBAL **)this + 36),
                                           v46,
                                           (unsigned int *)m[10]);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v47);
          }
          ++v27;
          --v26;
        }
        while ( v26 );
      }
    }
    if ( v50 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v49);
  }
  if ( P != v55 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return (unsigned int)IsAllocationInPresentQueue;
}
