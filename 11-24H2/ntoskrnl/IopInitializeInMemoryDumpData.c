/*
 * XREFs of IopInitializeInMemoryDumpData @ 0x1405918B0
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140591AF4 (IopInitializeOfflineCrashDump.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x1403958D0 (MmAllocateContiguousNodeMemory.c)
 *     MmFreeContiguousMemory @ 0x140398060 (MmFreeContiguousMemory.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     KdCopyDataBlock @ 0x1405AC454 (KdCopyDataBlock.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwFilterBootOption @ 0x1406A9130 (ZwFilterBootOption.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IoSetEnvironmentVariableEx @ 0x14094EF80 (IoSetEnvironmentVariableEx.c)
 */

void IopInitializeInMemoryDumpData()
{
  __int64 v0; // rsi
  char v1; // r14
  NTSTATUS v2; // eax
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int i; // edi
  void *ContiguousNodeMemory; // rax
  __int64 v7; // rax
  PVOID *v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  int v11; // eax
  _BYTE Data[8]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v13; // [rsp+38h] [rbp-38h]
  __int64 v14; // [rsp+48h] [rbp-28h]
  _DWORD v15[4]; // [rsp+50h] [rbp-20h] BYREF

  v15[0] = 2012912317;
  v15[1] = 1295123289;
  v15[2] = -198680387;
  v15[3] = 1266192359;
  Data[0] = 0;
  *(_QWORD *)&v13 = 0x302E4594353594B3LL;
  v0 = 2LL;
  *((_QWORD *)&v13 + 1) = 0xB50211F197DACBD4uLL;
  v14 = 0x199B7088610836E8LL;
  if ( _InterlockedExchange(InMemData, 1) != 1 )
  {
    dword_140E65F94 = 0;
    LODWORD(qword_140E65F80) = 0;
    v1 = 0;
    v2 = ZwFilterBootOption(FilterBootOptionOperationSetElement, 0x10200003u, 0x260000A0u, Data, 1u);
    if ( v2 >= 0 || v2 == -2143092730 && (_BYTE)KdDebuggerEnabled )
      v1 = 1;
    qword_140E65F78 = 9144LL;
    for ( i = 0; i < 2; ++i )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(qword_140E65F78, 0, -1, 0, 4, 0x80000000);
      *(_QWORD *)&InMemData[2 * i + 2] = ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
      {
        dword_140E65F94 = -1073741801;
        v8 = (PVOID *)&unk_140E65F68;
        do
        {
          if ( *v8 )
          {
            MmFreeContiguousMemory(*v8);
            *v8 = 0LL;
          }
          ++v8;
          --v0;
        }
        while ( v0 );
        goto LABEL_20;
      }
      memset_0(ContiguousNodeMemory, 0, qword_140E65F78);
      v7 = *(_QWORD *)&InMemData[2 * i + 2];
      *(_OWORD *)v7 = v13;
      *(_QWORD *)(v7 + 16) = v14;
      if ( v1 )
        KdCopyDataBlock(*(_QWORD *)&InMemData[2 * i + 2] + 8216LL);
    }
    v9 = __rdtsc();
    LODWORD(qword_140E65F88) = v9;
    v10 = __rdtsc();
    HIDWORD(qword_140E65F88) = v10;
    HIDWORD(qword_140E65F88) = ExGenRandom(1, (unsigned __int64)HIDWORD(v10) << 32, v3, v4) & 0x7FFFFFFF;
    v11 = IoSetEnvironmentVariableEx(
            (unsigned int)L"DumpInstance",
            (unsigned int)v15,
            (unsigned int)&qword_140E65F88,
            8,
            7);
    if ( v11 < 0 )
    {
      dword_140E65F94 = v11;
      qword_140E65F88 = 0x4547415045474150LL;
    }
    dword_140E65F64 = 1;
LABEL_20:
    _InterlockedExchange(InMemData, 0);
  }
}
