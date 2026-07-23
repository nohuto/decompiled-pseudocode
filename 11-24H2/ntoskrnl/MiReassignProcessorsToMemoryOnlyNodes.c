/*
 * XREFs of MiReassignProcessorsToMemoryOnlyNodes @ 0x140C5AD1C
 * Callers:
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140C5A630 (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     MiFindProcessorsForMemoryOnlyNode @ 0x140C5A9A0 (MiFindProcessorsForMemoryOnlyNode.c)
 */

void MiReassignProcessorsToMemoryOnlyNodes()
{
  unsigned int i; // ebx
  int v1; // eax
  _WORD *v2; // rdx
  __int64 j; // rcx

  byte_140E2DC08 = 1;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v1 = 0;
    v2 = (_WORD *)(*(_QWORD *)(384LL * i + qword_140E2DC38 + 376) + 18LL);
    for ( j = 0LL; j < 3; ++j )
    {
      if ( *v2 )
        break;
      ++v1;
      ++v2;
    }
    if ( v1 == 3 && !(unsigned int)MiFindProcessorsForMemoryOnlyNode(i, 0) )
    {
      if ( (unsigned int)MiFindProcessorsForMemoryOnlyNode(i, 1u) )
      {
        if ( (unsigned __int8)byte_140E2DC08 < 2u )
          byte_140E2DC08 = 2;
      }
      else
      {
        MiFindProcessorsForMemoryOnlyNode(i, 2u);
        byte_140E2DC08 = 3;
      }
    }
  }
}
