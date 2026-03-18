/*
 * XREFs of ?SuspendMemorySegmentAccess@VIDMM_PHYSICAL_ADAPTER@@QEAAJXZ @ 0x140091570
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x14009EFF4 (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER::SuspendMemorySegmentAccess(VIDMM_PHYSICAL_ADAPTER *this)
{
  __int64 i; // rbx
  VIDMM_SEGMENT *v3; // rcx
  int v4; // eax
  __int64 result; // rax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
  {
    v3 = *(VIDMM_SEGMENT **)(*((_QWORD *)this + 206) + 8 * i);
    v4 = *((_DWORD *)v3 + 26);
    if ( (v4 & 0x1001) == 0 && (v4 & 4) != 0 )
    {
      result = VIDMM_SEGMENT::SuspendCpuAccess(v3);
      if ( (int)result < 0 )
        return result;
    }
  }
  return 0LL;
}
