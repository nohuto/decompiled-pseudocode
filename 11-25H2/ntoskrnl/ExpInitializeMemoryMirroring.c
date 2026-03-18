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

__int64 ExpInitializeMemoryMirroring()
{
  __int64 result; // rax
  __int64 v1; // rax
  __int64 v2; // rbx
  unsigned int v3; // edx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  int v5; // [rsp+30h] [rbp-30h]
  int v6; // [rsp+34h] [rbp-2Ch]
  __int64 v7; // [rsp+38h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-20h]
  int v9; // [rsp+48h] [rbp-18h]
  int v10; // [rsp+4Ch] [rbp-14h]
  __int128 v11; // [rsp+50h] [rbp-10h]
  __int64 v12; // [rsp+70h] [rbp+10h] BYREF

  v10 = 0;
  v12 = 0LL;
  v6 = 0;
  result = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  DestinationString = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(result + 240) + 3752LL) )
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\NonMirroredMemory");
    v7 = 0LL;
    p_DestinationString = &DestinationString;
    v5 = 48;
    v9 = 512;
    v11 = 0LL;
    result = ZwCreatePartition(0LL, (__int64)&v12);
    if ( (int)result >= 0 )
    {
      v1 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
      v2 = *(_QWORD *)(*(_QWORD *)(v1 + 240) + 3752LL);
      if ( *(_DWORD *)v2 )
        ExpAddNonMirroredRanges(v12, *(_DWORD *)v2, *(__int64 **)(v2 + 8), 0);
      v3 = *(_DWORD *)(v2 + 4);
      if ( v3 )
        ExpAddNonMirroredRanges(v12, v3, *(__int64 **)(v2 + 16), 1);
      result = qword_140EFE760;
      if ( qword_140EFE760 )
        return guard_dispatch_icall_no_overrides(v12);
    }
  }
  return result;
}
