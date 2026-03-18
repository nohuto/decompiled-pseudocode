/*
 * XREFs of ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x14032D508
 * Callers:
 *     NtDxgkCreateNativeFenceInternal @ 0x1401F2318 (NtDxgkCreateNativeFenceInternal.c)
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x140321478 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x14032C7C4 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x14032CEE8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ @ 0x14032EA88 (-EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1403A0990 (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77@Z @ 0x140180008 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAE@Z @ 0x1401811E4 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAE@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAU_D3DDDI_NATIVEFENCEINFO@@@Z @ 0x14032D9B8 (--0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJE.c)
 *     ?SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z @ 0x14032DB0C (-SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x14033DFDC (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ??0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1403B86D0 (--0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::CreateSyncObject(
        __int64 a1,
        struct ADAPTER_RENDER *a2,
        struct DXGDEVICE *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        bool a7,
        struct DXGPAGINGQUEUE *a8,
        __int64 *a9,
        struct DXGDEVICESYNCOBJECT **a10,
        unsigned int *a11,
        struct DXGADAPTERSYNCOBJECT **a12,
        __int64 a13,
        unsigned __int8 *a14)
{
  unsigned int v16; // ebx
  const wchar_t *v17; // r9
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rbx
  _QWORD *v22; // rcx
  __int64 v23; // rcx
  struct DXGPROCESS *Current; // rax
  int v25; // esi
  int v26; // eax
  int v27; // eax
  __int64 *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  struct DXGDEVICESYNCOBJECT *v32; // rcx
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS v33; // [rsp+50h] [rbp-68h]
  unsigned int v36; // [rsp+D8h] [rbp+20h]

  v36 = a4;
  if ( !a9 && !a10 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3024;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"ppSyncObject != NULL || ppDeviceSyncObject != NULL",
      3024LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a5 )
  {
    if ( a13 )
    {
      v16 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      v17 = L"Cannot create syncobject using both SyncObjectInfo and NativeFenceInfo, returning 0x%I64x";
      WdLogGlobalForLineNumber = 3029;
      goto LABEL_5;
    }
  }
  else if ( !a13 )
  {
    v16 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v17 = L"Cannot create syncobject without specifying either SyncObjectInfo and NativeFenceInfo, returning 0x%I64x";
    WdLogGlobalForLineNumber = 3036;
LABEL_5:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v17, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    return v16;
  }
  if ( a9 )
    *a9 = 0LL;
  if ( a10 )
    *a10 = 0LL;
  if ( a11 )
    *a11 = 0;
  if ( a5 )
    v19 = *(_DWORD *)(a5 + 4);
  else
    v19 = *(_DWORD *)(a13 + 16);
  if ( (v19 & 4) != 0 )
  {
    v20 = operator new(0x1C0uLL, 0x4B677844u, 64LL, a4);
    v21 = v20;
    if ( v20 )
    {
      DXGSYNCOBJECT::DXGSYNCOBJECT(v20, a1, a5, a6, a13);
      v22[55] = 0LL;
      v22[54] = v22 + 53;
      v22[53] = v22 + 53;
    }
    else
    {
      v21 = 0LL;
    }
    if ( !v21 )
      goto LABEL_21;
  }
  else
  {
    v30 = operator new(0x218uLL, 0x4B677844u, 64LL, a4);
    v21 = v30;
    if ( !v30 )
    {
LABEL_21:
      v16 = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 3074;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Out of memory allocating DXGSYNCOBJECT class, returning 0x%I64x",
        -1073741801LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return v16;
    }
    DXGSYNCOBJECT::DXGSYNCOBJECT(v30, a1, a5, a6, a13);
    DXGADAPTERSYNCOBJECT::DXGADAPTERSYNCOBJECT((DXGADAPTERSYNCOBJECT *)(v31 + 424), a2);
  }
  v23 = *(_DWORD *)(v21 + 412) ^ ((unsigned __int8)*(_DWORD *)(v21 + 412) ^ (unsigned __int8)(2
                                                                                            * *(_BYTE *)(*((_QWORD *)a2 + 2) + 209LL))) & 2u;
  *(_DWORD *)(v21 + 412) = v23;
  Current = DXGPROCESS::GetCurrent(v23);
  DXGSYNCOBJECT::SetVmSyncObject((DXGSYNCOBJECT *)v21, Current);
  v25 = DXGSYNCOBJECT::Initialize((DXGSYNCOBJECT *)v21, a8, a3, a14);
  if ( v25 >= 0 )
  {
    if ( !a11 && (unsigned int)(*(_DWORD *)(v21 + 404) - 5) > 2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v21 + 24));
      goto LABEL_32;
    }
    v26 = *(_DWORD *)(v21 + 404);
    if ( v26 == 7 )
    {
      v25 = DXGSYNCOBJECT::Open(
              (DXGSYNCOBJECT *)v21,
              a2,
              a3,
              a10,
              a11,
              0LL,
              0LL,
              v36,
              a12,
              a7,
              *(struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)(a13 + 16),
              a8,
              a14,
              0,
              0);
      if ( v25 >= 0 )
      {
        v32 = *a10;
        *(_QWORD *)(a13 + 24) = *((_QWORD *)*a10 + 7);
        *(_QWORD *)(a13 + 32) = *((_QWORD *)v32 + 6);
        *(_QWORD *)(a13 + 40) = *((_QWORD *)v32 + 15);
        goto LABEL_32;
      }
    }
    else
    {
      v33.0 = *(struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E *)(a5 + 4);
      if ( v26 == 6 )
        v27 = DXGSYNCOBJECT::Open(
                (DXGSYNCOBJECT *)v21,
                a2,
                a3,
                a10,
                a11,
                (void **)(a5 + 24),
                (unsigned __int64 *)(a5 + 32),
                v36,
                a12,
                a7,
                v33,
                0LL,
                0LL,
                0,
                0);
      else
        v27 = DXGSYNCOBJECT::Open(
                (DXGSYNCOBJECT *)v21,
                a2,
                a3,
                a10,
                a11,
                (void **)(a5 + 16),
                (unsigned __int64 *)(a5 + 24),
                v36,
                a12,
                a7,
                v33,
                0LL,
                0LL,
                0,
                0);
      v25 = v27;
      if ( v27 >= 0 )
      {
LABEL_32:
        DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(a1 + 536));
        v28 = (__int64 *)(a1 + 584);
        v29 = *(_QWORD *)(a1 + 584);
        if ( *(_QWORD *)(v29 + 8) != a1 + 584 )
          __fastfail(3u);
        *(_QWORD *)v21 = v29;
        *(_QWORD *)(v21 + 8) = v28;
        *(_QWORD *)(v29 + 8) = v21;
        *v28 = v21;
        DXGFASTMUTEX::Release((struct _KTHREAD **)(a1 + 536));
        if ( a9 )
          *a9 = v21;
        return (unsigned int)v25;
      }
    }
  }
  DXGSYNCOBJECT::Destroy((DXGSYNCOBJECT *)v21);
  return (unsigned int)v25;
}
