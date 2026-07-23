/*
 * XREFs of PsCallEnclave @ 0x140AD0080
 * Callers:
 *     NtCallEnclave @ 0x1406B4E60 (NtCallEnclave.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     PsGetBaseTrapFrame @ 0x140438650 (PsGetBaseTrapFrame.c)
 *     RtlPrepareEnclaveCall @ 0x14045B888 (RtlPrepareEnclaveCall.c)
 *     RtlCreateEnclaveReturnFrame @ 0x1404F44BC (RtlCreateEnclaveReturnFrame.c)
 *     ZwTerminateProcess @ 0x1406A7930 (ZwTerminateProcess.c)
 *     PspRemoveEnclaveThreadWait @ 0x14077B730 (PspRemoveEnclaveThreadWait.c)
 *     VslCallEnclave @ 0x140A04094 (VslCallEnclave.c)
 *     PspSelectVsmEnclaveByNumber @ 0x140A0A5EC (PspSelectVsmEnclaveByNumber.c)
 *     PsDereferenceVsmEnclave @ 0x140A20164 (PsDereferenceVsmEnclave.c)
 *     PspFindVsmEnclaveThread @ 0x140A2E7DC (PspFindVsmEnclaveThread.c)
 *     MmSelectVsmEnclaveByAddress @ 0x140A41D1C (MmSelectVsmEnclaveByAddress.c)
 *     PspReleaseEnclaveThread @ 0x140A59C64 (PspReleaseEnclaveThread.c)
 *     PspPrepareEnclaveThreadWait @ 0x140ABD920 (PspPrepareEnclaveThreadWait.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsCallEnclave(unsigned __int64 a1, __int64 a2, NTSTATUS a3, __int64 *a4)
{
  __int64 v5; // r12
  struct _KTHREAD *CurrentThread; // r14
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 Process; // rcx
  int EnclaveReturnFrame; // r15d
  unsigned __int64 *BaseTrapFrame; // rax
  bool v12; // zf
  unsigned __int64 *v13; // r12
  char *v14; // rax
  char *v15; // rbx
  __int64 v16; // rsi
  int v17; // eax
  PVOID v18; // rcx
  PVOID v19; // rsi
  NTSTATUS v20; // eax
  int v21; // eax
  char *v22; // rax
  char *v23; // rsi
  unsigned __int64 *v24; // r15
  char *v25; // rax
  char *v26; // rsi
  int VsmEnclaveThread; // eax
  __int64 v28; // rcx
  unsigned __int64 *v29; // r12
  unsigned __int64 *v30; // rax
  _QWORD *v31; // r12
  bool v32; // r8
  _QWORD *v33; // rax
  volatile signed __int64 *v34; // r12
  unsigned __int64 *v35; // r12
  char *v36; // rax
  char *v37; // r12
  unsigned __int64 *v38; // r12
  char *v39; // rax
  _QWORD *v40; // rcx
  _BYTE v41[8]; // [rsp+50h] [rbp-98h] BYREF
  PVOID v42; // [rsp+58h] [rbp-90h] BYREF
  unsigned __int64 *v43; // [rsp+60h] [rbp-88h]
  int v44; // [rsp+68h] [rbp-80h] BYREF
  struct _KTHREAD *v45; // [rsp+70h] [rbp-78h]
  __int64 v46; // [rsp+78h] [rbp-70h] BYREF
  int v47; // [rsp+80h] [rbp-68h]
  PVOID P; // [rsp+88h] [rbp-60h] BYREF
  __int64 v49; // [rsp+90h] [rbp-58h] BYREF
  __int64 v50; // [rsp+98h] [rbp-50h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-48h]
  __int64 v52; // [rsp+A8h] [rbp-40h] BYREF
  unsigned __int64 v53; // [rsp+F0h] [rbp+8h] BYREF
  __int64 v54; // [rsp+F8h] [rbp+10h]
  NTSTATUS ExitStatus; // [rsp+100h] [rbp+18h] BYREF
  __int64 *v56; // [rsp+108h] [rbp+20h]

  v56 = a4;
  ExitStatus = a3;
  v54 = a2;
  v53 = a1;
  v5 = a2;
  v46 = 0LL;
  v42 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v41[0] = 0;
  v52 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v45 = CurrentThread;
  v43 = 0LL;
  if ( CurrentThread->PreviousMode != 1 )
    return 3221225711LL;
  if ( v53 )
  {
    if ( a2 )
      return 3221225712LL;
  }
  else if ( a2 )
  {
    goto LABEL_9;
  }
  if ( (ExitStatus & 0xFFFFFFFE) != 0 )
    return 3221225713LL;
LABEL_9:
  v8 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
    v8 = (__int64)a4;
  *(_QWORD *)v8 = *(_QWORD *)v8;
  v46 = *a4;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a2 )
    result = PspSelectVsmEnclaveByNumber(Process, a2, (__int64 *)&v42);
  else
    result = MmSelectVsmEnclaveByAddress(Process, v53, &v42, (__int64)a4);
  if ( (int)result >= 0 )
  {
    if ( !*((_DWORD *)v42 + 10) )
    {
      EnclaveReturnFrame = -1073741816;
LABEL_124:
      PsDereferenceVsmEnclave(v42);
      return (unsigned int)EnclaveReturnFrame;
    }
    if ( *((_BYTE *)v42 + 76) )
    {
      --CurrentThread->KernelApcDisable;
      v24 = (unsigned __int64 *)((char *)v42 + 112);
      v25 = (char *)KeAbPreAcquire((__int64)v42 + 112, 0LL);
      v26 = v25;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v24, 0LL) )
        ExfAcquirePushLockExclusiveEx(v24, v25, (__int64)v24);
      if ( v26 )
        v26[10] = 1;
      v16 = *((_QWORD *)v42 + 13);
      while ( v16 )
      {
        VsmEnclaveThread = PspFindVsmEnclaveThread(v53, v16);
        if ( VsmEnclaveThread >= 0 )
        {
          if ( VsmEnclaveThread <= 0 )
            break;
          v16 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v16 = *(_QWORD *)v16;
        }
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v24);
      KeAbPostRelease((ULONG_PTR)v24);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      if ( !v16 )
      {
        EnclaveReturnFrame = -1073741800;
        goto LABEL_124;
      }
      v51 = v16;
      goto LABEL_77;
    }
    BaseTrapFrame = (unsigned __int64 *)PsGetBaseTrapFrame((__int64)CurrentThread, 0LL);
    v43 = BaseTrapFrame;
    --CurrentThread->SpecialApcDisable;
    EnclaveReturnFrame = RtlPrepareEnclaveCall(
                           (__int64)BaseTrapFrame,
                           (__int64)a4,
                           qword_140FC7528,
                           qword_140FC7538,
                           (CurrentThread->MiscFlags & 0x100000) != 0,
                           &v50,
                           &v49);
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v12 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    if ( EnclaveReturnFrame < 0 )
      goto LABEL_124;
    --CurrentThread->KernelApcDisable;
    v13 = (unsigned __int64 *)((char *)v42 + 112);
    v14 = (char *)KeAbPreAcquire((__int64)v42 + 112, 0LL);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
      ExfAcquirePushLockExclusiveEx(v13, v14, (__int64)v13);
    if ( v15 )
      v15[10] = 1;
    v16 = *((_QWORD *)v42 + 13);
    while ( v16 )
    {
      v17 = PspFindVsmEnclaveThread((unsigned __int64)CurrentThread, v16);
      if ( v17 >= 0 )
      {
        if ( v17 <= 0 )
          break;
        v16 = *(_QWORD *)(v16 + 8);
      }
      else
      {
        v16 = *(_QWORD *)v16;
      }
    }
    if ( v16 )
    {
LABEL_57:
      v51 = v16;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v13);
      KeAbPostRelease((ULONG_PTR)v13);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      if ( *(_DWORD *)(v16 + 36) == -1 )
      {
        EnclaveReturnFrame = -1073741670;
        goto LABEL_124;
      }
      v5 = v54;
LABEL_77:
      --CurrentThread->SpecialApcDisable;
      *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
      v44 = *(_DWORD *)(v16 + 32);
      EnclaveReturnFrame = VslCallEnclave(
                             (__int64)v42,
                             &v44,
                             (__int64 *)&v53,
                             ExitStatus,
                             &v46,
                             &v50,
                             &v49,
                             &ExitStatus,
                             v41);
      v47 = EnclaveReturnFrame;
      *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x200u;
      v12 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v12
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( v41[0] )
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
      if ( EnclaveReturnFrame < 0 )
      {
        if ( !v5 )
        {
LABEL_115:
          v37 = (char *)v42;
          if ( !*((_BYTE *)v42 + 76) && !*(_DWORD *)(v16 + 36) )
          {
            --CurrentThread->KernelApcDisable;
            v38 = (unsigned __int64 *)(v37 + 112);
            v39 = (char *)KeAbPreAcquire((__int64)v38, 0LL);
            v45 = (struct _KTHREAD *)v39;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v38, 0LL) )
            {
              ExfAcquirePushLockExclusiveEx(v38, v39, (__int64)v38);
              v39 = (char *)v45;
            }
            if ( v39 )
              v39[10] = 1;
            v40 = v42;
            *(_QWORD *)v16 = *((_QWORD *)v42 + 16);
            v40[16] = v16;
            PspReleaseEnclaveThread((__int64)v40);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v38);
            KeAbPostRelease((ULONG_PTR)v38);
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
          }
          goto LABEL_124;
        }
        v53 = 0LL;
      }
      v28 = v53;
      if ( v53 )
      {
        --CurrentThread->SpecialApcDisable;
        EnclaveReturnFrame = RtlCreateEnclaveReturnFrame(
                               (__int64)v43,
                               qword_140FC7530,
                               qword_140FC7538,
                               *((_QWORD *)v42 + 1),
                               v28,
                               ExitStatus,
                               v50,
                               v49,
                               v46,
                               (CurrentThread->MiscFlags & 0x100000) != 0);
        v12 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v12
          && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        if ( !v5 )
        {
          if ( !*(_DWORD *)(v16 + 36) )
          {
            *(_DWORD *)(v16 + 32) = v44;
            --CurrentThread->KernelApcDisable;
            v29 = (unsigned __int64 *)((char *)v42 + 112);
            v30 = KeAbPreAcquire((__int64)v42 + 112, 0LL);
            v43 = v30;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v29, 0LL) )
            {
              ExfAcquirePushLockExclusiveEx(v29, (char *)v30, (__int64)v29);
              v30 = v43;
            }
            if ( v30 )
              *((_BYTE *)v30 + 10) = 1;
            v43 = (unsigned __int64 *)((char *)v42 + 104);
            v31 = (_QWORD *)*((_QWORD *)v42 + 13);
            v32 = 0;
            if ( v31 )
            {
              while ( 1 )
              {
                if ( (int)PspFindVsmEnclaveThread((unsigned __int64)CurrentThread, (__int64)v31) < 0 )
                {
                  v33 = (_QWORD *)*v31;
                  if ( !*v31 )
                  {
                    v32 = 0;
                    break;
                  }
                }
                else
                {
                  v33 = (_QWORD *)v31[1];
                  if ( !v33 )
                  {
                    v32 = 1;
                    break;
                  }
                }
                v31 = v33;
              }
            }
            RtlAvlInsertNodeEx(v43, (unsigned __int64)v31, v32, (_QWORD *)v16);
            v34 = (volatile signed __int64 *)v42;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v34 + 14);
            KeAbPostRelease((ULONG_PTR)(v34 + 14));
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
          }
          ++*(_DWORD *)(v16 + 36);
        }
      }
      else
      {
        *v56 = v46;
        if ( v54 )
        {
          v12 = (*(_DWORD *)(v16 + 36))-- == 1;
          if ( v12 )
          {
            --CurrentThread->KernelApcDisable;
            v35 = (unsigned __int64 *)((char *)v42 + 112);
            v36 = (char *)KeAbPreAcquire((__int64)v42 + 112, 0LL);
            v45 = (struct _KTHREAD *)v36;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v35, 0LL) )
            {
              ExfAcquirePushLockExclusiveEx(v35, v36, (__int64)v35);
              v36 = (char *)v45;
            }
            if ( v36 )
              v36[10] = 1;
            RtlAvlRemoveNode((unsigned __int64 *)v42 + 13, v16);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v35, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v35);
            KeAbPostRelease((ULONG_PTR)v35);
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
          }
        }
      }
      goto LABEL_115;
    }
    v18 = 0LL;
    P = 0LL;
    if ( v54 )
    {
      EnclaveReturnFrame = -1073741584;
    }
    else
    {
      v21 = *((_DWORD *)v42 + 18);
      if ( v21 )
      {
        *((_DWORD *)v42 + 18) = v21 - 1;
        EnclaveReturnFrame = 0;
      }
      else
      {
        EnclaveReturnFrame = PspPrepareEnclaveThreadWait((__int64)v42, &P);
        v18 = P;
      }
      if ( EnclaveReturnFrame >= 0 && !v18 )
      {
LABEL_56:
        v16 = *((_QWORD *)v42 + 16);
        *((_QWORD *)v42 + 16) = *(_QWORD *)v16;
        *(_QWORD *)(v16 + 24) = CurrentThread;
        *(_QWORD *)(v16 + 32) = 0LL;
        goto LABEL_57;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v13);
    KeAbPostRelease((ULONG_PTR)v13);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    if ( EnclaveReturnFrame < 0 )
      goto LABEL_124;
    v19 = P;
    v20 = KeWaitForSingleObject(
            (char *)P + 16,
            Executive,
            1,
            0,
            (PLARGE_INTEGER)((unsigned __int64)&v52 & -(__int64)((ExitStatus & 1) != 0)));
    if ( v20 )
      EnclaveReturnFrame = PspRemoveEnclaveThreadWait((__int64)v42, (__int64 *)v19, v20);
    else
      EnclaveReturnFrame = *((_DWORD *)v19 + 10);
    ExFreePoolWithTag(v19, 0);
    if ( EnclaveReturnFrame )
    {
      if ( (unsigned int)(EnclaveReturnFrame - 257) > 1
        && EnclaveReturnFrame != -1073740526
        && EnclaveReturnFrame != 192 )
      {
        EnclaveReturnFrame = -1073741749;
      }
      goto LABEL_124;
    }
    --CurrentThread->KernelApcDisable;
    v22 = (char *)KeAbPreAcquire((__int64)v13, 0LL);
    v23 = v22;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
      ExfAcquirePushLockExclusiveEx(v13, v22, (__int64)v13);
    if ( v23 )
      v23[10] = 1;
    goto LABEL_56;
  }
  return result;
}
