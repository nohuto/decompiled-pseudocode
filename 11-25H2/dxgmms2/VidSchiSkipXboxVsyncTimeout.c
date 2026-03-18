/*
 * XREFs of VidSchiSkipXboxVsyncTimeout @ 0x14004B568
 * Callers:
 *     ?VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEAIPEA_KPEAT_ULARGE_INTEGER@@@Z @ 0x14001D230 (-VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEAIPEA_KPEAT_ULARGE_INTEGER@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiSkipXboxVsyncTimeout(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rbx

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 444LL) & 0x200) != 0 )
  {
    v5 = __rdtsc();
    v6 = __readmsr(0x400000F6u);
    v7 = 10 * (v5 - v6) / *((unsigned int *)KeGetCurrentPrcb() + 17);
    WdLogSingleEntry3(8LL, v6, v5, v7);
    WdLogGlobalForLineNumber = 4728;
    if ( v6 > v5 || v7 <= 10000000 * (unsigned __int64)g_TdrConfig[1] )
      return 1;
    v8 = *(_DWORD *)(a2 + 44) + 1;
    *(_DWORD *)(a2 + 44) = v8;
    if ( v8 < 2 )
    {
      v9 = MEMORY[0xFFFFF78000000320];
      WdLogSingleEntry4(3LL, *(unsigned int *)(a2 + 44), 2LL);
      *(_QWORD *)(a3 + 1104) = v9;
      *(_QWORD *)(a2 + 48) = a3;
      WdLogGlobalForLineNumber = 5468;
      return 1;
    }
  }
  return 0;
}
