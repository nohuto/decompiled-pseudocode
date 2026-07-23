/*
 * XREFs of MiSoloZeroHugeRange @ 0x140686F44
 * Callers:
 *     MiHugePageOperation @ 0x140686CF0 (MiHugePageOperation.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiDeleteAcceleratorDescriptor @ 0x140271A18 (MiDeleteAcceleratorDescriptor.c)
 *     MiFillMemory @ 0x140402AB0 (MiFillMemory.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiReleaseProcessorHugeMappingAtDpc @ 0x140686EEC (MiReleaseProcessorHugeMappingAtDpc.c)
 *     MiUseProcessorHugeMappingAtDpc @ 0x1406870F4 (MiUseProcessorHugeMappingAtDpc.c)
 *     MiAllocateAcceleratorDescriptor @ 0x1406919E4 (MiAllocateAcceleratorDescriptor.c)
 *     RtlCompareMemoryUlong @ 0x1406B49B0 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall MiSoloZeroHugeRange(
        char *BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // r10d
  __int64 v7; // r12
  __int64 v9; // rdx
  unsigned __int8 v10; // r14
  __int64 v13; // rbp
  int AcceleratorDescriptor; // eax
  size_t v15; // rdi
  __int64 v16; // rax
  char *v17; // rbx
  __int64 v18; // r9
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22[9]; // [rsp+30h] [rbp-48h] BYREF
  char v23; // [rsp+80h] [rbp+8h] BYREF
  int v24; // [rsp+90h] [rbp+18h]
  unsigned int v25; // [rsp+98h] [rbp+20h]

  v25 = a4;
  v24 = a3;
  v6 = a4;
  v7 = 0LL;
  v9 = a5;
  v10 = 17;
  v22[0] = 0LL;
  v23 = 17;
  v13 = 0LL;
  if ( *(_WORD *)(*(_QWORD *)(384LL * a5 + qword_140E2DC38 + 376) + 24LL) )
  {
    AcceleratorDescriptor = MiAllocateAcceleratorDescriptor(0LL, a5, 1LL, v22);
    v6 = v25;
    if ( AcceleratorDescriptor )
      v13 = v22[0] + 32;
  }
  v15 = 0x40000000LL;
  if ( a3 == 2 )
  {
    v15 = 0x200000LL;
    v16 = MiUseProcessorHugeMappingAtDpc(BugCheckParameter2, v9, v6, &v23);
    v10 = v23;
    BugCheckParameter1 = (char *)v16;
  }
  v17 = BugCheckParameter1;
  while ( 1 )
  {
    if ( !a6 )
    {
      v18 = 0LL;
LABEL_11:
      result = (__int64)MiFillMemory(v13, v17, v15, v18, 1);
      goto LABEL_13;
    }
    if ( a6 == 1 )
    {
      v18 = -1LL;
      goto LABEL_11;
    }
    result = RtlCompareMemoryUlong(v17, v15, 0);
    if ( result != v15 )
      KeBugCheckEx(
        0x127u,
        (ULONG_PTR)BugCheckParameter1,
        BugCheckParameter2,
        (ULONG_PTR)&v17[result - (_QWORD)BugCheckParameter1],
        0x40000000uLL);
LABEL_13:
    v7 += v15;
    if ( v7 == 0x40000000 )
      break;
    v17 += v15;
    if ( v10 < 2u )
    {
      if ( KeShouldYieldProcessor() )
      {
        MiReleaseProcessorHugeMappingAtDpc((unsigned __int64)BugCheckParameter1, BugCheckParameter2, v10);
        v21 = MiUseProcessorHugeMappingAtDpc(BugCheckParameter2, v20, v25, &v23);
        v10 = v23;
        BugCheckParameter1 = (char *)v21;
        v17 = (char *)(v7 + v21);
      }
    }
  }
  if ( v24 == 2 )
    result = MiReleaseProcessorHugeMappingAtDpc((unsigned __int64)BugCheckParameter1, BugCheckParameter2, v10);
  if ( v13 )
    return MiDeleteAcceleratorDescriptor(v13);
  return result;
}
