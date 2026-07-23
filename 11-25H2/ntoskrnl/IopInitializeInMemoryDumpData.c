/*
 * XREFs of IopInitializeInMemoryDumpData @ 0x14059108C
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x1405912D0 (IopInitializeOfflineCrashDump.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x14038B3D0 (MmFreeContiguousMemory.c)
 *     MmAllocateContiguousNodeMemory @ 0x140414C00 (MmAllocateContiguousNodeMemory.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     KdCopyDataBlock @ 0x1405ABB54 (KdCopyDataBlock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwFilterBootOption @ 0x14069CEC0 (ZwFilterBootOption.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IoSetEnvironmentVariableEx @ 0x140821C20 (IoSetEnvironmentVariableEx.c)
 */

void IopInitializeInMemoryDumpData()
{
  __int64 v0; // rsi
  char v1; // r14
  NTSTATUS v2; // eax
  unsigned int i; // edi
  void *ContiguousNodeMemory; // rax
  __int64 v5; // rax
  PVOID *v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  int v9; // eax
  _BYTE Data[8]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v11; // [rsp+38h] [rbp-38h]
  __int64 v12; // [rsp+48h] [rbp-28h]
  _DWORD v13[4]; // [rsp+50h] [rbp-20h] BYREF

  v13[0] = 2012912317;
  v13[1] = 1295123289;
  v13[2] = -198680387;
  v13[3] = 1266192359;
  Data[0] = 0;
  *(_QWORD *)&v11 = 0x302E4594353594B3LL;
  v0 = 2LL;
  *((_QWORD *)&v11 + 1) = 0xB50211F197DACBD4uLL;
  v12 = 0x199B7088610836E8LL;
  if ( _InterlockedExchange(InMemData, 1) != 1 )
  {
    dword_140E65BF4 = 0;
    LODWORD(qword_140E65BE0) = 0;
    v1 = 0;
    v2 = ZwFilterBootOption(FilterBootOptionOperationSetElement, 0x10200003u, 0x260000A0u, Data, 1u);
    if ( v2 >= 0 || v2 == -2143092730 && (_BYTE)KdDebuggerEnabled )
      v1 = 1;
    qword_140E65BD8 = 9144LL;
    for ( i = 0; i < 2; ++i )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(qword_140E65BD8, 0, -1, 0, 4, 0x80000000);
      *(_QWORD *)&InMemData[2 * i + 2] = ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
      {
        dword_140E65BF4 = -1073741801;
        v6 = (PVOID *)&unk_140E65BC8;
        do
        {
          if ( *v6 )
          {
            MmFreeContiguousMemory(*v6);
            *v6 = 0LL;
          }
          ++v6;
          --v0;
        }
        while ( v0 );
        goto LABEL_20;
      }
      memset_0(ContiguousNodeMemory, 0, qword_140E65BD8);
      v5 = *(_QWORD *)&InMemData[2 * i + 2];
      *(_OWORD *)v5 = v11;
      *(_QWORD *)(v5 + 16) = v12;
      if ( v1 )
        KdCopyDataBlock(*(_QWORD *)&InMemData[2 * i + 2] + 8216LL);
    }
    v7 = __rdtsc();
    LODWORD(qword_140E65BE8) = v7;
    v8 = __rdtsc();
    HIDWORD(qword_140E65BE8) = v8;
    HIDWORD(qword_140E65BE8) = ExGenRandom(1) & 0x7FFFFFFF;
    v9 = IoSetEnvironmentVariableEx(
           (unsigned int)L"DumpInstance",
           (unsigned int)v13,
           (unsigned int)&qword_140E65BE8,
           8,
           7);
    if ( v9 < 0 )
    {
      dword_140E65BF4 = v9;
      qword_140E65BE8 = 0x4547415045474150LL;
    }
    dword_140E65BC4 = 1;
LABEL_20:
    _InterlockedExchange(InMemData, 0);
  }
}
