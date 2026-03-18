/*
 * XREFs of EtwTelemetryCoverageReport @ 0x1404575C0
 * Callers:
 *     EtwpCoverageRecordAtHighIrql @ 0x140643800 (EtwpCoverageRecordAtHighIrql.c)
 *     EtwpCoverageReset @ 0x14079BA4C (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x14079BC54 (EtwpCoverageResetCP.c)
 *     DbgkForwardException @ 0x14091F420 (DbgkForwardException.c)
 *     EtwpCoverageEnsureContext @ 0x140A57F04 (EtwpCoverageEnsureContext.c)
 *     PsSetProcessFaultInformation @ 0x140A5B7E0 (PsSetProcessFaultInformation.c)
 *     EtwpCoverageProvEnableCallback @ 0x140A81160 (EtwpCoverageProvEnableCallback.c)
 *     PopTransitionTelemetryOsState @ 0x140A81BA4 (PopTransitionTelemetryOsState.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_char @ 0x140428104 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     EtwpCoverageAddToStringBuffer @ 0x140457778 (EtwpCoverageAddToStringBuffer.c)
 *     EtwpCoverageValidateCP @ 0x14045781C (EtwpCoverageValidateCP.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwpCoverageRecord @ 0x140A57C90 (EtwpCoverageRecord.c)
 *     EtwpCoverageEnsureContext @ 0x140A57F04 (EtwpCoverageEnsureContext.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwTelemetryCoverageReport(_QWORD *a1)
{
  int v1; // r12d
  _QWORD *v3; // rdi
  int v4; // r13d
  BOOL v5; // r14d
  __int64 v6; // r15
  __int64 v7; // rbx
  unsigned int v8; // r12d
  KIRQL v9; // al
  __int64 v10; // rcx
  KIRQL v11; // r14
  unsigned int v12; // ebx
  _QWORD *Pool2; // rax
  KIRQL v15; // al
  _QWORD *v16; // rcx
  _QWORD *v17; // r8
  int v18; // r8d
  const CHAR *v19; // rdx
  int v20; // eax
  int v21; // r8d
  unsigned int v22; // [rsp+38h] [rbp-89h] BYREF
  int v23; // [rsp+3Ch] [rbp-85h] BYREF
  int v24; // [rsp+40h] [rbp-81h] BYREF
  int v25; // [rsp+44h] [rbp-7Dh] BYREF
  int v26; // [rsp+48h] [rbp-79h] BYREF
  __int64 v27; // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+58h] [rbp-69h] BYREF
  int *v29; // [rsp+78h] [rbp-49h]
  __int64 v30; // [rsp+80h] [rbp-41h]
  unsigned int *v31; // [rsp+88h] [rbp-39h]
  __int64 v32; // [rsp+90h] [rbp-31h]
  int *v33; // [rsp+98h] [rbp-29h]
  __int64 v34; // [rsp+A0h] [rbp-21h]
  int *v35; // [rsp+A8h] [rbp-19h]
  __int64 v36; // [rsp+B0h] [rbp-11h]
  int *v37; // [rsp+B8h] [rbp-9h]
  __int64 v38; // [rsp+C0h] [rbp-1h]
  __int64 *v39; // [rsp+C8h] [rbp+7h]
  __int64 v40; // [rsp+D0h] [rbp+Fh]
  char v41[16]; // [rsp+D8h] [rbp+17h] BYREF

  v1 = 0;
  v22 = 0;
  v3 = 0LL;
  v4 = 0;
  v5 = ObGetCurrentIrql() < 2u && (a1[2] & 1) == 0;
  if ( !EtwpCoverageNonPagedContext )
  {
    if ( !v5 )
      return (unsigned int)-1073741641;
    v12 = EtwpCoverageEnsureContext();
    if ( (v12 & 0x80000000) != 0 )
      return v12;
  }
  v6 = EtwpCoverageNonPagedContext;
  v7 = EtwpCoverageNonPagedContext + 24;
  if ( *((_DWORD *)a1 + 3) >= 0xFFFFFF00 )
    return (unsigned int)-1073741637;
  if ( v5 )
  {
    EtwpCoverageRecord(EtwpCoverageContext, a1);
    return 0;
  }
  if ( !(unsigned int)EtwpCoverageValidateCP(a1, &v22) )
  {
    v12 = -1073741811;
LABEL_36:
    if ( EtwpCoverageCoreTracingEnabled
      && (unsigned int)dword_140E090B0 > 5
      && tlgKeywordOn((__int64)&dword_140E090B0, 1LL) )
    {
      v19 = (const CHAR *)*a1;
      v23 = *(_DWORD *)v6;
      v29 = &v23;
      v22 = *(_DWORD *)(v6 + 4);
      v31 = &v22;
      v20 = v18 - *(_DWORD *)(v6 + 16);
      v21 = v18 - *(_DWORD *)(v6 + 20);
      v24 = v20;
      v33 = &v24;
      v35 = &v25;
      v37 = &v26;
      v39 = &v27;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v25 = v21;
      v36 = 4LL;
      v26 = v4;
      v38 = 4LL;
      LODWORD(v27) = v1;
      v40 = 4LL;
      tlgCreate1Sz_char((__int64)v41, v19);
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E090B0,
        (unsigned __int8 *)byte_140051D3B,
        0LL,
        0LL,
        9u,
        &v28);
    }
    return v12;
  }
  v8 = *((_DWORD *)a1 + 3);
  if ( v8 >= *(_DWORD *)v6 )
  {
    v4 = 1;
    v12 = 0;
    v1 = 1;
    goto LABEL_36;
  }
  *((_DWORD *)a1 + 3) = *(_DWORD *)v6;
  while ( 1 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
    v10 = *(_QWORD *)(v7 + 8);
    v11 = v9;
    v27 = *(_QWORD *)(v7 + 64);
    if ( v10 )
    {
      v4 = EtwpCoverageAddToStringBuffer(v10, *a1, v22);
      if ( v4 )
        break;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v7, v11);
    if ( !v3 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
      v3 = Pool2;
      if ( !Pool2 )
      {
        *((_DWORD *)a1 + 3) = v8;
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 4));
        v12 = -1073741670;
        v1 = 0;
        goto LABEL_36;
      }
      memset_0(Pool2, 0, 0x400uLL);
      v3[2] = v3 + 128;
      v3[3] = v3 + 5;
      v3[4] = v3 + 5;
    }
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
    if ( v27 == *(_QWORD *)(v7 + 64) )
    {
      v16 = *(_QWORD **)(v7 + 8);
      if ( v16 )
      {
        v17 = *(_QWORD **)(v7 + 24);
        if ( *v17 != v7 + 16 )
          __fastfail(3u);
        *v16 = v7 + 16;
        v16[1] = v17;
        *v17 = v16;
        *(_QWORD *)(v7 + 24) = v16;
      }
      ++*(_QWORD *)(v7 + 64);
      *(_QWORD *)(v7 + 8) = v3;
      v3 = 0LL;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v7, v15);
  }
  if ( !*(_DWORD *)(v7 + 72) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v7 + 32), DelayedWorkQueue);
    *(_DWORD *)(v7 + 72) = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v7, v11);
  v12 = 0;
  if ( v3 )
    ExFreePoolWithTag(v3, 0x56777445u);
  return v12;
}
