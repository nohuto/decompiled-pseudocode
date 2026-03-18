/*
 * XREFs of MiGetClosestNodeWithProcessors @ 0x1403A85A4
 * Callers:
 *     MiComputeIdealDpcGang @ 0x1403A8170 (MiComputeIdealDpcGang.c)
 *     MiCreateZeroThreadContext @ 0x1407FF2B0 (MiCreateZeroThreadContext.c)
 *     MiCombineAllPhysicalMemory @ 0x1409F24E8 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KeGetNodePrimarySubNode @ 0x1403A86B4 (KeGetNodePrimarySubNode.c)
 *     KiQuerySubNodeActiveAffinity @ 0x1403A8720 (KiQuerySubNodeActiveAffinity.c)
 */

__int64 __fastcall MiGetClosestNodeWithProcessors(int a1)
{
  unsigned int *v1; // rbx
  unsigned int *v2; // rsi
  unsigned int v3; // edi
  __int64 NodePrimarySubNode; // rax
  __int16 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (unsigned int *)(qword_140E2DAD0 + 4LL * (unsigned int)(unsigned __int16)KeNumberNodes * a1);
  v2 = &v1[(unsigned __int16)KeNumberNodes];
  while ( v1 < v2 )
  {
    v3 = *v1;
    v6 = 0;
    if ( (unsigned __int16)v3 < (unsigned __int16)KeNumberNodes )
    {
      NodePrimarySubNode = KeGetNodePrimarySubNode(KeNodeBlock[(unsigned __int16)v3]);
      if ( NodePrimarySubNode )
      {
        KiQuerySubNodeActiveAffinity(NodePrimarySubNode, 0LL, &v6);
        if ( v6 )
          return v3;
      }
    }
    ++v1;
  }
  return 0xFFFFFFFFLL;
}
