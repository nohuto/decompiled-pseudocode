/*
 * XREFs of ?EnableIommuIsolation@VIDMM_PHYSICAL_ADAPTER@@QEAAJXZ @ 0x14009B7F0
 * Callers:
 *     ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x140093094 (-EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?MapToIommu@VIDMM_SEGMENT@@QEAAJXZ @ 0x14010F404 (-MapToIommu@VIDMM_SEGMENT@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER::EnableIommuIsolation(VIDMM_PHYSICAL_ADAPTER *this)
{
  unsigned __int16 i; // bx
  VIDMM_SEGMENT *v3; // rbp
  int v4; // eax
  unsigned int v5; // edi
  __int64 result; // rax

  for ( i = 0; (unsigned int)i < *((_DWORD *)this + 16); ++i )
  {
    v3 = *(VIDMM_SEGMENT **)(*((_QWORD *)this + 206) + 8LL * i);
    v4 = VIDMM_SEGMENT::MapToIommu(v3);
    v5 = v4;
    if ( v4 < 0 )
    {
      WdLogSingleEntry2(3LL, v3, v4);
      result = v5;
      WdLogGlobalForLineNumber = 1487;
      return result;
    }
  }
  return 0LL;
}
