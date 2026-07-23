/*
 * XREFs of VfGetScatterGatherList @ 0x140B88BE0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402E2DD0 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     VfReportIssueWithOptions @ 0x1406109F4 (VfReportIssueWithOptions.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140B86C54 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140B86EB4 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140B86F40 (VF_ASSERT_IRQL.c)
 *     ViAllocateMapRegisterFile @ 0x140B89EAC (ViAllocateMapRegisterFile.c)
 *     ViCheckMdlLength @ 0x140B8A42C (ViCheckMdlLength.c)
 *     ViFreeMapRegisterFile @ 0x140B8AB9C (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140B8AE98 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B8B0EC (ViGetRealDmaAdapter.c)
 *     ViHalPreprocessOptions @ 0x140B8B21C (ViHalPreprocessOptions.c)
 *     ViMapDoubleBuffer @ 0x140B8B650 (ViMapDoubleBuffer.c)
 *     ViSwap @ 0x140B8BE64 (ViSwap.c)
 */

__int64 VfGetScatterGatherList(int a1, __int64 a2, ...)
{
  PMDL v2; // r14
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 AdapterInformationInternal; // rax
  unsigned int v7; // r12d
  __int64 v8; // rsi
  PMDL v10; // r14
  unsigned int v11; // eax
  unsigned int v12; // ebx
  _QWORD *v13; // rax
  __int64 v14; // r15
  ULONG ByteOffset; // r9d
  PMDL v16; // rdx
  ULONG v17; // r8d
  ULONG ByteCount; // ecx
  int v19; // r10d
  ULONG v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 MapRegisterFile; // rax
  __int64 v24; // rbx
  __int128 v25; // xmm0
  _OWORD *v26; // rax
  int v27; // eax
  unsigned int v28; // ebx
  KIRQL v29; // al
  __int64 v30; // r9
  _QWORD *v31; // r8
  char v32; // [rsp+20h] [rbp-40h]
  __int64 v33; // [rsp+50h] [rbp-10h] BYREF
  __int64 RealDmaAdapter; // [rsp+58h] [rbp-8h]
  PMDL MemoryDescriptorList; // [rsp+B0h] [rbp+50h] BYREF
  va_list MemoryDescriptorLista; // [rsp+B0h] [rbp+50h]
  __int64 v38; // [rsp+B8h] [rbp+58h] BYREF
  va_list va1; // [rsp+B8h] [rbp+58h]
  __int64 v40; // [rsp+C0h] [rbp+60h]
  __int64 (__fastcall *v41)(); // [rsp+C8h] [rbp+68h]
  __int64 v42; // [rsp+D0h] [rbp+70h]
  __int64 v43; // [rsp+D8h] [rbp+78h]
  va_list va2; // [rsp+E0h] [rbp+80h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(MemoryDescriptorLista, a2);
  MemoryDescriptorList = va_arg(va1, PMDL);
  va_copy(va2, va1);
  v38 = va_arg(va2, _QWORD);
  v40 = va_arg(va2, _QWORD);
  v41 = va_arg(va2, __int64 (__fastcall *)());
  v42 = va_arg(va2, _QWORD);
  v43 = va_arg(va2, _QWORD);
  v2 = MemoryDescriptorList;
  v4 = 0LL;
  v5 = 0LL;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v7 = v40;
  v8 = AdapterInformationInternal;
  if ( !AdapterInformationInternal )
    goto LABEL_19;
  VF_ASSERT_IRQL(2u);
  if ( !v2 )
    return 3221225485LL;
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 196));
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 200));
  v10 = MemoryDescriptorList;
  VERIFY_BUFFER_LOCKED((ULONG_PTR)MemoryDescriptorList);
  if ( *(_DWORD *)(v8 + 224) == 3 )
  {
    v11 = ViCheckMdlLength(v10, 0LL, v7);
    if ( v11 )
    {
      v12 = v11;
      ViHalPreprocessOptions(
        byte_140E0E9FC,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v11,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0x24uLL, v12, 0LL, 0LL, byte_140E0E9FC);
    }
  }
  if ( !ViDoubleBufferDma )
    goto LABEL_19;
  v13 = ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
  v14 = v38;
  v4 = (__int64)v13;
  if ( !v13 )
    goto LABEL_19;
  v13[8] = 0LL;
  ByteOffset = v14 & 0xFFF;
  *v13 = v42;
  v16 = v10;
  v13[1] = v41;
  v13[10] = v13 + 9;
  v13[9] = v13 + 9;
  v17 = LODWORD(v10->StartVa) + v10->ByteCount + v10->ByteOffset - v14;
  ByteCount = v17;
  v19 = 0;
  while ( v17 < v7 )
  {
    v16 = v16->Next;
    if ( !v16 )
      break;
    v20 = ByteOffset + 4095;
    ByteOffset = v16->ByteOffset;
    v21 = ByteCount + v20;
    ByteCount = v16->ByteCount;
    v19 += v21 >> 12;
    v17 += ByteCount;
  }
  if ( v17 + 4096 < ByteOffset + v7 )
  {
    DECREMENT_SCATTER_GATHER_LISTS(v8);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v4);
    return 3221225507LL;
  }
  *(_QWORD *)(v4 + 56) = v8;
  v22 = v19 + ((v7 + ByteOffset + ByteCount - v17 + 4095) >> 12);
  *(_DWORD *)(v4 + 48) = v22;
  MapRegisterFile = ViAllocateMapRegisterFile(v8, v22);
  v33 = MapRegisterFile;
  v24 = MapRegisterFile;
  if ( !MapRegisterFile )
    goto LABEL_16;
  *(_BYTE *)(MapRegisterFile + 25) = 1;
  *(_QWORD *)(v4 + 96) = MapRegisterFile;
  *(_QWORD *)(v4 + 16) = v4 + 104;
  v32 = v43;
  *(_QWORD *)(v4 + 24) = v14;
  *(_DWORD *)(v4 + 32) = v7;
  if ( !(unsigned int)ViMapDoubleBuffer(MapRegisterFile, v10, v32) )
  {
    ViFreeMapRegisterFile(v8);
LABEL_16:
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v4);
    v4 = 0LL;
    goto LABEL_19;
  }
  v25 = *(_OWORD *)&v10->Next;
  v42 = v4;
  v41 = ViScatterGatherCallback;
  v26 = *(_OWORD **)(v4 + 16);
  *v26 = v25;
  v26[1] = *(_OWORD *)&v10->Process;
  v26[2] = *(_OWORD *)&v10->StartVa;
  ViSwap(&v33, (PMDL *)MemoryDescriptorLista, (__int64 *)va1);
  v5 = v24;
LABEL_19:
  v27 = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
  v28 = v27;
  if ( v8 && v27 < 0 )
  {
    DECREMENT_SCATTER_GATHER_LISTS(v8);
    if ( v5 )
      ViFreeMapRegisterFile(v8);
    if ( v4 )
    {
      v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 104));
      v30 = *(_QWORD *)(v4 + 72);
      if ( *(_QWORD *)(v30 + 8) != v4 + 72 || (v31 = *(_QWORD **)(v4 + 80), *v31 != v4 + 72) )
        __fastfail(3u);
      *v31 = v30;
      *(_QWORD *)(v30 + 8) = v31;
      KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 104), v29);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v4);
    }
  }
  return v28;
}
