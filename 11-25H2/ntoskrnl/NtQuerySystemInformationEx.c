/*
 * XREFs of NtQuerySystemInformationEx @ 0x1409DB270
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 */

__int64 __fastcall NtQuerySystemInformationEx(int a1, __int64 a2, int a3)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // edx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx

  if ( !a2 || !a3 )
    return 3221225485LL;
  if ( a1 > 178 )
  {
    if ( a1 > 223 )
    {
      v25 = a1 - 230;
      if ( !v25 )
        goto LABEL_25;
      v26 = v25 - 1;
      if ( !v26 )
        goto LABEL_39;
      v27 = v26 - 1;
      if ( !v27 )
        goto LABEL_39;
      v28 = v27 - 6;
      if ( !v28 )
        goto LABEL_25;
      if ( (unsigned int)(v28 - 1) < 2 )
        goto LABEL_39;
    }
    else
    {
      if ( a1 == 223 )
        goto LABEL_25;
      v12 = a1 - 180;
      if ( !v12 )
        goto LABEL_39;
      v13 = v12 - 1;
      if ( !v13 )
        goto LABEL_25;
      v14 = v13 - 13;
      if ( !v14 )
        goto LABEL_39;
      v15 = v14 - 15;
      if ( !v15 )
        goto LABEL_25;
      v16 = v15 - 1;
      if ( !v16 )
        goto LABEL_39;
      v17 = v16 - 1;
      if ( !v17 )
        goto LABEL_25;
      if ( v17 == 11 )
        goto LABEL_39;
    }
    return 3221225475LL;
  }
  if ( a1 == 178 )
    goto LABEL_25;
  if ( a1 <= 100 )
  {
    if ( a1 == 100 )
      goto LABEL_11;
    v18 = a1 - 8;
    if ( !v18 )
      goto LABEL_11;
    v19 = v18 - 15;
    if ( !v19 )
      goto LABEL_11;
    v20 = v19 - 19;
    if ( !v20 )
      goto LABEL_11;
    v21 = v20 - 19;
    if ( !v21 )
      goto LABEL_11;
    v22 = v21 - 11;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( !v23 || v23 == 10 )
        goto LABEL_11;
      return 3221225475LL;
    }
LABEL_39:
    v10 = 4;
    goto LABEL_12;
  }
  v5 = a1 - 107;
  if ( !v5 )
    goto LABEL_39;
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 13;
    if ( v7 )
    {
      v8 = v7 - 20;
      if ( v8 )
      {
        v9 = v8 - 19;
        if ( v9 )
        {
          v24 = v9 - 5;
          if ( v24 && v24 != 10 )
            return 3221225475LL;
LABEL_25:
          v10 = 8;
          goto LABEL_12;
        }
      }
    }
  }
LABEL_11:
  v10 = 2;
LABEL_12:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((v10 - 1) & (unsigned int)a2) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  return ExpQuerySystemInformation((unsigned int)a1, a2);
}
