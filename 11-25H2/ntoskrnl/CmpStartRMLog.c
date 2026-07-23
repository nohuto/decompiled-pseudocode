/*
 * XREFs of CmpStartRMLog @ 0x140AD49C8
 * Callers:
 *     CmpStartRMLogs @ 0x140A81958 (CmpStartRMLogs.c)
 *     CmpInitCmRM @ 0x140AD3ED8 (CmpInitCmRM.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline @ 0x14065C8C4 (Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline.c)
 *     CmpRmAnalysisPhase @ 0x1407D0EC0 (CmpRmAnalysisPhase.c)
 *     CmpRmReDoPhase @ 0x1407D10EC (CmpRmReDoPhase.c)
 *     CmpRmUnDoPhase @ 0x1407D12C0 (CmpRmUnDoPhase.c)
 *     CmpIsFileInSystemConfig @ 0x1407D2330 (CmpIsFileInSystemConfig.c)
 *     LockRMLog @ 0x1408668D8 (LockRMLog.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1409104C8 (CmpQueryFileSecurityDescriptor.c)
 *     RtlStringFromGUIDEx @ 0x140965070 (RtlStringFromGUIDEx.c)
 *     CmpQueryNameString @ 0x1409FA3D4 (CmpQueryNameString.c)
 *     CmpStartCLFSLog @ 0x140AD5500 (CmpStartCLFSLog.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpStartRMLog(char *a1, _OWORD *a2)
{
  unsigned int v2; // edi
  PVOID v3; // r15
  CLFS_INFORMATION *v6; // r12
  bool v8; // zf
  int FileSecurityDescriptor; // ebx
  void *v10; // r14
  __int64 v11; // rax
  PVOID *v12; // r14
  PLOG_FILE_OBJECT *v13; // r13
  __int64 v14; // rcx
  CLFS_INFORMATION *v15; // rax
  CLFS_INFORMATION *v16; // rbx
  FILE_OBJECT *v17; // rcx
  PVOID v18; // rcx
  NTSTATUS v19; // eax
  CLFS_LSN LastLsn; // rax
  CLFS_LSN v21; // rbx
  PVOID v22; // rcx
  NTSTATUS v23; // eax
  FILE_OBJECT *v24; // rcx
  int ppvReadContext; // [rsp+20h] [rbp-A9h]
  CLFS_LSN plsn2; // [rsp+50h] [rbp-79h] BYREF
  ULONG pcbWritten; // [rsp+58h] [rbp-71h] BYREF
  PVOID pvCursorContext; // [rsp+60h] [rbp-69h] BYREF
  PVOID pvReadContext; // [rsp+68h] [rbp-61h] BYREF
  ULONG pcbReadBuffer; // [rsp+70h] [rbp-59h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-51h] BYREF
  UNICODE_STRING GuidString; // [rsp+88h] [rbp-41h] BYREF
  ULONG pcbRestartBuffer; // [rsp+98h] [rbp-31h] BYREF
  __int64 Pool2; // [rsp+A0h] [rbp-29h]
  PCUNICODE_STRING Source; // [rsp+A8h] [rbp-21h]
  PVOID ppvRestartBuffer; // [rsp+B0h] [rbp-19h] BYREF
  CLFS_LSN plsn; // [rsp+B8h] [rbp-11h] BYREF
  CLFS_LSN plsnPrevious; // [rsp+C0h] [rbp-9h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+C8h] [rbp-1h] BYREF
  PVOID ppvReadBuffer; // [rsp+D0h] [rbp+7h] BYREF
  CLFS_LSN plsnRecord; // [rsp+D8h] [rbp+Fh] BYREF
  CLS_LSN pvRestartBuffer; // [rsp+E0h] [rbp+17h] BYREF
  CLFS_LSN plsnFirst; // [rsp+E8h] [rbp+1Fh] BYREF
  char v44; // [rsp+130h] [rbp+67h]
  ULONG pcbInfoBuffer; // [rsp+140h] [rbp+77h] BYREF
  char v46; // [rsp+148h] [rbp+7Fh]

  v2 = 0;
  v46 = 1;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v3 = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  ppvRestartBuffer = 0LL;
  pcbRestartBuffer = 0;
  plsn.ullOffset = 0LL;
  pvCursorContext = 0LL;
  plsn2.ullOffset = 0LL;
  pcbWritten = 0;
  pvRestartBuffer.ullOffset = 0LL;
  pvReadContext = 0LL;
  v44 = 0;
  LOBYTE(pcbInfoBuffer) = 0;
  LockRMLog((__int64)a1);
  if ( (*((_DWORD *)a1 + 26) & 1) != 0 )
    goto LABEL_4;
  Pool2 = ExAllocatePool2(0x100uLL);
  v6 = (CLFS_INFORMATION *)Pool2;
  if ( !Pool2 )
  {
    v2 = -1073741670;
LABEL_4:
    ExReleaseResourceLite(*((PERESOURCE *)a1 + 16));
    KeLeaveCriticalRegion();
    return v2;
  }
  *((_DWORD *)a1 + 26) |= 2u;
  v8 = a1 == CmRmSystem;
  *((_QWORD *)a1 + 15) = CLFS_LSN_INVALID_EXT;
  if ( v8 )
  {
    Source = &CmpLogPath;
    if ( a2 )
      *(_OWORD *)(*(_QWORD *)(qword_140E09990 + 64) + 128LL) = *a2;
    FileSecurityDescriptor = RtlStringFromGUIDEx((PGUID)(*(_QWORD *)(qword_140E09990 + 64) + 128LL), &GuidString, 1u);
    if ( FileSecurityDescriptor >= 0 )
    {
      *((_QWORD *)a1 + 9) = 5242880LL;
      v10 = *(void **)(qword_140E09990 + 1544);
      if ( (unsigned int)Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline() )
        v44 = 1;
LABEL_18:
      FileSecurityDescriptor = CmpQueryFileSecurityDescriptor(v10, (struct _PRIVILEGE_SET **)&pvReadContext);
      if ( FileSecurityDescriptor < 0 )
        goto LABEL_56;
      v3 = pvReadContext;
      v12 = (PVOID *)(a1 + 96);
      v13 = (PLOG_FILE_OBJECT *)(a1 + 88);
      v14 = (__int64)(a1 + 68);
      while ( 1 )
      {
        FileSecurityDescriptor = CmpStartCLFSLog(
                                   Source,
                                   &GuidString,
                                   ppvReadContext,
                                   (__int64)(a1 + 72),
                                   v44 == 0,
                                   v14,
                                   (__int64)(a1 + 88),
                                   (__int64)(a1 + 96));
        if ( FileSecurityDescriptor < 0 )
          goto LABEL_50;
        pcbInfoBuffer = 120;
        v15 = (CLFS_INFORMATION *)ExAllocatePool2(0x100uLL);
        v16 = v15;
        if ( v15 )
        {
          ClfsGetLogFileInformation(*v13, v15, &pcbInfoBuffer);
          ExFreePoolWithTag(v16, 0);
        }
        v17 = *v13;
        pcbWritten = 120;
        FileSecurityDescriptor = ClfsGetLogFileInformation(v17, v6, &pcbWritten);
        *((_QWORD *)a1 + 15) = v6->BaseLsn.ullOffset;
        if ( FileSecurityDescriptor < 0 )
        {
LABEL_50:
          if ( pvCursorContext )
            ClfsTerminateReadLog(pvCursorContext);
          if ( FileSecurityDescriptor >= 0 )
          {
            *((_DWORD *)a1 + 26) = *((_DWORD *)a1 + 26) & 0xFFFFFFFC | 1;
          }
          else if ( *v12 )
          {
            *v12 = 0LL;
          }
          break;
        }
        if ( ClfsReadRestartArea(*v12, &ppvRestartBuffer, &pcbRestartBuffer, &plsn, &pvCursorContext) == 1075445772
          || !ppvRestartBuffer )
        {
          plsn2 = v6->BaseLsn;
          goto LABEL_36;
        }
        plsn2 = *(CLFS_LSN *)ppvRestartBuffer;
        if ( !ClfsLsnEqual(&plsn, &plsn2) )
          goto LABEL_36;
        v18 = *v12;
        plsnFirst = plsn2;
        pvReadContext = 0LL;
        ppvReadBuffer = 0LL;
        pcbReadBuffer = 0;
        plsnUndoNext.ullOffset = 0LL;
        plsnPrevious.ullOffset = 0LL;
        plsnRecord.ullOffset = 0LL;
        LOBYTE(pcbInfoBuffer) = 0;
        if ( ClfsReadLogRecord(
               v18,
               &plsnFirst,
               ClfsContextForward,
               &ppvReadBuffer,
               &pcbReadBuffer,
               (PCLFS_RECORD_TYPE)&pcbInfoBuffer,
               &plsnUndoNext,
               &plsnPrevious,
               &pvReadContext) >= 0 )
        {
          LOBYTE(pcbInfoBuffer) = 1;
          v19 = ClfsReadNextLogRecord(
                  pvReadContext,
                  &ppvReadBuffer,
                  &pcbReadBuffer,
                  (PCLFS_RECORD_TYPE)&pcbInfoBuffer,
                  0LL,
                  &plsnUndoNext,
                  &plsnPrevious,
                  &plsnRecord);
          if ( v19 == -1073741807 )
          {
            LastLsn = v6->LastLsn;
          }
          else
          {
            if ( v19 < 0 )
              goto LABEL_33;
            LastLsn = plsnRecord;
          }
          plsn2 = LastLsn;
        }
LABEL_33:
        if ( pvReadContext )
          ClfsTerminateReadLog(pvReadContext);
LABEL_36:
        if ( pvCursorContext )
        {
          ClfsTerminateReadLog(pvCursorContext);
          pvCursorContext = 0LL;
        }
        if ( !ClfsLsnEqual(&plsn2, &v6->LastLsn) && (*((_DWORD *)a1 + 26) & 4) != 0 )
        {
          v21 = plsn2;
          if ( (int)CmpRmAnalysisPhase((__int64)a1, plsn2) >= 0 )
          {
            CmpRmReDoPhase((__int64)a1, v21);
            CmpRmUnDoPhase((__int64)a1);
          }
          *((_DWORD *)a1 + 26) &= ~4u;
        }
        v22 = *v12;
        pvRestartBuffer = v6->LastLsn;
        v23 = ClfsWriteRestartArea(v22, &pvRestartBuffer, 8u, 0LL, 0, &pcbWritten, 0LL);
        FileSecurityDescriptor = v23;
        if ( !v46 || v23 != -1072037859 && *((_DWORD *)a1 + 17) <= 0xAu )
        {
          v6 = (CLFS_INFORMATION *)Pool2;
          goto LABEL_50;
        }
        v46 = 0;
        if ( pvCursorContext )
        {
          ClfsTerminateReadLog(pvCursorContext);
          pvCursorContext = 0LL;
        }
        ClfsDeleteLogByPointer(*v13);
        ClfsDeleteMarshallingArea(*v12);
        v24 = *v13;
        *v12 = 0LL;
        ClfsCloseLogFileObject(v24);
        v6 = (CLFS_INFORMATION *)Pool2;
        v14 = (__int64)(a1 + 68);
        *((_DWORD *)a1 + 17) = 0;
        *v13 = 0LL;
      }
    }
  }
  else
  {
    FileSecurityDescriptor = CmpQueryNameString(*(void **)(*((_QWORD *)a1 + 10) + 1544LL), &UnicodeString);
    if ( FileSecurityDescriptor >= 0 )
    {
      Source = &UnicodeString;
      if ( a2 )
        *(_OWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 64LL) + 128LL) = *a2;
      FileSecurityDescriptor = RtlStringFromGUIDEx(
                                 (PGUID)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 64LL) + 128LL),
                                 &GuidString,
                                 1u);
      if ( FileSecurityDescriptor >= 0 )
      {
        v11 = *((_QWORD *)a1 + 10);
        *((_QWORD *)a1 + 9) = 0x100000LL;
        v10 = *(void **)(v11 + 1544);
        if ( (unsigned int)Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline() )
        {
          FileSecurityDescriptor = CmpIsFileInSystemConfig(&UnicodeString, (BOOLEAN *)&pcbInfoBuffer);
          if ( FileSecurityDescriptor < 0 )
            goto LABEL_56;
          v44 = pcbInfoBuffer;
        }
        goto LABEL_18;
      }
    }
  }
LABEL_56:
  ExReleaseResourceLite(*((PERESOURCE *)a1 + 16));
  KeLeaveCriticalRegion();
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  if ( GuidString.Buffer )
    RtlFreeAnsiString(&GuidString);
  ExFreePoolWithTag(v6, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)FileSecurityDescriptor;
}
