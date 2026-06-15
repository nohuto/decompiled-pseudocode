/*
 * XREFs of ??2CAPONode@@SAPEAX_K@Z @ 0x14000B4E8
 * Callers:
 *     ?CopyAPOList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z @ 0x14000B30C (-CopyAPOList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z.c)
 *     _lambda_4f5bca04da2ba347195d47ea7d1a4d66_::operator() @ 0x14000D97C (_lambda_4f5bca04da2ba347195d47ea7d1a4d66_--operator().c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14000EDDC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 *     ??_U@YAPEAX_K@Z @ 0x1400593C4 (--_U@YAPEAX_K@Z.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x140074588 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 */

void *__fastcall CAPONode::operator new(__int64 a1)
{
  int v1; // eax
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  void *v5; // rdi
  __int64 v7; // [rsp+70h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+78h] [rbp+10h] BYREF

  v7 = a1;
  Context = 0LL;
  v1 = -InitOnceExecuteOnce(&gRTHeapInitOnce, AERTMemoryInitOnce, 0LL, &Context);
  v5 = (void *)((unsigned __int64)Context & -(__int64)(v1 != 0));
  if ( g_bSkipRTHeap )
    return operator new[](0x1C0uLL);
  v7 = 0LL;
  if ( v5
    && (unsigned int)RtlAllocateMemoryBlockLookaside((unsigned __int64)Context & -(__int64)(v1 != 0), 448LL, &v7) == -1073741670 )
  {
    AERTAddMemoryToHeap(v5, 0x100000uLL);
    RtlAllocateMemoryBlockLookaside(v5, 448LL, &v7);
  }
  if ( (byte_1400C4541 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v3, v2, v4, 6, (char)v5, 192, 0, 0);
  return (void *)v7;
}
