/*
 * XREFs of EngFntCacheFault @ 0x140302EF0
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B2D48 (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     UmfdLoadFontFileView @ 0x1400B76D4 (UmfdLoadFontFileView.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1401A1708 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 * Callees:
 *     bSetFntCacheReg @ 0x14026C7C0 (bSetFntCacheReg.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall EngFntCacheFault(ULONG ulFastCheckSum, ULONG iFaultMode)
{
  __int64 v3; // r8
  __int64 v4; // rdx

  v3 = *(_QWORD *)(W32GetSessionState(ulFastCheckSum, *(_QWORD *)&iFaultMode) + 96);
  if ( (*(_DWORD *)(v3 + 19592) & 3) != 0 )
  {
    v4 = *(_QWORD *)(v3 + 19600);
    if ( v4 )
    {
      if ( iFaultMode - 1 <= 1 && (*(_DWORD *)(v4 + 16) & 1) == 0 )
      {
        *(_DWORD *)(v4 + 16) |= 1u;
        bSetFntCacheReg(1u, *(unsigned int *)(*(_QWORD *)(v3 + 19600) + 16LL));
      }
    }
  }
}
