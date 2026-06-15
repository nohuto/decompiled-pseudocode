/*
 * XREFs of ?CleanupPipeInstanceList@@YAXAEAV?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@@Z @ 0x14001D2A4
 * Callers:
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x14001D20C (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14001D318 (-FreeNode@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@AEAAXPE.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140027B08 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall CleanupPipeInstanceList(__int64 a1)
{
  __int64 *v2; // rdx
  __int64 v3; // rax
  CPipeInstance *v4; // rdi
  unsigned int v5; // edx

  while ( *(_QWORD *)(a1 + 16) )
  {
    v2 = *(__int64 **)a1;
    if ( !*(_QWORD *)a1 )
      ATL::AtlThrowImpl(-2147467259);
    v3 = *v2;
    v4 = (CPipeInstance *)v2[2];
    *(_QWORD *)a1 = *v2;
    if ( v3 )
      *(_QWORD *)(v3 + 8) = 0LL;
    else
      *(_QWORD *)(a1 + 8) = 0LL;
    ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::FreeNode(a1);
    if ( v4 )
      CPipeInstance::`scalar deleting destructor'(v4, v5);
  }
}
