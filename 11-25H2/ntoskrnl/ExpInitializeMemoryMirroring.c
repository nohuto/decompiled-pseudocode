/*
 * XREFs of ExpInitializeMemoryMirroring @ 0x140C2F1BC
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140BCD52C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwCreatePartition @ 0x14069C8E0 (ZwCreatePartition.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExpAddNonMirroredRanges @ 0x140C2F0F0 (ExpAddNonMirroredRanges.c)
 */

int ExpInitializeMemoryMirroring()
{
  __int64 v0; // rax
  __int64 v1; // rax
  __int64 v2; // rbx
  unsigned int v3; // edx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE PartitionHandle; // [rsp+70h] [rbp+10h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  PartitionHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v0 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  DestinationString = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(v0 + 240) + 3752LL) )
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\NonMirroredMemory");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LODWORD(v0) = ZwCreatePartition(
                    0LL,
                    &PartitionHandle,
                    0x1F0003u,
                    &ObjectAttributes,
                    *(ULONG *)&DestinationString.Length);
    if ( (int)v0 >= 0 )
    {
      v1 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
      v2 = *(_QWORD *)(*(_QWORD *)(v1 + 240) + 3752LL);
      if ( *(_DWORD *)v2 )
        ExpAddNonMirroredRanges(PartitionHandle, *(_DWORD *)v2, *(__int64 **)(v2 + 8), 0);
      v3 = *(_DWORD *)(v2 + 4);
      if ( v3 )
        ExpAddNonMirroredRanges(PartitionHandle, v3, *(__int64 **)(v2 + 16), 1);
      LODWORD(v0) = qword_140EFE760;
      if ( qword_140EFE760 )
        LODWORD(v0) = guard_dispatch_icall_no_overrides(PartitionHandle);
    }
  }
  return v0;
}
