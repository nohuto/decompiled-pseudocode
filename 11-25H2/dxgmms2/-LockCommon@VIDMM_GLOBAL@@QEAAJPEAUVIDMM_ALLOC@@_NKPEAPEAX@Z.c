/*
 * XREFs of ?LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAX@Z @ 0x1400F35B8
 * Callers:
 *     ?Lock2@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@KPEAPEAX@Z @ 0x1400F353C (-Lock2@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@KPEAPEAX@Z.c)
 *     ?Lock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@KPEAPEAX@Z @ 0x140112974 (-Lock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1400341A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140034390 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ValidateCommonLockParameters @ 0x140036F20 (ValidateCommonLockParameters.c)
 *     ?HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ @ 0x14003822C (-HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ.c)
 *     NeedsApertureForLock @ 0x140039994 (NeedsApertureForLock.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400ABB28 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?LockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N1KPEAPEAXPEA_N@Z @ 0x1400CD020 (-LockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N1KPEAPEAXPEA_N@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E6F70 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?IsComplexLockRequired@VIDMM_PHYSICAL_ADAPTER@@QEBA_NPEBUVIDMM_LOCAL_ALLOC@@@Z @ 0x140114618 (-IsComplexLockRequired@VIDMM_PHYSICAL_ADAPTER@@QEBA_NPEBUVIDMM_LOCAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockCommon(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        unsigned __int8 a3,
        unsigned int a4,
        void **a5)
{
  int v6; // r13d
  __int64 result; // rax
  int v9; // r14d
  __int64 *v10; // r12
  _QWORD *v11; // rdi
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // r9d
  unsigned int v17; // r10d
  VIDMM_PHYSICAL_ADAPTER *v18; // r13
  __int64 v19; // rbx
  bool v20; // bl
  void **v21; // r13
  unsigned __int8 v22; // r12
  bool v23; // zf
  __int64 v24; // rdx
  __int64 *v25; // rax
  __int64 v26; // rcx
  bool IsComplexLockRequired; // [rsp+58h] [rbp-61h] BYREF
  __int64 v28; // [rsp+60h] [rbp-59h] BYREF
  char v29; // [rsp+68h] [rbp-51h]
  __int64 v30; // [rsp+70h] [rbp-49h]
  _QWORD v31[18]; // [rsp+78h] [rbp-41h] BYREF

  v6 = a3;
  *a5 = 0LL;
  result = ValidateCommonLockParameters((__int64)this, a2);
  v9 = result;
  if ( (int)result < 0 )
    return result;
  v10 = *a2;
  IsComplexLockRequired = 0;
  v11 = (_QWORD *)*v10;
  v12 = *v10 + 312;
  v30 = *(_QWORD *)*v10;
  v28 = v12;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v12, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(v12 + 8) = KeGetCurrentThread();
  v13 = *((_DWORD *)v11 + 46);
  v29 = 1;
  if ( v13 && v6 != (*((_BYTE *)v11 + 40) != 0) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 21646;
LABEL_5:
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v28);
    return 3221225485LL;
  }
  if ( !*((_DWORD *)v10 + 17) )
  {
    if ( (*((_DWORD *)v11 + 7) & 0x80u) == 0 )
    {
      if ( (*((_DWORD *)v11 + 6) & 0x80u) == 0 )
      {
        WdLogSingleEntry0(1LL);
        v15 = 21693;
        goto LABEL_12;
      }
    }
    else if ( (*(_DWORD *)v11[47] & 4) != 0 )
    {
      if ( (v11[3] & 0x40) == 0 && (*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 8) == 0 )
      {
        WdLogSingleEntry0(1LL);
        v15 = 21670;
LABEL_12:
        WdLogGlobalForLineNumber = v15;
        DxgkLogInternalTriageEvent(v14, 0x40000LL);
        goto LABEL_5;
      }
    }
    else if ( VIDMM_ALLOC::HasAnyResidencyReferences((VIDMM_ALLOC *)a2)
           && NeedsApertureForLock((__int64)this, (__int64)v11)
           && !v16
           && (v11[3] & 0x100) == 0 )
    {
      WdLogSingleEntry0(v17);
      v15 = 21679;
      goto LABEL_12;
    }
  }
  v18 = *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029) + 8LL * (v11[3] & 0x3F));
  if ( v11[29] )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v11 + 17));
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v11[28] + 144LL))(v11[28], v11[29]);
    DXGFASTMUTEX::Release((struct _KTHREAD **)v11 + 17);
  }
  v19 = v30;
  if ( (*(_DWORD *)(v30 + 56) & 0x10) == 0 )
    goto LABEL_25;
  IsComplexLockRequired = VIDMM_PHYSICAL_ADAPTER::IsComplexLockRequired(v18, (const struct VIDMM_LOCAL_ALLOC *)v10);
  v20 = IsComplexLockRequired;
  if ( !IsComplexLockRequired )
  {
    v19 = v30;
LABEL_25:
    v21 = a5;
    v22 = a3;
    v9 = VIDMM_GLOBAL::LockInternal(this, (volatile signed __int32 **)a2, 0, a3, a4, a5, &IsComplexLockRequired);
    if ( v9 >= 0 )
    {
      v20 = IsComplexLockRequired;
    }
    else
    {
      v23 = (*(_BYTE *)(v19 + 56) & 0x10) == 0;
      v20 = IsComplexLockRequired;
      if ( !v23 )
        v20 = 1;
    }
    goto LABEL_31;
  }
  v22 = a3;
  v21 = a5;
LABEL_31:
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v28);
  if ( v20 )
  {
    memset(v31, 0, 0x58uLL);
    v24 = v11[3] & 0x3F;
    LODWORD(v31[5]) = a4;
    v25 = a2[1];
    LODWORD(v31[0]) = 208;
    v31[2] = a2;
    v26 = v25[9];
    v31[4] = v21;
    BYTE4(v31[5]) = v22;
    v9 = VIDMM_GLOBAL::QueueDeferredCommand(
           (struct VIDMM_WORKER_THREAD **)this,
           *(struct VIDMM_PAGING_QUEUE **)(32 * v24 + v26),
           (struct _VIDMM_DEFERRED_COMMAND *)v31,
           1,
           0LL);
  }
  if ( v9 >= 0 && !*((_BYTE *)this + 40940) )
    VIDMM_GLOBAL::WaitForAllPagingEngines(this, (struct VIDMM_GLOBAL_ALLOC *)v11);
  return (unsigned int)v9;
}
