/*
 * XREFs of AsyncEvalObject @ 0x1400120D0
 * Callers:
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     SyncEvalObject @ 0x1400143C8 (SyncEvalObject.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140019BA0 (ACPIInterruptDispatchEventDpc.c)
 *     DebugRunMethod @ 0x14006E170 (DebugRunMethod.c)
 * Callees:
 *     ReadObject @ 0x1400026A0 (ReadObject.c)
 *     HeapInsertFreeList @ 0x1400029D0 (HeapInsertFreeList.c)
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     DupObjData @ 0x140006F90 (DupObjData.c)
 *     NewLocalHeap @ 0x140008FA0 (NewLocalHeap.c)
 *     PushFrame @ 0x140009A30 (PushFrame.c)
 *     FreeContext @ 0x14000AF70 (FreeContext.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     GetObjectPath @ 0x140011F58 (GetObjectPath.c)
 *     InitContext @ 0x140012A34 (InitContext.c)
 *     AcpiDiagTraceFrequentAmlEvaluation @ 0x140012B90 (AcpiDiagTraceFrequentAmlEvaluation.c)
 *     GetObjectPathNoLock @ 0x140012D50 (GetObjectPathNoLock.c)
 *     PushCall @ 0x140013020 (PushCall.c)
 *     AmliEnableWatchdog @ 0x140013748 (AmliEnableWatchdog.c)
 *     RestartContext @ 0x14001384C (RestartContext.c)
 *     ReferenceObjectEx @ 0x140030DA0 (ReferenceObjectEx.c)
 *     PrintObject @ 0x140055B98 (PrintObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x14006CA3C (AMLIReadNamespaceOverrideObject.c)
 *     NewGlobalHeap @ 0x14006E9E8 (NewGlobalHeap.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall AsyncEvalObject(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned int v9; // r13d
  KIRQL CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8
  __int64 v12; // r10
  __int64 v13; // rdx
  PVOID v14; // rax
  __int64 v15; // rsi
  KIRQL v16; // al
  int v17; // edx
  KIRQL v18; // al
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  __int16 v21; // ax
  unsigned __int16 v22; // r14
  __int64 v23; // rcx
  char v24; // al
  char v25; // al
  __int64 v26; // rdi
  KIRQL v27; // bl
  _BYTE *ObjectPathNoLock; // r12
  __int64 v29; // rcx
  _BYTE *v30; // rax
  __int64 v31; // rbx
  __int64 Pool2; // rax
  __int64 v33; // rcx
  __int64 v34; // r9
  unsigned int Object; // edi
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rbx
  unsigned __int64 v39; // r14
  __int64 v41; // rax
  __int16 v42; // dx
  __int64 v43; // rbx
  __int64 v44; // r12
  __int64 v45; // r14
  KIRQL v46; // al
  __int64 v47; // rdi
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rbx
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rdx
  char *v55; // r8
  __int16 v56; // cx
  __int64 v57; // rcx
  __int64 v58; // r15
  unsigned int v59; // eax
  unsigned __int16 v60; // ax
  const char *ObjectPath; // rax
  struct _KTHREAD *v62; // rdx
  char *v63; // rdi
  __int64 v64; // rdx
  _QWORD *v65; // rcx
  unsigned int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // [rsp+30h] [rbp-61h] BYREF
  __int16 v69; // [rsp+38h] [rbp-59h] BYREF
  __int16 v70; // [rsp+3Ch] [rbp-55h] BYREF
  unsigned int v71; // [rsp+40h] [rbp-51h]
  __int64 v72; // [rsp+48h] [rbp-49h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-41h] BYREF
  __int64 v74; // [rsp+60h] [rbp-31h]
  int v75; // [rsp+68h] [rbp-29h]
  int v76; // [rsp+6Ch] [rbp-25h]
  __int16 *v77; // [rsp+70h] [rbp-21h]
  __int64 v78; // [rsp+78h] [rbp-19h]
  __int64 *v79; // [rsp+80h] [rbp-11h]
  __int64 v80; // [rsp+88h] [rbp-9h]

  v72 = a4;
  v71 = a3;
  v9 = 0;
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  v12 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_140089110 )
  {
    v13 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_140089108 + 1, 1u) % (unsigned int)qword_140089108);
    *(_QWORD *)((char *)qword_140089110 + v13 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_140089110 + v13) = 1095981390;
    *(_QWORD *)((char *)qword_140089110 + v13 + 16) = CurrentThread;
    *(_QWORD *)((char *)qword_140089110 + v13 + 24) = 0LL;
    *(_QWORD *)((char *)qword_140089110 + v13 + 32) = 0LL;
    *(_QWORD *)((char *)qword_140089110 + v13 + 40) = v12;
    *(_QWORD *)((char *)qword_140089110 + v13 + 48) = CurrentIrql;
    *(_QWORD *)((char *)qword_140089110 + v13 + 56) = a1;
    *(_QWORD *)((char *)qword_140089110 + v13 + 64) = 0LL;
  }
  v14 = ExAllocateFromNPagedLookasideList(&AMLIContextLookAsideList);
  v15 = (__int64)v14;
  if ( !v14 )
    return (unsigned int)-1073741670;
  memset(v14, 0, 0x238uLL);
  v16 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
  v17 = gdwcCTObjs + 1;
  gdwcCTObjs = v17;
  if ( v17 > 0 && v17 > (unsigned int)gdwcCTObjsMax )
    gdwcCTObjsMax = v17;
  KeReleaseSpinLock(&gdwGContextSpinLock, v16);
  InitContext((PVOID)v15);
  v18 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
  v19 = off_1400870A8[0];
  byte_140088E10 = v18;
  v20 = (_QWORD *)(v15 + 16);
  if ( *(_UNKNOWN ***)off_1400870A8[0] != &glistCtxtHead )
    goto LABEL_78;
  *v20 = &glistCtxtHead;
  *(_QWORD *)(v15 + 24) = v19;
  *v19 = v20;
  off_1400870A8[0] = (_UNKNOWN **)(v15 + 16);
  KeReleaseSpinLock(&gmutCtxtList, byte_140088E10);
  v21 = *(_WORD *)(a1 + 64);
  v22 = 512;
  if ( (v21 & 0x400) != 0 )
  {
    v23 = *(_QWORD *)(a1 + 136);
  }
  else
  {
    v23 = 0LL;
    if ( (v21 & 0x200) != 0 )
      v23 = a1;
  }
  v24 = gdwfAMLI;
  *(_QWORD *)(v15 + 72) = a1;
  if ( (v24 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  v25 = gdwfAMLI;
  *(_QWORD *)(v15 + 80) = a1;
  if ( (v25 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  if ( v23 )
  {
    *(_QWORD *)(v15 + 424) = v23;
    ReferenceObjectEx(v23);
    a1 = v67;
  }
  v26 = *(_QWORD *)(v15 + 72);
  *(_QWORD *)(v15 + 168) = a5;
  *(_QWORD *)(v15 + 184) = a6;
  *(_QWORD *)(v15 + 176) = a2;
  v27 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  ObjectPathNoLock = (_BYTE *)GetObjectPathNoLock(v26);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v27);
  RtlInitUnicodeString((PUNICODE_STRING)(v15 + 440), 0LL);
  if ( ObjectPathNoLock )
  {
    if ( *ObjectPathNoLock )
    {
      v29 = 512LL;
      v30 = ObjectPathNoLock;
      while ( *v30 )
      {
        ++v30;
        if ( !--v29 )
          goto LABEL_25;
      }
      v22 = 512 - v29;
LABEL_25:
      v31 = v22;
      Pool2 = ExAllocatePool2(64LL, 2LL * v22 + 2, 1399874369LL);
      *(_QWORD *)(v15 + 448) = Pool2;
      if ( Pool2 )
      {
        *(_WORD *)(v15 + 440) = 2 * v22;
        *(_WORD *)(v15 + 442) = 2 * v22 + 2;
        if ( v22 )
        {
          v54 = 0LL;
          v55 = ObjectPathNoLock;
          do
          {
            v56 = *v55;
            v54 += 2LL;
            ++v55;
            *(_WORD *)(v54 + *(_QWORD *)(v15 + 448) - 2) = v56;
            --v31;
          }
          while ( v31 );
        }
        *(_WORD *)(*(_QWORD *)(v15 + 448) + 2LL * v22) = 0;
      }
    }
    ExFreePoolWithTag(ObjectPathNoLock, 0);
  }
  v33 = *(_QWORD *)(v15 + 464);
  if ( v33 )
  {
    v41 = *(_QWORD *)(a1 + 16);
    if ( v41 )
    {
      v42 = *(_WORD *)(v41 + 66);
      if ( v42 == 6 || (unsigned __int16)(v42 - 12) <= 1u )
        *(_QWORD *)(v33 + 8) = *(_QWORD *)(v41 + 104);
    }
    AmliEnableWatchdog(*(PVOID *)(v15 + 464));
  }
  AcpiDiagTraceFrequentAmlEvaluation(v15);
  v68 = 0LL;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext
    && EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_AML_METHOD_TRACE) )
  {
    v60 = *(_WORD *)(v15 + 440);
    v75 = v60;
    v69 = v60 >> 1;
    UserData.Ptr = (unsigned __int64)&v69;
    v74 = *(_QWORD *)(v15 + 448);
    v70 = 1;
    v77 = &v70;
    v79 = &v68;
    *(_QWORD *)&UserData.Size = 2LL;
    v76 = 0;
    v78 = 2LL;
    v80 = 8LL;
    EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_AML_METHOD_TRACE, 0LL, 4u, &UserData);
  }
  if ( a7 )
    *(_DWORD *)(v15 + 64) |= 0x100u;
  if ( (*(_WORD *)(a1 + 64) & 0x180) != 0 )
  {
    v43 = 0LL;
    v44 = v15 + 480;
    v45 = 0LL;
    v46 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v47 = v15 + 480;
    v68 = v15 + 480;
    byte_140088F48 = v46;
    v48 = v15 + 480;
    v49 = v15 + 480;
    v50 = v15 + 480;
    while ( v49 )
    {
      v51 = *(_QWORD *)(v50 + 40);
      v45 = v48;
      while ( 1 )
      {
        v43 = v51 - 16;
        if ( v50 + 40 == v43 + 16 )
        {
          v43 = 0LL;
          goto LABEL_54;
        }
        if ( *(_DWORD *)(v43 + 4) >= 0x48u )
          break;
        v51 = *(_QWORD *)(v43 + 16);
      }
      if ( v43 )
      {
        v64 = *(_QWORD *)(v43 + 16);
        if ( *(_QWORD *)(v64 + 8) == v43 + 16 )
        {
          v65 = *(_QWORD **)(v43 + 24);
          if ( *v65 == v43 + 16 )
          {
            *v65 = v64;
            *(_QWORD *)(v64 + 8) = v65;
            v66 = *(_DWORD *)(v43 + 4);
            if ( v66 >= 0x68 )
            {
              *(_DWORD *)(v43 + 72) = 0;
              *(_DWORD *)(v43 + 76) = v66 - 72;
              *(_QWORD *)(v43 + 80) = v47;
              *(_DWORD *)(v43 + 4) = 72;
              HeapInsertFreeList(v47, (unsigned int *)(v43 + 72));
            }
LABEL_61:
            *(_DWORD *)v43 = 1297237576;
            *(_QWORD *)(v43 + 8) = v47;
            *(_OWORD *)(v43 + 16) = 0LL;
            *(_OWORD *)(v43 + 32) = 0LL;
            *(_OWORD *)(v43 + 48) = 0LL;
            *(_QWORD *)(v43 + 64) = 0LL;
LABEL_62:
            KeReleaseSpinLock(&gmutHeap, byte_140088F48);
            v53 = v43 + 16;
            if ( !v43 )
              v53 = 0LL;
            if ( v53 )
            {
              *(_QWORD *)(v53 + 8) = *(_QWORD *)(v15 + 416);
              *(_QWORD *)(v15 + 416) = v53;
              *(_DWORD *)v53 = 1414745936;
              *(_QWORD *)(v53 + 24) = ProcessEvalObj;
              *(_QWORD *)(v53 + 32) = a1;
              *(_QWORD *)(v53 + 40) = 0LL;
              *(_QWORD *)(v53 + 48) = v15 + 128;
              Object = AMLIReadNamespaceOverrideObject(v15, a1);
              if ( Object != 32772 )
                return (unsigned int)RestartContext(v15, 0LL, v36, v37);
            }
            else
            {
              Object = -1072431102;
              LogError(-1072431102);
              AcpiDiagTraceAmlError(v15, -1072431102);
              PrintDebugMessage(0x99u, 0LL, 0LL, 0LL, 0LL);
            }
LABEL_75:
            FreeContext((char *)v15);
            return Object;
          }
        }
LABEL_78:
        __fastfail(3u);
      }
LABEL_54:
      if ( (unsigned int)(*(_DWORD *)(v47 + 8) - *(_DWORD *)(v47 + 32)) >= 0x48 )
        goto LABEL_60;
      v47 = *(_QWORD *)(v47 + 24);
      v49 = v47;
      v68 = v47;
      v48 = v47;
      v50 = v47;
    }
    if ( v44 == gpheapGlobal )
    {
      if ( (unsigned int)gdwGlobalHeapBlkSize < 0x80 )
      {
        v50 = 0x48 % (unsigned int)gdwGlobalHeapBlkSize;
        LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (0x48 / (unsigned int)gdwGlobalHeapBlkSize + 1);
        if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
          LODWORD(gdwGlobalHeapBlkSize) = 72;
      }
      v52 = NewGlobalHeap(&v68, v50);
    }
    else
    {
      v52 = NewLocalHeap(&v68);
    }
    if ( v52 )
      goto LABEL_62;
    v47 = v68;
    *(_QWORD *)(v68 + 16) = v44;
    *(_QWORD *)(v45 + 24) = v47;
LABEL_60:
    v43 = *(_QWORD *)(v47 + 32);
    *(_QWORD *)(v47 + 32) = v43 + 72;
    *(_DWORD *)(v43 + 4) = 72;
    goto LABEL_61;
  }
  if ( *(_WORD *)(a1 + 66) == 8 )
  {
    Object = PushCall(v15, a1, v15 + 128, v34);
    if ( Object )
      goto LABEL_75;
    v38 = *(_QWORD *)(v15 + 416);
    v39 = v71;
    if ( v71 != *(_DWORD *)(v38 + 60) )
    {
      Object = -1072431093;
      LogError(-1072431093);
      AcpiDiagTraceAmlError(v15, -1072431093);
      PrintDebugMessage(0xCu, (const void *)v39, (const void *)*(unsigned int *)(v38 + 60), 0LL, 0LL);
      goto LABEL_75;
    }
    if ( (gDebugger & 0xD0) != 0 )
    {
      ObjectPath = (const char *)GetObjectPath(a1);
      v62 = KeGetCurrentThread();
      v63 = (char *)ObjectPath;
      if ( ObjectPath )
      {
        ConPrintf("\nAMLI: %p: %s(", v62, ObjectPath);
        ExFreePoolWithTag(v63, 0);
      }
      else
      {
        ConPrintf("\nAMLI: %p: %s(", v62, byte_140075488);
      }
    }
    *(_DWORD *)(v38 + 56) = 0;
    if ( (_DWORD)v39 )
    {
      v58 = v72;
      do
      {
        Object = DupObjData(*(_QWORD *)(v15 + 320), *(_QWORD *)(v38 + 64) + 40LL * v9, v58 + 40LL * v9);
        if ( Object )
          goto LABEL_75;
        if ( (gDebugger & 0xD0) != 0 )
        {
          PrintObject(v58 + 40LL * *(unsigned int *)(v38 + 56));
          if ( *(_DWORD *)(v38 + 56) + 1 < (unsigned int)v39 )
            ConPrintf(",");
        }
        v59 = *(_DWORD *)(v38 + 56) + 1;
        *(_DWORD *)(v38 + 56) = v59;
        v9 = v59;
      }
      while ( v59 < (unsigned int)v39 );
    }
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf(")\n");
    *(_DWORD *)(v38 + 16) = *(_DWORD *)(v38 + 16) & 0xFFFF0000 | 2;
  }
  else
  {
    v68 = 0LL;
    Object = PushFrame((_QWORD *)v15, 1414745936, 0x38u, (__int64)ProcessEvalObj, &v68);
    if ( Object )
      goto LABEL_75;
    v57 = v68;
    *(_QWORD *)(v68 + 32) = a1;
    *(_QWORD *)(v57 + 40) = 0LL;
    *(_QWORD *)(v57 + 48) = v15 + 128;
    Object = ReadObject(v15, a1 + 64, v15 + 128);
    if ( Object == 32772 )
      goto LABEL_75;
  }
  return (unsigned int)RestartContext(v15, 0LL, v36, v37);
}
