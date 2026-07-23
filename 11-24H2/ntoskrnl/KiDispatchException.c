/*
 * XREFs of KiDispatchException @ 0x1403D5EB0
 * Callers:
 *     KiInitializeUserApc @ 0x1403D2E04 (KiInitializeUserApc.c)
 *     KiRaiseException @ 0x1403D3FF0 (KiRaiseException.c)
 *     KxExceptionDispatchOnExceptionStack @ 0x1406ABE80 (KxExceptionDispatchOnExceptionStack.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1406C0140 (KiFastFailDispatch.c)
 *     PspFreeUserFiberShadowStack @ 0x1408D959C (PspFreeUserFiberShadowStack.c)
 *     PspInitializeThunkContext @ 0x140920BE8 (PspInitializeThunkContext.c)
 * Callees:
 *     RtlDispatchException @ 0x140231750 (RtlDispatchException.c)
 *     RtlInitializeExtendedContext2 @ 0x140235240 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1402354D0 (RtlGetExtendedContextLength2.c)
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140362BE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KePopulateContinuationContext @ 0x1403D3414 (KePopulateContinuationContext.c)
 *     KeContextFromKframes @ 0x1403D3460 (KeContextFromKframes.c)
 *     RtlpCopyExtendedContext @ 0x1403D4F10 (RtlpCopyExtendedContext.c)
 *     KiPreprocessFault @ 0x1403F4D80 (KiPreprocessFault.c)
 *     KdpStub @ 0x14041C950 (KdpStub.c)
 *     KeCopyExceptionRecord @ 0x1404252B0 (KeCopyExceptionRecord.c)
 *     KiSetupForInstrumentationReturn @ 0x140447F80 (KiSetupForInstrumentationReturn.c)
 *     KiTpHandleTrap @ 0x1404F4C00 (KiTpHandleTrap.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KeContextToKframes @ 0x1404F9380 (KeContextToKframes.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x1406A7930 (ZwTerminateProcess.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     DbgkForwardException @ 0x1408F32F0 (DbgkForwardException.c)
 *     PsWow64GetProcessMachine @ 0x14091D9C0 (PsWow64GetProcessMachine.c)
 *     KdpTrap @ 0x140B772B8 (KdpTrap.c)
 *     KdIsThisAKdTrap @ 0x140B7C130 (KdIsThisAKdTrap.c)
 */

