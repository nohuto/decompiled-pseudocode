/*
 * XREFs of ?bGarbageCollect@XEPALOBJ2@@QEAAHXZ @ 0x1C00D26AC
 * Callers:
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D3170 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0048150 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C00D2508 (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 */

__int64 __fastcall XEPALOBJ2::bGarbageCollect(XEPALOBJ2 *this)
{
  unsigned int v2; // ebx
  HSEMAPHORE v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(HSEMAPHORE *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 40LL);
  EngAcquireSemaphore(v4);
  v2 = 0;
  if ( *(_QWORD *)this )
    LOBYTE(v2) = (unsigned int)XEPALOBJ::bDeletePalette(this, 1) != 0;
  SEMOBJ::vUnlock((PERESOURCE *)&v4);
  return v2;
}
