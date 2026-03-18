/*
 * XREFs of ?AcquireMultiPlaneOverlay3FlipFences@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@IPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGSYNCOBJECTLOCK@@PEAVDXGSYNCOBJECTMUTEX@@3@Z @ 0x14034ADF8
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1402B61C0 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x140052FC4 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402FCB50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::AcquireMultiPlaneOverlay3FlipFences(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        int a3,
        struct VIDSCH_SUBMIT_DATA_BASE *a4,
        struct DXGSYNCOBJECTLOCK *a5,
        struct DXGSYNCOBJECTMUTEX *a6,
        struct DXGSYNCOBJECTMUTEX *a7)
{
  struct VIDSCH_SUBMIT_DATA_BASE *v7; // rbp
  int v8; // r14d
  const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v9; // rsi
  __int64 v10; // rbx
  char v11; // r8
  unsigned int i; // r12d
  __int64 v13; // rcx
  D3DKMT_MULTIPLANE_OVERLAY3 *v15; // rsi
  UINT LayerIndex; // r9d
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // rdx
  __int64 Value; // rdx
  __int64 v23; // rbx
  __int64 j; // rcx
  struct DXGPROCESS *Current; // rax
  UINT v26; // ebx
  struct DXGPROCESS *v27; // r15
  volatile signed __int32 *v28; // r14
  unsigned int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rbp
  int v32; // ecx
  int v33; // ecx
  __int64 v34; // rbp
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 k; // rcx
  struct DXGPROCESS *v37; // rax
  struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS::$390DB612F88C1DE2E40C850E65A6A89F::$1196FF6CE8067B2B35B898660F75E27E v38; // ebx
  struct DXGPROCESS *v39; // r15
  volatile signed __int32 *v40; // r14
  unsigned int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // rbp
  int v44; // ecx
  int v45; // ecx
  __int64 v46; // rbp
  struct _VIDSCH_SYNC_OBJECT *v47; // rax
  __int64 v48; // [rsp+20h] [rbp-E8h]
  __int64 v49; // [rsp+20h] [rbp-E8h]
  __int64 v50; // [rsp+20h] [rbp-E8h]
  __int64 v51; // [rsp+20h] [rbp-E8h]
  UINT v52; // [rsp+50h] [rbp-B8h]
  __int64 v56; // [rsp+68h] [rbp-A0h]
  _DWORD v58[16]; // [rsp+88h] [rbp-80h]

  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3049LL) )
  {
    if ( *((_BYTE *)a5 + 8) )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, a5, 0LL, 0LL);
      WdLogGlobalForLineNumber = 2859;
    }
    v10 = *(_QWORD *)a5;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v10 + 600), 1u);
    v11 = 0;
    *((_BYTE *)a5 + 8) = 1;
    for ( i = 0; i < v9->PresentPlaneCount; ++i )
    {
      v15 = v9->ppPresentPlanes[i];
      LayerIndex = v15->LayerIndex;
      v17 = 1 << v15->LayerIndex;
      v52 = v15->LayerIndex;
      if ( (v17 & v8) != 0 )
      {
        v18 = (v8 & (v17 - 1) & 0x55555555) + (((v8 & (unsigned int)(v17 - 1)) >> 1) & 0x55555555);
        v19 = (((v18 & 0x33333333) + ((v18 >> 2) & 0x33333333)) & 0xF0F0F0F)
            + ((((v18 & 0x33333333) + ((v18 >> 2) & 0x33333333)) >> 4) & 0xF0F0F0F);
        v20 = (unsigned __int16)((unsigned __int8)v19 + BYTE1(v19))
            + (((v19 & 0xFF00FF) + ((v19 >> 8) & 0xFF00FF)) >> 16);
      }
      else
      {
        v20 = -1;
      }
      v21 = v15[1].LayerIndex;
      v56 = v20 * ((8 * *((_DWORD *)v7 + 152) + 231) & 0xFFFFFFF8);
      if ( (_DWORD)v21 )
      {
        for ( j = 0LL; (unsigned int)j < i; j = (unsigned int)(j + 1) )
        {
          if ( (_DWORD)v21 == v58[(unsigned int)j] )
          {
            WdLogSingleEntry2(2LL, v21, -1073741811LL);
            v48 = v15[1].LayerIndex;
            WdLogGlobalForLineNumber = 1527;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Duplicate hFlipToFence (0x%I64x). FlipToFence must be different for every plane, returning 0x%I64x",
              v48,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            return 3221225485LL;
          }
        }
        v58[i] = v21;
        Current = DXGPROCESS::GetCurrent(j);
        v26 = v15[1].LayerIndex;
        v27 = Current;
        v28 = (volatile signed __int32 *)((char *)Current + 248);
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
        v29 = (v26 >> 6) & 0xFFFFFF;
        if ( v29 < *((_DWORD *)v27 + 74)
          && (v30 = *((_QWORD *)v27 + 35),
              v31 = 2LL * v29,
              v32 = *(_DWORD *)(v30 + 16LL * v29 + 8),
              ((v26 >> 25) & 0x60) == (v32 & 0x60))
          && (v32 & 0x2000) == 0
          && (v33 = v32 & 0x1F) != 0 )
        {
          if ( v33 != 11 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
            goto LABEL_31;
          }
          v34 = *(_QWORD *)(v30 + 8 * v31);
        }
        else
        {
LABEL_31:
          v34 = 0LL;
        }
        _InterlockedDecrement(v28 + 4);
        ExReleasePushLockSharedEx(v28, 0LL);
        KeLeaveCriticalRegion();
        if ( v34 )
        {
          DXGAUTOMUTEX::Initialize(
            (struct DXGSYNCOBJECTMUTEX *)((char *)a6 + 16 * i),
            (struct DXGFASTMUTEX *const)(*(_QWORD *)(v34 + 32) + 32LL),
            0);
          DXGAUTOMUTEX::Acquire((struct DXGSYNCOBJECTMUTEX *)((char *)a6 + 16 * i));
          VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                               *(DXGSYNCOBJECT **)(v34 + 32),
                               *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
          v11 = 1;
          v7 = a4;
          LayerIndex = v52;
          *(_QWORD *)((char *)a4 + v56 + 808) = VidSchSyncObject;
          *(_QWORD *)((char *)a4 + v56 + 816) = *(_QWORD *)&v15[1].FlipInterval;
          goto LABEL_14;
        }
        WdLogSingleEntry2(2LL, v15[1].LayerIndex, -1073741811LL);
        v49 = v15[1].LayerIndex;
        WdLogGlobalForLineNumber = 1539;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"hFlipToFence (0x%I64x) not found, returning 0x%I64x",
          v49,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        return 3221225485LL;
      }
LABEL_14:
      Value = v15[1].InputFlags.Value;
      if ( (_DWORD)Value )
      {
        if ( (v15->InputFlags.Value & 1) == 0 )
        {
          v23 = LayerIndex;
          WdLogSingleEntry2(2LL, LayerIndex, -1073741811LL);
          WdLogGlobalForLineNumber = 1557;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"hFlipAwayFence is not supported for disabling plane (0x%I64x), returning 0x%I64x",
            v23,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
          return 3221225485LL;
        }
        for ( k = 0LL; (unsigned int)k < i; k = (unsigned int)(k + 1) )
        {
          if ( (_DWORD)Value == v58[(unsigned int)k + 8] )
          {
            WdLogSingleEntry2(2LL, Value, -1073741811LL);
            v50 = v15[1].InputFlags.Value;
            WdLogGlobalForLineNumber = 1570;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Duplicate hFlipAwayFence (0x%I64x). FlipAwayFence must be different for every plane, returning 0x%I64x",
              v50,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            return 3221225485LL;
          }
        }
        v58[i + 8] = Value;
        v37 = DXGPROCESS::GetCurrent(k);
        v38 = (struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS::$390DB612F88C1DE2E40C850E65A6A89F::$1196FF6CE8067B2B35B898660F75E27E)v15[1].InputFlags.Value;
        v39 = v37;
        v40 = (volatile signed __int32 *)((char *)v37 + 248);
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v37 + 248));
        v41 = (*(unsigned int *)&v38 >> 6) & 0xFFFFFF;
        if ( v41 < *((_DWORD *)v39 + 74)
          && (v42 = *((_QWORD *)v39 + 35),
              v43 = 2LL * v41,
              v44 = *(_DWORD *)(v42 + 16LL * v41 + 8),
              ((*(unsigned int *)&v38 >> 25) & 0x60) == (v44 & 0x60))
          && (v44 & 0x2000) == 0
          && (v45 = v44 & 0x1F) != 0 )
        {
          if ( v45 != 11 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
            goto LABEL_45;
          }
          v46 = *(_QWORD *)(v42 + 8 * v43);
        }
        else
        {
LABEL_45:
          v46 = 0LL;
        }
        _InterlockedDecrement(v40 + 4);
        ExReleasePushLockSharedEx(v40, 0LL);
        KeLeaveCriticalRegion();
        if ( v46 )
        {
          DXGAUTOMUTEX::Initialize(
            (struct DXGSYNCOBJECTMUTEX *)((char *)a7 + 16 * i),
            (struct DXGFASTMUTEX *const)(*(_QWORD *)(v46 + 32) + 32LL),
            0);
          DXGAUTOMUTEX::Acquire((struct DXGSYNCOBJECTMUTEX *)((char *)a7 + 16 * i));
          v47 = DXGSYNCOBJECT::GetVidSchSyncObject(
                  *(DXGSYNCOBJECT **)(v46 + 32),
                  *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
          v11 = 1;
          v7 = a4;
          *(_QWORD *)((char *)a4 + v56 + 824) = v47;
          *(_QWORD *)((char *)a4 + v56 + 832) = *(_QWORD *)&v15[1].AllocationCount;
          goto LABEL_15;
        }
        WdLogSingleEntry2(2LL, v15[1].InputFlags.Value, -1073741811LL);
        v51 = v15[1].InputFlags.Value;
        WdLogGlobalForLineNumber = 1582;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"hFlipFromFence (0x%I64x) not found, returning 0x%I64x",
          v51,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        return 3221225485LL;
      }
LABEL_15:
      v9 = a2;
      v8 = a3;
    }
    if ( !v11 )
    {
      if ( !*((_BYTE *)a5 + 8) )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, a5, 0LL, 0LL);
        WdLogGlobalForLineNumber = 2893;
      }
      v13 = *(_QWORD *)a5;
      *((_BYTE *)a5 + 8) = 0;
      ExReleaseResourceLite(*(PERESOURCE *)(v13 + 600));
      KeLeaveCriticalRegion();
    }
  }
  return 0LL;
}
