/*
 * XREFs of ExpInitializeMemoryMirroring @ 0x140C40498
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140BDE52C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwCreatePartition @ 0x1406A7BB0 (ZwCreatePartition.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpAddNonMirroredRanges @ 0x140C403CC (ExpAddNonMirroredRanges.c)
 */

__int64 ExpInitializeMemoryMirroring()
{
  __int64 result; // rax
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rbx
  __int64 v4; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  int v6; // [rsp+30h] [rbp-30h]
  int v7; // [rsp+34h] [rbp-2Ch]
  __int64 v8; // [rsp+38h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-20h]
  int v10; // [rsp+48h] [rbp-18h]
  int v11; // [rsp+4Ch] [rbp-14h]
  __int128 v12; // [rsp+50h] [rbp-10h]
  __int64 v13; // [rsp+70h] [rbp+10h] BYREF

  v11 = 0;
  v13 = 0LL;
  v7 = 0;
  result = KeLoaderBlock_0;
  DestinationString = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3752LL) )
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\NonMirroredMemory");
    v8 = 0LL;
    p_DestinationString = &DestinationString;
    v6 = 48;
    v10 = 512;
    v12 = 0LL;
    result = ZwCreatePartition(0LL, (__int64)&v13);
    if ( (int)result >= 0 )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3752LL);
      if ( *(_DWORD *)v3 )
        ExpAddNonMirroredRanges(v13, *(_DWORD *)v3, *(__int64 **)(v3 + 8), 0);
      v4 = *(unsigned int *)(v3 + 4);
      if ( (_DWORD)v4 )
        ExpAddNonMirroredRanges(v13, v4, *(__int64 **)(v3 + 16), 1);
      result = qword_140EFEAA0;
      if ( qword_140EFEAA0 )
        return guard_dispatch_icall_no_overrides(v13, v4, v1, v2);
    }
  }
  return result;
}
