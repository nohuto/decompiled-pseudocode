/*
 * XREFs of CreateBitmapStrip @ 0x1C00D4250
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C00D1EA0 (xxxSetWindowNCMetrics.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00D9A30 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     GreTextInitialized @ 0x1C00CD5A0 (GreTextInitialized.c)
 *     CleanupOEMBitmaps @ 0x1C00D42D0 (CleanupOEMBitmaps.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C0116710 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 */

__int64 __fastcall CreateBitmapStrip(__int64 a1)
{
  int v1; // esi
  __int64 v2; // rbx
  int i; // edi

  if ( !(unsigned int)GreTextInitialized(a1) )
    return 1LL;
  CleanupOEMBitmaps();
  v1 = 0;
  v2 = 0LL;
  for ( i = 29; i < 39; i += 2 )
  {
    if ( *(_QWORD *)(v2 + gcachedCaptions[0]) )
      HMAssignmentUnlock(&gcachedCaptions[2 * v1]);
    ++v1;
    *(_DWORD *)(v2 + gcachedCaptions[0] + 8) = i;
    v2 += 16LL;
  }
  return CreateDPIBitmapStrip(0);
}
