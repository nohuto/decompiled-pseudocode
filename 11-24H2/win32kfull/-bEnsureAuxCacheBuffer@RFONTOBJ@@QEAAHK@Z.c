/*
 * XREFs of ?bEnsureAuxCacheBuffer@RFONTOBJ@@QEAAHK@Z @ 0x140126378
 * Callers:
 *     ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z @ 0x140126114 (-bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x140265E6C (-bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     PALLOCMEM @ 0x1400FEC9C (PALLOCMEM.c)
 */

__int64 __fastcall RFONTOBJ::bEnsureAuxCacheBuffer(RFONTOBJ *this, unsigned int a2)
{
  __int64 v3; // rsi
  void *v5; // rcx
  __int64 v6; // rax

  v3 = a2;
  if ( *(_QWORD *)(*(_QWORD *)this + 624LL) >= (unsigned __int64)a2 )
    return 1LL;
  v5 = *(void **)(*(_QWORD *)this + 616LL);
  if ( v5 )
    Win32FreePool(v5);
  *(_QWORD *)(*(_QWORD *)this + 616LL) = PALLOCMEM(v3, 1667326791LL);
  v6 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 616LL) )
  {
    *(_QWORD *)(v6 + 624) = v3;
    return 1LL;
  }
  *(_QWORD *)(v6 + 624) = 0LL;
  return 0LL;
}
