/*
 * XREFs of MiGetClosestNodeWithProcessors @ 0x14026FC80
 * Callers:
 *     MiComputeIdealDpcGang @ 0x14026F84C (MiComputeIdealDpcGang.c)
 *     MiCreateZeroThreadContext @ 0x1407FF9F4 (MiCreateZeroThreadContext.c)
 *     MiCombineAllPhysicalMemory @ 0x1409E6848 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KeGetNodePrimarySubNode @ 0x14026FD94 (KeGetNodePrimarySubNode.c)
 *     KiQuerySubNodeActiveAffinity @ 0x14026FE00 (KiQuerySubNodeActiveAffinity.c)
 */

__int64 __fastcall MiGetClosestNodeWithProcessors(int a1)
{
  unsigned int *v1; // rbx
  unsigned int *v2; // rsi
  unsigned int v3; // edi
  __int64 NodePrimarySubNode; // rax
  __int16 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (unsigned int *)(qword_140E2DC10 + 4LL * (unsigned int)(unsigned __int16)KeNumberNodes * a1);
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
