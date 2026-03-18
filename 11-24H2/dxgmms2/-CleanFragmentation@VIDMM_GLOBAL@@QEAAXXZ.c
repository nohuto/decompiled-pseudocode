/*
 * XREFs of ?CleanFragmentation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400EB61C
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400EE3E0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ?CurateVPR@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400EB6B4 (-CurateVPR@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::CleanFragmentation(VIDMM_GLOBAL *this)
{
  unsigned __int16 i; // bx
  unsigned __int16 v3; // di
  __int64 v4; // rbp
  VIDMM_SEGMENT *v5; // rcx

  for ( i = 0; (unsigned int)i < *((_DWORD *)this + 1736); ++i )
  {
    v3 = 0;
    v4 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * i);
    if ( *(_DWORD *)(v4 + 64) )
    {
      do
      {
        v5 = *(VIDMM_SEGMENT **)(*(_QWORD *)(v4 + 1648) + 8LL * v3);
        if ( (*((_BYTE *)v5 + 106) & 1) != 0 )
          VIDMM_SEGMENT::CurateVPR(v5);
        ++v3;
      }
      while ( (unsigned int)v3 < *(_DWORD *)(v4 + 64) );
    }
  }
}
