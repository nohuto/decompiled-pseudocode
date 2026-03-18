/*
 * XREFs of CreateBitmapStrip @ 0x140113600
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x140112218 (xxxSetWindowNCMetrics.c)
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1400370A0 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     GreTextInitialized @ 0x140113698 (GreTextInitialized.c)
 *     CleanupOEMBitmaps @ 0x140114F30 (CleanupOEMBitmaps.c)
 */

__int64 CreateBitmapStrip()
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // ebp
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rbx
  int i; // edi

  if ( !(unsigned int)GreTextInitialized() )
    return 1LL;
  CleanupOEMBitmaps();
  v3 = 0;
  v5 = W32GetUserSessionState(v2, v1) + 43200;
  v6 = v5;
  for ( i = 29; i < 39; i += 2 )
  {
    if ( *(_QWORD *)v6 )
      HMAssignmentUnlock(v5 + 16LL * v3);
    *(_DWORD *)(v6 + 8) = i;
    ++v3;
    v6 += 16LL;
  }
  return CreateDPIBitmapStrip(0LL, v4);
}
