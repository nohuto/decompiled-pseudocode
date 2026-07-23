/*
 * XREFs of KiCollectTriageDumpDataBlocks @ 0x1405B0318
 * Callers:
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     KiIsAddressRangeValid @ 0x1404A5A08 (KiIsAddressRangeValid.c)
 *     KiMarkBugCheckRegions @ 0x140505D78 (KiMarkBugCheckRegions.c)
 *     Feature_14FBugcheckMinidumpDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x14058DAEC (Feature_14FBugcheckMinidumpDiagnostics__private_IsEnabledDeviceUsageNoInline.c)
 *     IopAddBugcheckTriageThread @ 0x14059CC30 (IopAddBugcheckTriageThread.c)
 *     KiCollectFullProcessName @ 0x1405B02D0 (KiCollectFullProcessName.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x1405B1220 (KiSaveCurrentEtwTraceBuffer.c)
 *     PopInternalAddToDumpFile @ 0x1405CA610 (PopInternalAddToDumpFile.c)
 */

char __fastcall KiCollectTriageDumpDataBlocks(int a1, char a2)
{
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  struct _LIST_ENTRY *Flink; // rcx
  __int64 Blink_low; // rdx
  __int64 v10; // rbx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rdi
  struct _LIST_ENTRY *v13; // rbx
  _KPROCESS *Process; // rdi
  struct _KTHREAD *v15; // rax
  __int64 v16; // rbx
  unsigned __int64 v17; // rdi
  unsigned int v18; // ebx
  int IsEnabledDeviceUsageNoInline; // eax

  KiCollectFullProcessName((__int64)KeGetCurrentThread()->ApcState.Process);
  IoAddTriageDumpDataBlock((ULONG)&KiBugCheckDriver, (PVOID)8);
  IoAddTriageDumpDataBlock((ULONG)&KiBugCheckDriverOffset, (PVOID)4);
  if ( *(_QWORD *)&KiBugCheckDriver )
  {
    IoAddTriageDumpDataBlock(KiBugCheckDriver, (PVOID)0x10);
    IoAddTriageDumpDataBlock(
      *(_QWORD *)(*(_QWORD *)&KiBugCheckDriver + 8LL),
      (PVOID)*(unsigned __int16 *)(*(_QWORD *)&KiBugCheckDriver + 2LL));
  }
  if ( !a2 )
    KiSaveCurrentEtwTraceBuffer();
  IoAddTriageDumpDataBlock((ULONG)&KseEngine, (PVOID)0x60);
  v4 = a1 - 239;
  if ( v4 )
  {
    v5 = v4 - 26;
    if ( v5 )
    {
      v6 = v5 - 70;
      if ( v6 )
      {
        v7 = v6 - 60;
        if ( v7 )
        {
          if ( v7 != 96 )
            goto LABEL_30;
LABEL_18:
          IoAddTriageDumpDataBlock((ULONG)&KeSwapProcessOrStackThread, (PVOID)8);
          IopAddBugcheckTriageThread(*(__int64 *)&KeSwapProcessOrStackThread);
          goto LABEL_30;
        }
        if ( qword_140F22A08 == 396 )
        {
          if ( KdpBreakpointChangeCount )
            IoAddTriageDumpDataBlock((ULONG)&KdpBreakpointChangeCount, (PVOID)4);
          IoAddTriageDumpDataBlock((ULONG)&VslpTraceLog, (PVOID)0xA08);
          if ( VslpHotpatchLog )
          {
            IoAddTriageDumpDataBlock((ULONG)&VslpHotpatchLog, (PVOID)8);
            LODWORD(Flink) = VslpHotpatchLog;
            Blink_low = 327688LL;
LABEL_29:
            IoAddTriageDumpDataBlock((ULONG)Flink, (PVOID)Blink_low);
          }
        }
      }
      else if ( qword_140F22A08 == 4 || qword_140F22A08 == 100 )
      {
        goto LABEL_18;
      }
    }
    else
    {
      KiMarkBugCheckRegions(qword_140F22A08, qword_140F22A10, qword_140F22A18, qword_140F22A20);
      if ( qword_140F22A20 == 47 )
      {
        v10 = qword_140F22A18;
        if ( MmIsAddressValidEx(qword_140F22A18 + 1288) )
        {
          Flink = *(struct _LIST_ENTRY **)(v10 + 1288);
          Blink_low = 4096LL;
          goto LABEL_29;
        }
      }
    }
  }
  else
  {
    PopInternalAddToDumpFile(0LL, 0LL, 0LL);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    CurrentThread = KeGetCurrentThread();
    v13 = CurrentServerSiloGlobals;
    if ( CurrentThread->ApcStateIndex == 1 )
    {
      Process = CurrentThread->SavedApcState.Process;
      if ( Process )
      {
        if ( Process != KeGetCurrentThread()->ApcState.Process )
        {
          IoAddTriageDumpDataBlock((ULONG)Process, (PVOID)0x840);
          KiCollectFullProcessName((__int64)Process);
        }
      }
    }
    if ( LODWORD(v13[85].Blink) )
    {
      IoAddTriageDumpDataBlock((_DWORD)v13 + 1368, (PVOID)0x30);
      if ( LOWORD(v13[86].Blink) )
      {
        Flink = v13[87].Flink;
        Blink_low = LOWORD(v13[86].Blink);
        goto LABEL_29;
      }
    }
  }
LABEL_30:
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v15 = KeGetCurrentThread();
    v16 = (__int64)v15->KernelShadowStackBase - 4096;
    v17 = (v15->KernelShadowStackLimit.AllFields & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( v16 - v17 >= 0x1000 )
      v18 = 4096;
    else
      v18 = v16 - v17;
    if ( KiIsAddressRangeValid(v17, v18) )
      IoAddTriageDumpDataBlock(v17, (PVOID)v18);
    IoAddTriageDumpDataBlock((ULONG)&KeKernelCetWrssEnabledScenarios, (PVOID)1);
    IoAddTriageDumpDataBlock((ULONG)&KiKernelCetLogging, (PVOID)0x120);
  }
  IoAddTriageDumpDataBlock((ULONG)&KiKernelCetEnabled, (PVOID)1);
  IoAddTriageDumpDataBlock((ULONG)&KiKernelCetAuditModeEnabled, (PVOID)1);
  IsEnabledDeviceUsageNoInline = Feature_14FBugcheckMinidumpDiagnostics__private_IsEnabledDeviceUsageNoInline();
  if ( IsEnabledDeviceUsageNoInline )
    LOBYTE(IsEnabledDeviceUsageNoInline) = IoAddTriageDumpDataBlock(0, (PVOID)0x3D8);
  return IsEnabledDeviceUsageNoInline;
}
