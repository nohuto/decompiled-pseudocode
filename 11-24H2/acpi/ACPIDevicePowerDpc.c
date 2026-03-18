/*
 * XREFs of ACPIDevicePowerDpc @ 0x140026120
 * Callers:
 *     <none>
 * Callees:
 *     ACPIIsPhase3ListEmptyOfUnblockedItems @ 0x140025BF0 (ACPIIsPhase3ListEmptyOfUnblockedItems.c)
 *     ACPIDevicePowerProcessGenericPhase @ 0x140025F9C (ACPIDevicePowerProcessGenericPhase.c)
 *     ACPIDeviceCompleteRequest @ 0x140026ACC (ACPIDeviceCompleteRequest.c)
 *     ACPIDeviceRecordDependencies @ 0x140026E84 (ACPIDeviceRecordDependencies.c)
 *     ACPIDevicePowerProcessBlockedItems @ 0x1400271F8 (ACPIDevicePowerProcessBlockedItems.c)
 *     ACPIDeviceRecordBlockedOnPhase3List @ 0x14002728C (ACPIDeviceRecordBlockedOnPhase3List.c)
 *     ACPIIsPowerRequestBlocked @ 0x140027704 (ACPIIsPowerRequestBlocked.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x140027B10 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIInternalMovePowerList @ 0x140027D5C (ACPIInternalMovePowerList.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x140027DFC (ACPIDevicePowerProcessPhase3.c)
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     _ACPIInternalError @ 0x14004C514 (_ACPIInternalError.c)
 *     ACPIMovePowerListUnblockedItems @ 0x14005D140 (ACPIMovePowerListUnblockedItems.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

void __fastcall ACPIDevicePowerDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // eax
  PVOID *v5; // rdx
  __int64 *v6; // rdx
  __int64 *v7; // rcx
  int v8; // r8d
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  PVOID *v13; // rcx
  PVOID *v14; // r8
  int v15; // r9d
  _DWORD *v16; // rax
  bool v17; // zf
  _QWORD *v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rcx
  PVOID *v21; // rdi
  char v22; // r15
  PVOID *v23; // r14
  PVOID *v24; // rbx
  unsigned __int32 v25; // eax
  unsigned __int32 v26; // esi
  __int64 v27; // rdx
  PVOID *v28; // rdi
  PVOID *v29; // rbx
  PVOID *v30; // rsi
  PVOID *v31; // rdi
  unsigned __int32 v32; // eax
  __int64 v33; // rdx
  PVOID **v34; // rcx
  PVOID *v35; // rbx
  int v36; // eax
  int v37; // eax
  char v38; // r15
  PVOID *v39; // r14
  PVOID *v40; // rbx
  unsigned __int32 v41; // eax
  unsigned __int32 v42; // esi
  __int64 v43; // rdx
  int v44; // eax
  __int64 *v45; // rcx
  __int64 *v46; // rdx
  int v47; // r9d
  _DWORD *v48; // rax
  bool v49; // zf
  __int64 v50; // r8
  __int64 v51; // rax
  _QWORD *v52; // rdx
  PVOID *v53; // rax
  PVOID **v54; // rcx
  PVOID **v55; // rax
  PVOID *v56; // rax
  PVOID **v57; // rcx
  PVOID **v58; // rax
  PVOID *v59; // rax
  PVOID **v60; // rcx
  PVOID **v61; // rax
  int v62; // eax
  __int64 *v63; // rcx
  __int64 *v64; // rax
  PVOID Entry; // [rsp+38h] [rbp-18h] BYREF
  PVOID *p_Entry; // [rsp+40h] [rbp-10h]

  p_Entry = &Entry;
  Entry = &Entry;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
  v4 = AcpiPowerDpcFlags;
  v5 = &AcpiPowerPhase5List;
  if ( (AcpiPowerDpcFlags & 2) == 0 )
    goto LABEL_47;
  do
  {
    v6 = (__int64 *)AcpiPowerQueueList;
    AcpiPowerDpcFlags = v4 & 0xFFFFFFFD;
    if ( (__int64 *)AcpiPowerQueueList != &AcpiPowerQueueList )
    {
      do
      {
        v7 = v6;
        v6 = (__int64 *)*v6;
        if ( !*((_DWORD *)v7 + 12) )
        {
          v8 = *(_DWORD *)(v7[5] + 740);
          if ( v8 > 0 )
          {
            v62 = *((_DWORD *)v7 + 14);
            if ( (v62 & 0x2000000) == 0 )
            {
              *((_DWORD *)v7 + 14) = v62 | 0x2000000;
              _InterlockedAdd(&AcpiPowerCurrentPagingPathTransitions, 1u);
            }
          }
          else if ( !v8 )
          {
            v9 = *((_DWORD *)v7 + 14);
            if ( (v9 & 0x2000000) != 0 )
            {
              *((_DWORD *)v7 + 14) = v9 & 0xFDFFFFFF;
              _InterlockedDecrement(&AcpiPowerCurrentPagingPathTransitions);
            }
          }
        }
        _InterlockedExchange((volatile __int32 *)v7 + 52, 3);
      }
      while ( v6 != &AcpiPowerQueueList );
      v10 = AcpiPowerQueueList;
      if ( (__int64 *)AcpiPowerQueueList != &AcpiPowerQueueList )
      {
        v11 = qword_14008B008;
        v12 = p_Entry;
        *(_QWORD *)qword_14008B008 = &Entry;
        p_Entry = (PVOID *)v11;
        *(_QWORD *)(v10 + 8) = v12;
        *v12 = v10;
        qword_14008B008 = (__int64)&AcpiPowerQueueList;
        AcpiPowerQueueList = (__int64)&AcpiPowerQueueList;
      }
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
    if ( (__int64 *)AcpiPowerPhase3List == &AcpiPowerPhase3List )
    {
      if ( (__int64 *)AcpiPowerBlockedOnPhase3List != &AcpiPowerBlockedOnPhase3List )
        ACPIInternalMovePowerList(&AcpiPowerBlockedOnPhase3List, &Entry);
    }
    else if ( Entry != &Entry )
    {
      ACPIDeviceRecordBlockedOnPhase3List(&Entry);
    }
    if ( Entry != &Entry )
    {
      ACPIDeviceRecordDependencies(&Entry);
      v13 = (PVOID *)Entry;
      if ( Entry != &Entry )
      {
        while ( 1 )
        {
          v14 = v13;
          v13 = (PVOID *)*v13;
          if ( !*((_DWORD *)v14 + 12) )
          {
            v15 = *((_DWORD *)v14[5] + 185);
            v16 = v14 + 7;
            v17 = v15 == 0;
            if ( v15 <= 0 )
              goto LABEL_18;
            if ( (*v16 & 0x2000000) != 0 )
            {
              v17 = v15 == 0;
LABEL_18:
              if ( v17 && (*v16 & 0x2000000) != 0 )
              {
                *v16 &= ~0x2000000u;
                _InterlockedDecrement(&AcpiPowerCurrentPagingPathTransitions);
              }
              goto LABEL_21;
            }
            *v16 |= 0x2000000u;
            _InterlockedAdd(&AcpiPowerCurrentPagingPathTransitions, 1u);
          }
LABEL_21:
          _InterlockedExchange((volatile __int32 *)v14 + 52, 3);
          if ( v13 == &Entry )
          {
            v18 = Entry;
            if ( Entry != &Entry )
            {
              v19 = (__int64)p_Entry;
              v20 = (_QWORD *)qword_14008B038;
              *p_Entry = &AcpiPowerPhase0List;
              qword_14008B038 = v19;
              v18[1] = v20;
              *v20 = v18;
              p_Entry = &Entry;
              Entry = &Entry;
            }
            break;
          }
        }
      }
    }
    if ( (__int64 *)AcpiPowerBlockedOnDependencyList != &AcpiPowerBlockedOnDependencyList )
      ACPIDevicePowerProcessBlockedItems();
    v21 = (PVOID *)AcpiPowerPhase0List;
    if ( AcpiPowerPhase0List != &AcpiPowerPhase0List )
    {
      v22 = 1;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v21 == &AcpiPowerPhase0List )
            {
              if ( v22 )
                ACPIInternalMovePowerList(&AcpiPowerPhase0List, &AcpiPowerPhase1List);
              goto LABEL_34;
            }
            v23 = (PVOID *)*v21;
            v24 = v21;
            v25 = _InterlockedCompareExchange((volatile signed __int32 *)v21 + 52, 1, 1);
            v26 = v25;
            if ( v25 >= 5 )
LABEL_137:
              ACPIInternalError(0xC17D7uLL);
            _mm_lfence();
            v27 = AcpiDevicePowerProcessPhase0Dispatch[v25];
            if ( !v27 )
              break;
            _InterlockedCompareExchange((volatile signed __int32 *)v21 + 52, 1, v25);
            if ( (*(int (__fastcall **)(PVOID *))(v27 + 8LL * *((int *)v21 + 12)))(v21) < 0 )
              v21 = v23;
          }
          v21 = v23;
          if ( v25 != 1 )
            break;
          if ( !(unsigned __int8)ACPIIsPowerRequestBlocked(v24) )
            goto LABEL_105;
          v56 = (PVOID *)*v24;
          if ( *((PVOID **)*v24 + 1) != v24
            || (v57 = (PVOID **)v24[1], *v57 != v24)
            || (*v57 = v56,
                v56[1] = v57,
                v24[12] = &AcpiPowerPhase0List,
                v58 = (PVOID **)qword_14008B018,
                *(__int64 **)qword_14008B018 != &AcpiPowerBlockedOnDependencyList) )
          {
LABEL_114:
            __fastfail(3u);
          }
          *v24 = &AcpiPowerBlockedOnDependencyList;
          v24[1] = v58;
          *v58 = v24;
          qword_14008B018 = (__int64)v24;
        }
        if ( v25 )
        {
LABEL_105:
          v22 = 0;
          if ( v26 == 2 )
            ACPIDeviceCompleteRequest(v24);
        }
      }
    }
LABEL_34:
    v28 = (PVOID *)AcpiPowerPhase1List;
    if ( AcpiPowerPhase1List == &AcpiPowerPhase1List || AcpiPowerPhase0List != &AcpiPowerPhase0List )
      goto LABEL_35;
    v38 = 1;
    while ( v28 != &AcpiPowerPhase1List )
    {
      v39 = (PVOID *)*v28;
      v40 = v28;
      v41 = _InterlockedCompareExchange((volatile signed __int32 *)v28 + 52, 1, 1);
      v42 = v41;
      if ( v41 >= 7 )
        goto LABEL_137;
      _mm_lfence();
      v43 = AcpiDevicePowerProcessPhase1Dispatch[v41];
      if ( v43 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)v28 + 52, 1, v41);
        if ( (*(int (__fastcall **)(PVOID *))(v43 + 8LL * *((int *)v28 + 12)))(v28) < 0 )
          v28 = v39;
      }
      else
      {
        v28 = v39;
        if ( v41 == 1 )
        {
          if ( !(unsigned __int8)ACPIIsPowerRequestBlocked(v40) )
            goto LABEL_112;
          v59 = (PVOID *)*v40;
          if ( *((PVOID **)*v40 + 1) != v40 )
            goto LABEL_114;
          v60 = (PVOID **)v40[1];
          if ( *v60 != v40 )
            goto LABEL_114;
          *v60 = v59;
          v59[1] = v60;
          v40[12] = &AcpiPowerPhase1List;
          v61 = (PVOID **)qword_14008B018;
          if ( *(__int64 **)qword_14008B018 != &AcpiPowerBlockedOnDependencyList )
            goto LABEL_114;
          *v40 = &AcpiPowerBlockedOnDependencyList;
          v40[1] = v61;
          *v61 = v40;
          qword_14008B018 = (__int64)v40;
        }
        else if ( v41 )
        {
LABEL_112:
          v38 = 0;
          if ( v42 == 2 )
            ACPIDeviceCompleteRequest(v40);
        }
      }
    }
    if ( v38 )
      ACPIInternalMovePowerList(&AcpiPowerPhase1List, &AcpiPowerPhase2List);
LABEL_35:
    if ( AcpiPowerPhase0List == &AcpiPowerPhase0List
      && AcpiPowerPhase1List == &AcpiPowerPhase1List
      && (__int64 *)AcpiPowerPhase2List != &AcpiPowerPhase2List )
    {
      v37 = ACPIDevicePowerProcessGenericPhase(
              &AcpiPowerPhase2List,
              (__int64)&AcpiDevicePowerProcessPhase2Dispatch,
              7u,
              0);
      if ( v37 >= 0 && v37 != 259 )
        ACPIInternalMovePowerList(&AcpiPowerPhase2List, &AcpiPowerPhase3List);
    }
    if ( AcpiPowerPhase0List == &AcpiPowerPhase0List
      && AcpiPowerPhase1List == &AcpiPowerPhase1List
      && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List
      && (__int64 *)AcpiPowerPhase3List != &AcpiPowerPhase3List )
    {
      v36 = ACPIDevicePowerProcessPhase3();
      if ( v36 >= 0 )
      {
        if ( v36 == 259 )
        {
          if ( ACPIIsPhase3ListEmptyOfUnblockedItems() )
          {
            ACPIMovePowerListUnblockedItems(&AcpiPowerPhase3List);
            v63 = (__int64 *)AcpiPowerPhase3List;
            while ( v63 != &AcpiPowerPhase3List )
            {
              v64 = v63;
              v63 = (__int64 *)*v63;
              *((_DWORD *)v64 + 14) &= 0xEEFFFFFF;
            }
          }
        }
        else
        {
          ACPIInternalMovePowerList(&AcpiPowerPhase3List, &AcpiPowerPhase4List);
        }
      }
    }
    if ( AcpiPowerPhase4List != &AcpiPowerPhase4List )
    {
      v44 = ACPIDevicePowerProcessPhase4();
      if ( v44 >= 0 && v44 != 259 )
        ACPIInternalMovePowerList(&AcpiPowerPhase4List, &AcpiPowerPhase5List);
    }
    v29 = (PVOID *)AcpiPowerPhase5List;
    if ( AcpiPowerPhase5List != &AcpiPowerPhase5List )
    {
      while ( 1 )
      {
LABEL_39:
        if ( v29 == &AcpiPowerPhase5List )
          goto LABEL_45;
        v30 = (PVOID *)*v29;
        v31 = v29;
        v32 = _InterlockedCompareExchange((volatile signed __int32 *)v29 + 52, 1, 1);
        if ( v32 >= 9 )
          goto LABEL_137;
        _mm_lfence();
        v33 = AcpiDevicePowerProcessPhase5Dispatch[v32];
        if ( v33 )
          break;
        v29 = v30;
        if ( v32 == 1 )
        {
          if ( (unsigned __int8)ACPIIsPowerRequestBlocked(v31) )
          {
            v53 = (PVOID *)*v31;
            if ( *((PVOID **)*v31 + 1) != v31 )
              goto LABEL_114;
            v54 = (PVOID **)v31[1];
            if ( *v54 != v31 )
              goto LABEL_114;
            *v54 = v53;
            v53[1] = v54;
            v31[12] = &AcpiPowerPhase5List;
            v55 = (PVOID **)qword_14008B018;
            if ( *(__int64 **)qword_14008B018 != &AcpiPowerBlockedOnDependencyList )
              goto LABEL_114;
            *v31 = &AcpiPowerBlockedOnDependencyList;
            v31[1] = v55;
            *v55 = v31;
            qword_14008B018 = (__int64)v31;
          }
        }
        else if ( v32 == 2 || !v32 )
        {
          goto LABEL_44;
        }
      }
      _InterlockedCompareExchange((volatile signed __int32 *)v29 + 52, 1, v32);
      if ( (*(int (__fastcall **)(PVOID *))(v33 + 8LL * *((int *)v29 + 12)))(v29) >= 0 )
        goto LABEL_39;
      v29 = v30;
LABEL_44:
      ACPIDeviceCompleteRequest(v31);
      goto LABEL_39;
    }
LABEL_45:
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
    v4 = AcpiPowerDpcFlags;
  }
  while ( (AcpiPowerDpcFlags & 2) != 0 );
  v5 = &AcpiPowerPhase5List;
LABEL_47:
  if ( (__int64 *)AcpiPowerBlockedOnDependencyList == &AcpiPowerBlockedOnDependencyList
    && AcpiPowerPhase0List == &AcpiPowerPhase0List
    && AcpiPowerPhase1List == &AcpiPowerPhase1List
    && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List
    && (__int64 *)AcpiPowerPhase3List == &AcpiPowerPhase3List
    && AcpiPowerPhase4List == &AcpiPowerPhase4List
    && AcpiPowerPhase5List == &AcpiPowerPhase5List )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v5,
        10,
        51,
        (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids);
    }
    v45 = (__int64 *)AcpiPowerSynchronizeList;
    if ( (__int64 *)AcpiPowerSynchronizeList != &AcpiPowerSynchronizeList )
    {
      while ( 2 )
      {
        v46 = v45;
        v45 = (__int64 *)*v45;
        if ( !*((_DWORD *)v46 + 12) )
        {
          v47 = *(_DWORD *)(v46[5] + 740);
          v48 = v46 + 7;
          v49 = v47 == 0;
          if ( v47 <= 0 )
            goto LABEL_92;
          if ( (*v48 & 0x2000000) != 0 )
          {
            v49 = v47 == 0;
LABEL_92:
            if ( v49 && (*v48 & 0x2000000) != 0 )
            {
              *v48 &= ~0x2000000u;
              _InterlockedDecrement(&AcpiPowerCurrentPagingPathTransitions);
            }
          }
          else
          {
            *v48 |= 0x2000000u;
            _InterlockedAdd(&AcpiPowerCurrentPagingPathTransitions, 1u);
          }
        }
        _InterlockedExchange((volatile __int32 *)v46 + 52, 3);
        if ( v45 == &AcpiPowerSynchronizeList )
        {
          v50 = AcpiPowerSynchronizeList;
          if ( (__int64 *)AcpiPowerSynchronizeList != &AcpiPowerSynchronizeList )
          {
            v51 = qword_14008B0A8;
            v52 = p_Entry;
            *(_QWORD *)qword_14008B0A8 = &Entry;
            p_Entry = (PVOID *)v51;
            *(_QWORD *)(v50 + 8) = v52;
            *v52 = v50;
            qword_14008B0A8 = (__int64)&AcpiPowerSynchronizeList;
            AcpiPowerSynchronizeList = (__int64)&AcpiPowerSynchronizeList;
          }
          break;
        }
        continue;
      }
    }
  }
  AcpiPowerDpcFlags &= ~1u;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
  v34 = (PVOID **)Entry;
  if ( Entry != &Entry )
  {
    do
    {
      v35 = *v34;
      ACPIDeviceCompleteRequest(v34);
      v34 = (PVOID **)v35;
    }
    while ( v35 != &Entry );
  }
}
