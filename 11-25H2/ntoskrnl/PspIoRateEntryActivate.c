/*
 * XREFs of PspIoRateEntryActivate @ 0x140A3B3A4
 * Callers:
 *     PspSetJobIoRateControl @ 0x140A3AD48 (PspSetJobIoRateControl.c)
 *     PspSetJobIoRateControlForVolume @ 0x140A3B0AC (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14034EA34 (IoDiskIoAttributionDereference.c)
 *     IoStopDiskIoAttributionForContext @ 0x14036D660 (IoStopDiskIoAttributionForContext.c)
 *     IoStartIoRateControl @ 0x14042C3F4 (IoStartIoRateControl.c)
 *     IoStopIoRateControl @ 0x14042C4FC (IoStopIoRateControl.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     IoStartDiskIoAttributionForContext @ 0x1404635C0 (IoStartDiskIoAttributionForContext.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwCreateFile @ 0x14069BBE0 (ZwCreateFile.c)
 *     IoDiskIoAttributionAllocate @ 0x1408D9F74 (IoDiskIoAttributionAllocate.c)
 *     PspIoRateEntryDeactivate @ 0x140A3B030 (PspIoRateEntryDeactivate.c)
 */

__int64 __fastcall PspIoRateEntryActivate(struct _EX_RUNDOWN_REF *a1, unsigned __int64 a2, __int64 a3, _BYTE *a4)
{
  int v4; // eax
  _RTL_BALANCED_NODE *v5; // rbx
  const WCHAR *v10; // rdx
  __int64 v11; // r8
  int started; // edi
  __int64 v13; // rcx
  _RTL_BALANCED_NODE *v15; // rax
  unsigned __int64 v16; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-1h] BYREF
  unsigned __int64 v20; // [rsp+100h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+108h] [rbp+7Fh] BYREF

  v4 = 0;
  v16 = 0LL;
  v5 = 0LL;
  v20 = 0LL;
  Handle = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( a4 )
    *a4 = 0;
  v10 = *(const WCHAR **)(a3 + 24);
  if ( v10 )
  {
    RtlInitUnicodeString(&DestinationString, v10);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    started = ZwCreateFile(&Handle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
    if ( started < 0 )
      goto LABEL_14;
    v15 = (_RTL_BALANCED_NODE *)IoDiskIoAttributionAllocate(a2, *(_QWORD *)(a2 + 1584));
    v5 = v15;
    if ( !v15 )
    {
      started = -1073741670;
      goto LABEL_14;
    }
    IoStartDiskIoAttributionForContext(v15);
    v4 = (int)Handle;
    v11 = (__int64)v5;
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 1584);
  }
  started = IoStartIoRateControl(a3, v4, v11, (__int64)&v20, (__int64)&v16);
  if ( started < 0 )
  {
    if ( v5 )
    {
      IoStopDiskIoAttributionForContext(v5);
      IoDiskIoAttributionDereference((__int64)v5);
    }
    v13 = v20;
  }
  else
  {
    if ( a1[5].Count )
    {
      PspIoRateEntryDeactivate(a1);
      *a4 = 1;
    }
    v13 = 0LL;
    a1[5].Count = v20;
    a1[3].Count = v16;
    a1[6].Count = (unsigned __int64)v5;
    started = 0;
    _InterlockedExchange64((volatile __int64 *)&a1[4], 0LL);
  }
  if ( v13 )
    IoStopIoRateControl(v13);
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)started;
}
