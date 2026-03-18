/*
 * XREFs of CmpDoFileSetSizeEx @ 0x140980EB4
 * Callers:
 *     CmShutdownSystem2 @ 0x140667BF4 (CmShutdownSystem2.c)
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x14097C070 (HvTruncateAllLogFilesIfRequired.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x14097C720 (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpCompleteUnloadKey @ 0x14097CB58 (CmpCompleteUnloadKey.c)
 *     HvWriteLogFile @ 0x14098041C (HvWriteLogFile.c)
 *     HvpAddBin @ 0x140980584 (HvpAddBin.c)
 *     HvWriteExternal @ 0x140A6D050 (HvWriteExternal.c)
 *     HvpPerformLogFileRecovery @ 0x140AB060C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x14045D2F0 (IoSetThreadHardErrorMode.c)
 *     ZwSetInformationFile @ 0x1406A68F0 (ZwSetInformationFile.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140981264 (HvpLogTypeToLogArrayIndex.c)
 *     CmpAdjustRequestedFileSize @ 0x140A67F74 (CmpAdjustRequestedFileSize.c)
 */

__int64 __fastcall CmpDoFileSetSizeEx(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned int v5; // ebx
  void *v6; // r14
  unsigned __int64 v7; // rdi
  unsigned __int64 v9; // rbp
  BOOLEAN v10; // r15
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // edi
  unsigned __int64 FileInformation; // [rsp+30h] [rbp-38h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  FileInformation = 0LL;
  v17 = 0LL;
  v5 = a2;
  IoStatusBlock = 0LL;
  v6 = *(void **)(a1 + 8LL * (unsigned int)a2 + 1544);
  if ( !v6 )
    return 0LL;
  if ( (_DWORD)a2 )
    v7 = (_DWORD)a2 == 1 || (unsigned int)(a2 - 4) <= 1
       ? *(_QWORD *)(a1 + 8LL * (unsigned int)HvpLogTypeToLogArrayIndex((unsigned int)a2, a2, a3) + 1808)
       : 0LL;
  else
    v7 = *(_QWORD *)(a1 + 1800);
  if ( (a4 & 1) != 0 && v7 && a3 <= v7 )
    return 0LL;
  v9 = CmpAdjustRequestedFileSize(a1, v5, v7, a3);
  v10 = IoSetThreadHardErrorMode(0);
  if ( v9 < v7 )
  {
    v17 = v9;
    v11 = ZwSetInformationFile(v6, &IoStatusBlock, &v17, 8u, FileAllocationInformation);
  }
  else
  {
    FileInformation = v9;
    v11 = ZwSetInformationFile(v6, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
  }
  v14 = v11;
  if ( v11 >= 0 )
  {
    if ( v5 )
    {
      if ( v5 == 1 || v5 - 4 <= 1 )
        *(_QWORD *)(a1 + 8LL * (unsigned int)HvpLogTypeToLogArrayIndex(v5, v12, v13) + 1808) = v9;
    }
    else
    {
      *(_QWORD *)(a1 + 1800) = v9;
    }
  }
  else
  {
    CmRegistryIODebug = 3;
    qword_140FD8ED0 = (__int64)v6;
    dword_140FD8ED8 = v11;
  }
  IoSetThreadHardErrorMode(v10);
  return v14;
}
