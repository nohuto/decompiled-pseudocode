/*
 * XREFs of KiDispatchException @ 0x1403E8310
 * Callers:
 *     KiInitializeUserApc @ 0x1403E5264 (KiInitializeUserApc.c)
 *     KiRaiseException @ 0x1403E6450 (KiRaiseException.c)
 *     KxExceptionDispatchOnExceptionStack @ 0x1406AAEE0 (KxExceptionDispatchOnExceptionStack.c)
 *     KiExceptionDispatch @ 0x1406BED00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1406BF240 (KiFastFailDispatch.c)
 *     PspFreeUserFiberShadowStack @ 0x1408DB370 (PspFreeUserFiberShadowStack.c)
 *     PspInitializeThunkContext @ 0x1408FE308 (PspInitializeThunkContext.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlDispatchException @ 0x14027C1C0 (RtlDispatchException.c)
 *     RtlInitializeExtendedContext2 @ 0x14027FCB0 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x14027FF40 (RtlGetExtendedContextLength2.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402BB4A0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KePopulateContinuationContext @ 0x1403E5874 (KePopulateContinuationContext.c)
 *     KeContextFromKframes @ 0x1403E58C0 (KeContextFromKframes.c)
 *     RtlpCopyExtendedContext @ 0x1403E7370 (RtlpCopyExtendedContext.c)
 *     KiPreprocessFault @ 0x1403FB220 (KiPreprocessFault.c)
 *     KdpStub @ 0x1404289D0 (KdpStub.c)
 *     KeCopyExceptionRecord @ 0x140433170 (KeCopyExceptionRecord.c)
 *     KiSetupForInstrumentationReturn @ 0x140452ED0 (KiSetupForInstrumentationReturn.c)
 *     KiTpHandleTrap @ 0x1404F7320 (KiTpHandleTrap.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     KeContextToKframes @ 0x1404FBAC0 (KeContextToKframes.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x1406A6990 (ZwTerminateProcess.c)
 *     _alloca_probe @ 0x1406B3C80 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     PsWow64GetProcessMachine @ 0x1408FB0E0 (PsWow64GetProcessMachine.c)
 *     DbgkForwardException @ 0x140938C20 (DbgkForwardException.c)
 *     KdpTrap @ 0x140B752B8 (KdpTrap.c)
 *     KdIsThisAKdTrap @ 0x140B7A130 (KdIsThisAKdTrap.c)
 */

__int16 __fastcall KiDispatchException(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // rdx
  unsigned int v11; // ebx
  struct _KTHREAD *v12; // rax
  unsigned int v13; // r12d
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  void *v17; // rsp
  int v18; // edi
  __int64 v19; // r8
  char v20; // al
  char *v22; // rdi
  struct _KPRCB *CurrentPrcb; // r8
  _DWORD *SchedulerAssist; // rdx
  int v25; // ett
  struct _KPRCB *v26; // rcx
  char IsThisAKdTrap; // al
  char v28; // r8
  NTSTATUS v29; // r9d
  _KPROCESS *v30; // rdx
  char v31; // al
  struct _KPRCB *v32; // r8
  signed __int32 *v33; // rdx
  signed __int32 v34; // eax
  signed __int32 v35; // ett
  char *v36; // r14
  __int64 v37; // r12
  _QWORD *v38; // rdi
  _OWORD *v39; // rax
  _OWORD *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  bool v43; // zf
  __int64 v44; // r8
  void *InstrumentationCallback; // rdx
  _DWORD *v46; // r8
  int v47; // ett
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-10h]
  _WORD BugCheckParameter3[2]; // [rsp+30h] [rbp+0h] BYREF
  unsigned int BugCheckParameter3_4; // [rsp+34h] [rbp+4h]
  NTSTATUS v52; // [rsp+38h] [rbp+8h]
  int v53; // [rsp+3Ch] [rbp+Ch]
  unsigned int v54; // [rsp+40h] [rbp+10h] BYREF
  char *v55; // [rsp+48h] [rbp+18h]
  __int64 v56; // [rsp+50h] [rbp+20h]
  __int64 v57; // [rsp+58h] [rbp+28h] BYREF
  __int64 v58; // [rsp+60h] [rbp+30h]
  _KPROCESS *v59; // [rsp+68h] [rbp+38h]
  char *v60; // [rsp+70h] [rbp+40h]
  struct _KTHREAD *v61; // [rsp+78h] [rbp+48h]
  char *v62; // [rsp+80h] [rbp+50h]
  unsigned int *v63; // [rsp+88h] [rbp+58h]
  _WORD *v64; // [rsp+90h] [rbp+60h]
  _OWORD *v65; // [rsp+98h] [rbp+68h]
  __int64 v66; // [rsp+A0h] [rbp+70h]
  _QWORD *v67; // [rsp+A8h] [rbp+78h]
  _QWORD *v68; // [rsp+B0h] [rbp+80h]
  _QWORD *v69; // [rsp+B8h] [rbp+88h]
  char *v70; // [rsp+C8h] [rbp+98h]
  _DWORD v71[5]; // [rsp+D0h] [rbp+A0h]
  __int128 Src; // [rsp+E4h] [rbp+B4h]
  __int128 v73; // [rsp+F4h] [rbp+C4h]
  __int128 v74; // [rsp+104h] [rbp+D4h]
  __int128 v75; // [rsp+114h] [rbp+E4h]
  __int128 v76; // [rsp+124h] [rbp+F4h]
  __int128 v77; // [rsp+134h] [rbp+104h]
  __int128 v78; // [rsp+144h] [rbp+114h]
  __int128 v79; // [rsp+154h] [rbp+124h]
  int v80; // [rsp+164h] [rbp+134h]
  __int128 v81; // [rsp+170h] [rbp+140h] BYREF
  __int128 v82; // [rsp+180h] [rbp+150h]

  BugCheckParameter3[0] = a4;
  v56 = a2;
  v63 = a1;
  v66 = a3;
  v57 = 0LL;
  v54 = 0;
  *(_OWORD *)&v71[1] = 0LL;
  Src = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0;
  v81 = 0LL;
  v82 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v61 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  v59 = Process;
  __incgsdword(0x87F0u);
  if ( !a5 || !Process || !Process[3].Padding[5] )
    goto LABEL_19;
  BugCheckParameter3_4 = *a1;
  v11 = BugCheckParameter3_4;
  if ( BugCheckParameter3_4 == 268435458 )
  {
    v11 = -1073741795;
  }
  else
  {
    if ( BugCheckParameter3_4 != 268435459 )
    {
      if ( BugCheckParameter3_4 == 268435460 )
      {
        *a1 = -1073741819;
        v11 = -1073741819;
      }
      goto LABEL_11;
    }
    v11 = -1073741676;
  }
  *a1 = v11;
