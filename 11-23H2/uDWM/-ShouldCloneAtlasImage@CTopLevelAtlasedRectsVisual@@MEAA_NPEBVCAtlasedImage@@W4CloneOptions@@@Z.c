/*
 * XREFs of ?ShouldCloneAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@W4CloneOptions@@@Z @ 0x180006F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CTopLevelAtlasedRectsVisual::ShouldCloneAtlasImage(__int64 a1, __int64 a2, char a3)
{
  char v3; // cl
  int v5; // edx

  v3 = 0;
  if ( (a3 & 2) == 0 )
    return 1;
  v5 = *(_DWORD *)(a2 + 120);
  if ( (unsigned int)(v5 - 9) <= 8 || (a3 & 1) == 0 && (unsigned int)(v5 - 18) <= 3 )
    return 1;
  return v3;
}
