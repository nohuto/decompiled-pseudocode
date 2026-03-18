/*
 * XREFs of ?vInit@BEZIER@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z @ 0x1400EC268
 * Callers:
 *     ?vNextPoint@LINER@pathwide@@AEAAXXZ @ 0x1400EBA1C (-vNextPoint@LINER@pathwide@@AEAAXXZ.c)
 *     ?bPenFlatten@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z @ 0x1400EC074 (-bPenFlatten@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BEZIER::vInit(BEZIER *this, struct _POINTFIX *a2, struct _RECTFX *a3, const __int64 *a4)
{
  BOOL v7; // eax

  v7 = a4 == gpeqErrorLow && BEZIER32::bInit(this, a2, 0LL);
  *((_DWORD *)this + 42) = v7;
  if ( !v7 )
    BEZIER64::vInit(this, a2, 0LL, a4);
}
