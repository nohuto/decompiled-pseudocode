/*
 * XREFs of KiDispatchException @ 0x14025DD90
 * Callers:
 *     KiInitializeUserApc @ 0x140260620 (KiInitializeUserApc.c)
 *     KiRaiseException @ 0x140263A30 (KiRaiseException.c)
 *     KxExceptionDispatchOnExceptionStack @ 0x14069FC10 (KxExceptionDispatchOnExceptionStack.c)
 *     KiExceptionDispatch @ 0x1406B3A00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1406B3F40 (KiFastFailDispatch.c)
 *     PspInitializeThunkContext @ 0x14090A9A0 (PspInitializeThunkContext.c)
 *     PspFreeUserFiberShadowStack @ 0x140A537E8 (PspFreeUserFiberShadowStack.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     RtlInitializeExtendedContext2 @ 0x140258C20 (RtlInitializeExtendedContext2.c)
 *     RtlDispatchException @ 0x14025CE90 (RtlDispatchException.c)
 *     KdTrap @ 0x14025DD50 (KdTrap.c)
 *     KiPreprocessFault @ 0x14025EAD0 (KiPreprocessFault.c)
 *     KeContextFromKframes @ 0x14025EE60 (KeContextFromKframes.c)
 *     KdpStub @ 0x14025F440 (KdpStub.c)
 *     RtlpCopyXStateChunk @ 0x14025FDF8 (RtlpCopyXStateChunk.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     KeCopyExceptionRecord @ 0x1404367D0 (KeCopyExceptionRecord.c)
 *     KiSetupForInstrumentationReturn @ 0x140451440 (KiSetupForInstrumentationReturn.c)
 *     PsPicoDispatchException @ 0x1404ABB38 (PsPicoDispatchException.c)
 *     KiTpHandleTrap @ 0x1404F4A20 (KiTpHandleTrap.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KeContextToKframes @ 0x1404F93B0 (KeContextToKframes.c)
 *     RtlpCopyKernelCetChunk @ 0x1405DE24C (RtlpCopyKernelCetChunk.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x14069B6C0 (ZwTerminateProcess.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PsWow64GetProcessMachine @ 0x140907610 (PsWow64GetProcessMachine.c)
 *     DbgkForwardException @ 0x14091F420 (DbgkForwardException.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     KdpTrap @ 0x140B652B8 (KdpTrap.c)
 *     KdIsThisAKdTrap @ 0x140B6A130 (KdIsThisAKdTrap.c)
 */

