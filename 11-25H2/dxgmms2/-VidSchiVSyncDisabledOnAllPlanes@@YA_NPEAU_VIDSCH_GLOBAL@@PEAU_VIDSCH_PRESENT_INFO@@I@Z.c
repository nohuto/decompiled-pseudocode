/*
 * XREFs of ?VidSchiVSyncDisabledOnAllPlanes@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@I@Z @ 0x14002D93C
 * Callers:
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14002CBC4 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 *     VidSchiControlVSyncThread @ 0x140039A40 (VidSchiControlVSyncThread.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiVSyncDisabledOnAllPlanes(struct _VIDSCH_GLOBAL *a1, struct _VIDSCH_PRESENT_INFO *a2, int a3)
{
  unsigned int v3; // r10d
  unsigned int i; // r9d
  __int64 v5; // rcx
  unsigned __int64 v6; // rax

  v3 = *((_DWORD *)a1 + 38);
  for ( i = 0; i < v3; ++i )
  {
    if ( a3 == -1 || i != a3 )
    {
      v5 = 304LL * i;
      v6 = *(_QWORD *)((char *)a2 + v5 + 392);
      if ( v6 )
      {
        if ( *(_QWORD *)((char *)a2 + v5 + 424) <= v6 )
          return 0;
      }
    }
  }
  return 1;
}
