/*
 * XREFs of PsCallEnclave @ 0x140AC7FE0
 * Callers:
 *     NtCallEnclave @ 0x1406A8BF0 (NtCallEnclave.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     RtlAvlInsertNodeEx @ 0x1402A8320 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PsGetBaseTrapFrame @ 0x1404430E0 (PsGetBaseTrapFrame.c)
 *     RtlPrepareEnclaveCall @ 0x140465DC4 (RtlPrepareEnclaveCall.c)
 *     RtlCreateEnclaveReturnFrame @ 0x1404EBE8C (RtlCreateEnclaveReturnFrame.c)
 *     ZwTerminateProcess @ 0x14069B6C0 (ZwTerminateProcess.c)
 *     PspRemoveEnclaveThreadWait @ 0x14076BCE0 (PspRemoveEnclaveThreadWait.c)
 *     VslCallEnclave @ 0x140A059FC (VslCallEnclave.c)
 *     PspSelectVsmEnclaveByNumber @ 0x140A070EC (PspSelectVsmEnclaveByNumber.c)
 *     PsDereferenceVsmEnclave @ 0x140A22CF4 (PsDereferenceVsmEnclave.c)
 *     PspFindVsmEnclaveThread @ 0x140A344DC (PspFindVsmEnclaveThread.c)
 *     MmSelectVsmEnclaveByAddress @ 0x140A483EC (MmSelectVsmEnclaveByAddress.c)
 *     PspReleaseEnclaveThread @ 0x140A5F9C0 (PspReleaseEnclaveThread.c)
 *     PspPrepareEnclaveThreadWait @ 0x140ABE848 (PspPrepareEnclaveThreadWait.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 *v14; // rax
  __int64 *v15; // rbx
  __int64 v16; // rsi
  int v17; // eax
  PVOID v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  PVOID v22; // rsi
  NTSTATUS v23; // eax
  int v24; // eax
  __int64 *v25; // rax
  __int64 *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 *v30; // r15
  __int64 *v31; // rax
  __int64 *v32; // rsi
  int VsmEnclaveThread; // eax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  unsigned __int64 *v38; // r12
  __int64 *v39; // rax
  _QWORD *v40; // r12
  bool v41; // r8
  _QWORD *v42; // rax
  volatile signed __int64 *v43; // r12
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned __int64 *v47; // r12
  __int64 *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  char *v52; // r12
  unsigned __int64 *v53; // r12
  __int64 *v54; // rax
  _QWORD *v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  _BYTE v59[8]; // [rsp+50h] [rbp-98h] BYREF
  PVOID v60; // [rsp+58h] [rbp-90h] BYREF
  unsigned __int64 *v61; // [rsp+60h] [rbp-88h]
  int v62; // [rsp+68h] [rbp-80h] BYREF
  __int64 *p_Lock; // [rsp+70h] [rbp-78h]
  __int64 v64; // [rsp+78h] [rbp-70h] BYREF
  int v65; // [rsp+80h] [rbp-68h]
  PVOID P; // [rsp+88h] [rbp-60h] BYREF
  __int64 v67; // [rsp+90h] [rbp-58h] BYREF
  __int64 v68; // [rsp+98h] [rbp-50h] BYREF
  __int64 v69; // [rsp+A0h] [rbp-48h]
  __int64 v70; // [rsp+A8h] [rbp-40h] BYREF
  unsigned __int64 v71; // [rsp+F0h] [rbp+8h] BYREF
  __int64 v72; // [rsp+F8h] [rbp+10h]
  NTSTATUS ExitStatus; // [rsp+100h] [rbp+18h] BYREF
  __int64 *v74; // [rsp+108h] [rbp+20h]

  v74 = a4;
  ExitStatus = a3;
  v72 = a2;
  v71 = a1;
  v5 = a2;
  v64 = 0LL;
  v60 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v59[0] = 0;
  v70 = 0LL;
  CurrentThread = KeGetCurrentThread();
  p_Lock = (__int64 *)&CurrentThread->Header.Lock;
  v61 = 0LL;
  if ( CurrentThread->PreviousMode != 1 )
    return 3221225711LL;
  if ( v71 )
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
  v64 = *a4;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a2 )
    result = PspSelectVsmEnclaveByNumber(Process, a2, (__int64 *)&v60);
  else
    result = MmSelectVsmEnclaveByAddress(Process, v71, &v60);
  if ( (int)result >= 0 )
  {
    if ( !*((_DWORD *)v60 + 10) )
    {
      EnclaveReturnFrame = -1073741816;
LABEL_124:
      PsDereferenceVsmEnclave(v60);
      return (unsigned int)EnclaveReturnFrame;
    }
    if ( *((_BYTE *)v60 + 76) )
    {
      --CurrentThread->KernelApcDisable;
      v30 = (unsigned __int64 *)((char *)v60 + 112);
      v31 = KeAbPreAcquire((__int64)v60 + 112, 0LL);
      v32 = v31;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v30, 0LL) )
        ExfAcquirePushLockExclusiveEx(v30, v31, (__int64)v30);
      if ( v32 )
        *((_BYTE *)v32 + 10) = 1;
      v16 = *((_QWORD *)v60 + 13);
      while ( v16 )
      {
        VsmEnclaveThread = PspFindVsmEnclaveThread(v71, v16);
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
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v30);
      KeAbPostRelease((ULONG_PTR)v30);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v34, v35, v36);
      if ( !v16 )
      {
        EnclaveReturnFrame = -1073741800;
        goto LABEL_124;
      }
      v69 = v16;
      goto LABEL_77;
    }
    BaseTrapFrame = (unsigned __int64 *)PsGetBaseTrapFrame((__int64)CurrentThread, 0LL);
    v61 = BaseTrapFrame;
    --CurrentThread->SpecialApcDisable;
    EnclaveReturnFrame = RtlPrepareEnclaveCall(
                           (__int64)BaseTrapFrame,
                           (__int64)a4,
                           qword_140FC64E8,
                           qword_140FC64F8,
                           (CurrentThread->MiscFlags & 0x100000) != 0,
                           &v68,
                           &v67);
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v12 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    if ( EnclaveReturnFrame < 0 )
      goto LABEL_124;
    --CurrentThread->KernelApcDisable;
    v13 = (unsigned __int64 *)((char *)v60 + 112);
    v14 = KeAbPreAcquire((__int64)v60 + 112, 0LL);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
      ExfAcquirePushLockExclusiveEx(v13, v14, (__int64)v13);
    if ( v15 )
      *((_BYTE *)v15 + 10) = 1;
    v16 = *((_QWORD *)v60 + 13);
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
      v69 = v16;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v13);
      KeAbPostRelease((ULONG_PTR)v13);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v27, v28, v29);
      if ( *(_DWORD *)(v16 + 36) == -1 )
      {
        EnclaveReturnFrame = -1073741670;
        goto LABEL_124;
      }
      v5 = v72;
LABEL_77:
      --CurrentThread->SpecialApcDisable;
      *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
      v62 = *(_DWORD *)(v16 + 32);
      EnclaveReturnFrame = VslCallEnclave(
                             (__int64)v60,
                             &v62,
                             (__int64 *)&v71,
                             ExitStatus,
                             &v64,
                             &v68,
                             &v67,
                             &ExitStatus,
                             v59);
      v65 = EnclaveReturnFrame;
      *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x200u;
      v12 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v12
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( v59[0] )
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
      if ( EnclaveReturnFrame < 0 )
      {
        if ( !v5 )
        {
LABEL_115:
          v52 = (char *)v60;
          if ( !*((_BYTE *)v60 + 76) && !*(_DWORD *)(v16 + 36) )
          {
            --CurrentThread->KernelApcDisable;
            v53 = (unsigned __int64 *)(v52 + 112);
            v54 = KeAbPreAcquire((__int64)v53, 0LL);
            p_Lock = v54;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v53, 0LL) )
            {
              ExfAcquirePushLockExclusiveEx(v53, v54, (__int64)v53);
              v54 = p_Lock;
            }
            if ( v54 )
              *((_BYTE *)v54 + 10) = 1;
            v55 = v60;
            *(_QWORD *)v16 = *((_QWORD *)v60 + 16);
            v55[16] = v16;
            PspReleaseEnclaveThread((__int64)v55);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v53, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v53);
            KeAbPostRelease((ULONG_PTR)v53);
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v56, v57, v58);
          }
          goto LABEL_124;
        }
        v71 = 0LL;
      }
      v37 = v71;
      if ( v71 )
      {
        --CurrentThread->SpecialApcDisable;
        EnclaveReturnFrame = RtlCreateEnclaveReturnFrame(
                               (__int64)v61,
                               qword_140FC64F0,
                               qword_140FC64F8,
                               *((_QWORD *)v60 + 1),
                               v37,
                               ExitStatus,
                               v68,
                               v67,
                               v64,
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
            *(_DWORD *)(v16 + 32) = v62;
            --CurrentThread->KernelApcDisable;
            v38 = (unsigned __int64 *)((char *)v60 + 112);
            v39 = KeAbPreAcquire((__int64)v60 + 112, 0LL);
            v61 = (unsigned __int64 *)v39;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v38, 0LL) )
            {
              ExfAcquirePushLockExclusiveEx(v38, v39, (__int64)v38);
              v39 = (__int64 *)v61;
            }
            if ( v39 )
              *((_BYTE *)v39 + 10) = 1;
            v61 = (unsigned __int64 *)((char *)v60 + 104);
            v40 = (_QWORD *)*((_QWORD *)v60 + 13);
            v41 = 0;
            if ( v40 )
            {
              while ( 1 )
              {
                if ( (int)PspFindVsmEnclaveThread((unsigned __int64)CurrentThread, (__int64)v40) < 0 )
                {
                  v42 = (_QWORD *)*v40;
                  if ( !*v40 )
                  {
                    v41 = 0;
                    break;
                  }
                }
                else
                {
                  v42 = (_QWORD *)v40[1];
                  if ( !v42 )
                  {
                    v41 = 1;
                    break;
                  }
                }
                v40 = v42;
              }
            }
            RtlAvlInsertNodeEx(v61, (unsigned __int64)v40, v41, (_QWORD *)v16);
            v43 = (volatile signed __int64 *)v60;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v60 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v43 + 14);
            KeAbPostRelease((ULONG_PTR)(v43 + 14));
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v44, v45, v46);
          }
          ++*(_DWORD *)(v16 + 36);
        }
      }
      else
      {
        *v74 = v64;
        if ( v72 )
        {
          v12 = (*(_DWORD *)(v16 + 36))-- == 1;
          if ( v12 )
          {
            --CurrentThread->KernelApcDisable;
            v47 = (unsigned __int64 *)((char *)v60 + 112);
            v48 = KeAbPreAcquire((__int64)v60 + 112, 0LL);
            p_Lock = v48;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v47, 0LL) )
            {
              ExfAcquirePushLockExclusiveEx(v47, v48, (__int64)v47);
              v48 = p_Lock;
            }
            if ( v48 )
              *((_BYTE *)v48 + 10) = 1;
            RtlAvlRemoveNode((unsigned __int64 *)v60 + 13, v16);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v47, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v47);
            KeAbPostRelease((ULONG_PTR)v47);
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v49, v50, v51);
          }
        }
      }
      goto LABEL_115;
    }
    v18 = 0LL;
    P = 0LL;
    if ( v72 )
    {
      EnclaveReturnFrame = -1073741584;
    }
    else
    {
      v24 = *((_DWORD *)v60 + 18);
      if ( v24 )
      {
        *((_DWORD *)v60 + 18) = v24 - 1;
        EnclaveReturnFrame = 0;
      }
      else
      {
        EnclaveReturnFrame = PspPrepareEnclaveThreadWait((__int64)v60, &P);
        v18 = P;
      }
      if ( EnclaveReturnFrame >= 0 && !v18 )
      {
LABEL_56:
        v16 = *((_QWORD *)v60 + 16);
        *((_QWORD *)v60 + 16) = *(_QWORD *)v16;
        *(_QWORD *)(v16 + 24) = CurrentThread;
        *(_QWORD *)(v16 + 32) = 0LL;
        goto LABEL_57;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v13);
    KeAbPostRelease((ULONG_PTR)v13);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v19, v20, v21);
    if ( EnclaveReturnFrame < 0 )
      goto LABEL_124;
    v22 = P;
    v23 = KeWaitForSingleObject(
            (char *)P + 16,
            Executive,
            1,
            0,
            (PLARGE_INTEGER)((unsigned __int64)&v70 & -(__int64)((ExitStatus & 1) != 0)));
    if ( v23 )
      EnclaveReturnFrame = PspRemoveEnclaveThreadWait((__int64)v60, (__int64 *)v22, v23);
    else
      EnclaveReturnFrame = *((_DWORD *)v22 + 10);
    ExFreePoolWithTag(v22, 0);
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
    v25 = KeAbPreAcquire((__int64)v13, 0LL);
    v26 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
      ExfAcquirePushLockExclusiveEx(v13, v25, (__int64)v13);
    if ( v26 )
      *((_BYTE *)v26 + 10) = 1;
    goto LABEL_56;
  }
  return result;
}
