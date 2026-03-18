/*
 * XREFs of VfGetScatterGatherList @ 0x140B86BE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140248B90 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfReportIssueWithOptions @ 0x140612434 (VfReportIssueWithOptions.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140B84C54 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140B84EB4 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140B84F40 (VF_ASSERT_IRQL.c)
 *     ViAllocateMapRegisterFile @ 0x140B87EAC (ViAllocateMapRegisterFile.c)
 *     ViCheckMdlLength @ 0x140B8842C (ViCheckMdlLength.c)
 *     ViFreeMapRegisterFile @ 0x140B88B9C (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140B88E98 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 *     ViHalPreprocessOptions @ 0x140B8921C (ViHalPreprocessOptions.c)
 *     ViMapDoubleBuffer @ 0x140B89650 (ViMapDoubleBuffer.c)
 *     ViSwap @ 0x140B89E64 (ViSwap.c)
 */

__int64 VfGetScatterGatherList(int a1, __int64 a2, ...)
{
  __int64 v2; // r15
  PMDL v3; // r14
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 AdapterInformationInternal; // rax
  unsigned int v8; // r12d
  __int64 v9; // rsi
  unsigned int v11; // eax
  unsigned int v12; // ebx
  _QWORD *v13; // rax
  ULONG ByteOffset; // r9d
  PMDL v15; // rdx
  ULONG v16; // r8d
  ULONG ByteCount; // ecx
  int v18; // r10d
  ULONG v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 MapRegisterFile; // rax
  __int64 v23; // rbx
  __int128 v24; // xmm0
  _OWORD *v25; // rax
  int v26; // eax
  unsigned int v27; // ebx
  KIRQL v28; // al
  __int64 v29; // r9
  _QWORD *v30; // r8
  char v31; // [rsp+20h] [rbp-40h]
  __int64 v32; // [rsp+50h] [rbp-10h] BYREF
  __int64 RealDmaAdapter; // [rsp+58h] [rbp-8h]
  PMDL MemoryDescriptorList; // [rsp+B0h] [rbp+50h] BYREF
  va_list MemoryDescriptorLista; // [rsp+B0h] [rbp+50h]
  __int64 v37; // [rsp+B8h] [rbp+58h] BYREF
  va_list va1; // [rsp+B8h] [rbp+58h]
  __int64 v39; // [rsp+C0h] [rbp+60h]
  __int64 (__fastcall *v40)(); // [rsp+C8h] [rbp+68h]
  __int64 v41; // [rsp+D0h] [rbp+70h]
  __int64 v42; // [rsp+D8h] [rbp+78h]
  va_list va2; // [rsp+E0h] [rbp+80h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(MemoryDescriptorLista, a2);
  MemoryDescriptorList = va_arg(va1, PMDL);
  va_copy(va2, va1);
  v37 = va_arg(va2, _QWORD);
  v39 = va_arg(va2, _QWORD);
  v40 = va_arg(va2, __int64 (__fastcall *)());
  v41 = va_arg(va2, _QWORD);
  v42 = va_arg(va2, _QWORD);
  v2 = v37;
  v3 = MemoryDescriptorList;
  v5 = 0LL;
  v6 = 0LL;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v8 = v39;
  v9 = AdapterInformationInternal;
  if ( !AdapterInformationInternal )
    goto LABEL_20;
  VF_ASSERT_IRQL(2u);
  if ( !v3 )
    return 3221225485LL;
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 196));
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 200));
  v3 = MemoryDescriptorList;
  VERIFY_BUFFER_LOCKED((ULONG_PTR)MemoryDescriptorList);
  if ( *(_DWORD *)(v9 + 224) == 3 )
  {
    v11 = ViCheckMdlLength(v3, 0LL, v8);
    if ( v11 )
    {
      v12 = v11;
      ViHalPreprocessOptions(
        byte_140E0E960,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v11,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0x24uLL, v12, 0LL, 0LL, byte_140E0E960);
    }
  }
  if ( ViDoubleBufferDma )
  {
    v13 = ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
    v2 = v37;
    v5 = (__int64)v13;
    if ( !v13 )
      goto LABEL_20;
    v13[8] = 0LL;
    ByteOffset = v2 & 0xFFF;
    *v13 = v41;
    v15 = v3;
    v13[1] = v40;
    v13[10] = v13 + 9;
    v13[9] = v13 + 9;
    v16 = LODWORD(v3->StartVa) + v3->ByteCount + v3->ByteOffset - v2;
    ByteCount = v16;
    v18 = 0;
    while ( v16 < v8 )
    {
      v15 = v15->Next;
      if ( !v15 )
        break;
      v19 = ByteOffset + 4095;
      ByteOffset = v15->ByteOffset;
      v20 = ByteCount + v19;
      ByteCount = v15->ByteCount;
      v18 += v20 >> 12;
      v16 += ByteCount;
    }
    if ( v16 + 4096 < ByteOffset + v8 )
    {
      DECREMENT_SCATTER_GATHER_LISTS(v9);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v5);
      return 3221225507LL;
    }
    *(_QWORD *)(v5 + 56) = v9;
    v21 = v18 + ((v8 + ByteOffset + ByteCount - v16 + 4095) >> 12);
    *(_DWORD *)(v5 + 48) = v21;
    MapRegisterFile = ViAllocateMapRegisterFile(v9, v21);
    v32 = MapRegisterFile;
    v23 = MapRegisterFile;
    if ( !MapRegisterFile )
      goto LABEL_16;
    *(_BYTE *)(MapRegisterFile + 25) = 1;
    *(_QWORD *)(v5 + 96) = MapRegisterFile;
    *(_QWORD *)(v5 + 16) = v5 + 104;
    v31 = v42;
    *(_QWORD *)(v5 + 24) = v2;
    *(_DWORD *)(v5 + 32) = v8;
    if ( !(unsigned int)ViMapDoubleBuffer(MapRegisterFile, v3, v31) )
    {
      ViFreeMapRegisterFile(v9);
LABEL_16:
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v5);
      v5 = 0LL;
      goto LABEL_20;
    }
    v24 = *(_OWORD *)&v3->Next;
    v41 = v5;
    v40 = ViScatterGatherCallback;
    v25 = *(_OWORD **)(v5 + 16);
    *v25 = v24;
    v25[1] = *(_OWORD *)&v3->Process;
    v25[2] = *(_OWORD *)&v3->StartVa;
    ViSwap(&v32, (PMDL *)MemoryDescriptorLista, (__int64 *)va1);
    v3 = MemoryDescriptorList;
    v6 = v23;
  }
  v2 = v37;
LABEL_20:
  v26 = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2, v3, v2);
  v27 = v26;
  if ( v9 && v26 < 0 )
  {
    DECREMENT_SCATTER_GATHER_LISTS(v9);
    if ( v6 )
      ViFreeMapRegisterFile(v9);
    if ( v5 )
    {
      v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 104));
      v29 = *(_QWORD *)(v5 + 72);
      if ( *(_QWORD *)(v29 + 8) != v5 + 72 || (v30 = *(_QWORD **)(v5 + 80), *v30 != v5 + 72) )
        __fastfail(3u);
      *v30 = v29;
      *(_QWORD *)(v29 + 8) = v30;
      KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 104), v28);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v5);
    }
  }
  return v27;
}
