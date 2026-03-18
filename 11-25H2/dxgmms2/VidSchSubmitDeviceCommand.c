/*
 * XREFs of VidSchSubmitDeviceCommand @ 0x1400349F4
 * Callers:
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1400FCE00 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1400FDAF8 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmAddPendingTermination@@YAXPEAUVIDMM_ALLOC@@@Z @ 0x140034E94 (-VidMmAddPendingTermination@@YAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidMmOfferAllocationCallback@@YAXPEAX@Z @ 0x140034F70 (-VidMmOfferAllocationCallback@@YAXPEAX@Z.c)
 *     VidSchIsDeviceBusy @ 0x140034FC8 (VidSchIsDeviceBusy.c)
 *     ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x140034FEC (-VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_.c)
 *     ?HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ @ 0x140035700 (-HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ.c)
 */

__int64 __fastcall VidSchSubmitDeviceCommand(_QWORD *a1, __int64 a2)
{
  bool v2; // si
  char v5; // r14
  __int64 v6; // rcx
  _QWORD *v7; // r13
  __int64 v8; // rbx
  __int64 v9; // r12
  unsigned int v10; // r10d
  int v11; // r11d
  _QWORD *v12; // r8
  __int64 v13; // rbx
  unsigned int v14; // r10d
  int v15; // r11d
  _QWORD *v16; // r8
  KSPIN_LOCK *v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 **v20; // rdx
  unsigned int v22; // edx
  bool v23; // cc
  _QWORD *k; // rdx
  int v25; // edi
  unsigned int v26; // edx
  _QWORD *i; // rdx
  _QWORD *v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // rcx
  int v31; // ebx
  __int64 *j; // rcx
  __int64 *m; // rcx
  _QWORD *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE v38; // [rsp+70h] [rbp-1h] BYREF
  __int128 v39; // [rsp+88h] [rbp+17h]
  __int64 v40; // [rsp+98h] [rbp+27h]

  v2 = 0;
  if ( !a1 || !a2 )
  {
    v31 = -1073741811;
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 7315;
    DxgkLogInternalTriageEvent(v36, 0x40000LL);
    return (unsigned int)v31;
  }
  v5 = 1;
  v6 = a1[4];
  v7 = *(_QWORD **)(a2 + 48);
  if ( *(_DWORD *)(a2 + 40) )
  {
    if ( *(_DWORD *)a2 != 1 )
      goto LABEL_50;
    memset(&v38, 0, sizeof(v38));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1984), &v38);
    v13 = a1[231];
    if ( a1[232] >= v13 || !(unsigned __int8)VidSchIsDeviceBusy(a1) )
      goto LABEL_49;
    v16 = (_QWORD *)a1[9];
    while ( v16 != a1 + 9 )
    {
      v26 = v14 + 1;
      v23 = v16[19] <= v16[17];
      v16 = (_QWORD *)*v16;
      if ( v23 )
        v26 = v14;
      v14 = v26;
    }
    for ( i = (_QWORD *)a1[11]; i != a1 + 11; i = (_QWORD *)*i )
    {
      for ( j = (__int64 *)i[4]; j != i + 4; j = (__int64 *)*j )
      {
        if ( *((_DWORD *)j + 35) && (j[8] > (unsigned __int64)j[7] || j[11] > (unsigned __int64)j[10]) )
          ++v15;
      }
    }
    if ( !v14 && !v15 )
    {
      a1[232] = v13;
      goto LABEL_49;
    }
    v5 = 0;
    if ( *(_DWORD *)(a2 + 40) == 3 )
    {
      v28 = *(_QWORD **)(a2 + 48);
      v40 = 0LL;
      v39 = 0LL;
      v29 = v28 + 27;
      v30 = v28[27];
      if ( v30 )
      {
        if ( *(_QWORD **)(v30 + 8) != v29 || (v34 = (_QWORD *)v28[28], (_QWORD *)*v34 != v29) )
LABEL_18:
          __fastfail(3u);
        *v34 = v30;
        *(_QWORD *)(v30 + 8) = v34;
        *v29 = 0LL;
        v35 = v28[12];
        v28[28] = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(v35 + 12));
      }
    }
    v31 = VidSchiAddPendingCommandToSyncPointList(a1, v7, v13, v14, v15, 3);
    if ( v31 >= 0 )
    {
LABEL_49:
      KeReleaseInStackQueuedSpinLock(&v38);
      if ( !v5 )
        return 0LL;
LABEL_50:
      VidMmOfferAllocationCallback(v7);
      return 0LL;
    }
    KeReleaseInStackQueuedSpinLock(&v38);
    return (unsigned int)v31;
  }
  *(_BYTE *)v7 = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = v7[1];
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1984), &LockHandle);
  v9 = a1[231];
  if ( !*(_DWORD *)a2 )
  {
    if ( !*(_DWORD *)(v8 + 156) && !*(_DWORD *)(v8 + 104) )
      v2 = (*(_BYTE *)(v8 + 25) & 1) == 0
        || !VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(*(VIDMM_GLOBAL_ALLOC_NONPAGED **)(v8 + 96));
    if ( v2 )
      goto LABEL_25;
LABEL_17:
    v17 = (KSPIN_LOCK *)(a1[4] + 2016LL);
    memset(&v38, 0, sizeof(v38));
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v17, &v38);
    v18 = (__int64 *)(v8 + 200);
    v19 = a1[4] + 2048LL;
    v20 = *(__int64 ***)(a1[4] + 2056LL);
    if ( *v20 != (__int64 *)v19 )
      goto LABEL_18;
    *v18 = v19;
    *(_QWORD *)(v8 + 208) = v20;
    *v20 = v18;
    *(_QWORD *)(v19 + 8) = v18;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v38);
LABEL_36:
    *(_BYTE *)v7 = 0;
LABEL_25:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v2 )
      VidMmAddPendingTermination((struct VIDMM_ALLOC *)v8);
    return 0LL;
  }
  if ( a1[232] >= v9 || !(unsigned __int8)VidSchIsDeviceBusy(a1) )
  {
LABEL_21:
    if ( !*(_DWORD *)(v8 + 156)
      && !*(_DWORD *)(v8 + 104)
      && ((*(_BYTE *)(v8 + 25) & 1) == 0
       || !VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(*(VIDMM_GLOBAL_ALLOC_NONPAGED **)(v8 + 96))) )
    {
      v2 = 1;
      goto LABEL_25;
    }
    goto LABEL_17;
  }
  v12 = (_QWORD *)a1[9];
  while ( v12 != a1 + 9 )
  {
    v22 = v10 + 1;
    v23 = v12[19] <= v12[17];
    v12 = (_QWORD *)*v12;
    if ( v23 )
      v22 = v10;
    v10 = v22;
  }
  for ( k = (_QWORD *)a1[11]; k != a1 + 11; k = (_QWORD *)*k )
  {
    for ( m = (__int64 *)k[4]; m != k + 4; m = (__int64 *)*m )
    {
      if ( *((_DWORD *)m + 35) && (m[8] > (unsigned __int64)m[7] || m[11] > (unsigned __int64)m[10]) )
        ++v11;
    }
  }
  if ( !v10 && !v11 )
  {
    a1[232] = v9;
    goto LABEL_21;
  }
  v25 = VidSchiAddPendingCommandToSyncPointList(a1, v8, v9, v10, v11, 0);
  if ( v25 >= 0 )
    goto LABEL_36;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)v25;
}
