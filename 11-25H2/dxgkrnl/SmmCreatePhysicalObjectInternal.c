/*
 * XREFs of SmmCreatePhysicalObjectInternal @ 0x140011870
 * Callers:
 *     ?SysMmCreateContiguousMemoryPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAX@Z @ 0x14001039C (-SysMmCreateContiguousMemoryPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY.c)
 *     SmmCreatePhysicalObjectForMdl @ 0x1400112E8 (SmmCreatePhysicalObjectForMdl.c)
 *     SmmCreatePhysicalObject @ 0x1400113D0 (SmmCreatePhysicalObject.c)
 * Callees:
 *     SmmAllocatePhysicalObject @ 0x140011A14 (SmmAllocatePhysicalObject.c)
 *     McTemplateK0xxqqtpqp_EtwWriteTransfer @ 0x14005FEA4 (McTemplateK0xxqqtpqp_EtwWriteTransfer.c)
 */

__int64 __fastcall SmmCreatePhysicalObjectInternal(
        int a1,
        __int64 a2,
        __int64 *a3,
        char a4,
        char a5,
        __int64 a6,
        char a7)
{
  __int64 result; // rax
  int v12; // r8d
  __int64 v13; // rbx
  int v14; // ebp
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rax
  _QWORD *v18; // rax
  volatile signed __int64 *v19; // rcx

  result = SmmAllocatePhysicalObject();
  v12 = 0;
  v13 = result;
  if ( result )
  {
    *(_DWORD *)(result + 40) = 1;
    v14 = a5 & 1;
    if ( ((a1 - 2) & 0xFFFFFFFC) != 0 || (v15 = 1, a1 == 4) )
      v15 = 0;
    *(_QWORD *)v13 = a2;
    *(_QWORD *)(v13 + 32) = 0LL;
    v16 = v15 | (2 * (a1 & 0xF | ((v14 | a5 & 2 | (4 * (a4 & 3))) << 8))) | (32 * (a7 & 0xF));
    v17 = *a3;
    *(_QWORD *)(v13 + 16) = a6;
    *(_DWORD *)(v13 + 44) = v16;
    *(_QWORD *)(v13 + 8) = v17;
    *(_QWORD *)(v13 + 80) = 0LL;
    *(_DWORD *)(v13 + 96) = 0;
    *(_QWORD *)(v13 + 88) = 0LL;
    if ( (v16 & 1) == 0 )
      *(_QWORD *)(v13 + 56) = 0LL;
    *(_DWORD *)(v13 + 48) = 0;
    v18 = *(_QWORD **)(v13 + 24);
    if ( v18 )
    {
      v18[1] = v18;
      *v18 = v18;
      RtlCaptureStackBackTrace(4u, 0x10u, (PVOID *)(*(_QWORD *)(v13 + 24) + 16LL), 0LL);
    }
    _InterlockedAdd64(&qword_14015E608, *(_QWORD *)v13);
    v19 = (volatile signed __int64 *)&unk_14015E618;
    if ( (*(_DWORD *)(v13 + 44) & 1) == 0 )
      v19 = (volatile signed __int64 *)&unk_14015E610;
    _InterlockedAdd64(v19, *(_QWORD *)v13);
    if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
      McTemplateK0xxqqtpqp_EtwWriteTransfer(
        (_DWORD)v19,
        (unsigned int)&CreatePhysicalObject,
        v12,
        a2,
        *(_QWORD *)(v13 + 8),
        a1,
        a4,
        v14,
        a6,
        a7,
        v13);
    return v13;
  }
  return result;
}
