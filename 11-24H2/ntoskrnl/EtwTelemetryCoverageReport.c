/*
 * XREFs of EtwTelemetryCoverageReport @ 0x14044D270
 * Callers:
 *     EtwpCoverageRecordAtHighIrql @ 0x14064DEA0 (EtwpCoverageRecordAtHighIrql.c)
 *     EtwpCoverageReset @ 0x1407AB2EC (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x1407AB4F4 (EtwpCoverageResetCP.c)
 *     DbgkForwardException @ 0x1408F32F0 (DbgkForwardException.c)
 *     PsSetProcessFaultInformation @ 0x140A55880 (PsSetProcessFaultInformation.c)
 *     EtwpCoverageProvEnableCallback @ 0x140A804A0 (EtwpCoverageProvEnableCallback.c)
 *     PopTransitionTelemetryOsState @ 0x140A80E74 (PopTransitionTelemetryOsState.c)
 *     EtwpCoverageEnsureContext @ 0x140ADAD8C (EtwpCoverageEnsureContext.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     EtwpCoverageAddToStringBuffer @ 0x14044D428 (EtwpCoverageAddToStringBuffer.c)
 *     EtwpCoverageValidateCP @ 0x14044D4CC (EtwpCoverageValidateCP.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpCoverageRecord @ 0x1408DC9D4 (EtwpCoverageRecord.c)
 *     EtwpCoverageEnsureContext @ 0x140ADAD8C (EtwpCoverageEnsureContext.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwTelemetryCoverageReport(__int64 a1, __int64 a2)
{
  int v2; // r12d
  _QWORD *v4; // rdi
  int v5; // r13d
  BOOL v6; // r14d
  __int64 v7; // r15
  __int64 v8; // rbx
  unsigned int v9; // r12d
  KIRQL v10; // al
  __int64 v11; // rcx
  KIRQL v12; // r14
  unsigned int v13; // ebx
  _QWORD *Pool2; // rax
  KIRQL v16; // al
  _QWORD *v17; // rcx
  _QWORD *v18; // r8
  int v19; // r8d
  const CHAR *v20; // rdx
  int v21; // eax
  int v22; // r8d
  unsigned int v23; // [rsp+38h] [rbp-89h] BYREF
  int v24; // [rsp+3Ch] [rbp-85h] BYREF
  int v25; // [rsp+40h] [rbp-81h] BYREF
  int v26; // [rsp+44h] [rbp-7Dh] BYREF
  int v27; // [rsp+48h] [rbp-79h] BYREF
  __int64 v28; // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+58h] [rbp-69h] BYREF
  int *v30; // [rsp+78h] [rbp-49h]
  __int64 v31; // [rsp+80h] [rbp-41h]
  unsigned int *v32; // [rsp+88h] [rbp-39h]
  __int64 v33; // [rsp+90h] [rbp-31h]
  int *v34; // [rsp+98h] [rbp-29h]
  __int64 v35; // [rsp+A0h] [rbp-21h]
  int *v36; // [rsp+A8h] [rbp-19h]
  __int64 v37; // [rsp+B0h] [rbp-11h]
  int *v38; // [rsp+B8h] [rbp-9h]
  __int64 v39; // [rsp+C0h] [rbp-1h]
  __int64 *v40; // [rsp+C8h] [rbp+7h]
  __int64 v41; // [rsp+D0h] [rbp+Fh]
  char v42[16]; // [rsp+D8h] [rbp+17h] BYREF

  v2 = 0;
  v23 = 0;
  v4 = 0LL;
  v5 = 0;
  v6 = KeGetEffectiveIrql(a1, a2) < 2u && (*(_DWORD *)(a1 + 16) & 1) == 0;
  if ( !EtwpCoverageNonPagedContext )
  {
    if ( !v6 )
      return (unsigned int)-1073741641;
    v13 = EtwpCoverageEnsureContext();
    if ( (v13 & 0x80000000) != 0 )
      return v13;
  }
  v7 = EtwpCoverageNonPagedContext;
  v8 = EtwpCoverageNonPagedContext + 24;
  if ( *(_DWORD *)(a1 + 12) >= 0xFFFFFF00 )
    return (unsigned int)-1073741637;
  if ( v6 )
  {
    EtwpCoverageRecord(EtwpCoverageContext, a1);
    return 0;
  }
  if ( !(unsigned int)EtwpCoverageValidateCP(a1, &v23) )
  {
    v13 = -1073741811;
LABEL_36:
    if ( EtwpCoverageCoreTracingEnabled
      && (unsigned int)dword_140E09218 > 5
      && tlgKeywordOn((__int64)&dword_140E09218, 1LL) )
    {
      v20 = *(const CHAR **)a1;
      v24 = *(_DWORD *)v7;
      v30 = &v24;
      v23 = *(_DWORD *)(v7 + 4);
      v32 = &v23;
      v21 = v19 - *(_DWORD *)(v7 + 16);
      v22 = v19 - *(_DWORD *)(v7 + 20);
      v25 = v21;
      v34 = &v25;
      v36 = &v26;
      v38 = &v27;
      v40 = &v28;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 4LL;
      v26 = v22;
      v37 = 4LL;
      v27 = v5;
      v39 = 4LL;
      LODWORD(v28) = v2;
      v41 = 4LL;
      tlgCreate1Sz_char((__int64)v42, v20);
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09218,
        (unsigned __int8 *)word_140053B8A,
        0LL,
        0LL,
        9u,
        &v29);
    }
    return v13;
  }
  v9 = *(_DWORD *)(a1 + 12);
  if ( v9 >= *(_DWORD *)v7 )
  {
    v5 = 1;
    v13 = 0;
    v2 = 1;
    goto LABEL_36;
  }
  *(_DWORD *)(a1 + 12) = *(_DWORD *)v7;
  while ( 1 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8);
    v11 = *(_QWORD *)(v8 + 8);
    v12 = v10;
    v28 = *(_QWORD *)(v8 + 64);
    if ( v11 )
    {
      v5 = EtwpCoverageAddToStringBuffer(v11, *(_QWORD *)a1, v23);
      if ( v5 )
        break;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v8, v12);
    if ( !v4 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x400uLL, 0x56777445u);
      v4 = Pool2;
      if ( !Pool2 )
      {
        *(_DWORD *)(a1 + 12) = v9;
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 4));
        v13 = -1073741670;
        v2 = 0;
        goto LABEL_36;
      }
      memset_0(Pool2, 0, 0x400uLL);
      v4[2] = v4 + 128;
      v4[3] = v4 + 5;
      v4[4] = v4 + 5;
    }
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8);
    if ( v28 == *(_QWORD *)(v8 + 64) )
    {
      v17 = *(_QWORD **)(v8 + 8);
      if ( v17 )
      {
        v18 = *(_QWORD **)(v8 + 24);
        if ( *v18 != v8 + 16 )
          __fastfail(3u);
        *v17 = v8 + 16;
        v17[1] = v18;
        *v18 = v17;
        *(_QWORD *)(v8 + 24) = v17;
      }
      ++*(_QWORD *)(v8 + 64);
      *(_QWORD *)(v8 + 8) = v4;
      v4 = 0LL;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v8, v16);
  }
  if ( !*(_DWORD *)(v8 + 72) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v8 + 32), DelayedWorkQueue);
    *(_DWORD *)(v8 + 72) = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v8, v12);
  v13 = 0;
  if ( v4 )
    ExFreePoolWithTag(v4, 0x56777445u);
  return v13;
}
