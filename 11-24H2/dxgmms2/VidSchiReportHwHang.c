/*
 * XREFs of VidSchiReportHwHang @ 0x140044F38
 * Callers:
 *     VidSchiSubmitQueueCommandDirect @ 0x14004FDAC (VidSchiSubmitQueueCommandDirect.c)
 *     VidSchWaitForCompletionEvent @ 0x1400B5584 (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1400B5C20 (VidSchiCheckHwProgress.c)
 * Callees:
 *     VidSchiCheckFlipQueueTimeout @ 0x140011CC0 (VidSchiCheckFlipQueueTimeout.c)
 *     VidSchiClearFlipDevice @ 0x14001CD04 (VidSchiClearFlipDevice.c)
 *     VidSchiDecrementContextReference @ 0x140020D30 (VidSchiDecrementContextReference.c)
 *     VidSchiIncrementContextReference @ 0x140023740 (VidSchiIncrementContextReference.c)
 *     ?DdiResetEngine@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETENGINE@@@Z @ 0x14004B464 (-DdiResetEngine@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETENGINE@@@Z.c)
 *     ?GetDbgOwnerTag@DXGADAPTER@@QEAA_KXZ @ 0x14004EBDC (-GetDbgOwnerTag@DXGADAPTER@@QEAA_KXZ.c)
 *     VidSchiUnwaitAllContexts @ 0x1400500E0 (VidSchiUnwaitAllContexts.c)
 *     VidSchiCompleteAllPendingCommand @ 0x140053138 (VidSchiCompleteAllPendingCommand.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     VidSchiBlockDriverCallback @ 0x14008F928 (VidSchiBlockDriverCallback.c)
 *     VidSchiMarkTdrFaultingDevice @ 0x1400A8050 (VidSchiMarkTdrFaultingDevice.c)
 *     VidSchiCheckGPUTimeout @ 0x1400B5B80 (VidSchiCheckGPUTimeout.c)
 */

