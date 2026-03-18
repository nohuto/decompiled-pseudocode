/*
 * XREFs of ?ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z @ 0x140101624
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1401014D0 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateIFIMETRICS(struct _IFIMETRICS *a1)
{
  unsigned __int64 dpwszFamilyName; // rax
  __int64 cjThis; // r11
  unsigned __int64 v3; // r9
  char *v4; // r8
  _WORD *v5; // rax
  unsigned __int64 dpwszStyleName; // rax
  _WORD *v7; // rax
  unsigned __int64 dpwszFaceName; // rax
  _WORD *v9; // rax
  unsigned __int64 dpwszUniqueName; // rax
  _WORD *v11; // rax
  ULONG cjIfiExtra; // edx
  ULONG v13; // eax
  unsigned int v14; // r8d
  unsigned __int64 v15; // rax
  unsigned int v17; // r9d
  unsigned __int64 dpFontSim; // rax
  unsigned int v19; // edx
  unsigned int v20; // r8d
  unsigned int v21; // edx
  unsigned int v22; // r8d
  unsigned int v23; // edx
  unsigned int v24; // edx
  unsigned int dpCharSets; // edx
  unsigned __int64 v26; // rdx
  unsigned int v27; // r10d

  dpwszFamilyName = (unsigned int)a1->dpwszFamilyName;
  if ( (unsigned __int64)(int)dpwszFamilyName < 0xC0 )
    return 0;
  if ( (dpwszFamilyName & 1) != 0 )
    return 0;
  cjThis = a1->cjThis;
  v3 = cjThis - 2;
  if ( dpwszFamilyName > cjThis - 2 )
    return 0;
  v4 = (char *)&a1[-1].Align + cjThis + 6;
  v5 = (_WORD *)((char *)a1 + (int)dpwszFamilyName);
  while ( *v5 )
  {
    if ( ++v5 > (_WORD *)v4 )
      return 0;
  }
  dpwszStyleName = (unsigned int)a1->dpwszStyleName;
  if ( (unsigned __int64)(int)dpwszStyleName < 0xC0 || (dpwszStyleName & 1) != 0 || dpwszStyleName > v3 )
    return 0;
  v7 = (_WORD *)((char *)a1 + (int)dpwszStyleName);
  while ( *v7 )
  {
    if ( ++v7 > (_WORD *)v4 )
      return 0;
  }
  dpwszFaceName = (unsigned int)a1->dpwszFaceName;
  if ( (unsigned __int64)(int)dpwszFaceName < 0xC0 || (dpwszFaceName & 1) != 0 || dpwszFaceName > v3 )
    return 0;
  v9 = (_WORD *)((char *)a1 + (int)dpwszFaceName);
  while ( *v9 )
  {
    if ( ++v9 > (_WORD *)v4 )
      return 0;
  }
  dpwszUniqueName = (unsigned int)a1->dpwszUniqueName;
  if ( (unsigned __int64)(int)dpwszUniqueName < 0xC0 || (dpwszUniqueName & 1) != 0 || dpwszUniqueName > v3 )
    return 0;
  v11 = (_WORD *)((char *)a1 + (int)dpwszUniqueName);
  while ( *v11 )
  {
    if ( ++v11 > (_WORD *)v4 )
      return 0;
  }
  cjIfiExtra = a1->cjIfiExtra;
  if ( cjIfiExtra )
  {
    if ( cjIfiExtra < 8 )
      return 0;
    v13 = a1[1].cjIfiExtra;
    if ( v13 )
    {
      if ( v13 < 0xC0 || v13 + 24 < v13 || v13 + 24 > (unsigned int)cjThis )
        return 0;
    }
    v14 = 0;
    if ( cjIfiExtra >= 0x10 )
    {
      v15 = a1[1].dpwszStyleName;
      if ( (_DWORD)v15 )
      {
        if ( v15 < 0xC0 )
          return 0;
        if ( (int)v15 + 8 < (unsigned int)v15 )
          return 0;
        if ( (int)v15 + 8 > (unsigned int)cjThis )
          return 0;
        v14 = *(ULONG *)((char *)&a1->cjIfiExtra + v15);
        if ( v14 > 0x10 )
          return 0;
        v17 = *(ULONG *)((char *)&a1->cjThis + v15) == 134248052 ? v15 + 140 : v15 + 8 + 4 * v14;
        if ( v17 < (unsigned int)v15 || v17 > (unsigned int)cjThis )
          return 0;
      }
    }
    if ( cjIfiExtra >= 0x14 )
    {
      v26 = a1[1].dpwszFaceName;
      if ( (_DWORD)v26 )
      {
        if ( v26 < 0xC0 )
          return 0;
        v27 = v26 + 8 * (v14 + 4 * v14 + 1);
        if ( v27 < (unsigned int)v26 || v27 > (unsigned int)cjThis || *(ULONG *)((char *)&a1->cjIfiExtra + v26) != v14 )
          return 0;
      }
    }
  }
  dpFontSim = a1->dpFontSim;
  if ( (_DWORD)dpFontSim )
  {
    if ( dpFontSim < 0xC0 )
      return 0;
    if ( (int)dpFontSim + 12 < (unsigned int)dpFontSim )
      return 0;
    if ( (int)dpFontSim + 12 > (unsigned int)cjThis )
      return 0;
    v19 = *(ULONG *)((char *)&a1->cjThis + dpFontSim);
    if ( v19 )
    {
      if ( v19 < 0xC )
        return 0;
      v20 = v19 + dpFontSim;
      if ( v19 + (unsigned int)dpFontSim < (unsigned int)dpFontSim || v20 + 20 < v20 || v20 + 20 > (unsigned int)cjThis )
        return 0;
    }
    v21 = *(ULONG *)((char *)&a1->cjIfiExtra + dpFontSim);
    if ( v21 )
    {
      if ( v21 < 0xC )
        return 0;
      v22 = v21 + dpFontSim;
      if ( v21 + (unsigned int)dpFontSim < (unsigned int)dpFontSim || v22 + 20 < v22 || v22 + 20 > (unsigned int)cjThis )
        return 0;
    }
    v23 = *(PTRDIFF *)((char *)&a1->dpwszFamilyName + dpFontSim);
    if ( v23 )
    {
      if ( v23 < 0xC )
        return 0;
      v24 = dpFontSim + v23;
      if ( v24 < (unsigned int)dpFontSim || v24 + 20 < v24 || v24 + 20 > (unsigned int)cjThis )
        return 0;
    }
  }
  dpCharSets = a1->dpCharSets;
  return !dpCharSets || dpCharSets >= 0xC0 && dpCharSets + 16 >= dpCharSets && dpCharSets + 16 <= (unsigned int)cjThis;
}