__int16 __fastcall KiDispatchException(
        PEXCEPTION_RECORD ExceptionRecord,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // rdx
  int v11; // ebx
  struct _KTHREAD *v12; // rax
  ULONG v13; // r12d
  ULONG64 v14; // rdi
  ULONG64 v15; // rcx
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
  int v29; // r9d
  _KPROCESS *v30; // rdx
  char v31; // al
  struct _KPRCB *v32; // r8
  signed __int32 *v33; // rdx
  signed __int32 v34; // eax
  signed __int32 v35; // ett
  char *v36; // r14
  PCONTEXT_EX v37; // r12
  _QWORD *v38; // rdi
  _OWORD *v39; // rax
  _OWORD *v40; // rbx
  bool v41; // zf
  __int64 v42; // r8
  void *InstrumentationCallback; // rdx
  _DWORD *v44; // r8
  int v45; // ett
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-10h]
  _WORD BugCheckParameter3[2]; // [rsp+30h] [rbp+0h] BYREF
  int BugCheckParameter3_4; // [rsp+34h] [rbp+4h]
  int ExceptionCode; // [rsp+38h] [rbp+8h]
  int v51; // [rsp+3Ch] [rbp+Ch]
  ULONG ContextLength; // [rsp+40h] [rbp+10h] BYREF
  char *v53; // [rsp+48h] [rbp+18h]
  __int64 v54; // [rsp+50h] [rbp+20h]
  PCONTEXT_EX ContextEx; // [rsp+58h] [rbp+28h] BYREF
  __int64 v56; // [rsp+60h] [rbp+30h]
  _KPROCESS *v57; // [rsp+68h] [rbp+38h]
  char *v58; // [rsp+70h] [rbp+40h]
  struct _KTHREAD *v59; // [rsp+78h] [rbp+48h]
  char *v60; // [rsp+80h] [rbp+50h]
  PEXCEPTION_RECORD v61; // [rsp+88h] [rbp+58h]
  _WORD *v62; // [rsp+90h] [rbp+60h]
  _OWORD *v63; // [rsp+98h] [rbp+68h]
  __int64 v64; // [rsp+A0h] [rbp+70h]
  _QWORD *v65; // [rsp+A8h] [rbp+78h]
  _QWORD *v66; // [rsp+B0h] [rbp+80h]
  _QWORD *v67; // [rsp+B8h] [rbp+88h]
  char *v68; // [rsp+C8h] [rbp+98h]
  _DWORD v69[5]; // [rsp+D0h] [rbp+A0h]
  __int128 Src; // [rsp+E4h] [rbp+B4h]
  __int128 v71; // [rsp+F4h] [rbp+C4h]
  __int128 v72; // [rsp+104h] [rbp+D4h]
  __int128 v73; // [rsp+114h] [rbp+E4h]
  __int128 v74; // [rsp+124h] [rbp+F4h]
  __int128 v75; // [rsp+134h] [rbp+104h]
  __int128 v76; // [rsp+144h] [rbp+114h]
  __int128 v77; // [rsp+154h] [rbp+124h]
  int v78; // [rsp+164h] [rbp+134h]
  __int128 v79; // [rsp+170h] [rbp+140h] BYREF
  __int128 v80; // [rsp+180h] [rbp+150h]

  BugCheckParameter3[0] = a4;
  v54 = a2;
  v61 = ExceptionRecord;
  v64 = a3;
  ContextEx = 0LL;
  ContextLength = 0;
  *(_OWORD *)&v69[1] = 0LL;
  Src = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0;
  v79 = 0LL;
  v80 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v59 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  v57 = Process;
  __incgsdword(0x87F0u);
  if ( !a5 || !Process || !Process[3].Padding[5] )
    goto LABEL_19;
  BugCheckParameter3_4 = ExceptionRecord->ExceptionCode;
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
        ExceptionRecord->ExceptionCode = -1073741819;
        v11 = -1073741819;
      }
      goto LABEL_11;
    }
    v11 = -1073741676;
  }
  ExceptionRecord->ExceptionCode = v11;