__int64 __fastcall VidSchiReportHwHang(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // r8
  __int64 result; // rax
  __int64 *v10; // r13
  __int64 v11; // r13
  signed __int64 v12; // rbx
  signed __int64 v13; // r14
  signed __int64 v14; // rsi
  signed __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rdi
  ULONG TimeIncrement; // eax
  ULONG v20; // r12d
  __int64 v21; // r14
  LARGE_INTEGER v22; // r13
  __int64 v23; // rbx
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  __int64 v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rbx
  int v28; // eax
  __int64 v29; // rax
  struct _VIDSCH_CONTEXT *v30; // rdi
  __int64 v31; // r13
  __int64 v32; // rdx
  _BYTE *v33; // rcx
  char v34; // al
  _BYTE *v35; // rax
  int v36; // eax
  __int64 v37; // rax
  _BYTE *v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  _BYTE *v41; // rcx
  __int64 v42; // r9
  char v43; // al
  _BYTE *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  _BYTE *v52; // rdx
  __int64 v53; // r8
  _BYTE *v54; // rcx
  __int64 v55; // r8
  char v56; // al
  _BYTE *v57; // rax
  __int64 v58; // rax
  bool IsRecoveryRequired; // al
  __int64 v60; // rdx
  unsigned int i; // ebx
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // rax
  bool v66; // cf
  __int64 v67; // rax
  unsigned int v68; // ebx
  signed __int32 v69[8]; // [rsp+0h] [rbp-B9h] BYREF
  __int64 v70; // [rsp+20h] [rbp-99h]
  int v71; // [rsp+30h] [rbp-89h]
  unsigned int v72; // [rsp+34h] [rbp-85h] BYREF
  int v73; // [rsp+38h] [rbp-81h]
  int v74; // [rsp+3Ch] [rbp-7Dh] BYREF
  unsigned int v75; // [rsp+40h] [rbp-79h] BYREF
  signed __int64 v76; // [rsp+48h] [rbp-71h]
  struct _VIDSCH_CONTEXT *v77; // [rsp+50h] [rbp-69h]
  int v78; // [rsp+58h] [rbp-61h]
  __int64 v79; // [rsp+60h] [rbp-59h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp-51h] BYREF
  __int64 v81; // [rsp+70h] [rbp-49h]
  unsigned __int64 v82; // [rsp+78h] [rbp-41h] BYREF
  __int64 v83; // [rsp+80h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-31h] BYREF
  _DXGKARG_RESETENGINE v85; // [rsp+A0h] [rbp-19h] BYREF
  PVOID BackTrace[2]; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v87; // [rsp+C0h] [rbp+7h]
  __int64 v88; // [rsp+D0h] [rbp+17h]

  v72 = -1;
  v78 = a3;
  v83 = a1;
  v71 = 0;
  v77 = 0LL;
  v81 = 0LL;
  v76 = 0LL;
  v79 = 0LL;
  v74 = 0;
  v82 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v75 = 0;
  v73 = 0;
  *(_OWORD *)BackTrace = 0LL;
  v88 = 0LL;
  v87 = 0LL;
  RtlCaptureStackBackTrace(1u, 5u, BackTrace, 0LL);
  WdLogSingleEntry5(3LL, BackTrace[0], BackTrace[1], v87, *((_QWORD *)&v87 + 1), v88);
  v8 = *(_QWORD *)(a1 + 3248);
  WdLogGlobalForLineNumber = 894;
  if ( v8 )
  {
    WdLogSingleEntry2(3LL, *(_QWORD *)(a1 + 16), v8);
    result = 1LL;
    WdLogGlobalForLineNumber = 902;
    return result;
  }
  if ( a3 != 1 && (unsigned int)(a3 - 9) > 2 )
  {
    if ( a3 != 2 )
    {
      if ( a3 == 3 )
      {
        KeFlushQueuedDpcs();
        if ( !(unsigned int)VidSchiCheckFlipQueueTimeout((KSPIN_LOCK *)a1, &v74, &v75, &v82, 0LL, &v72) )
          return 0LL;
        if ( v72 < 0x10 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1984), &LockHandle);
          v17 = *(_QWORD *)(a1 + 8LL * v72 + 3432);
          if ( v17 )
            v73 = *(_DWORD *)(v17 + 78944);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
      v14 = v76;
      goto LABEL_30;
    }
    KeFlushQueuedDpcs();
    if ( *(_DWORD *)(a1 + 784) )
    {
      v10 = (__int64 *)(a1 + 3256);
      if ( a4 )
      {
        *v10 = a4;
      }
      else if ( !(unsigned int)VidSchiCheckGPUTimeout(a1, 0LL, a1 + 3256) )
      {
        return 0LL;
      }
      v11 = *v10;
      if ( *(_DWORD *)(v11 + 3016) )
      {
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 96), 0LL, 0LL);
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 120), 0LL, 0LL);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1984), &LockHandle);
        v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 96), 0LL, 0LL);
        v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 120), 0LL, 0LL);
        if ( v12 == v14 && v13 == v15 )
        {
          v79 = *(_QWORD *)(v11 + 40);
          v16 = *(_QWORD *)(v11 + 8LL * *(unsigned int *)(v11 + 1576) + 1584);
          v77 = (struct _VIDSCH_CONTEXT *)v16;
          if ( v16 )
          {
            VidSchiIncrementContextReference(v16);
            v81 = *(_QWORD *)(v16 + 104);
          }
          ++*(_DWORD *)(v11 + 508);
        }
        else
        {
          v14 = v76;
          v71 = 1;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v73 = 0;
        if ( !v71 )
          goto LABEL_30;
      }
    }
    return 0LL;
  }
  if ( !a4 )
    a4 = **(_QWORD **)(a1 + 688);
  *(_QWORD *)(a1 + 3256) = a4;
  v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 96), 0LL, 0LL);
