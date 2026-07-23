/*
 * XREFs of EtwpDisableKernelTrace @ 0x14085B3E0
 * Callers:
 *     EtwpEnableKernelTrace @ 0x14085ADEC (EtwpEnableKernelTrace.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x14085C8B8 (EtwpUpdateGlobalGroupMasks.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1403AF520 (KeCancelTimer2.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     DbgSetDebugPrintCallback @ 0x1404F7F00 (DbgSetDebugPrintCallback.c)
 *     IoPerfReset @ 0x14059457C (IoPerfReset.c)
 *     KeStopProfile @ 0x1405BC7A4 (KeStopProfile.c)
 *     ZwUnloadDriver @ 0x1406AAED0 (ZwUnloadDriver.c)
 *     AlpcUnregisterLogRoutine @ 0x1407405D4 (AlpcUnregisterLogRoutine.c)
 *     ObDisableEtwReferenceTrace @ 0x1407429E8 (ObDisableEtwReferenceTrace.c)
 *     WmiSetNetworkNotify @ 0x1407A5744 (WmiSetNetworkNotify.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1407AA444 (EtwpUpdateFileInfoDriverRegistration.c)
 *     WmiTraceRundownNotify @ 0x140A0F684 (WmiTraceRundownNotify.c)
 */

void __fastcall EtwpDisableKernelTrace(_DWORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v4; // ebp
  _DWORD *v8; // rcx
  const signed __int32 *v9; // rcx
  const signed __int32 *v10; // rdx
  const signed __int32 *v11; // rcx
  const signed __int32 *v12; // rdx
  _DWORD *v13; // rdi
  unsigned int i; // edi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF

  v4 = a4;
  if ( !a2 )
    goto LABEL_59;
  if ( (*(_DWORD *)a2 & 0x20000) != 0 )
  {
    CmpTraceRoutine = 0LL;
    CmpTraceTxrRoutine = 0LL;
  }
  if ( _bittest((const signed __int32 *)a2, 0x14u) )
    AlpcUnregisterLogRoutine();
  if ( (*(_DWORD *)a2 & 0x2000000) != 0 )
  {
    qword_140E03680 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_59;
  }
  if ( (*(_DWORD *)a2 & 0x4000000) != 0 )
  {
    qword_140E03678 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_59;
  }
  if ( (*(_DWORD *)a2 & 0x200) != 0 )
  {
    qword_140E03670 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_59;
  }
  if ( (*(_DWORD *)a2 & 0x100) != 0 )
  {
    EtwpDiskIoNotifyRoutines = 0LL;
    qword_140E036B0 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_59;
  }
  if ( (*(_DWORD *)a2 & 0x400) != 0 )
  {
    qword_140E683C0 = 0LL;
    goto LABEL_17;
  }
  if ( !a2 )
  {
LABEL_59:
    v8 = (_DWORD *)(a2 + 16);
    goto LABEL_18;
  }
LABEL_17:
  v8 = (_DWORD *)(a2 + 16);
  if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
  {
    qword_140E683C8 = 0LL;
    goto LABEL_19;
  }
LABEL_18:
  if ( !a2 )
    goto LABEL_65;
LABEL_19:
  if ( (*v8 & 2) != 0 )
  {
    qword_140E683D0 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_65;
  }
  if ( (*(_DWORD *)a2 & 0x200000) != 0 )
  {
    EtwpSplitIoNotifyRoutines = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_65;
  }
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
  {
    WmiSetNetworkNotify(0LL);
  }
  else if ( !a2 )
  {
    goto LABEL_65;
  }
  if ( (*(_DWORD *)(a2 + 4) & 0x10) == 0 )
  {
    if ( a2 )
      goto LABEL_27;
LABEL_65:
    v9 = (const signed __int32 *)(a2 + 16);
LABEL_28:
    if ( !a2 )
      goto LABEL_30;
    goto LABEL_29;
  }
  IoPerfReset(1);
LABEL_27:
  v9 = (const signed __int32 *)(a2 + 16);
  if ( (*(_DWORD *)(a2 + 16) & 0x400000) == 0 )
    goto LABEL_28;
  qword_140E03690 = 0LL;
LABEL_29:
  if ( (*v9 & 0x80000) != 0 )
  {
    qword_140E03698 = 0LL;
    v10 = (const signed __int32 *)(a2 + 16);
    goto LABEL_31;
  }
LABEL_30:
  v10 = v9;
  if ( !a2 )
    goto LABEL_32;
LABEL_31:
  if ( !_bittest(v9, 0x14u) )
  {
LABEL_32:
    v11 = v10;
    if ( !a2 )
      goto LABEL_34;
    goto LABEL_33;
  }
  qword_140E036A0 = 0LL;
  v11 = (const signed __int32 *)(a2 + 16);
LABEL_33:
  if ( (*v10 & 0x200000) != 0 )
  {
    qword_140E036A8 = 0LL;
    v12 = (const signed __int32 *)(a2 + 16);
    goto LABEL_35;
  }
LABEL_34:
  v12 = v11;
  if ( !a2 )
    goto LABEL_74;
LABEL_35:
  if ( (*v11 & 0x1000000) != 0 )
  {
    qword_140E0EBA0 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_74;
  }
  if ( (*v12 & 0x2000000) != 0 )
  {
    qword_140E0EBA8 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_74;
  }
  if ( (*(_DWORD *)(a2 + 8) & 0x8000000) != 0 )
  {
    qword_140E0EBB0 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_74;
  }
  if ( (*(_DWORD *)a2 & 0x40000) == 0 )
  {
    if ( a2 )
      goto LABEL_43;
LABEL_74:
    v13 = (_DWORD *)(a2 + 4);
LABEL_44:
    if ( !a2 )
      goto LABEL_50;
    goto LABEL_45;
  }
  DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 0);
LABEL_43:
  v13 = (_DWORD *)(a2 + 4);
  if ( (*(_DWORD *)(a2 + 4) & 2) == 0 )
    goto LABEL_44;
  KeStopProfile((ULONG_PTR)&EtwpProfileObject);
LABEL_45:
  if ( (*v13 & 0x400) != 0 )
  {
    for ( i = 0; i < EtwpPmcProfile; ++i )
      KeStopProfile((ULONG_PTR)qword_140EFF5C8 + 616 * i);
  }
  else if ( !a2 )
  {
    goto LABEL_50;
  }
  if ( (*(_DWORD *)(a2 + 16) & 0x80u) != 0 )
  {
    ObDisableEtwReferenceTrace();
  }
  else if ( !a2 )
  {
    goto LABEL_50;
  }
  if ( (*(_DWORD *)(a2 + 4) & 0x880000) != 0 && (!a1 || (a1[1] & 0x880000) == 0) )
    KeCancelTimer2((__int64)&EtwpMemInfoTimer, 0LL, (__int64)a3, a4);
LABEL_50:
  DestinationString = 0LL;
  if ( !a1 || (*a1 & 0x6000200) == 0 )
  {
    if ( dword_140E68390 )
    {
      WmiTraceRundownNotify(*a3, v4);
      EtwpUpdateFileInfoDriverRegistration(0);
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
      ZwUnloadDriver(&DestinationString);
      dword_140E68390 = 0;
    }
  }
}
