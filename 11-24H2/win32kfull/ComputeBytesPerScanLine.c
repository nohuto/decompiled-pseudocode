/*
 * XREFs of ComputeBytesPerScanLine @ 0x1401E075C
 * Callers:
 *     HT_CreateStandardMonoPattern @ 0x140128EF4 (HT_CreateStandardMonoPattern.c)
 *     SetupAAHeader @ 0x14013A8BC (SetupAAHeader.c)
 *     HT_CreateHalftoneBrush @ 0x1402F3278 (HT_CreateHalftoneBrush.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeBytesPerScanLine(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ecx
  int v5; // edx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx

  if ( !a3 )
    return 0LL;
  if ( a1 > 0xF7 )
  {
    v12 = a1 - 248;
    if ( !v12 )
      goto LABEL_6;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_6;
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_6;
    v15 = v14 - 1;
    if ( !v15 )
      goto LABEL_6;
    v16 = v15 - 1;
    if ( !v16 || (v17 = v16 - 1) == 0 )
    {
LABEL_28:
      a3 *= 2;
      goto LABEL_6;
    }
    v18 = v17 - 1;
    if ( !v18 )
      goto LABEL_6;
    if ( v18 != 1 )
      return 0LL;
LABEL_27:
    a3 = (a3 + 1) >> 1;
    goto LABEL_6;
  }
  if ( a1 == 247 )
    goto LABEL_6;
  v4 = a1 - 1;
  if ( !v4 )
  {
    a3 = (a3 + 7) >> 3;
    goto LABEL_6;
  }
  v7 = v4 - 1;
  if ( !v7 )
    goto LABEL_27;
  v8 = v7 - 1;
  if ( !v8 )
    goto LABEL_6;
  v9 = v8 - 1;
  if ( !v9 )
    goto LABEL_28;
  v10 = v9 - 1;
  if ( !v10 )
  {
    a3 *= 3;
    goto LABEL_6;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    a3 *= 4;
    goto LABEL_6;
  }
  if ( v11 - 239 >= 2 )
    return 0LL;
LABEL_6:
  if ( a2 > 1 && (v5 = a3 % a2) != 0 )
    return a2 + a3 - v5;
  else
    return a3;
}