LABEL_30:
  ++*(_DWORD *)(a1 + 3264);
  v71 = 0;
  v18 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  PerformanceFrequency.QuadPart = 0LL;
  v20 = TimeIncrement;
  v21 = v18 - a2;
  v22 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v23 = MEMORY[0xFFFFF78000000014];
  RecoveryContext = TdrCreateRecoveryContext();
  v25 = v83;
  *(_QWORD *)(v83 + 3248) = RecoveryContext;
  WdLogSingleEntry5(3LL, *(_QWORD *)(v25 + 16), v18, v20, KeGetCurrentThread(), RecoveryContext);
  WdLogGlobalForLineNumber = 1128;
  v26 = *(_QWORD *)(v25 + 16);
  v70 = v23;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogSingleEntry4)(3LL, v26, (LARGE_INTEGER)v22.QuadPart);
  v27 = *(_QWORD *)(v25 + 3248);
  WdLogGlobalForLineNumber = 1130;
  if ( !v27 )
    goto LABEL_97;
  *(_QWORD *)(v27 + 8) = v25 + 3244;
  v28 = v78;
  *(_DWORD *)(v27 + 16) = v78;
  if ( v28 == 3 )
    *(_BYTE *)(v27 + 2921) = 1;
  if ( !*(_QWORD *)(v27 + 32) )
  {
    v29 = *(_QWORD *)(v25 + 16);
    *(_QWORD *)(v27 + 32) = v29;
    _InterlockedIncrement64((volatile signed __int64 *)(v29 + 24));
    *(_QWORD *)(v27 + 40) = -1LL;
  }
  v30 = v77;
  ++*(_DWORD *)(*(_QWORD *)(v27 + 32) + 3216LL);
  if ( !*(_QWORD *)(v27 + 48) && v30 )
  {
    VidSchiIncrementContextReference((__int64)v30);
    *(_QWORD *)(v27 + 48) = v30;
  }
  v31 = 15LL;
  if ( v25 == -3269 )
  {
    if ( !v81 )
      goto LABEL_62;
    v37 = *(_QWORD *)(v81 + 40);
    if ( !v37 || !*(_QWORD *)(v37 + 8) )
      goto LABEL_62;
    v38 = (_BYTE *)(v27 + 2821);
    *(_QWORD *)(v27 + 2808) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v30 + 13) + 40LL) + 8LL) + 56LL);
    v39 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v30 + 13) + 40LL) + 2648LL);
    if ( !v39 )
      goto LABEL_59;
    v40 = 15LL;
    v41 = (_BYTE *)(v27 + 2821);
    v42 = v39 - (_QWORD)v38;
    do
    {
      if ( v40 == -2147483631 )
        break;
      v43 = v41[v42];
      if ( !v43 )
        break;
      *v41++ = v43;
      --v40;
    }
    while ( v40 );
    v44 = v41 - 1;
    if ( v40 )
      v44 = v41;
    *v44 = 0;
    if ( !v40 )
LABEL_59:
      *v38 = 0;
    v36 = *((_DWORD *)v30 + 35);
  }
  else
  {
    v32 = 15LL;
    v33 = (_BYTE *)(v27 + 2821);
    do
    {
      if ( v32 == -2147483631 )
        break;
      v34 = v33[v25 + 3269 - (v27 + 2821)];
      if ( !v34 )
        break;
      *v33++ = v34;
      --v32;
    }
    while ( v32 );
    v35 = v33 - 1;
    if ( v32 )
      v35 = v33;
    *v35 = 0;
    if ( !v32 )
      *(_BYTE *)(v27 + 2821) = 0;
    v36 = *(_DWORD *)(v25 + 3284);
  }
  *(_DWORD *)(v27 + 2836) = v36;
LABEL_62:
  v45 = *(_QWORD *)(v27 + 32);
  *(_DWORD *)(v27 + 144) = 69639;
  *(_DWORD *)(v27 + 148) = DpiGetDriverVersion(*(_QWORD *)(v45 + 216));
  *(_QWORD *)(v27 + 24) = v21;
  v46 = *(_QWORD *)(v25 + 3256);
  if ( v46 )
    v47 = *(unsigned __int16 *)(v46 + 4);
  else
    v47 = 0;
  v48 = v72;
  *(_DWORD *)(v27 + 56) = v47;
  *(_QWORD *)(v27 + 72) = v79;
  *(_DWORD *)(v27 + 88) = v74;
  *(_QWORD *)(v27 + 96) = v82;
  *(_DWORD *)(v27 + 92) = v75;
  *(_QWORD *)(v27 + 64) = v14;
  *(_DWORD *)(v27 + 80) = v48;
  if ( (_DWORD)v48 != -1 )
  {
    v49 = *(_QWORD *)(v25 + 8 * v48 + 3432);
    if ( v49 )
    {
      v50 = *(_QWORD *)(v49 + 16);
      if ( v50 )
      {
        v51 = *(_QWORD *)(v50 + 40);
        if ( v51 )
        {
          v52 = (_BYTE *)(v27 + 2821);
          *(_QWORD *)(v27 + 2808) = *(_QWORD *)(v51 + 2656);
          v53 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 8 * v48 + 3432) + 16LL) + 40LL) + 2648LL);
          if ( !v53 )
            goto LABEL_77;
          v54 = (_BYTE *)(v27 + 2821);
          v55 = v53 - (_QWORD)v52;
          do
          {
            if ( v31 == -2147483631 )
              break;
            v56 = v54[v55];
            if ( !v56 )
              break;
            *v54++ = v56;
            --v31;
          }
          while ( v31 );
          v57 = v54 - 1;
          if ( v31 )
            v57 = v54;
          *v57 = 0;
          if ( !v31 )
