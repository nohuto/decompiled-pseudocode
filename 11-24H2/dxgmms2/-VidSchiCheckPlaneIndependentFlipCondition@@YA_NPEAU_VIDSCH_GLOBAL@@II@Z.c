/*
 * XREFs of ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x14001ED54
 * Callers:
 *     VidSchiUpdatePresentParameters @ 0x14001E89C (VidSchiUpdatePresentParameters.c)
 *     VidSchConfirmToken @ 0x140021CA0 (VidSchConfirmToken.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1400254A0 (VidSchiSubmitPresentHistoryToken.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiCheckPlaneIndependentFlipCondition(struct _VIDSCH_GLOBAL *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // eax

  if ( a2 == -1 )
    return 0;
  v3 = 304LL * a3;
  v4 = *((_QWORD *)a1 + a2 + 429);
  v5 = *(int *)(v4 + v3 + 188);
  if ( (int)v5 <= -1 )
    return 1;
  v6 = *((_QWORD *)a1 + 445) + 160 * v5;
  if ( !v6 )
    return 1;
  v7 = *(_DWORD *)(v6 + 112);
  if ( v7 != 1 )
    return v7 == 2;
  return *(_BYTE *)(v6 + 98) && !*(_DWORD *)(v4 + v3 + 192) && *(_BYTE *)(v6 + 96) && !*(_DWORD *)(v4 + v3 + 196);
}
