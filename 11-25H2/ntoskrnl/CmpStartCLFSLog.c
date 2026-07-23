/*
 * XREFs of CmpStartCLFSLog @ 0x140AD5500
 * Callers:
 *     CmpStartRMLog @ 0x140AD49C8 (CmpStartRMLog.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     RtlAppendUnicodeStringToString @ 0x140404430 (RtlAppendUnicodeStringToString.c)
 *     Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline @ 0x14065C8C4 (Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1407D6518 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpDeleteCorruptedLogfile @ 0x1407D679C (CmpDeleteCorruptedLogfile.c)
 *     PsRestoreImpersonation @ 0x1409D7040 (PsRestoreImpersonation.c)
 *     PsDisableImpersonation @ 0x1409DFD30 (PsDisableImpersonation.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpStartCLFSLog(
        PCUNICODE_STRING Source,
        PCUNICODE_STRING a2,
        __int64 a3,
        void *a4,
        int a5,
        ULONGLONG *a6,
        char a7,
        int *a8,
        FILE_OBJECT **a9,
        PVOID *a10)
{
  unsigned __int16 v13; // cx
  ULONG fLogOptionFlag; // edi
  NTSTATUS LogFileInformation; // ebx
  CLFS_INFORMATION *Pool2; // rax
  CLFS_INFORMATION *v18; // rsi
  int TotalContainers; // edi
  BOOLEAN v20; // [rsp+60h] [rbp-89h]
  FILE_OBJECT *pplfoLog; // [rsp+68h] [rbp-81h] BYREF
  ULONG pcbInfoBuffer; // [rsp+70h] [rbp-79h] BYREF
  UNICODE_STRING Destination; // [rsp+78h] [rbp-71h] BYREF
  PVOID ppvMarshalContext; // [rsp+88h] [rbp-61h] BYREF
  PULONGLONG pcbContainer; // [rsp+90h] [rbp-59h]
  int *v26; // [rsp+98h] [rbp-51h]
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+A0h] [rbp-49h] BYREF
  _OWORD v28[3]; // [rsp+B0h] [rbp-39h] BYREF

  pcbContainer = a6;
  *a9 = 0LL;
  *a10 = 0LL;
  v26 = a8;
  v13 = Source->Length + 26 + a2->Length;
  pcbInfoBuffer = 0;
  Destination.MaximumLength = v13;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  ImpersonationState = 0LL;
  Destination.Length = 0;
  memset(v28, 0, sizeof(v28));
  Destination.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
  if ( !Destination.Buffer )
    return 3221225626LL;
  *a9 = 0LL;
  *a10 = 0LL;
  RtlAppendUnicodeStringToString(&Destination, &CmpLogPrefix);
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeStringToString(&Destination, a2);
  RtlAppendUnicodeStringToString(&Destination, &CmpLogExt);
  fLogOptionFlag = 512;
  if ( (unsigned int)Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline() && !a7 )
    fLogOptionFlag = 16777728;
  pplfoLog = 0LL;
  ppvMarshalContext = 0LL;
  v20 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
  KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v28);
  LogFileInformation = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0010000, 0, a4, 1u, 8u, 0, fLogOptionFlag, 0LL, 0);
  if ( (unsigned int)Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline() && LogFileInformation == -1072037875 )
  {
    CmpDeleteCorruptedLogfile(Source, a2, &CmpLogExt, &CmpContainerSuffix, 0, L".%d", 0x10u);
  }
  else if ( LogFileInformation < 0 )
  {
    if ( LogFileInformation == -1073741772 )
    {
      LogFileInformation = ClfsCreateLogFile(
                             &pplfoLog,
                             &Destination,
                             0xC0010000,
                             0,
                             a4,
                             2u,
                             8u,
                             0,
                             fLogOptionFlag,
                             0LL,
                             0);
      if ( LogFileInformation >= 0 )
      {
        TotalContainers = 0;
        while ( 1 )
        {
          LogFileInformation = CmpAddRemoveContainerToCLFSLog(
                                 pplfoLog,
                                 Source,
                                 a2,
                                 &CmpLogExt,
                                 &CmpContainerSuffix,
                                 TotalContainers,
                                 pcbContainer);
          if ( LogFileInformation < 0 )
            break;
          if ( (unsigned int)++TotalContainers >= 3 )
            goto LABEL_20;
        }
      }
    }
  }
  else
  {
    pcbInfoBuffer = 120;
    Pool2 = (CLFS_INFORMATION *)ExAllocatePool2(0x100uLL);
    v18 = Pool2;
    if ( Pool2 )
    {
      LogFileInformation = ClfsGetLogFileInformation(pplfoLog, Pool2, &pcbInfoBuffer);
      if ( LogFileInformation >= 0 )
      {
        TotalContainers = v18->TotalContainers;
        ExFreePoolWithTag(v18, 0);
LABEL_20:
        LogFileInformation = ClfsCreateMarshallingArea(
                               pplfoLog,
                               PagedPool,
                               0LL,
                               0LL,
                               0x1000u,
                               2u,
                               0x14u,
                               &ppvMarshalContext);
        if ( LogFileInformation >= 0 )
        {
          *v26 = TotalContainers;
          *a9 = pplfoLog;
          *a10 = ppvMarshalContext;
        }
      }
      else
      {
        ExFreePoolWithTag(v18, 0);
      }
    }
    else
    {
      LogFileInformation = -1073741670;
    }
  }
  KiUnstackDetachProcess((__int64)v28, 0LL);
  if ( v20 )
    PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
  ExFreePoolWithTag(Destination.Buffer, 0);
  if ( LogFileInformation < 0 )
  {
    if ( pplfoLog )
      ClfsCloseLogFileObject(pplfoLog);
  }
  return (unsigned int)LogFileInformation;
}