LABEL_77:
            *v52 = 0;
        }
      }
    }
  }
  v58 = v73;
  *(_DWORD *)(v27 + 84) = v73;
  if ( (_DWORD)v58 )
  {
    WdLogSingleEntry2(3LL, *(_QWORD *)(v25 + 16), v58);
    WdLogGlobalForLineNumber = 1239;
  }
  *(_QWORD *)(v27 + 104) = DXGADAPTER::GetDbgOwnerTag(*(DXGADAPTER **)(v27 + 32));
  IsRecoveryRequired = TdrIsRecoveryRequired((struct _TDR_RECOVERY_CONTEXT *)v27);
  v60 = *(_QWORD *)(v25 + 16);
  if ( IsRecoveryRequired )
  {
    WdLogSingleEntry2(3LL, v60, *(_QWORD *)(v25 + 3248));
    WdLogGlobalForLineNumber = 1259;
    *(_DWORD *)(v25 + 3244) = 1;
    VidSchiBlockDriverCallback(v25);
    *(_DWORD *)(v25 + 36) = 23;
    RtlClearAllBitsEx(v25 + 640);
    *(_BYTE *)(v25 + 3268) &= ~8u;
    if ( v30 )
      VidSchiMarkTdrFaultingDevice(*((_QWORD *)v30 + 13));
    if ( (unsigned int)DpiGetDriverVersion(*(_QWORD *)(*(_QWORD *)(v25 + 16) + 216LL)) >= 0x6002 )
    {
      for ( i = 0; i < *(_DWORD *)(v25 + 76); ++i )
      {
        if ( !*(_BYTE *)(v25 + 55) )
        {
          v62 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 320) + 8LL * i) + 96LL);
          if ( *(_DWORD *)(v62 + 3016) )
          {
            v63 = *(unsigned __int16 *)(v62 + 4);
            v64 = *(_QWORD *)(v25 + 688);
            *(_QWORD *)&v85.NodeOrdinal = 0LL;
            v85.LastAbortedFenceId = 0;
            v65 = v64 + 8 * v63;
            v66 = (unsigned int)v63 < *(_DWORD *)(v25 + 760);
            if ( (unsigned int)v63 >= *(_DWORD *)(v25 + 760) )
              v65 = v64;
            v85.EngineOrdinal = *(unsigned __int16 *)(*(_QWORD *)v65 + 6LL);
            if ( v66 )
              v64 += 8 * v63;
            v85.NodeOrdinal = *(unsigned __int16 *)(*(_QWORD *)v64 + 8LL);
            if ( (int)ADAPTER_RENDER::DdiResetEngine(*(ADAPTER_RENDER **)(v25 + 8), &v85) < 0 )
            {
              *(_BYTE *)(v25 + 3268) |= 4u;
              break;
            }
          }
        }
      }
    }
    v67 = *(_QWORD *)(v25 + 16);
    *(_BYTE *)(v67 + 3054) = 0;
    _InterlockedOr(v69, 0);
    *(_BYTE *)(v67 + 3053) = 1;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) + 768LL) + 7016LL) = 1;
    VidSchiCompleteAllPendingCommand(v25);
    VidSchiUnwaitAllContexts(v25);
    VidSchiClearFlipDevice((struct _VIDSCH_GLOBAL *)v25, 0LL, 9, 0xFFFFFFFD, 0);
    v68 = 1;
    goto LABEL_98;
  }
  WdLogSingleEntry1(3LL, v60);
  WdLogGlobalForLineNumber = 1353;
  TdrCompleteRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)v27, 0, 1);
  *(_QWORD *)(v25 + 3248) = 0LL;
LABEL_97:
  v68 = v71;
LABEL_98:
  if ( v77 )
    VidSchiDecrementContextReference(v77, 0);
  return v68;
}
