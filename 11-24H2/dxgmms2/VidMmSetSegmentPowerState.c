/*
 * XREFs of VidMmSetSegmentPowerState @ 0x140042A00
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x140042A50 (-NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 */

void __fastcall VidMmSetSegmentPowerState(__int64 a1, unsigned int a2, unsigned int a3, int a4, char a5)
{
  __int64 v5; // rcx

  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40232) + 8LL * a2) + 1648LL) + 8LL * a3);
  if ( a4 == *(_DWORD *)(v5 + 408) )
  {
    *(_BYTE *)(v5 + 412) = a5;
    if ( !a5 )
      VIDMM_GLOBAL::NotifyMemorySegmentIdle(*(VIDMM_GLOBAL **)(v5 + 24), (struct VIDMM_SEGMENT *)v5);
  }
}