__int16 __fastcall KiDispatchException(
        PEXCEPTION_RECORD ExceptionRecord,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned __int8 a5)
{
  int v7; // esi
  unsigned int v9; // r14d
  _KPROCESS *Process; // rdx
  ULONG v11; // esi
  ULONG64 v12; // rbx
  ULONG64 v13; // rcx
  int v14; // r12d
  int v15; // r14d
  int v16; // eax
  unsigned __int64 v17; // rax
  void *v18; // rsp
  unsigned __int8 v19; // r12
  int v20; // ebx
  unsigned __int64 v21; // rbx
  struct _KTHREAD *v22; // rax
  int v23; // edi
  char IsThisAKdTrap; // al
  _KPROCESS *v25; // rdx
  char v26; // al
  struct _KPRCB *v27; // r8
  signed __int32 *v28; // rdx
  unsigned __int64 v29; // r8
  PCONTEXT_EX v30; // r15
  _QWORD *v31; // rbx
  _QWORD *v32; // rdi
  _OWORD *v33; // r13
  PEXCEPTION_RECORD v34; // rcx
  _OWORD *v35; // rcx
  int v36; // ebx
  __int64 v37; // r9
  __int64 Offset; // rax
  _OWORD *v39; // rdx
  _OWORD *v40; // rax
  _OWORD *v41; // r8
  struct _KTHREAD *v42; // r10
  unsigned __int64 v43; // r9
  __int64 v45; // rdx
  _KPROCESS *v46; // rcx
  void *InstrumentationCallback; // rax
  __int16 SpecialApcDisable; // ax
  bool v49; // zf
  __int64 v51; // r10
  __int64 v52; // rax
  unsigned int v53; // r8d
  unsigned int i; // r9d
  __int64 v55; // rcx
  struct _KPRCB *v56; // rcx
  _DWORD *v57; // r8
  signed __int32 v58; // eax
  signed __int32 v59; // ett
  char v60; // al
  int ExceptionCode; // ebx
  int v62; // ecx
  int v63; // ecx
  int v64; // r9d
  struct _KPRCB *CurrentPrcb; // r8
  _DWORD *SchedulerAssist; // rdx
  int v67; // eax
  int v68; // ett
  int v69; // ett
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-10h]
  char BugCheckParameter3; // [rsp+30h] [rbp+0h] BYREF
  char BugCheckParameter3_1; // [rsp+31h] [rbp+1h]
  int BugCheckParameter3_4; // [rsp+34h] [rbp+4h]
  int v75; // [rsp+38h] [rbp+8h]
  int v76; // [rsp+3Ch] [rbp+Ch]
  unsigned __int64 v77; // [rsp+40h] [rbp+10h]
  __int64 v78; // [rsp+48h] [rbp+18h]
  __int64 v79; // [rsp+50h] [rbp+20h]
  int v80; // [rsp+58h] [rbp+28h]
  int v81; // [rsp+5Ch] [rbp+2Ch]
  unsigned int v82; // [rsp+60h] [rbp+30h]
  int v83; // [rsp+64h] [rbp+34h]
  ULONG v84; // [rsp+68h] [rbp+38h]
  PCONTEXT_EX ContextEx; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 v86; // [rsp+78h] [rbp+48h]
  _KPROCESS *v87; // [rsp+80h] [rbp+50h]
  unsigned __int64 v88; // [rsp+88h] [rbp+58h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp+60h]
  PEXCEPTION_RECORD v90; // [rsp+98h] [rbp+68h]
  unsigned __int64 v91; // [rsp+A0h] [rbp+70h]
  PEXCEPTION_RECORD v92; // [rsp+A8h] [rbp+78h]
  _QWORD *v93; // [rsp+B0h] [rbp+80h]
  char *p_BugCheckParameter3; // [rsp+C0h] [rbp+90h]
  unsigned __int64 v95; // [rsp+C8h] [rbp+98h]
  _QWORD *v96; // [rsp+D0h] [rbp+A0h]
  _QWORD *v97; // [rsp+D8h] [rbp+A8h]
  _QWORD *v98; // [rsp+E0h] [rbp+B0h]
  int v99; // [rsp+F0h] [rbp+C0h]
  __int128 v100; // [rsp+F4h] [rbp+C4h]
  __int128 v101; // [rsp+104h] [rbp+D4h]
  __int128 v102; // [rsp+114h] [rbp+E4h]
  __int128 v103; // [rsp+124h] [rbp+F4h]
  __int128 v104; // [rsp+134h] [rbp+104h]
  __int128 v105; // [rsp+144h] [rbp+114h]
  __int128 v106; // [rsp+154h] [rbp+124h]
  __int128 v107; // [rsp+164h] [rbp+134h]
  __int128 v108; // [rsp+174h] [rbp+144h]
  int v109; // [rsp+184h] [rbp+154h]
  __int128 v110; // [rsp+190h] [rbp+160h] BYREF
  __int128 v111; // [rsp+1A0h] [rbp+170h]

  BugCheckParameter3_1 = a4;
  v86 = a3;
  v7 = a2;
  v79 = a2;
  v90 = ExceptionRecord;
  v92 = ExceptionRecord;
  v95 = a3;
  ContextEx = 0LL;
  v9 = 0;
  v100 = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  v105 = 0LL;
  v106 = 0LL;
  v107 = 0LL;
  v108 = 0LL;
  v109 = 0;
  v110 = 0LL;
  v111 = 0LL;
  BugCheckParameter3 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v87 = Process;
  __incgsdword(0x87F0u);
  if ( a5 && Process && Process[3].Padding[5] )
  {
    ExceptionCode = ExceptionRecord->ExceptionCode;
    v62 = ExceptionRecord->ExceptionCode - 268435458;
    if ( ExceptionRecord->ExceptionCode == 268435458 )
    {
      ExceptionRecord->ExceptionCode = -1073741795;
    }
    else
    {
      v63 = v62 - 1;
      if ( v63 )
      {
        if ( v63 == 1 )
          ExceptionRecord->ExceptionCode = -1073741819;
      }
      else
      {
        ExceptionRecord->ExceptionCode = -1073741676;
      }
    }
    if ( ObGetCurrentIrql() < 2u )
    {
      if ( a4
        || ((v67 = ExceptionRecord->ExceptionCode, ExceptionRecord->ExceptionCode == -1073741818)
         || v67 == -1073741819
         || v67 == -2147483647)
        && ExceptionRecord->ExceptionInformation[1] <= 0x7FFFFFFF0000LL )
      {
        LOWORD(v22) = PsPicoDispatchException((_DWORD)ExceptionRecord, v7, a3, v64, a4);
        if ( (_BYTE)v22 )
          return (__int16)v22;
      }
    }
    ExceptionRecord->ExceptionCode = ExceptionCode;
    Process = v87;
  }
  v11 = 1048607;
  v76 = 1048607;
  v12 = 0LL;
  if ( a4 )
  {
    if ( (KeFeatureBits & 0x800000) != 0 )
    {
      v11 = 1048671;
      v76 = 1048671;
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      {
        v13 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
        if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0x800LL) != 0
          && (HIDWORD(Process[4].ThreadListHead.Flink) & 0x4000) == 0 )
        {
          v13 &= ~0x800uLL;
        }
        v12 = v13 & 0xFFFFFFFFFFF9FFFFuLL;
        if ( SLOBYTE(ExceptionRecord->ExceptionFlags) >= 0 )
          v12 = v13;
        if ( (unsigned __int16)PsWow64GetProcessMachine(Process) == 332 )
          v12 &= 0xFFFFFFFFFFF9FFFFuLL;
      }
    }
  }
  else
  {
    if ( (_BYTE)KiKernelCetEnabled )
      v11 = 1048735;
    v76 = v11;
  }
  v84 = v11;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  v14 = 1;
  if ( (v11 & 0x100040) == 0x100040 )
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
    {
      v78 = 3LL;
      goto LABEL_24;
    }
    v78 = 3LL;
    v14 = 3;
  }
  else
  {
    v78 = 3LL;
  }
  if ( (v11 & 0x100080) == 0x100080 )
  {
    if ( !(_BYTE)KiKernelCetEnabled )
      goto LABEL_24;
    v14 |= 4u;
  }
  v80 = v14;
  v81 = 16;
  v15 = 1264;
  v16 = 1264;
  if ( (v14 & 2) != 0 )
  {
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      v51 = v12 & (MEMORY[0xFFFFF78000000708] | MEMORY[0xFFFFF780000003D8]) & 0x4000000000060DFFLL;
      v52 = 4LL;
      v53 = 576;
      for ( i = 2; i < 0x40; i += 2 )
      {
        if ( (v52 & v51) != 0 )
        {
          if ( (v52 & MEMORY[0xFFFFF780000005F8]) != 0 )
            v53 = (v53 + 63) & 0xFFFFFFC0;
          v53 += *(_DWORD *)(4LL * i - 0x87FFFFFF9FCLL);
        }
        v55 = __ROL8__(v52, 1);
        if ( (v55 & v51) != 0 )
        {
          if ( (v55 & MEMORY[0xFFFFF780000005F8]) != 0 )
            v53 = (v53 + 63) & 0xFFFFFFC0;
          v53 += *(_DWORD *)(4LL * (i + 1) - 0x87FFFFFF9FCLL);
        }
        v52 = __ROL8__(v52, 2);
      }
    }
    else
    {
      v53 = MEMORY[0xFFFFF780000003E8];
    }
    v15 = v53 - 16 + 816;
    v16 = v15;
  }
  if ( (v14 & 4) != 0 )
    v16 = v15 + 32;
  v9 = v16 - 1 + 16;
  v82 = v9;
