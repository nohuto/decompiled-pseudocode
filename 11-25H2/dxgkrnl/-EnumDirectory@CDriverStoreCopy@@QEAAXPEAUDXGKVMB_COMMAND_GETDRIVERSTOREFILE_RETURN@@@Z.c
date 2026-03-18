/*
 * XREFs of ?EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1401C8678
 * Callers:
 *     ?ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1401C8FD8 (-ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403A3100 (-VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x14002ED20 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x140033390 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?ProcessNextFile@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1401C9088 (-ProcessNextFile@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 */

void __fastcall CDriverStoreCopy::EnumDirectory(
        CDriverStoreCopy *this,
        struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *a2,
        __int64 a3,
        __int64 a4)
{
  void **v4; // rsi
  bool v5; // zf
  void *Pool2; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  NTSTATUS v13; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  v4 = (void **)((char *)this + 16);
  v5 = *((_QWORD *)this + 2) == -1LL;
  IoStatusBlock = 0LL;
  if ( !v5 )
    goto LABEL_14;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v5 = *(_QWORD *)this == 0LL;
  DestinationString = 0LL;
  if ( v5 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, *((unsigned int *)this + 2), 1265072196LL, a4);
    *(_QWORD *)this = Pool2;
    if ( !Pool2 )
    {
      *((_DWORD *)a2 + 4) = -1073741801;
      return;
    }
    memset(Pool2, 0, *((unsigned int *)this + 2));
  }
  v9 = RtlStringCbCopyW((char *)this + 544, 0x208uLL, (char *)a2 + 60);
  *((_DWORD *)a2 + 4) = v9;
  if ( v9 < 0 )
    goto LABEL_11;
  v10 = RtlStringCbCopyW((char *)this + 1064, 0x208uLL, (char *)this + 24);
  *((_DWORD *)a2 + 4) = v10;
  if ( v10 < 0 )
    goto LABEL_11;
  v12 = RtlStringCbCatW((unsigned __int16 *)this + 532, v11, (char *)a2 + 60);
  *((_DWORD *)a2 + 4) = v12;
  if ( v12 < 0 )
    goto LABEL_11;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)this + 532);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v13 = ZwOpenFile(v4, 0x100001u, &ObjectAttributes, &IoStatusBlock, 1u, 0x21u);
  *((_DWORD *)a2 + 4) = v13;
  if ( v13 >= 0 )
  {
LABEL_14:
    CDriverStoreCopy::ProcessNextFile(this, a2);
    return;
  }
  WdLogSingleEntry1(3LL, v13);
  WdLogGlobalForLineNumber = 1429;
LABEL_11:
  if ( *((int *)a2 + 4) < 0 && *v4 != (void *)-1LL )
  {
    ZwClose(*v4);
    *v4 = (void *)-1LL;
  }
}
