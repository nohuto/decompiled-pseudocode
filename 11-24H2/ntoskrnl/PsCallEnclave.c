/*
 * XREFs of PsCallEnclave @ 0x140AD1D10
 * Callers:
 *     NtCallEnclave @ 0x1406B3EC0 (NtCallEnclave.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x14025FDD0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x140260BC0 (RtlAvlRemoveNode.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsGetBaseTrapFrame @ 0x140441BD0 (PsGetBaseTrapFrame.c)
 *     RtlPrepareEnclaveCall @ 0x140464FAC (RtlPrepareEnclaveCall.c)
 *     RtlCreateEnclaveReturnFrame @ 0x1404F6BD8 (RtlCreateEnclaveReturnFrame.c)
 *     ZwTerminateProcess @ 0x1406A6990 (ZwTerminateProcess.c)
 *     PspRemoveEnclaveThreadWait @ 0x14077B880 (PspRemoveEnclaveThreadWait.c)
 *     VslCallEnclave @ 0x140A07B64 (VslCallEnclave.c)
 *     PspSelectVsmEnclaveByNumber @ 0x140A0B3AC (PspSelectVsmEnclaveByNumber.c)
 *     PsDereferenceVsmEnclave @ 0x140A2C23C (PsDereferenceVsmEnclave.c)
 *     PspFindVsmEnclaveThread @ 0x140A3971C (PspFindVsmEnclaveThread.c)
 *     MmSelectVsmEnclaveByAddress @ 0x140A4B09C (MmSelectVsmEnclaveByAddress.c)
 *     PspReleaseEnclaveThread @ 0x140A61484 (PspReleaseEnclaveThread.c)
 *     PspPrepareEnclaveThreadWait @ 0x140AC2638 (PspPrepareEnclaveThreadWait.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v12; // rdx
  bool v13; // zf
  $81B80DCEA5A02D890AB7B2872B48AC01 *v14; // rcx
  unsigned __int64 *v15; // r12
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rsi
  int v19; // eax
  PVOID v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  PVOID v24; // rsi
  NTSTATUS v25; // eax
  int v26; // eax
  _QWORD *v27; // rax
  _QWORD *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 *v32; // r15
  _QWORD *v33; // rax
  _QWORD *v34; // rsi
  int VsmEnclaveThread; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int64 *v44; // r12
  unsigned __int64 *v45; // rax
  _QWORD *v46; // r12
  bool v47; // r8
  _QWORD *v48; // rax
  volatile signed __int64 *v49; // r12
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int64 *v53; // r12
  struct _KTHREAD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  char *v58; // r12
  unsigned __int64 *v59; // r12
  struct _KTHREAD *v60; // rax
  _QWORD *v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  char v65[8]; // [rsp+50h] [rbp-98h] BYREF
  PVOID v66; // [rsp+58h] [rbp-90h] BYREF
  unsigned __int64 *v67; // [rsp+60h] [rbp-88h]
  int v68; // [rsp+68h] [rbp-80h] BYREF
  struct _KTHREAD *v69; // [rsp+70h] [rbp-78h]
  __int64 v70; // [rsp+78h] [rbp-70h] BYREF
  int v71; // [rsp+80h] [rbp-68h]
  PVOID P; // [rsp+88h] [rbp-60h] BYREF
  __int64 v73; // [rsp+90h] [rbp-58h] BYREF
  __int64 v74; // [rsp+98h] [rbp-50h] BYREF
  __int64 v75; // [rsp+A0h] [rbp-48h]
  __int64 v76; // [rsp+A8h] [rbp-40h] BYREF
  unsigned __int64 v77; // [rsp+F0h] [rbp+8h] BYREF
  __int64 v78; // [rsp+F8h] [rbp+10h]
  NTSTATUS ExitStatus; // [rsp+100h] [rbp+18h] BYREF
  __int64 *v80; // [rsp+108h] [rbp+20h]

  v80 = a4;
  ExitStatus = a3;
  v78 = a2;
  v77 = a1;
  v5 = a2;
  v70 = 0LL;
  v66 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v65[0] = 0;
  v76 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v69 = CurrentThread;
  v67 = 0LL;
  if ( CurrentThread->PreviousMode != 1 )
    return 3221225711LL;
  if ( v77 )
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
  v70 = *a4;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a2 )
    result = PspSelectVsmEnclaveByNumber(Process, a2, (__int64 *)&v66);
  else
    result = MmSelectVsmEnclaveByAddress(Process, v77, &v66);
  if ( (int)result >= 0 )
  {
    if ( !*((_DWORD *)v66 + 10) )
    {
      EnclaveReturnFrame = -1073741816;
LABEL_124:
      PsDereferenceVsmEnclave(v66);
      return (unsigned int)EnclaveReturnFrame;
    }
    if ( *((_BYTE *)v66 + 76) )
    {
      --CurrentThread->KernelApcDisable;
      v32 = (unsigned __int64 *)((char *)v66 + 112);
      v33 = KeAbPreAcquire((__int64)v66 + 112, 0LL);
      v34 = v33;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v32, 0LL) )
        ExfAcquirePushLockExclusiveEx(v32, (__int64)v33, (__int64)v32);
      if ( v34 )
        *((_BYTE *)v34 + 10) = 1;
      v18 = *((_QWORD *)v66 + 13);
      while ( v18 )
      {
        VsmEnclaveThread = PspFindVsmEnclaveThread(v77, v18);
        if ( VsmEnclaveThread >= 0 )
        {
          if ( VsmEnclaveThread <= 0 )
            break;
          v18 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v18 = *(_QWORD *)v18;
        }
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v32);
      KeAbPostRelease((ULONG_PTR)v32);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v36, v37, v38);
      if ( !v18 )
      {
        EnclaveReturnFrame = -1073741800;
        goto LABEL_124;
      }
      v75 = v18;
      goto LABEL_77;
    }
    BaseTrapFrame = (unsigned __int64 *)PsGetBaseTrapFrame((__int64)CurrentThread, 0LL);
    v67 = BaseTrapFrame;
    --CurrentThread->SpecialApcDisable;
    EnclaveReturnFrame = RtlPrepareEnclaveCall(
                           (__int64)BaseTrapFrame,
                           (__int64)a4,
                           qword_140FC64A8,
                           qword_140FC64B8,
                           (CurrentThread->MiscFlags & 0x100000) != 0,
                           &v74,
                           &v73);
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 )
    {
      v14 = &CurrentThread->152;
      if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v14->ApcState.ApcListHead[0].Flink != v14 )
        KiCheckForKernelApcDelivery((__int64)v14, v12);
    }
    if ( EnclaveReturnFrame < 0 )
      goto LABEL_124;
    --CurrentThread->KernelApcDisable;
    v15 = (unsigned __int64 *)((char *)v66 + 112);
    v16 = KeAbPreAcquire((__int64)v66 + 112, 0LL);
    v17 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
      ExfAcquirePushLockExclusiveEx(v15, (__int64)v16, (__int64)v15);
    if ( v17 )
      *((_BYTE *)v17 + 10) = 1;
    v18 = *((_QWORD *)v66 + 13);
    while ( v18 )
    {
      v19 = PspFindVsmEnclaveThread((unsigned __int64)CurrentThread, v18);
      if ( v19 >= 0 )
      {
        if ( v19 <= 0 )
          break;
        v18 = *(_QWORD *)(v18 + 8);
      }
      else
      {
        v18 = *(_QWORD *)v18;
      }
    }
    if ( v18 )
    {
LABEL_57:
      v75 = v18;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v15);
      KeAbPostRelease((ULONG_PTR)v15);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v29, v30, v31);
      if ( *(_DWORD *)(v18 + 36) == -1 )
      {
        EnclaveReturnFrame = -1073741670;
        goto LABEL_124;
      }
      v5 = v78;
LABEL_77:
      --CurrentThread->SpecialApcDisable;
      *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
      v68 = *(_DWORD *)(v18 + 32);
      EnclaveReturnFrame = VslCallEnclave(
                             (__int64)v66,
                             &v68,
                             (__int64 *)&v77,
                             ExitStatus,
                             &v70,
                             &v74,
                             &v73,
                             &ExitStatus,
                             v65);
      v71 = EnclaveReturnFrame;
      *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x200u;
      v13 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v13
        && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v40, v39);
      }
      if ( v65[0] )
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
      if ( EnclaveReturnFrame < 0 )
      {
        if ( !v5 )
        {
LABEL_115:
          v58 = (char *)v66;
          if ( !*((_BYTE *)v66 + 76) && !*(_DWORD *)(v18 + 36) )
          {
            --CurrentThread->KernelApcDisable;
            v59 = (unsigned __int64 *)(v58 + 112);
            v60 = (struct _KTHREAD *)KeAbPreAcquire((__int64)v59, 0LL);
            v69 = v60;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v59, 0LL) )
            {
              ExfAcquirePushLockExclusiveEx(v59, (__int64)v60, (__int64)v59);
              v60 = v69;
            }
            if ( v60 )
              BYTE2(v60->Header.WaitListHead.Flink) = 1;
            v61 = v66;
            *(_QWORD *)v18 = *((_QWORD *)v66 + 16);
            v61[16] = v18;
            PspReleaseEnclaveThread((__int64)v61);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v59, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v59);
            KeAbPostRelease((ULONG_PTR)v59);
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v62, v63, v64);
          }
          goto LABEL_124;
        }
        v77 = 0LL;
      }
      v41 = v77;
      if ( v77 )
      {
        --CurrentThread->SpecialApcDisable;
        EnclaveReturnFrame = RtlCreateEnclaveReturnFrame(
                               (__int64)v67,
                               qword_140FC64B0,
                               qword_140FC64B8,
                               *((_QWORD *)v66 + 1),
                               v41,
                               ExitStatus,
                               v74,
                               v73,
                               v70,
                               (CurrentThread->MiscFlags & 0x100000) != 0);
        v13 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v13
          && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v43, v42);
        }
        if ( !v5 )
        {
          if ( !*(_DWORD *)(v18 + 36) )
          {
            *(_DWORD *)(v18 + 32) = v68;
            --CurrentThread->KernelApcDisable;
            v44 = (unsigned __int64 *)((char *)v66 + 112);
            v45 = KeAbPreAcquire((__int64)v66 + 112, 0LL);
            v67 = v45;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v44, 0LL) )
            {
              ExfAcquirePushLockExclusiveEx(v44, (__int64)v45, (__int64)v44);
              v45 = v67;
            }
            if ( v45 )
              *((_BYTE *)v45 + 10) = 1;
            v67 = (unsigned __int64 *)((char *)v66 + 104);
            v46 = (_QWORD *)*((_QWORD *)v66 + 13);
            v47 = 0;
            if ( v46 )
            {
              while ( 1 )
              {
                if ( (int)PspFindVsmEnclaveThread((unsigned __int64)CurrentThread, (__int64)v46) < 0 )
                {
                  v48 = (_QWORD *)*v46;
                  if ( !*v46 )
                  {
                    v47 = 0;
                    break;
                  }
                }
                else
                {
                  v48 = (_QWORD *)v46[1];
                  if ( !v48 )
                  {
                    v47 = 1;
                    break;
                  }
                }
                v46 = v48;
              }
            }
            RtlAvlInsertNodeEx(v67, (unsigned __int64)v46, v47, (_QWORD *)v18);
            v49 = (volatile signed __int64 *)v66;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v66 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v49 + 14);
            KeAbPostRelease((ULONG_PTR)(v49 + 14));
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v50, v51, v52);
          }
          ++*(_DWORD *)(v18 + 36);
        }
      }
      else
      {
        *v80 = v70;
        if ( v78 )
        {
          v13 = (*(_DWORD *)(v18 + 36))-- == 1;
          if ( v13 )
          {
            --CurrentThread->KernelApcDisable;
            v53 = (unsigned __int64 *)((char *)v66 + 112);
            v54 = (struct _KTHREAD *)KeAbPreAcquire((__int64)v66 + 112, 0LL);
            v69 = v54;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v53, 0LL) )
            {
              ExfAcquirePushLockExclusiveEx(v53, (__int64)v54, (__int64)v53);
              v54 = v69;
            }
            if ( v54 )
              BYTE2(v54->Header.WaitListHead.Flink) = 1;
            RtlAvlRemoveNode((unsigned __int64 *)v66 + 13, v18);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v53, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v53);
            KeAbPostRelease((ULONG_PTR)v53);
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v55, v56, v57);
          }
        }
      }
      goto LABEL_115;
    }
    v20 = 0LL;
    P = 0LL;
    if ( v78 )
    {
      EnclaveReturnFrame = -1073741584;
    }
    else
    {
      v26 = *((_DWORD *)v66 + 18);
      if ( v26 )
      {
        *((_DWORD *)v66 + 18) = v26 - 1;
        EnclaveReturnFrame = 0;
      }
      else
      {
        EnclaveReturnFrame = PspPrepareEnclaveThreadWait((__int64)v66, &P);
        v20 = P;
      }
      if ( EnclaveReturnFrame >= 0 && !v20 )
      {
LABEL_56:
        v18 = *((_QWORD *)v66 + 16);
        *((_QWORD *)v66 + 16) = *(_QWORD *)v18;
        *(_QWORD *)(v18 + 24) = CurrentThread;
        *(_QWORD *)(v18 + 32) = 0LL;
        goto LABEL_57;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v15);
    KeAbPostRelease((ULONG_PTR)v15);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v21, v22, v23);
    if ( EnclaveReturnFrame < 0 )
      goto LABEL_124;
    v24 = P;
    v25 = KeWaitForSingleObject(
            (char *)P + 16,
            Executive,
            1,
            0,
            (PLARGE_INTEGER)((unsigned __int64)&v76 & -(__int64)((ExitStatus & 1) != 0)));
    if ( v25 )
      EnclaveReturnFrame = PspRemoveEnclaveThreadWait((__int64)v66, (__int64 *)v24, v25);
    else
      EnclaveReturnFrame = *((_DWORD *)v24 + 10);
    ExFreePoolWithTag(v24, 0);
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
    v27 = KeAbPreAcquire((__int64)v15, 0LL);
    v28 = v27;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
      ExfAcquirePushLockExclusiveEx(v15, (__int64)v27, (__int64)v15);
    if ( v28 )
      *((_BYTE *)v28 + 10) = 1;
    goto LABEL_56;
  }
  return result;
}
