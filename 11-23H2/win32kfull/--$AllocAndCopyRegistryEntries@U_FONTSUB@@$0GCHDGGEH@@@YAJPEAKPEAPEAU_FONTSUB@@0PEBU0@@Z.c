/*
 * XREFs of ??$AllocAndCopyRegistryEntries@U_FONTSUB@@$0GCHDGGEH@@@YAJPEAKPEAPEAU_FONTSUB@@0PEBU0@@Z @ 0x1C008063C
 * Callers:
 *     QueryRegistryFontSubstituteListRoutine @ 0x1C03B4780 (QueryRegistryFontSubstituteListRoutine.c)
 * Callees:
 *     PREALLOCMEM2 @ 0x1C009999C (PREALLOCMEM2.c)
 */

__int64 __fastcall AllocAndCopyRegistryEntries<_FONTSUB,1651729991>(
        unsigned int *a1,
        void **a2,
        _DWORD *a3,
        _OWORD *a4)
{
  int v4; // eax
  _OWORD *v9; // rdx
  __int128 v10; // xmm0
  _OWORD *v11; // rbx
  int v13; // esi
  unsigned int v14; // r8d
  __int64 v15; // rax

  v4 = *a1;
  if ( *a1 < *a3 )
    goto LABEL_2;
  v13 = v4 + 32;
  v14 = 196 * (v4 + 32);
  if ( *a2 )
  {
    v15 = PREALLOCMEM2(*a2);
  }
  else
  {
    if ( !v14 )
      return 3221225495LL;
    v15 = Win32AllocPoolZInit(v14, 1651729991LL);
  }
  if ( v15 )
  {
    *a2 = (void *)v15;
    *a3 = v13;
LABEL_2:
    v9 = (char *)*a2 + 196 * *a1;
    *v9 = *a4;
    v9[1] = a4[1];
    v9[2] = a4[2];
    v9[3] = a4[3];
    v9[4] = a4[4];
    v9[5] = a4[5];
    v9[6] = a4[6];
    v9 += 8;
    v10 = a4[7];
    v11 = a4 + 8;
    *(v9 - 1) = v10;
    *v9 = *v11;
    v9[1] = v11[1];
    v9[2] = v11[2];
    v9[3] = v11[3];
    *((_DWORD *)v9 + 16) = *((_DWORD *)v11 + 16);
    ++*a1;
    return 0LL;
  }
  return 3221225495LL;
}
