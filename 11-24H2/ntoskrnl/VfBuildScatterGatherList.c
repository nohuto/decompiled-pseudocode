/*
 * XREFs of VfBuildScatterGatherList @ 0x140B85AB0
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

__int64 VfBuildScatterGatherList(int a1, __int64 a2, ...)
{
  __int64 v2; // r15
  PMDL v3; // r14
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 AdapterInformationInternal; // rax
  __int64 v8; // r13
  __int64 v9; // rsi
  unsigned int v11; // eax
  unsigned int v12; // ebx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 MapRegisterFile; // rax
  __int64 v16; // rbx
  __int128 v17; // xmm0
  _OWORD *v18; // rax
  int v19; // eax
  unsigned int v20; // ebx
  KIRQL v21; // al
  __int64 v22; // r9
  _QWORD *v23; // r8
  char v24; // [rsp+20h] [rbp-50h]
  __int64 v25; // [rsp+60h] [rbp-10h] BYREF
  __int64 RealDmaAdapter; // [rsp+68h] [rbp-8h]
  PMDL MemoryDescriptorList; // [rsp+C0h] [rbp+50h] BYREF
  va_list MemoryDescriptorLista; // [rsp+C0h] [rbp+50h]
  __int64 v30; // [rsp+C8h] [rbp+58h] BYREF
  va_list va1; // [rsp+C8h] [rbp+58h]
  __int64 v32; // [rsp+D0h] [rbp+60h]
  __int64 (__fastcall *v33)(); // [rsp+D8h] [rbp+68h]
  __int64 v34; // [rsp+E0h] [rbp+70h]
  __int64 v35; // [rsp+E8h] [rbp+78h]
  va_list va2; // [rsp+F0h] [rbp+80h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(MemoryDescriptorLista, a2);
  MemoryDescriptorList = va_arg(va1, PMDL);
  va_copy(va2, va1);
  v30 = va_arg(va2, _QWORD);
  v32 = va_arg(va2, _QWORD);
  v33 = va_arg(va2, __int64 (__fastcall *)());
  v34 = va_arg(va2, _QWORD);
  v35 = va_arg(va2, _QWORD);
  v2 = v30;
  v3 = MemoryDescriptorList;
  v5 = 0LL;
  v6 = 0LL;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v8 = (unsigned int)v32;
  v9 = AdapterInformationInternal;
  if ( !AdapterInformationInternal )
    goto LABEL_14;
  VF_ASSERT_IRQL(2u);
  if ( !v3 )
    return 3221225485LL;
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 196));
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 200));
  v3 = MemoryDescriptorList;
  VERIFY_BUFFER_LOCKED((ULONG_PTR)MemoryDescriptorList);
  if ( *(_DWORD *)(v9 + 224) == 3 )
  {
    v11 = ViCheckMdlLength(v3, 0LL, (unsigned int)v8);
    if ( v11 )
    {
      v12 = v11;
      ViHalPreprocessOptions(
        byte_140E0E95C,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v11,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0x24uLL, v12, 0LL, 0LL, byte_140E0E95C);
    }
  }
  if ( ViDoubleBufferDma )
  {
    v13 = ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
    v5 = (__int64)v13;
    if ( v13 )
    {
      *v13 = v34;
      v13[1] = v33;
      v13[8] = 0LL;
      v2 = v30;
      v13[7] = v9;
      *((_DWORD *)v13 + 12) = (v8 + 4095 + (unsigned __int64)(v2 & 0xFFF)) >> 12;
      v14 = v13 + 9;
      v14[1] = v14;
      *v14 = v14;
      MapRegisterFile = ViAllocateMapRegisterFile(v9, *(unsigned int *)(v5 + 48));
      v25 = MapRegisterFile;
      v16 = MapRegisterFile;
      if ( !MapRegisterFile )
      {
LABEL_10:
        ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v5);
        v5 = 0LL;
        goto LABEL_14;
      }
      *(_BYTE *)(MapRegisterFile + 25) = 1;
      *(_QWORD *)(v5 + 96) = MapRegisterFile;
      *(_QWORD *)(v5 + 16) = v5 + 104;
      v24 = v35;
      *(_QWORD *)(v5 + 24) = v2;
      *(_DWORD *)(v5 + 32) = v8;
      if ( !(unsigned int)ViMapDoubleBuffer(MapRegisterFile, v3, v24) )
      {
        ViFreeMapRegisterFile(v9);
        goto LABEL_10;
      }
      v17 = *(_OWORD *)&v3->Next;
      v34 = v5;
      v33 = ViScatterGatherCallback;
      v18 = *(_OWORD **)(v5 + 16);
      *v18 = v17;
      v18[1] = *(_OWORD *)&v3->Process;
      v18[2] = *(_OWORD *)&v3->StartVa;
      ViSwap(&v25, (PMDL *)MemoryDescriptorLista, (__int64 *)va1);
      v3 = MemoryDescriptorList;
      v6 = v16;
    }
  }
  v2 = v30;
LABEL_14:
  v19 = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2, v3, v2);
  v20 = v19;
  if ( v9 && v19 < 0 )
  {
    DECREMENT_SCATTER_GATHER_LISTS(v9);
    if ( v6 )
      ViFreeMapRegisterFile(v9);
    if ( v5 )
    {
      v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 104));
      v22 = *(_QWORD *)(v5 + 72);
      if ( *(_QWORD *)(v22 + 8) != v5 + 72 || (v23 = *(_QWORD **)(v5 + 80), *v23 != v5 + 72) )
        __fastfail(3u);
      *v23 = v22;
      *(_QWORD *)(v22 + 8) = v23;
      KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 104), v21);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v5);
    }
  }
  return v20;
}
