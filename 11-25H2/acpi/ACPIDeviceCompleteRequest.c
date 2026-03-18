/*
 * XREFs of ACPIDeviceCompleteRequest @ 0x140026ACC
 * Callers:
 *     ACPIDevicePowerProcessGenericPhase @ 0x140025F9C (ACPIDevicePowerProcessGenericPhase.c)
 *     ACPIDevicePowerDpc @ 0x140026120 (ACPIDevicePowerDpc.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x140027B10 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIDevicePowerProcessInvalid @ 0x14005CDF0 (ACPIDevicePowerProcessInvalid.c)
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x14001D5EC (ACPIPowerScheduleDpc.c)
 *     WPP_RECORDER_SF_qLqss @ 0x140028718 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x140032388 (ACPIDereferenceWaitWakePowerRequest.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

void __fastcall ACPIDeviceCompleteRequest(_QWORD *Entry)
{
  __int64 v1; // rdi
  const char *v2; // rax
  void (__fastcall *v3)(__int64, _QWORD, _QWORD); // rbp
  char v4; // r8
  const char *v6; // rdx
  __int64 v7; // rcx
  _QWORD **v8; // rsi
  _QWORD *v9; // rax
  _QWORD **v10; // rsi
  _QWORD *v11; // rdx
  int v12; // eax
  int v13; // ecx
  KIRQL v14; // al
  _QWORD *v15; // rdx
  KIRQL v16; // r8
  PVOID *v17; // rcx
  _QWORD **v18; // rdx
  PVOID *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // r8
  _QWORD *v25; // rcx
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // r8
  __int64 v29; // r8
  _QWORD *v30; // rcx
  KIRQL v31; // si
  __int64 v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rcx
  __int64 v37; // [rsp+48h] [rbp-10h]

  v1 = Entry[5];
  v2 = byte_140075488;
  v3 = (void (__fastcall *)(__int64, _QWORD, _QWORD))Entry[24];
  v4 = 0;
  v6 = byte_140075488;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v4 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 608);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v37 = (__int64)v6;
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      10,
      18,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      (char)Entry,
      *((_DWORD *)Entry + 64),
      v4,
      (__int64)v2,
      v37);
  }
  if ( (Entry[6] & 0xFFFFFFFD) == 0 )
  {
    v8 = (_QWORD **)(Entry + 8);
    while ( 1 )
    {
      v9 = *v8;
      if ( *v8 == v8 )
        break;
      v26 = v9 - 2;
      v27 = *(v9 - 2);
      if ( *(_QWORD **)(v27 + 8) != v9 - 2 )
        goto LABEL_26;
      v28 = (_QWORD *)v26[1];
      if ( (_QWORD *)*v28 != v26 )
        goto LABEL_26;
      *v28 = v27;
      *(_QWORD *)(v27 + 8) = v28;
      v26[1] = v26;
      *v26 = v26;
      v29 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 )
        goto LABEL_26;
      v30 = (_QWORD *)v9[1];
      if ( (_QWORD *)*v30 != v9 )
        goto LABEL_26;
      *v30 = v29;
      *(_QWORD *)(v29 + 8) = v30;
      v9[1] = v9;
      *v9 = v9;
      ExFreeToNPagedLookasideList(&RequestDependencyLookAsideList, v26);
    }
    v10 = (_QWORD **)(Entry + 10);
    while ( 1 )
    {
      v11 = *v10;
      if ( *v10 == v10 )
        break;
      v21 = *v11;
      if ( *(_QWORD **)(*v11 + 8LL) != v11 )
        goto LABEL_26;
      v22 = (_QWORD *)v11[1];
      if ( (_QWORD *)*v22 != v11 )
        goto LABEL_26;
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      v23 = v11 + 2;
      v11[1] = v11;
      *v11 = v11;
      v24 = v11[2];
      if ( *(_QWORD **)(v24 + 8) != v11 + 2 )
        goto LABEL_26;
      v25 = (_QWORD *)v11[3];
      if ( (_QWORD *)*v25 != v23 )
        goto LABEL_26;
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
      v11[3] = v11 + 2;
      *v23 = v23;
      ExFreeToNPagedLookasideList(&RequestDependencyLookAsideList, v11);
    }
    v12 = *(_DWORD *)(v1 + 384);
    if ( v12 )
    {
      if ( !*((_BYTE *)Entry + 52) && *((int *)Entry + 64) < 0 )
      {
        v31 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
        Entry[13] = *(unsigned int *)(v1 + 384);
        *((_BYTE *)Entry + 52) = 1;
        v32 = *Entry;
        if ( *(_QWORD **)(*Entry + 8LL) == Entry )
        {
          v33 = (_QWORD *)Entry[1];
          if ( (_QWORD *)*v33 == Entry )
          {
            *v33 = v32;
            *(_QWORD *)(v32 + 8) = v33;
            v34 = (_QWORD *)qword_14008B088;
            if ( *(__int64 **)qword_14008B088 == &AcpiPowerQueueList )
            {
              *Entry = &AcpiPowerQueueList;
              Entry[1] = v34;
              *v34 = Entry;
              qword_14008B088 = (__int64)Entry;
              ACPIPowerScheduleDpc();
              KeReleaseSpinLock(&AcpiPowerQueueLock, v31);
              return;
            }
          }
        }
        goto LABEL_26;
      }
      if ( v12 < *((_DWORD *)Entry + 26) )
        *((_DWORD *)Entry + 64) = 0;
    }
    v13 = *((_DWORD *)Entry + 14);
    if ( (v13 & 0x2000000) != 0 )
    {
      *((_DWORD *)Entry + 14) = v13 & 0xFDFFFFFF;
      _InterlockedDecrement(&AcpiPowerCurrentPagingPathTransitions);
    }
  }
  if ( v3 )
    v3(v1, Entry[25], *((unsigned int *)Entry + 64));
  v14 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  v15 = (_QWORD *)*Entry;
  v16 = v14;
  if ( *(_QWORD **)(*Entry + 8LL) != Entry )
    goto LABEL_26;
  v17 = (PVOID *)Entry[1];
  if ( *v17 != Entry )
    goto LABEL_26;
  *v17 = v15;
  v15[1] = v17;
  v18 = (_QWORD **)Entry[2];
  if ( v18[1] != Entry + 2 )
    goto LABEL_26;
  v19 = (PVOID *)Entry[3];
  if ( *v19 != Entry + 2 )
    goto LABEL_26;
  *v19 = v18;
  v18[1] = v19;
  if ( *((_DWORD *)Entry + 12) == 4 )
    goto LABEL_24;
  v20 = *(_QWORD *)(v1 + 584);
  if ( v20 == v1 + 584 )
  {
    *(_QWORD *)(v1 + 576) = 0LL;
    goto LABEL_24;
  }
  v35 = (_QWORD *)(v20 - 16);
  v36 = (_QWORD *)qword_14008B088;
  if ( *(__int64 **)qword_14008B088 != &AcpiPowerQueueList )
LABEL_26:
    __fastfail(3u);
  *v35 = &AcpiPowerQueueList;
  v35[1] = v36;
  *v36 = v35;
  qword_14008B088 = (__int64)v35;
  *(_QWORD *)(v1 + 576) = v35;
LABEL_24:
  KeReleaseSpinLock(&AcpiPowerQueueLock, v16);
  if ( *((_DWORD *)Entry + 12) == 2 )
    ACPIDereferenceWaitWakePowerRequest(Entry);
  else
    ExFreeToNPagedLookasideList(&RequestLookAsideList, Entry);
}
