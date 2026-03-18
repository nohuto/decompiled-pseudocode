/*
 * XREFs of ?Validate@CInputConfig@@SA_NAEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@K@Z @ 0x1401F4108
 * Callers:
 *     NtConfigureInputSpace @ 0x1401B7710 (NtConfigureInputSpace.c)
 * Callees:
 *     <none>
 */

char __fastcall CInputConfig::Validate(const struct INPUT_SPACE *a1, const struct INPUT_SPACE_REGION *a2, int a3)
{
  unsigned int i; // r8d
  char *v6; // rdx
  unsigned int v7; // r10d
  int v8; // ecx
  int v9; // r9d
  int v11; // r10d
  int v12; // ecx
  int v13; // ebx
  int v14; // r9d
  int v15; // r9d
  int v16; // ecx
  int v17; // r11d
  int v18; // edx

  if ( *(_QWORD *)a1 == 0xFFFFFFFE00000000uLL || *((_DWORD *)a1 + 2) )
    return 0;
  for ( i = 0; i != a3; ++i )
  {
    v6 = (char *)a2 + 200 * i;
    v7 = *((_DWORD *)v6 + 4);
    if ( ((v7 >> 1) & 1) == ((v7 & 4) != 0) )
      return 0;
    v8 = *((_DWORD *)v6 + 2) - *(_DWORD *)v6;
    if ( (*((_DWORD *)v6 + 4) & 4) != 0 )
    {
      if ( v8 < 0 )
        return 0;
      v9 = *((_DWORD *)v6 + 3) - *((_DWORD *)v6 + 1);
      if ( v9 < 0 || !v8 && !v9 )
        return 0;
    }
    else if ( v8 <= 0 || *((_DWORD *)v6 + 3) - *((_DWORD *)v6 + 1) <= 0 )
    {
      return 0;
    }
    if ( (unsigned __int16)(*((_WORD *)v6 + 10) - 1) <= 0x5Eu )
      return 0;
    if ( (v7 & 2) != 0 )
    {
      if ( (unsigned int)(*((_DWORD *)v6 + 41) - 1) > 3 )
        return 0;
      v11 = *((_DWORD *)v6 + 44);
      v12 = *((_DWORD *)v6 + 42);
      if ( v11 - v12 <= 0 )
        return 0;
      v13 = *((_DWORD *)v6 + 45);
      v14 = *((_DWORD *)v6 + 43);
      if ( v13 - v14 <= 0 )
        return 0;
      if ( v12 )
        return 0;
      if ( v14 )
        return 0;
      v15 = *((_DWORD *)v6 + 48);
      v16 = *((_DWORD *)v6 + 46);
      if ( v15 - v16 <= 0 )
        return 0;
      v17 = *((_DWORD *)v6 + 49);
      v18 = *((_DWORD *)v6 + 47);
      if ( v17 - v18 <= 0 || v16 < 0 || v11 < v15 || v18 < 0 || v13 < v17 )
        return 0;
    }
  }
  return 1;
}
