/*
 * XREFs of ?TrimMarkedForEvictionAllocations@VIDMM_PHYSICAL_ADAPTER@@QEAAX_K@Z @ 0x140091000
 * Callers:
 *     ?PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAUVIDMM_ALLOC@@I_K@Z @ 0x1400EC39C (-PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     ?TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z @ 0x140090F78 (-TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER::TrimMarkedForEvictionAllocations(
        VIDMM_PHYSICAL_ADAPTER *this,
        unsigned __int64 a2)
{
  unsigned __int16 i; // bx
  __int64 v4; // rcx
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  for ( i = 0; (unsigned int)i < *((_DWORD *)this + 16); ++i )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 206) + 8LL * i);
    if ( (*(_DWORD *)(v4 + 104) & 0x1001) != 0 && *(_QWORD *)(v4 + 216) != v4 + 216 )
    {
      VIDMM_SEGMENT::TrimMarkedForEvictionAllocations((VIDMM_PHYSICAL_ADAPTER **)v4, &v5);
      if ( !v5 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace();
          WdLogGlobalForLineNumber = 1321;
        }
        return;
      }
    }
  }
}
