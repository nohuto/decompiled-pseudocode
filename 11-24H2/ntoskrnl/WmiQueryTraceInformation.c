/*
 * XREFs of WmiQueryTraceInformation @ 0x140ADA530
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x140A9F6F8 (WdipSemWriteSemActionsEvent.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140945104 (EtwpReleaseLoggerContext.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140A866D8 (EtwQueryTraceHandleByLoggerName.c)
 */

NTSTATUS __stdcall WmiQueryTraceInformation(
        TRACE_INFORMATION_CLASS TraceInformationClass,
        PVOID TraceInformation,
        ULONG TraceInformationLength,
        PULONG RequiredLength,
        PVOID Buffer)
{
  unsigned __int64 v6; // r15
  __int64 v8; // r13
  __int64 v9; // rdx
  _DWORD *v10; // r9
  int v11; // r10d
  struct _LIST_ENTRY *Flink; // r12
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  unsigned int v18; // esi
  unsigned int j; // r14d
  unsigned int *v20; // r8
  unsigned __int64 v21; // rdx
  int v22; // ecx
  NTSTATUS result; // eax
  unsigned int *v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned int v29; // eax
  __int16 v30; // cx
  int v31; // r10d
  int v32; // r10d
  int v33; // r10d
  int v34; // r10d
  int v35; // r10d
  int v36; // r10d
  __int64 *v37; // rax
  __int64 v38; // r12
  unsigned int v39; // eax
  unsigned int i; // r15d
  __int64 v41; // rcx
  __int64 v42; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int *v44; // rax
  unsigned int *v45; // rax
  unsigned int v46; // esi
  NTSTATUS v47; // [rsp+20h] [rbp-38h]
  __int64 v48; // [rsp+30h] [rbp-28h] BYREF
  __int64 v49; // [rsp+38h] [rbp-20h]
  unsigned int Buffera; // [rsp+80h] [rbp+28h]
  unsigned int Bufferb; // [rsp+80h] [rbp+28h]

  v6 = TraceInformationLength;
  v8 = 0LL;
  v47 = 0;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  if ( v10 )
    *v10 = 0;
  if ( v11 > 7 )
  {
    v31 = v11 - 8;
    if ( !v31 )
    {
      if ( (_DWORD)v6 != 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v45 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId((__int64)Flink, *(_DWORD *)Buffer, 0);
      if ( !v45 )
        return -1073741275;
      v46 = v45[60];
      EtwpReleaseLoggerContext(v45, 0);
      if ( TraceInformation )
        *(_DWORD *)TraceInformation = v46;
      if ( RequiredLength )
        *RequiredLength = 4;
      return v47;
    }
    v32 = v31 - 1;
    if ( !v32 )
    {
      if ( !Buffer )
        return -1073741581;
      if ( !RequiredLength )
        return -1073741582;
      *v10 = 32;
      if ( (unsigned int)v6 < 0x20 )
        return -1073741820;
      if ( !TraceInformation )
        return -1073741584;
      v48 = *(_QWORD *)Buffer;
      Bufferb = (unsigned __int16)v48;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v44 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId((__int64)Flink, Bufferb, 0);
      if ( v44 )
      {
        *(_DWORD *)TraceInformation = 1;
        *((_DWORD *)TraceInformation + 1) = v44[1];
        *((_DWORD *)TraceInformation + 2) = v44[56];
        *((_DWORD *)TraceInformation + 3) = v44[59];
        *((_DWORD *)TraceInformation + 4) = v44[3];
        *((_DWORD *)TraceInformation + 5) = v44[52];
        *((_DWORD *)TraceInformation + 7) = v44[50];
        *((_DWORD *)TraceInformation + 6) = v44[53];
        EtwpReleaseLoggerContext(v44, 0);
      }
      else
      {
        v47 = -1073741162;
      }
      KeLeaveCriticalRegion();
      return v47;
    }
    v33 = v32 - 1;
    if ( !v33 )
    {
      v49 = 0LL;
      if ( (_DWORD)v6 != 8 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      Buffera = *(_DWORD *)Buffer;
      v38 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, Buffera, 0);
      if ( !v38 )
        return -1073741275;
      v39 = KeNumberProcessors_0;
      LODWORD(v48) = KeNumberProcessors_0;
      for ( i = 0; i < v39; ++i )
      {
        v41 = *(_QWORD *)(v38 + 1360);
        if ( v41 == EtwpHostSiloState )
          v42 = *(_QWORD *)(KeGetPrcb(i) + 35752) + 320LL;
        else
          v42 = *(_QWORD *)(v41 + 4416) + ((unsigned __int64)i << 6);
        v8 += *(_QWORD *)(*(_QWORD *)(v42 + 8) + 8LL * Buffera);
        v49 = v8;
        v39 = v48;
      }
      EtwpReleaseLoggerContext((unsigned int *)v38, 0);
      if ( TraceInformation )
        *(_QWORD *)TraceInformation = v8;
      goto LABEL_32;
    }
    v34 = v33 - 1;
    if ( v34 )
    {
      v35 = v34 - 1;
      if ( !v35 )
      {
        if ( RequiredLength )
          *v10 = 120;
        if ( (unsigned __int8)EtwpBootPhase <= 1u )
          return -1073741661;
        if ( (_DWORD)v6 != 120 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        *(_OWORD *)v9 = *(_OWORD *)EtwpAllNotifyRoutines;
        *(_OWORD *)(v9 + 16) = *(_OWORD *)off_140B40BB0;
        *(_OWORD *)(v9 + 32) = *(_OWORD *)&off_140B40BC0;
        *(_OWORD *)(v9 + 48) = *(_OWORD *)&off_140B40BD0;
        *(_OWORD *)(v9 + 64) = *(_OWORD *)off_140B40BE0;
        *(_OWORD *)(v9 + 80) = *(_OWORD *)&off_140B40BF0;
        *(_OWORD *)(v9 + 96) = *(_OWORD *)off_140B40C00;
        *(_QWORD *)(v9 + 112) = EtwpTraceRedirectedIo;
        return 0;
      }
      v36 = v35 - 1;
      if ( v36 )
      {
        if ( v36 != 2 )
          return -1073741821;
        if ( RequiredLength )
          *v10 = 8;
        if ( (unsigned __int8)EtwpBootPhase <= 1u )
          return -1073741661;
        if ( (_DWORD)v6 != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v37 = (__int64 *)&EtwpWdfNotifyRoutines;
      }
      else
      {
        if ( RequiredLength )
          *v10 = 8;
        if ( (unsigned __int8)EtwpBootPhase <= 1u )
          return -1073741661;
        if ( (_DWORD)v6 != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v37 = (__int64 *)&EtwpFltIoNotifyRoutines;
      }
    }
    else
    {
      if ( RequiredLength )
        *v10 = 8;
      if ( (unsigned __int8)EtwpBootPhase <= 1u )
        return -1073741661;
      if ( (_DWORD)v6 != 8 )
        return -1073741820;
      if ( !TraceInformation )
        return -1073741584;
      v37 = &EtwpDiskIoNotifyRoutines;
    }
    *(_QWORD *)v9 = v37;
    return 0;
  }
  if ( v11 != 7 )
  {
    if ( v11 )
    {
      v13 = v11 - 1;
      if ( !v13 )
      {
        if ( (_DWORD)v6 != 8 )
          return -1073741820;
        if ( !Buffer )
          return -1073741776;
        v29 = *(_DWORD *)Buffer;
        if ( *(_DWORD *)Buffer >= LODWORD(Flink[1].Flink) )
          return -1073741816;
        v48 = 0LL;
        v30 = v29;
        if ( !v29 )
          v30 = -1;
        LOWORD(v48) = v30;
        if ( TraceInformation )
          *(_QWORD *)v9 = v48;
        if ( RequiredLength )
          *v10 = 8;
        return v47;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              if ( v17 == 1 )
              {
                if ( (unsigned int)v6 < 8 || !TraceInformation )
                  return -1073741820;
                v18 = 0;
                for ( j = 1; j < LODWORD(Flink[1].Flink); ++j )
                {
                  v20 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId((__int64)Flink, j, 0);
                  if ( v20 )
                  {
                    if ( 8 * (unsigned __int64)(v18 + 1) <= v6 )
                      *((_QWORD *)TraceInformation + v18) = j;
                    EtwpReleaseLoggerContext(v20, 0);
                    ++v18;
                  }
                }
                v21 = 8LL * v18;
                v22 = 0;
                if ( v21 > v6 )
                  v22 = 261;
                v47 = v22;
                if ( RequiredLength )
                  *RequiredLength = v21;
                return v47;
              }
              return -1073741821;
            }
            return -1073741821;
          }
          if ( (_DWORD)v6 != 8 )
            return -1073741820;
          v24 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId((__int64)Flink, 1u, 0);
          if ( !v24 )
            return -1073741275;
          v25 = *v24;
          v48 = v25;
          EtwpReleaseLoggerContext(v24, 0);
          if ( TraceInformation )
            *(_QWORD *)TraceInformation = v25;
LABEL_32:
          if ( RequiredLength )
            *RequiredLength = 8;
          return v47;
        }
        if ( (unsigned int)v6 < 4 )
          return -1073741820;
        if ( !Buffer )
          return -1073741776;
        v26 = *((_QWORD *)Buffer + 1);
        v48 = v26;
        if ( !v26 || v26 == 0xFFFFFFFFLL )
          return -1073741816;
        if ( TraceInformation )
          *(_DWORD *)v9 = BYTE2(v26);
LABEL_74:
        if ( RequiredLength )
          *v10 = 4;
        return v47;
      }
      if ( (unsigned int)v6 < 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v27 = *((_QWORD *)Buffer + 1);
      v48 = v27;
      if ( !v27 || v27 == 0xFFFFFFFF )
        return -1073741816;
      v28 = HIDWORD(v27);
    }
    else
    {
      if ( (_DWORD)v6 != 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v28 = *((_QWORD *)Buffer + 1);
      v48 = v28;
      if ( !v28 || v28 == 0xFFFFFFFF )
        return -1073741816;
      LODWORD(v28) = (unsigned __int16)v28;
      if ( (unsigned int)(unsigned __int16)v28 >= LODWORD(Flink[1].Flink) )
        return -1073741816;
    }
    if ( TraceInformation )
      *(_DWORD *)v9 = v28;
    goto LABEL_74;
  }
  if ( KeGetCurrentThread()->PreviousMode && *(_WORD *)Buffer && (*((_QWORD *)Buffer + 1) & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (_DWORD)v6 != 8 )
    return -1073741820;
  v48 = 0LL;
  result = EtwQueryTraceHandleByLoggerName((__int64)Buffer, &v48);
  v47 = result;
  if ( result >= 0 )
  {
    if ( TraceInformation )
      *(_QWORD *)TraceInformation = v48;
    goto LABEL_32;
  }
  return result;
}
