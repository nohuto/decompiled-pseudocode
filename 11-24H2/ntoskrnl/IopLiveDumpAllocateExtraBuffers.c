/*
 * XREFs of IopLiveDumpAllocateExtraBuffers @ 0x14059595C
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x140595270 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14029293C (IopLiveDumpDiscardVirtualAddressRange.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x1404956A4 (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140495FD4 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1404F8284 (IopLiveDumpIsTracingEnabled.c)
 *     HvlPrepareLivedumpDescriptor @ 0x140587784 (HvlPrepareLivedumpDescriptor.c)
 *     IopLiveDumpTrace @ 0x14059FFB0 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MmAllocateIndependentPages @ 0x140A85350 (MmAllocateIndependentPages.c)
 */

__int64 __fastcall IopLiveDumpAllocateExtraBuffers(__int64 a1)
{
  __int64 MillisecondCounter; // rax
  unsigned __int64 v3; // r13
  _QWORD *v4; // r12
  unsigned int v5; // r15d
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned int v9; // esi
  __int64 v10; // rdi
  int v11; // ebx
  bool v12; // al
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rtt
  __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  __int64 IndependentPages; // rax
  void *v21; // rcx
  bool v23; // [rsp+58h] [rbp-59h] BYREF
  int v24; // [rsp+60h] [rbp-51h] BYREF
  __int64 v25; // [rsp+68h] [rbp-49h]
  _QWORD v26[3]; // [rsp+70h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+88h] [rbp-29h] BYREF
  _QWORD *v28; // [rsp+A8h] [rbp-9h]
  __int64 v29; // [rsp+B0h] [rbp-1h]
  bool *v30; // [rsp+B8h] [rbp+7h]
  __int64 v31; // [rsp+C0h] [rbp+Fh]
  int *v32; // [rsp+C8h] [rbp+17h]
  __int64 v33; // [rsp+D0h] [rbp+1Fh]

  MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v3 = *(_QWORD *)(a1 + 696);
  v4 = (_QWORD *)(a1 + 704);
  v5 = 0;
  v25 = MillisecondCounter;
  v6 = MillisecondCounter;
  if ( v3 || *v4 )
  {
    v7 = (unsigned int)BufferChunkSizeInPages;
    v8 = *v4 / (unsigned __int64)(unsigned int)BufferChunkSizeInPages;
    *(_QWORD *)(a1 + 240) = 0LL;
    v9 = v8;
    *(_QWORD *)(a1 + 272) = 0LL;
    *(_QWORD *)(a1 + 248) = 0LL;
    *(_QWORD *)(a1 + 280) = 0LL;
    v10 = IopLiveDumpGetMillisecondCounter(0);
    v11 = HvlPrepareLivedumpDescriptor(
            (PVOID *)(*(_QWORD *)(a1 + 752) + 8LL * *(_QWORD *)(a1 + 216)),
            v3 / v7,
            v9,
            a1 + 256,
            a1 + 232,
            a1 + 224,
            (_QWORD *)(a1 + 264),
            (_QWORD *)(a1 + 256),
            a1 + 208);
    *(_QWORD *)(a1 + 296) = IopLiveDumpGetMillisecondCounter(0) - v10;
    if ( v11 >= 0 )
    {
      v13 = BufferChunkSizeInBytes;
      v14 = *(_QWORD *)(a1 + 224) << 12;
      *(_QWORD *)(a1 + 224) = v14;
      v15 = *(_QWORD *)(a1 + 256) << 12;
      *(_QWORD *)(a1 + 256) = v15;
      *(_QWORD *)(a1 + 232) <<= 12;
      *(_QWORD *)(a1 + 264) <<= 12;
      v17 = v14;
      v16 = v14 / v13;
      if ( v17 % v13 )
        *(_QWORD *)(a1 + 248) = v16 + *(_QWORD *)(a1 + 216);
      if ( v15 % v13 )
        *(_QWORD *)(a1 + 280) = *(_QWORD *)(a1 + 216) + v15 / v13;
    }
    else
    {
      *(_DWORD *)(a1 + 80) |= 0x4000u;
      *(_QWORD *)(a1 + 696) = 0LL;
      *v4 = 0LL;
      v24 = v11;
      if ( IopLiveDumpIsTracingEnabled() )
      {
        v26[1] = 4LL;
        v26[0] = &v24;
        IopLiveDumpTrace(LIVEDUMP_EVENT_SIZING_WORKFLOW_HVL_PREPARE_LIVEDUMP_DESCRIPTOR_FAILURE, 1LL, v26);
      }
      if ( (unsigned int)dword_140E06E80 > 5 && tlgKeywordOn((__int64)&dword_140E06E80, 0x400000000000LL) )
      {
        v26[0] = 0x1000000LL;
        v28 = v26;
        v12 = (*(_DWORD *)(a1 + 80) & 0x4000) != 0;
        v29 = 8LL;
        v23 = v12;
        v31 = 1LL;
        v30 = &v23;
        v32 = &v24;
        v24 = v11;
        v33 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06E80,
          (unsigned __int8 *)byte_140045EC0,
          (const GUID *)(a1 + 968),
          (const GUID *)(a1 + 952),
          5u,
          &v27);
      }
    }
    v6 = v25;
  }
  v18 = *(_QWORD *)(a1 + 136);
  if ( v18 )
  {
    v19 = v18 << 12;
    IndependentPages = MmAllocateIndependentPages(v19, 0xFFFFFFFFLL);
    *(_QWORD *)(a1 + 144) = IndependentPages;
    if ( IndependentPages )
    {
      *(_DWORD *)(a1 + 152) = v19;
      if ( IopLiveDumpIsUnderMemoryPressure(a1) )
      {
        v5 = -1073741248;
      }
      else
      {
        IopLiveDumpDiscardVirtualAddressRange(a1, *(char **)(a1 + 144), v19);
        v21 = *(void **)(a1 + 144);
        *(_QWORD *)(a1 + 176) = v21;
        *(_DWORD *)(a1 + 184) = 0;
        memset_0(v21, 0, v19);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 176) = 0LL;
      *(_DWORD *)(a1 + 184) = 0;
      *(_DWORD *)(a1 + 152) = 0;
    }
  }
  *(_QWORD *)(a1 + 776) = IopLiveDumpGetMillisecondCounter(0) - v6;
  return v5;
}
