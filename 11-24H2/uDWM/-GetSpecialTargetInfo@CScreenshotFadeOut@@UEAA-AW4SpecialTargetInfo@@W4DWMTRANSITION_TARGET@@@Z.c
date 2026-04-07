/*
 * XREFs of ?GetSpecialTargetInfo@CScreenshotFadeOut@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800D26F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CScreenshotFadeOut::GetSpecialTargetInfo(__int64 a1, int a2)
{
  unsigned int v2; // ecx
  int v3; // r8d
  _DWORD *v4; // r9

  v2 = 0;
  v3 = 0;
  v4 = `CScreenshotFadeOut::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable;
  while ( !v3 )
  {
    if ( ((*v4 ^ a2) & 0xFFF) == 0 )
      return (unsigned int)`CScreenshotFadeOut::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable[1];
    v3 = 1;
    v4 += 2;
  }
  return v2;
}