LABEL_24:
  v17 = v9 + 15LL;
  if ( v17 <= v9 )
    v17 = 0xFFFFFFFFFFFFFF0LL;
  v18 = alloca(v17 & 0xFFFFFFFFFFFFFFF0uLL);
  p_BugCheckParameter3 = &BugCheckParameter3;
  v19 = BugCheckParameter3_1;
  if ( BugCheckParameter3_1 )
    memset_0(&BugCheckParameter3, 0, v9);
  RtlInitializeExtendedContext2((PCONTEXT)&BugCheckParameter3, v11, &ContextEx, v12);
  v20 = v79;
  KeContextFromKframes(a3, v79, &BugCheckParameter3);
  if ( ExceptionRecord->ExceptionCode != -2147483645
    || (--*(_QWORD *)((char *)&v103 + 4), (KiDynamicTraceMask & 2) == 0) )
  {
LABEL_29:
    if ( !(unsigned __int8)KiPreprocessFault((ULONG_PTR)ExceptionRecord, (ULONG_PTR)&BugCheckParameter3) )
    {
      if ( v19 )
      {
        v21 = v95;
        v77 = v95;
        v91 = v95;
        if ( (v87[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
        {
          v22 = KeGetCurrentThread();
          if ( v22->ApcState.Process[1].ReadyTime
            && ExceptionRecord->ExceptionCode == -2147483646
            && (*(_DWORD *)(a3 + 376) & 0x40000) != 0 )
          {
            _disable();
            *(_DWORD *)(a3 + 376) &= ~0x40000u;
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            if ( !SchedulerAssist )
              goto LABEL_120;
            _m_prefetchw(SchedulerAssist);
            LODWORD(v22) = *SchedulerAssist;
            do
            {
              v68 = (int)v22;
              LODWORD(v22) = _InterlockedCompareExchange(
                               SchedulerAssist,
                               (unsigned int)v22 & 0xFFDFFFFF,
                               (signed __int32)v22);
            }
            while ( v68 != (_DWORD)v22 );
            if ( ((unsigned int)v22 & 0x200000) == 0 )
              goto LABEL_120;
            v56 = CurrentPrcb;
LABEL_139:
            LOWORD(v22) = KiRemoveSystemWorkPriorityKick(v56);
LABEL_120:
            _enable();
            return (__int16)v22;
          }
          if ( (v84 & 0xFFF8) == 0x20 )
          {
            if ( ExceptionRecord->ExceptionCode == -2147483645 )
            {
              ExceptionRecord->ExceptionCode = 1073741855;
            }
            else if ( ExceptionRecord->ExceptionCode == -2147483644 )
            {
              ExceptionRecord->ExceptionCode = 1073741854;
            }
            v21 = (unsigned int)v21 & 0xFFFFFFF0;
            v91 = v21;
            v77 = v21;
          }
        }
        if ( !a5 )
        {
          LOWORD(v22) = DbgkForwardException(ExceptionRecord, 1LL);
          if ( !(_BYTE)v22 )
          {
            LOWORD(v22) = DbgkForwardException(ExceptionRecord, 0LL);
            if ( !(_BYTE)v22 )
              LOWORD(v22) = ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord->ExceptionCode);
          }
          return (__int16)v22;
        }
        v23 = ExceptionRecord->ExceptionCode;
        IsThisAKdTrap = KdIsThisAKdTrap(ExceptionRecord);
        BugCheckParameter3 = IsThisAKdTrap;
        v25 = KeGetCurrentThread()->ApcState.Process;
        if ( (v25[1].UserTime || KdIgnoreUmExceptions || v23 == -2147483597) && !IsThisAKdTrap
          || (KdpDebugRoutineSelect
            ? (v26 = KdpTrap(a3, v79, (_DWORD)ExceptionRecord, (unsigned int)&BugCheckParameter3, v19, 0))
            : (v26 = KdpStub(a3, v79, (_DWORD)ExceptionRecord, (unsigned int)&BugCheckParameter3, v19, 0)),
              !v26) )
        {
          if ( v23 != -2147483597 )
          {
            LOBYTE(v25) = 1;
            LOWORD(v22) = DbgkForwardException(ExceptionRecord, v25);
            if ( (_BYTE)v22 )
              return (__int16)v22;
          }
          _disable();
          *(_DWORD *)(a3 + 376) &= ~0x100u;
          v27 = KeGetCurrentPrcb();
          v28 = (signed __int32 *)v27->SchedulerAssist;
          if ( v28 )
          {
            _m_prefetchw(v28);
            v58 = *v28;
            do
            {
              v59 = v58;
              v58 = _InterlockedCompareExchange(v28, v58 & 0xFFDFFFFF, v58);
            }
            while ( v59 != v58 );
            if ( (v58 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v27);
          }
          _enable();
          v99 = -1073741819;
          BugCheckParameter3_4 = 0;
          v29 = v21;
          v88 = v21;
          v30 = ContextEx;
          if ( (v11 & 0x100040) == 0x100040 )
          {
            v29 = (v21 - ContextEx->XState.Length) & 0xFFFFFFFFFFFFFFC0uLL;
            v88 = v29;
          }
          v31 = (_QWORD *)((v29 - 40) & 0xFFFFFFFFFFFFFFF0uLL);
          v96 = v31;
          v32 = v31 - 20;
          v97 = v31 - 20;
          v33 = v31 - 24;
          v98 = v31 - 24;
          v93 = v31 - 178;
          LODWORD(v110) = -1232;
          DWORD1(v110) = v77 - ((_DWORD)v31 - 1424);
          *((_QWORD *)&v110 + 1) = 0x4D0FFFFFB30LL;
          LODWORD(v111) = v29 - ((_DWORD)v31 - 192);
          DWORD1(v111) = v77 - v29;
          ProbeForWrite(v31 - 178, v77 - (_QWORD)(v31 - 178), 0x10u);
          v31[3] = v77;
          *v31 = *(_QWORD *)((char *)&v103 + 4);
          memset_0(v31 - 20, 0, 0x98uLL);
          v34 = v90;
          *(_OWORD *)v32 = *(_OWORD *)&v90->ExceptionCode;
          v32[2] = v34->ExceptionAddress;
          *((_DWORD *)v32 + 6) = v34->NumberParameters;
          memmove(v31 - 16, v34->ExceptionInformation, 8LL * v34->NumberParameters);
          v83 = 0;
          v36 = 1;
          v75 = 1;
          if ( (v11 & 0x100040) == 0x100040 )
          {
            if ( !MEMORY[0xFFFFF780000003D8] )
              goto LABEL_62;
            v37 = v78;
            v36 = v78;
            v75 = v78;
          }
          else
          {
            v37 = v78;
          }
          if ( (v11 & 0x100080) == 0x100080 )
          {
            if ( !(_BYTE)KiKernelCetEnabled )
              goto LABEL_62;
            v36 |= 4u;
            v75 = v36;
          }
          v83 = v36;
          if ( (v36 & 1) == 0 )
          {
LABEL_58:
            if ( (v36 & 2) == 0
              || (LOBYTE(v35) = 1,
                  (int)RtlpCopyXStateChunk((_DWORD)v35, (_DWORD)v33, (unsigned int)&v110, (_DWORD)v30, (__int64)v30) >= 0) )
            {
              if ( (v36 & 4) != 0 )
              {
                LOBYTE(v35) = 1;
                RtlpCopyKernelCetChunk((_DWORD)v35, (_DWORD)v33, (unsigned int)&v110, (_DWORD)v30, (__int64)v30);
              }
            }
            goto LABEL_62;
          }
          Offset = v30->Legacy.Offset;
          if ( (_DWORD)Offset == -1232 && v30->Legacy.Length <= 0x4D0 )
          {
            v35 = v33 - 77;
            v39 = (_OWORD *)((char *)&v30->All + Offset);
            *((_DWORD *)v35 + 12) = v84;
            *((_QWORD *)v35 + 31) = *(CONTEXT_CHUNK *)((char *)&v30[7].KernelCet + Offset);
            *((_WORD *)v35 + 28) = *(_WORD *)((char *)&v30[1].KernelCet.Offset + Offset);
            *((_WORD *)v35 + 33) = *(_WORD *)((char *)&v30[2].All.Offset + Offset + 2);
            *((_QWORD *)v35 + 19) = *(CONTEXT_CHUNK *)((char *)&v30[4].KernelCet + Offset);
            *((_DWORD *)v35 + 17) = *(ULONG *)((char *)&v30[2].All.Length + Offset);
            *(_OWORD *)((char *)v35 + 120) = *(_OWORD *)((char *)&v30[3].KernelCet.Offset + Offset);
            *(_OWORD *)((char *)v35 + 136) = *(_OWORD *)((char *)&v30[4].Legacy.Offset + Offset);
            v35[10] = *(_OWORD *)((char *)&v30[5].All.Offset + Offset);
            v35[11] = *(_OWORD *)((char *)&v30[5].XState.Offset + Offset);
            v35[12] = *(_OWORD *)((char *)&v30[6].All.Offset + Offset);
            v35[13] = *(_OWORD *)((char *)&v30[6].XState.Offset + Offset);
            v35[14] = *(_OWORD *)((char *)&v30[7].All.Offset + Offset);
            *((_QWORD *)v35 + 30) = *(CONTEXT_CHUNK *)((char *)&v30[7].XState + Offset);
            *((_WORD *)v35 + 32) = *(_WORD *)((char *)&v30[2].All.Offset + Offset);
            *((_WORD *)v35 + 31) = *(_WORD *)((char *)&v30[1].KernelCet.Length + Offset + 2);
            *((_WORD *)v35 + 30) = *(_WORD *)((char *)&v30[1].KernelCet.Length + Offset);
            *((_WORD *)v35 + 29) = *(_WORD *)((char *)&v30[1].KernelCet.Offset + Offset + 2);
            *((_DWORD *)v35 + 13) = *(ULONG *)((char *)&v30[1].XState.Length + Offset);
            v40 = v33 - 61;
            v41 = v39 + 16;
            do
            {
              *v40 = *v41;
              v40[1] = v41[1];
              v40[2] = v41[2];
              v40[3] = v41[3];
              v40[4] = v41[4];
              v40[5] = v41[5];
              v40[6] = v41[6];
              v40 += 8;
              *(v40 - 1) = v41[7];
              v41 += 8;
              --v37;
            }
            while ( v37 );
            *v40 = *v41;
            v40[1] = v41[1];
            *(_OWORD *)((char *)v35 + 72) = *(_OWORD *)((char *)v39 + 72);
            *(_OWORD *)((char *)v35 + 88) = *(_OWORD *)((char *)v39 + 88);
            *(_OWORD *)((char *)v35 + 104) = *(_OWORD *)((char *)v39 + 104);
            v35[75] = v39[75];
            v35[76] = v39[76];
            goto LABEL_58;
          }
LABEL_62:
          *v33 = v110;
          v33[1] = v111;
          v42 = CurrentThread;
          --CurrentThread->SpecialApcDisable;
          BugCheckParameter3_4 = 1;
          v43 = v86;
          _R8 = *(_QWORD *)(v86 + 360);
          v86 = _R8;
          if ( (KeGetCurrentThread()->MiscFlags & 0x100000) != 0 )
          {
            _RAX = __readmsr(0x6A7u) - 8;
            __asm { wrussq  qword ptr [rax], r8 }
            __writemsr(0x6A7u, _RAX);
          }
          *(_QWORD *)(v43 + 384) = v93;
          *(_WORD *)(v43 + 368) = 51;
          *(_QWORD *)(v43 + 360) = qword_140FC6490;
          v45 = qword_140FC6490;
          v46 = KeGetCurrentThread()->ApcState.Process;
          InstrumentationCallback = v46->InstrumentationCallback;
          if ( InstrumentationCallback )
          {
            *(_QWORD *)(v43 + 88) = qword_140FC6490;
            *(_QWORD *)(v43 + 360) = InstrumentationCallback;
          }
          SpecialApcDisable = v42->SpecialApcDisable;
          v49 = SpecialApcDisable == -1;
          LOWORD(v22) = SpecialApcDisable + 1;
          v42->SpecialApcDisable = (__int16)v22;
          if ( v49 )
          {
            v22 = (struct _KTHREAD *)&v42->152;
            if ( *(struct _KTHREAD **)&v22->Header.Lock != v22 )
              LOWORD(v22) = KiCheckForKernelApcDelivery(v46, v45, _R8, v43);
          }
          BugCheckParameter3_4 = 0;
          return (__int16)v22;
        }
        v20 = v79;
      }
      else if ( !a5
             || (KdpDebugRoutineSelect
               ? (v60 = KdpTrap(a3, v20, (_DWORD)ExceptionRecord, (unsigned int)&BugCheckParameter3, 0, 0))
               : (v60 = KdpStub(a3, v20, (_DWORD)ExceptionRecord, (unsigned int)&BugCheckParameter3, 0, 0)),
                 !v60 && !RtlDispatchException(ExceptionRecord, (PCONTEXT)&BugCheckParameter3)) )
      {
        if ( !(unsigned __int8)KdTrap(a3, v20, (int)ExceptionRecord, (int)&BugCheckParameter3, 0, 1) )
          KeBugCheckEx(
            0x1Eu,
            ExceptionRecord->ExceptionCode,
            (ULONG_PTR)ExceptionRecord->ExceptionAddress,
            ExceptionRecord->ExceptionInformation[0],
            ExceptionRecord->ExceptionInformation[1]);
      }
    }
    goto LABEL_92;
  }
  --*(_QWORD *)(a3 + 360);
  if ( !(unsigned __int8)KiTpHandleTrap(ExceptionRecord, &BugCheckParameter3, v19, a5) )
  {
    ++*(_QWORD *)(a3 + 360);
    goto LABEL_29;
  }
LABEL_92:
  LOBYTE(BugCheckParameter4) = v19;
  LOWORD(v22) = KeContextToKframes(a3, v20, (unsigned int)&BugCheckParameter3, v82, BugCheckParameter4);
  if ( BugCheckParameter3 )
  {
    _disable();
    LOWORD(v22) = KiSetupForInstrumentationReturn(a3);
    v56 = KeGetCurrentPrcb();
    v57 = v56->SchedulerAssist;
    if ( !v57 )
      goto LABEL_120;
    _m_prefetchw(v57);
    LODWORD(v22) = *v57;
    do
    {
      v69 = (int)v22;
      LODWORD(v22) = _InterlockedCompareExchange(v57, (unsigned int)v22 & 0xFFDFFFFF, (signed __int32)v22);
    }
    while ( v69 != (_DWORD)v22 );
    if ( ((unsigned int)v22 & 0x200000) == 0 )
      goto LABEL_120;
    goto LABEL_139;
  }
  return (__int16)v22;
}
