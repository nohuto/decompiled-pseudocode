/*
 * XREFs of CmpLogCheckpoint @ 0x140866C54
 * Callers:
 *     CmpCleanupTransactionState @ 0x1408666A8 (CmpCleanupTransactionState.c)
 *     CmpTransWriteLog @ 0x1408667CC (CmpTransWriteLog.c)
 *     CmpStopRMLog @ 0x140A843A4 (CmpStopRMLog.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     LOCK_TRANSACTION_LIST @ 0x140885DE8 (LOCK_TRANSACTION_LIST.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmListGetNextElement @ 0x140BA9A30 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpLogCheckpoint(__int64 a1, __int64 a2, char a3)
{
  NTSTATUS LogFileInformation; // edi
  const CLFS_LSN *NextElement; // rax
  CLFS_INFORMATION *Pool2; // rax
  CLFS_INFORMATION *v8; // rbx
  CLFS_INFORMATION *v9; // rax
  CLFS_INFORMATION *v10; // rbx
  char v11; // dl
  void *v13; // rcx
  NTSTATUS v14; // eax
  const CLFS_LSN *v15; // r14
  CLFS_CONTAINER_ID v16; // ebx
  CLFS_LSN plsn; // [rsp+40h] [rbp-C0h] BYREF
  ULONG pcbInfoBuffer[2]; // [rsp+48h] [rbp-B8h] BYREF
  ULONG pcbWritten; // [rsp+50h] [rbp-B0h] BYREF
  CLFS_LSN pvRestartBuffer; // [rsp+58h] [rbp-A8h] BYREF
  CLFS_LSN plsnNext; // [rsp+60h] [rbp-A0h] BYREF
  CLFS_INFORMATION pinfoBuffer; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+F0h] [rbp-10h] BYREF
  ULONG *v24; // [rsp+110h] [rbp+10h]
  int v25; // [rsp+118h] [rbp+18h]
  int v26; // [rsp+11Ch] [rbp+1Ch]

  LogFileInformation = 0;
  *(_QWORD *)pcbInfoBuffer = 0LL;
  pvRestartBuffer.ullOffset = 0LL;
  plsn.ullOffset = CLFS_LSN_INVALID_EXT;
  plsnNext.ullOffset = CLFS_LSN_NULL_EXT;
  pcbWritten = 120;
  memset_0(&pinfoBuffer, 0, sizeof(pinfoBuffer));
  LOCK_TRANSACTION_LIST();
  while ( 1 )
  {
    NextElement = (const CLFS_LSN *)CmListGetNextElement(a1 + 16, pcbInfoBuffer, 0LL);
    if ( !NextElement )
      break;
    v15 = NextElement + 13;
    if ( !ClfsLsnInvalid(NextElement + 13) )
    {
      v16 = ClfsLsnContainer((const CLFS_LSN *)(a1 + 120));
      if ( ClfsLsnContainer(v15) == v16 )
      {
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KeLeaveCriticalRegion();
        return 0LL;
      }
    }
    if ( ClfsLsnInvalid(&plsn) || ClfsLsnLess(v15, &plsn) )
      plsn = *v15;
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  if ( ClfsLsnInvalid(&plsn) )
  {
    LogFileInformation = ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), &pinfoBuffer, &pcbWritten);
    if ( LogFileInformation >= 0 )
      plsn = pinfoBuffer.LastLsn;
  }
  pcbInfoBuffer[0] = 120;
  Pool2 = (CLFS_INFORMATION *)ExAllocatePool2(0x100uLL);
  v8 = Pool2;
  if ( Pool2 )
  {
    ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), Pool2, pcbInfoBuffer);
    ExFreePoolWithTag(v8, 0);
  }
  if ( LogFileInformation >= 0 )
  {
    v13 = *(void **)(a1 + 96);
    pvRestartBuffer = plsn;
    v14 = ClfsWriteRestartArea(
            v13,
            &pvRestartBuffer,
            8u,
            (PCLFS_LSN)((unsigned __int64)&plsn & -(__int64)(a3 != 0)),
            0,
            &pcbWritten,
            &plsnNext);
    LogFileInformation = v14;
    if ( a3 )
    {
      if ( v14 >= 0 )
        *(CLFS_LSN *)(a1 + 120) = plsn;
    }
  }
  pcbInfoBuffer[0] = 120;
  v9 = (CLFS_INFORMATION *)ExAllocatePool2(0x100uLL);
  v10 = v9;
  if ( v9 )
  {
    ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), v9, pcbInfoBuffer);
    ExFreePoolWithTag(v10, 0);
  }
  if ( (unsigned int)dword_140E09E08 > 5 )
  {
    v11 = 1;
    if ( (qword_140E09E18 & 1) == 0 || (qword_140E09E20 & 1) != qword_140E09E20 )
      v11 = 0;
    if ( v11 )
    {
      v26 = 0;
      v24 = pcbInfoBuffer;
      pcbInfoBuffer[0] = LogFileInformation;
      v25 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09E08,
        (unsigned __int8 *)word_14005444A,
        0LL,
        0LL,
        3u,
        &v23);
    }
  }
  return (unsigned int)LogFileInformation;
}