LABEL_11:
  if ( KeAreInterruptsEnabled()
    && KeGetCurrentIrql() < 2u
    && (a4 || (v11 + 1073741819 <= 1 || v11 == -2147483647) && *((_QWORD *)a1 + 5) <= 0x7FFFFFFF0000uLL) )
  {
    LOBYTE(BugCheckParameter4) = a4;
    LOWORD(v12) = guard_dispatch_icall_no_overrides(a1, a2, a3, 0LL);
    if ( (_BYTE)v12 )
      return (__int16)v12;
  }
  *a1 = BugCheckParameter3_4;
  Process = v59;
LABEL_19:
  v13 = 1048607;
  BugCheckParameter3_4 = 1048607;
  v14 = 0LL;
  if ( LOBYTE(BugCheckParameter3[0]) )
  {
    if ( (KeFeatureBits & 0x800000) != 0 )
    {
      v13 = 1048671;
      BugCheckParameter3_4 = 1048671;
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      {
        v15 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
        if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0x800LL) != 0
          && (HIDWORD(Process[4].ThreadListHead.Flink) & 0x4000) == 0 )
        {
          v15 &= ~0x800uLL;
        }
        v14 = v15 & 0xFFFFFFFFFFF9FFFFuLL;
        if ( *((char *)a1 + 4) >= 0 )
          v14 = v15;
        if ( (unsigned __int16)PsWow64GetProcessMachine(Process) == 332 )
          v14 &= 0xFFFFFFFFFFF9FFFFuLL;
      }
    }
  }
  else
  {
    if ( (_BYTE)KiKernelCetEnabled )
      v13 = 1048735;
    BugCheckParameter3_4 = v13;
  }
  RtlGetExtendedContextLength2(v13, &v54, v14);
  v16 = v54 + 15LL;
  if ( v16 <= v54 )
    v16 = 0xFFFFFFFFFFFFFF0LL;
  v17 = alloca(v16 & 0xFFFFFFFFFFFFFFF0uLL);
  v64 = BugCheckParameter3;
  if ( LOBYTE(BugCheckParameter3[0]) )
    memset_0(BugCheckParameter3, 0, v54);
  RtlInitializeExtendedContext2((__int64)BugCheckParameter3, v13, &v57, v14);
  v18 = v56;
  KeContextFromKframes(a3, v56, (__int64)BugCheckParameter3);
  if ( *a1 == -2147483645 )
  {
    --*(_QWORD *)((char *)&v76 + 4);
    if ( (KiDynamicTraceMask & 2) != 0 )
    {
      --*(_QWORD *)(a3 + 360);
      if ( (unsigned __int8)KiTpHandleTrap(
                              a1,
                              BugCheckParameter3,
                              LOBYTE(BugCheckParameter3[0]),
                              a5,
                              (_BYTE)BugCheckParameter4) )
        goto LABEL_97;
      ++*(_QWORD *)(a3 + 360);
    }
  }
  if ( !(unsigned __int8)KiPreprocessFault((ULONG_PTR)a1, (ULONG_PTR)BugCheckParameter3) )
  {
    v19 = LOBYTE(BugCheckParameter3[0]);
    if ( LOBYTE(BugCheckParameter3[0]) )
    {
      v22 = v70;
      v55 = v70;
      v62 = v70;
      if ( (v59[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
      {
        v12 = KeGetCurrentThread();
        if ( v12->ApcState.Process[1].ReadyTime && *a1 == -2147483646 && (*(_DWORD *)(a3 + 376) & 0x40000) != 0 )
        {
          _disable();
          *(_DWORD *)(a3 + 376) &= ~0x40000u;
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( !SchedulerAssist )
            goto LABEL_106;
          _m_prefetchw(SchedulerAssist);
          LODWORD(v12) = *SchedulerAssist;
          do
          {
            v25 = (int)v12;
            LODWORD(v12) = _InterlockedCompareExchange(
                             SchedulerAssist,
                             (unsigned int)v12 & 0xFFDFFFFF,
                             (signed __int32)v12);
          }
          while ( v25 != (_DWORD)v12 );
          if ( ((unsigned int)v12 & 0x200000) == 0 )
            goto LABEL_106;
          v26 = CurrentPrcb;
LABEL_105:
          LOWORD(v12) = KiRemoveSystemWorkPriorityKick((__int64)v26);
LABEL_106:
          _enable();
          return (__int16)v12;
        }
        if ( ((unsigned __int16)v59 & 0xFFF8) == 0x20 )
        {
          if ( *a1 == -2147483645 )
          {
            *a1 = 1073741855;
          }
          else if ( *a1 == -2147483644 )
          {
            *a1 = 1073741854;
          }
          v22 = (char *)((unsigned int)v22 & 0xFFFFFFF0);
          v55 = v22;
          v62 = v22;
        }
      }
      if ( !a5 )
      {
        LOBYTE(v19) = 1;
        LOWORD(v12) = DbgkForwardException(a1, 1LL, v19);
        if ( !(_BYTE)v12 )
        {
          LOBYTE(v44) = 1;
          LOWORD(v12) = DbgkForwardException(a1, 0LL, v44);
          if ( !(_BYTE)v12 )
            LOWORD(v12) = ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, *a1);
        }
        return (__int16)v12;
      }
      v52 = *a1;
      IsThisAKdTrap = KdIsThisAKdTrap(a1);
      HIBYTE(BugCheckParameter3[0]) = IsThisAKdTrap;
      v30 = KeGetCurrentThread()->ApcState.Process;
      if ( !v30[1].UserTime && !KdIgnoreUmExceptions && v29 != -2147483597 || IsThisAKdTrap )
      {
        if ( KdpDebugRoutineSelect )
          v31 = KdpTrap(a3, v56, (_DWORD)a1, (unsigned int)BugCheckParameter3, v28, 0);
        else
          v31 = KdpStub(a3, v56, (_DWORD)a1, (unsigned int)BugCheckParameter3, v28, 0);
        if ( v31 )
        {
          v18 = v56;
          goto LABEL_97;
        }
        v29 = v52;
      }
      if ( v29 == -2147483597 || (LOBYTE(v30) = 1, LOWORD(v12) = DbgkForwardException(a1, v30, 0LL), !(_BYTE)v12) )
      {
        _disable();
        *(_DWORD *)(a3 + 376) &= ~0x100u;
        v32 = KeGetCurrentPrcb();
        v33 = (signed __int32 *)v32->SchedulerAssist;
        if ( v33 )
        {
          _m_prefetchw(v33);
          v34 = *v33;
          do
          {
            v35 = v34;
            v34 = _InterlockedCompareExchange(v33, v34 & 0xFFDFFFFF, v34);
          }
          while ( v35 != v34 );
          if ( (v34 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v32);
        }
        _enable();
        v71[0] = -1073741819;
        v53 = 0;
        v36 = v22;
        v60 = v22;
        v52 = v13 & 0x100040;
        v37 = v57;
        if ( v52 == 1048640 )
        {
          v36 = (char *)((unsigned __int64)&v22[-*(unsigned int *)(v57 + 20)] & 0xFFFFFFFFFFFFFFC0uLL);
          v60 = v36;
        }
        v38 = (_QWORD *)((unsigned __int64)(v36 - 40) & 0xFFFFFFFFFFFFFFF0uLL);
        v67 = v38;
        v68 = v38 - 20;
        v65 = v38 - 24;
        v69 = v38 - 178;
        LODWORD(v81) = -1232;
        DWORD1(v81) = (_DWORD)v55 - ((_DWORD)v38 - 1424);
        *((_QWORD *)&v81 + 1) = 0x4D0FFFFFB30LL;
        LODWORD(v82) = (_DWORD)v36 - ((_DWORD)v38 - 192);
        DWORD1(v82) = (_DWORD)v55 - (_DWORD)v36;
        ProbeForWrite(v38 - 178, v55 - (char *)(v38 - 178), 0x10u);
        v38[3] = v55;
        *v38 = *((_QWORD *)v64 + 31);
        KeCopyExceptionRecord(v38 - 20, a1);
        if ( v52 == 1048640 )
        {
          v39 = (_OWORD *)(v37 + *(int *)(v37 + 16));
          *(_OWORD *)v36 = *v39;
          *((_OWORD *)v36 + 1) = v39[1];
          *((_OWORD *)v36 + 2) = v39[2];
          *((_OWORD *)v36 + 3) = v39[3];
        }
        v40 = v65;
        RtlpCopyExtendedContext(1u, (__int64)v65, (__int64)&v81, BugCheckParameter3_4, v37, 0LL);
        *v40 = v81;
        v40[1] = v82;
        --CurrentThread->SpecialApcDisable;
        v53 = 1;
        KePopulateContinuationContext(*(_QWORD *)(a3 + 360));
        *(_QWORD *)(a3 + 384) = v40 - 77;
        *(_WORD *)(a3 + 368) = 51;
        *(_QWORD *)(a3 + 360) = qword_140FC6450;
        KiSetupForInstrumentationReturn(a3);
        LOWORD(v12) = CurrentThread->SpecialApcDisable;
        v43 = (_WORD)v12 == 0xFFFF;
        LOWORD(v12) = (_WORD)v12 + 1;
        CurrentThread->SpecialApcDisable = (__int16)v12;
        if ( v43 )
        {
          v12 = (struct _KTHREAD *)&CurrentThread->152;
          if ( *(struct _KTHREAD **)&v12->Header.Lock != v12 )
            LOWORD(v12) = KiCheckForKernelApcDelivery(v42, v41);
        }
        v53 = 0;
      }
      return (__int16)v12;
    }
    if ( !a5
      || (KdpDebugRoutineSelect
        ? (v20 = KdpTrap(a3, v18, (_DWORD)a1, (unsigned int)BugCheckParameter3, 0, 0))
        : (v20 = KdpStub(a3, v18, (_DWORD)a1, (unsigned int)BugCheckParameter3, 0, 0)),
          !v20 && !(unsigned __int8)RtlDispatchException((ULONG_PTR)a1, (__int64)BugCheckParameter3)) )
    {
      if ( !(KdpDebugRoutineSelect
           ? KdpTrap(a3, v18, (_DWORD)a1, (unsigned int)BugCheckParameter3, 0, 1)
           : (unsigned __int8)KdpStub(a3, v18, (_DWORD)a1, (unsigned int)BugCheckParameter3, 0, 1)) )
        KeBugCheckEx(0x1Eu, (int)*a1, *((_QWORD *)a1 + 2), *((_QWORD *)a1 + 4), *((_QWORD *)a1 + 5));
    }
  }
LABEL_97:
  LOBYTE(BugCheckParameter4) = BugCheckParameter3[0];
  LOWORD(v12) = KeContextToKframes(a3, v18, (unsigned int)BugCheckParameter3, v58, BugCheckParameter4);
  if ( HIBYTE(BugCheckParameter3[0]) )
  {
    _disable();
    v12 = KeGetCurrentThread();
    InstrumentationCallback = v12->ApcState.Process->InstrumentationCallback;
    if ( InstrumentationCallback && *(_WORD *)(a3 + 368) == 51 )
    {
      v12 = *(struct _KTHREAD **)(a3 + 360);
      *(_QWORD *)(a3 + 88) = v12;
      *(_QWORD *)(a3 + 360) = InstrumentationCallback;
    }
    v26 = KeGetCurrentPrcb();
    v46 = v26->SchedulerAssist;
    if ( !v46 )
      goto LABEL_106;
    _m_prefetchw(v46);
    LODWORD(v12) = *v46;
    do
    {
      v47 = (int)v12;
      LODWORD(v12) = _InterlockedCompareExchange(v46, (unsigned int)v12 & 0xFFDFFFFF, (signed __int32)v12);
    }
    while ( v47 != (_DWORD)v12 );
    if ( ((unsigned int)v12 & 0x200000) == 0 )
      goto LABEL_106;
    goto LABEL_105;
  }
  return (__int16)v12;
}