LABEL_11:
  if ( KeAreInterruptsEnabled()
    && KeGetCurrentIrql() < 2u
    && (a4
     || ((unsigned int)(v11 + 1073741819) <= 1 || v11 == -2147483647)
     && ExceptionRecord->ExceptionInformation[1] <= 0x7FFFFFFF0000LL) )
  {
    LOBYTE(BugCheckParameter4) = a4;
    LOWORD(v12) = guard_dispatch_icall_no_overrides(ExceptionRecord, a2);
    if ( (_BYTE)v12 )
      return (__int16)v12;
  }
  ExceptionRecord->ExceptionCode = BugCheckParameter3_4;
  Process = v57;
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
        if ( SLOBYTE(ExceptionRecord->ExceptionFlags) >= 0 )
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
  RtlGetExtendedContextLength2(v13, &ContextLength, v14);
  v16 = ContextLength + 15LL;
  if ( v16 <= ContextLength )
    v16 = 0xFFFFFFFFFFFFFF0LL;
  v17 = alloca(v16 & 0xFFFFFFFFFFFFFFF0uLL);
  v62 = BugCheckParameter3;
  if ( LOBYTE(BugCheckParameter3[0]) )
    memset_0(BugCheckParameter3, 0, ContextLength);
  RtlInitializeExtendedContext2((PCONTEXT)BugCheckParameter3, v13, &ContextEx, v14);
  v18 = v54;
  KeContextFromKframes(a3, v54, (__int64)BugCheckParameter3);
  if ( ExceptionRecord->ExceptionCode == -2147483645 )
  {
    --*(_QWORD *)((char *)&v74 + 4);
    if ( (KiDynamicTraceMask & 2) != 0 )
    {
      --*(_QWORD *)(a3 + 360);
      if ( (unsigned __int8)KiTpHandleTrap(
                              ExceptionRecord,
                              BugCheckParameter3,
                              LOBYTE(BugCheckParameter3[0]),
                              a5,
                              (_BYTE)BugCheckParameter4) )
        goto LABEL_97;
      ++*(_QWORD *)(a3 + 360);
    }
  }
  if ( !(unsigned __int8)KiPreprocessFault((ULONG_PTR)ExceptionRecord, (ULONG_PTR)BugCheckParameter3) )
  {
    v19 = LOBYTE(BugCheckParameter3[0]);
    if ( LOBYTE(BugCheckParameter3[0]) )
    {
      v22 = v68;
      v53 = v68;
      v60 = v68;
      if ( (v57[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
      {
        v12 = KeGetCurrentThread();
        if ( v12->ApcState.Process[1].ReadyTime
          && ExceptionRecord->ExceptionCode == -2147483646
          && (*(_DWORD *)(a3 + 376) & 0x40000) != 0 )
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
        if ( ((unsigned __int16)v57 & 0xFFF8) == 0x20 )
        {
          if ( ExceptionRecord->ExceptionCode == -2147483645 )
          {
            ExceptionRecord->ExceptionCode = 1073741855;
          }
          else if ( ExceptionRecord->ExceptionCode == -2147483644 )
          {
            ExceptionRecord->ExceptionCode = 1073741854;
          }
          v22 = (char *)((unsigned int)v22 & 0xFFFFFFF0);
          v53 = v22;
          v60 = v22;
        }
      }
      if ( !a5 )
      {
        LOBYTE(v19) = 1;
        LOWORD(v12) = DbgkForwardException(ExceptionRecord, 1LL, v19);
        if ( !(_BYTE)v12 )
        {
          LOBYTE(v42) = 1;
          LOWORD(v12) = DbgkForwardException(ExceptionRecord, 0LL, v42);
          if ( !(_BYTE)v12 )
            LOWORD(v12) = ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord->ExceptionCode);
        }
        return (__int16)v12;
      }
      ExceptionCode = ExceptionRecord->ExceptionCode;
      IsThisAKdTrap = KdIsThisAKdTrap(ExceptionRecord);
      HIBYTE(BugCheckParameter3[0]) = IsThisAKdTrap;
      v30 = KeGetCurrentThread()->ApcState.Process;
      if ( !v30[1].UserTime && !KdIgnoreUmExceptions && v29 != -2147483597 || IsThisAKdTrap )
      {
        if ( KdpDebugRoutineSelect )
          v31 = KdpTrap(a3, v54, (_DWORD)ExceptionRecord, (unsigned int)BugCheckParameter3, v28, 0);
        else
          v31 = KdpStub(a3, v54, (_DWORD)ExceptionRecord, (unsigned int)BugCheckParameter3, v28, 0);
        if ( v31 )
        {
          v18 = v54;
          goto LABEL_97;
        }
        v29 = ExceptionCode;
      }
      if ( v29 == -2147483597
        || (LOBYTE(v30) = 1, LOWORD(v12) = DbgkForwardException(ExceptionRecord, v30, 0LL), !(_BYTE)v12) )
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
        v69[0] = -1073741819;
        v51 = 0;
        v36 = v22;
        v58 = v22;
        ExceptionCode = v13 & 0x100040;
        v37 = ContextEx;
        if ( ExceptionCode == 1048640 )
        {
          v36 = (char *)((unsigned __int64)&v22[-ContextEx->XState.Length] & 0xFFFFFFFFFFFFFFC0uLL);
          v58 = v36;
        }
        v38 = (_QWORD *)((unsigned __int64)(v36 - 40) & 0xFFFFFFFFFFFFFFF0uLL);
        v65 = v38;
        v66 = v38 - 20;
        v63 = v38 - 24;
        v67 = v38 - 178;
        LODWORD(v79) = -1232;
        DWORD1(v79) = (_DWORD)v53 - ((_DWORD)v38 - 1424);
        *((_QWORD *)&v79 + 1) = 0x4D0FFFFFB30LL;
        LODWORD(v80) = (_DWORD)v36 - ((_DWORD)v38 - 192);
        DWORD1(v80) = (_DWORD)v53 - (_DWORD)v36;
        ProbeForWrite(v38 - 178, v53 - (char *)(v38 - 178), 0x10u);
        v38[3] = v53;
        *v38 = *((_QWORD *)v62 + 31);
        KeCopyExceptionRecord(v38 - 20, ExceptionRecord);
        if ( ExceptionCode == 1048640 )
        {
          v39 = (_OWORD *)((char *)&v37->All + v37->XState.Offset);
          *(_OWORD *)v36 = *v39;
          *((_OWORD *)v36 + 1) = v39[1];
          *((_OWORD *)v36 + 2) = v39[2];
          *((_OWORD *)v36 + 3) = v39[3];
        }
        v40 = v63;
        RtlpCopyExtendedContext(1u, (__int64)v63, (__int64)&v79, BugCheckParameter3_4, (__int64)v37, 0LL);
        *v40 = v79;
        v40[1] = v80;
        --CurrentThread->SpecialApcDisable;
        v51 = 1;
        KePopulateContinuationContext(*(_QWORD *)(a3 + 360));
        *(_QWORD *)(a3 + 384) = v40 - 77;
        *(_WORD *)(a3 + 368) = 51;
        *(_QWORD *)(a3 + 360) = qword_140FC74D0;
        KiSetupForInstrumentationReturn(a3);
        LOWORD(v12) = CurrentThread->SpecialApcDisable;
        v41 = (_WORD)v12 == 0xFFFF;
        LOWORD(v12) = (_WORD)v12 + 1;
        CurrentThread->SpecialApcDisable = (__int16)v12;
        if ( v41 )
        {
          v12 = (struct _KTHREAD *)&CurrentThread->152;
          if ( *(struct _KTHREAD **)&v12->Header.Lock != v12 )
            LOWORD(v12) = KiCheckForKernelApcDelivery();
        }
        v51 = 0;
      }
      return (__int16)v12;
    }
    if ( !a5
      || (KdpDebugRoutineSelect
        ? (v20 = KdpTrap(a3, v18, (_DWORD)ExceptionRecord, (unsigned int)BugCheckParameter3, 0, 0))
        : (v20 = KdpStub(a3, v18, (_DWORD)ExceptionRecord, (unsigned int)BugCheckParameter3, 0, 0)),
          !v20 && !RtlDispatchException(ExceptionRecord, (PCONTEXT)BugCheckParameter3)) )
    {
      if ( !(KdpDebugRoutineSelect
           ? KdpTrap(a3, v18, (_DWORD)ExceptionRecord, (unsigned int)BugCheckParameter3, 0, 1)
           : (unsigned __int8)KdpStub(a3, v18, (_DWORD)ExceptionRecord, (unsigned int)BugCheckParameter3, 0, 1)) )
        KeBugCheckEx(
          0x1Eu,
          ExceptionRecord->ExceptionCode,
          (ULONG_PTR)ExceptionRecord->ExceptionAddress,
          ExceptionRecord->ExceptionInformation[0],
          ExceptionRecord->ExceptionInformation[1]);
    }
  }
LABEL_97:
  LOBYTE(BugCheckParameter4) = BugCheckParameter3[0];
  LOWORD(v12) = KeContextToKframes(a3, v18, (unsigned int)BugCheckParameter3, v56, BugCheckParameter4);
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
    v44 = v26->SchedulerAssist;
    if ( !v44 )
      goto LABEL_106;
    _m_prefetchw(v44);
    LODWORD(v12) = *v44;
    do
    {
      v45 = (int)v12;
      LODWORD(v12) = _InterlockedCompareExchange(v44, (unsigned int)v12 & 0xFFDFFFFF, (signed __int32)v12);
    }
    while ( v45 != (_DWORD)v12 );
    if ( ((unsigned int)v12 & 0x200000) == 0 )
      goto LABEL_106;
    goto LABEL_105;
  }
  return (__int16)v12;
}
