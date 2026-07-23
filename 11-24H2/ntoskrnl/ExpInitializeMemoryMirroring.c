/*
 * XREFs of ExpInitializeMemoryMirroring @ 0x140C425E8
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140BE052C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwCreatePartition @ 0x1406A8B50 (ZwCreatePartition.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExpAddNonMirroredRanges @ 0x140C4251C (ExpAddNonMirroredRanges.c)
 */

NTSTATUS ExpInitializeMemoryMirroring()
{
  NTSTATUS result; // eax
  __int64 v1; // rbx
  __int64 v2; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE PartitionHandle; // [rsp+70h] [rbp+10h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  PartitionHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  result = KeLoaderBlock_0;
  DestinationString = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3752LL) )
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\NonMirroredMemory");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwCreatePartition(0LL, &PartitionHandle, 0x1F0003u, &ObjectAttributes, *(ULONG *)&DestinationString.Length);
    if ( result >= 0 )
    {
      v1 = *(_QWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3752LL);
      if ( *(_DWORD *)v1 )
        ExpAddNonMirroredRanges(PartitionHandle, *(_DWORD *)v1, *(__int64 **)(v1 + 8), 0);
      v2 = *(unsigned int *)(v1 + 4);
      if ( (_DWORD)v2 )
        ExpAddNonMirroredRanges(PartitionHandle, v2, *(__int64 **)(v1 + 16), 1);
      result = qword_140EFEDC0;
      if ( qword_140EFEDC0 )
        return guard_dispatch_icall_no_overrides(PartitionHandle, v2);
    }
  }
  return result;
}
