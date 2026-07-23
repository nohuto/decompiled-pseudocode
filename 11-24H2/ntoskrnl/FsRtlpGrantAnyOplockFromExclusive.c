/*
 * XREFs of FsRtlpGrantAnyOplockFromExclusive @ 0x14057E1D0
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404D9C50 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     FsRtlpRequestShareableOplock @ 0x1404DB6D0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14057DEC0 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpSyncWithAckTimeout @ 0x14057EB0C (FsRtlpSyncWithAckTimeout.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     FsRtlpOplockMoveAckTimeout @ 0x140709670 (FsRtlpOplockMoveAckTimeout.c)
 *     FsRtlpOplockPerfMoveData @ 0x140709874 (FsRtlpOplockPerfMoveData.c)
 *     FsRtlpOplockPerfSendData @ 0x140709948 (FsRtlpOplockPerfSendData.c)
 */

__int64 __fastcall FsRtlpGrantAnyOplockFromExclusive(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD **a5,
        char a6,
        __int64 a7,
        _BYTE *a8,
        _BYTE *a9,
        unsigned int a10)
{
  __int64 v12; // r8
  __int64 v14; // rdx
  unsigned int v15; // ecx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  KIRQL v26; // al
  bool v27; // zf
  __int64 v28; // [rsp+40h] [rbp-79h] BYREF
  int v29; // [rsp+48h] [rbp-71h] BYREF
  __int64 v30; // [rsp+50h] [rbp-69h] BYREF
  __int64 v31; // [rsp+58h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+60h] [rbp-59h] BYREF
  __int64 *v33; // [rsp+80h] [rbp-39h]
  int v34; // [rsp+88h] [rbp-31h]
  int v35; // [rsp+8Ch] [rbp-2Dh]
  __int64 *v36; // [rsp+90h] [rbp-29h]
  int v37; // [rsp+98h] [rbp-21h]
  int v38; // [rsp+9Ch] [rbp-1Dh]
  int *v39; // [rsp+A0h] [rbp-19h]
  int v40; // [rsp+A8h] [rbp-11h]
  int v41; // [rsp+ACh] [rbp-Dh]

  v12 = a1;
  v28 = a1;
  if ( *(_BYTE *)(*(_QWORD *)(a3 + 48) + 73LL) && (a4 & 0x2000) != 0 )
  {
    v14 = *(_QWORD *)(a2 + 24);
    *(_OWORD *)v14 = 0LL;
    *(_QWORD *)(v14 + 16) = 0LL;
    v15 = *(_DWORD *)(v28 + 144);
    *(_DWORD *)(v14 + 12) |= 1u;
    *(_DWORD *)(v14 + 8) = (a4 >> 12) & 5;
    *(_DWORD *)(v14 + 4) = (v15 >> 12) & 7;
    *(_QWORD *)(a2 + 56) = 24LL;
    *(_DWORD *)(a2 + 48) = -2147483602;
    IofCompleteRequest((PIRP)a2, 1);
    return 2147483694LL;
  }
  if ( a6 )
  {
    *(_QWORD *)(*(_QWORD *)a7 + 16LL) = *(_QWORD *)(a1 + 8);
    FsRtlpOplockPerfMoveData(v28 + 160, *(_QWORD *)a7 + 24LL);
    FsRtlpOplockMoveAckTimeout(v28 + 176, *(_QWORD *)a7 + 40LL);
    v17 = *(_QWORD **)a7;
    v18 = (_QWORD *)(v28 + 104);
    v19 = *(_QWORD *)(v28 + 104);
    if ( *(_QWORD *)(v19 + 8) != v28 + 104 )
      __fastfail(3u);
    *v17 = v19;
    v17[1] = v18;
    *(_QWORD *)(v19 + 8) = v17;
    *v18 = v17;
    if ( (unsigned int)dword_140E06C30 > 5 )
    {
      v20 = *(_QWORD *)(*(_QWORD *)a7 + 16LL);
      v35 = 0;
      v38 = 0;
      v33 = &v30;
      v30 = v20;
      v31 = v28;
      v34 = 8;
      v36 = &v31;
      v37 = 8;
      v21 = *(_DWORD *)(v28 + 144);
      v41 = 0;
      v29 = v21;
      v39 = &v29;
      v40 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06C30,
        (unsigned __int8 *)word_140045232,
        0LL,
        0LL,
        5u,
        &v32);
    }
    v22 = v28;
    *(_QWORD *)a7 = 0LL;
    *(_QWORD *)(v22 + 8) = 0LL;
    v12 = v28;
    v23 = a4 & 0x3010;
  }
  else
  {
    *a8 = 1;
    if ( !a4 )
    {
      *a9 = 1;
      goto LABEL_11;
    }
    v23 = a4 & 0x3010;
    if ( (a4 & 0x3010) != 0 && (a4 & 0x4040) == 0 )
    {
      *(_QWORD *)(a1 + 8) = 0LL;
      v12 = v28;
LABEL_19:
      if ( a5 )
      {
        FsRtlpOplockPerfMoveData(v12 + 160, *a5 + 9);
        FsRtlpOplockMoveAckTimeout(v28 + 176, *a5 + 11);
      }
      else
      {
        FsRtlpSyncWithAckTimeout(v12 + 176);
        FsRtlpOplockPerfSendData(v28 + 160);
      }
      v24 = FsRtlpRequestShareableOplock(&v28, a3, a2, a4, a5, a6, 1, a10);
      goto LABEL_28;
    }
  }
  if ( a4 )
  {
    if ( !v23 || (a4 & 0x4040) != 0 )
    {
      *(_QWORD *)v12 = a2;
      v24 = 259;
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
      *(_QWORD *)(a2 + 56) = v28;
      *(_QWORD *)(v28 + 16) = KeGetCurrentThread()->ApcState.Process;
      CurrentThread = KeGetCurrentThread();
      *(_QWORD *)(v28 + 24) = CurrentThread;
      ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
      *(_BYTE *)(v28 + 32) = 0;
      if ( a6 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(a3 + 48), 0x746C6644u);
        *(_QWORD *)(v28 + 8) = *(_QWORD *)(a3 + 48);
      }
      *(_DWORD *)(v28 + 144) = a4 | *(_DWORD *)(v28 + 144) & 0x20 | 0x40;
      v26 = KeAcquireQueuedSpinLock(7uLL);
      v27 = *(_BYTE *)(a2 + 68) == 0;
      *(_BYTE *)(a2 + 69) = v26;
      if ( v27 )
      {
        _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
      }
      else
      {
        FsRtlpCancelExclusiveIrp(a2, 1, a6 == 0);
      }
      goto LABEL_28;
    }
    goto LABEL_19;
  }
LABEL_11:
  v24 = 0;
  *(_DWORD *)(v28 + 144) = *(_DWORD *)(v12 + 144) & 0x20 | 1;
  *(_DWORD *)(a2 + 48) = 0;
  IofCompleteRequest((PIRP)a2, 1);
  FsRtlpSyncWithAckTimeout(v28 + 176);
  FsRtlpOplockPerfSendData(v28 + 160);
LABEL_28:
  if ( a6 )
    *(_DWORD *)(v28 + 144) |= 0x1000000u;
  return v24;
}
