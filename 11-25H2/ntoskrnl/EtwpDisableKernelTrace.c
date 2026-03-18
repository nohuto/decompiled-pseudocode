/*
 * XREFs of EtwpDisableKernelTrace @ 0x1408DA7E0
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1408DA1EC (EtwpEnableKernelTrace.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1408DBCB4 (EtwpUpdateGlobalGroupMasks.c)
 * Callees:
 *     KeCancelTimer2 @ 0x14036FE50 (KeCancelTimer2.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     DbgSetDebugPrintCallback @ 0x1404F8150 (DbgSetDebugPrintCallback.c)
 *     IoPerfReset @ 0x140593EEC (IoPerfReset.c)
 *     KeStopProfile @ 0x1405BB340 (KeStopProfile.c)
 *     ZwUnloadDriver @ 0x14069EC60 (ZwUnloadDriver.c)
 *     AlpcUnregisterLogRoutine @ 0x140736684 (AlpcUnregisterLogRoutine.c)
 *     ObDisableEtwReferenceTrace @ 0x1407386D8 (ObDisableEtwReferenceTrace.c)
 *     WmiSetNetworkNotify @ 0x140796234 (WmiSetNetworkNotify.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14079AF34 (EtwpUpdateFileInfoDriverRegistration.c)
 *     WmiTraceRundownNotify @ 0x140A120C8 (WmiTraceRundownNotify.c)
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
    goto LABEL_53;
  if ( (*(_DWORD *)a2 & 0x20000) != 0 )
  {
    CmpTraceRoutine = 0LL;
    CmpTraceTxrRoutine = 0LL;
  }
  if ( _bittest((const signed __int32 *)a2, 0x14u) )
    AlpcUnregisterLogRoutine();
  if ( (*(_DWORD *)a2 & 0x2000000) != 0 )
  {
    qword_140E036B0 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_53;
  }
  if ( (*(_DWORD *)a2 & 0x4000000) != 0 )
  {
    qword_140E036A8 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_53;
  }
  if ( (*(_DWORD *)a2 & 0x200) != 0 )
  {
    qword_140E036A0 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_53;
  }
  if ( (*(_DWORD *)a2 & 0x100) != 0 )
  {
    EtwpDiskIoNotifyRoutines = 0LL;
    qword_140E03690 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_53;
  }
  if ( (*(_DWORD *)a2 & 0x400) != 0 )
  {
    qword_140E67ED8 = 0LL;
    goto LABEL_16;
  }
  if ( !a2 )
  {
LABEL_53:
    v8 = (_DWORD *)(a2 + 16);
    goto LABEL_17;
  }
LABEL_16:
  v8 = (_DWORD *)(a2 + 16);
  if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
  {
    qword_140E67EE0 = 0LL;
    goto LABEL_18;
  }
LABEL_17:
  if ( !a2 )
    goto LABEL_54;
LABEL_18:
  if ( (*v8 & 2) != 0 )
  {
    qword_140E67EE8 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_54;
  }
  if ( (*(_DWORD *)a2 & 0x200000) != 0 )
  {
    EtwpSplitIoNotifyRoutines = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_54;
  }
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
  {
    WmiSetNetworkNotify(0LL);
  }
  else if ( !a2 )
  {
    goto LABEL_54;
  }
  if ( (*(_DWORD *)(a2 + 4) & 0x10) == 0 )
  {
    if ( a2 )
      goto LABEL_26;
LABEL_54:
    v9 = (const signed __int32 *)(a2 + 16);
LABEL_27:
    if ( !a2 )
      goto LABEL_29;
    goto LABEL_28;
  }
  IoPerfReset(1);
LABEL_26:
  v9 = (const signed __int32 *)(a2 + 16);
  if ( (*(_DWORD *)(a2 + 16) & 0x400000) == 0 )
    goto LABEL_27;
  qword_140E03670 = 0LL;
LABEL_28:
  if ( (*v9 & 0x80000) != 0 )
  {
    qword_140E03678 = 0LL;
    v10 = (const signed __int32 *)(a2 + 16);
    goto LABEL_30;
  }
LABEL_29:
  v10 = v9;
  if ( !a2 )
    goto LABEL_31;
LABEL_30:
  if ( !_bittest(v9, 0x14u) )
  {
LABEL_31:
    v11 = v10;
    if ( !a2 )
      goto LABEL_33;
    goto LABEL_32;
  }
  qword_140E03680 = 0LL;
  v11 = (const signed __int32 *)(a2 + 16);
LABEL_32:
  if ( (*v10 & 0x200000) != 0 )
  {
    qword_140E03688 = 0LL;
    v12 = (const signed __int32 *)(a2 + 16);
    goto LABEL_34;
  }
LABEL_33:
  v12 = v11;
  if ( !a2 )
    goto LABEL_55;
LABEL_34:
  if ( (*v11 & 0x1000000) != 0 )
  {
    qword_140E0E8C8 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_55;
  }
  if ( (*v12 & 0x2000000) != 0 )
  {
    qword_140E0E8D0 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_55;
  }
  if ( (*(_DWORD *)(a2 + 8) & 0x8000000) != 0 )
  {
    qword_140E0E8D8 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_55;
  }
  if ( (*(_DWORD *)a2 & 0x40000) == 0 )
  {
    if ( a2 )
      goto LABEL_42;
LABEL_55:
    v13 = (_DWORD *)(a2 + 4);
LABEL_43:
    if ( !a2 )
      goto LABEL_49;
    goto LABEL_44;
  }
  DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 0);
LABEL_42:
  v13 = (_DWORD *)(a2 + 4);
  if ( (*(_DWORD *)(a2 + 4) & 2) == 0 )
    goto LABEL_43;
  KeStopProfile((ULONG_PTR)&EtwpProfileObject);
LABEL_44:
  if ( (*v13 & 0x400) != 0 )
  {
    for ( i = 0; i < EtwpPmcProfile; ++i )
      KeStopProfile((ULONG_PTR)qword_140EFED68 + 616 * i);
  }
  else if ( !a2 )
  {
    goto LABEL_49;
  }
  if ( (*(_DWORD *)(a2 + 16) & 0x80u) != 0 )
  {
    ObDisableEtwReferenceTrace();
  }
  else if ( !a2 )
  {
    goto LABEL_49;
  }
  if ( (*(_DWORD *)(a2 + 4) & 0x880000) != 0 && (!a1 || (a1[1] & 0x880000) == 0) )
    KeCancelTimer2((__int64)&EtwpMemInfoTimer, 0LL, (__int64)a3, a4);
LABEL_49:
  DestinationString = 0LL;
  if ( !a1 || (*a1 & 0x6000200) == 0 )
  {
    if ( dword_140E67EB8 )
    {
      WmiTraceRundownNotify(*a3, v4);
      EtwpUpdateFileInfoDriverRegistration(0);
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
      ZwUnloadDriver(&DestinationString);
      dword_140E67EB8 = 0;
    }
  }
}
