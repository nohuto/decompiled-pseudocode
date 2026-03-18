/*
 * XREFs of NtQuerySystemInformationEx @ 0x140AE1180
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 */

int __fastcall NtQuerySystemInformationEx(
        signed int a1,
        void *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  bool v22; // zf
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx

  if ( !a2 || !a3 )
    return -1073741811;
  if ( a1 > 180 )
  {
    if ( a1 > 230 )
    {
      v29 = a1 - 231;
      if ( !v29 )
        goto LABEL_42;
      v30 = v29 - 1;
      if ( !v30 )
        goto LABEL_42;
      v31 = v30 - 6;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( !v32 )
          goto LABEL_42;
        v33 = v32 - 1;
        if ( !v33 )
          goto LABEL_42;
        v34 = v33 - 14;
        if ( v34 )
        {
          if ( v34 == 2 )
            goto LABEL_42;
          return -1073741821;
        }
      }
    }
    else if ( a1 != 230 )
    {
      v23 = a1 - 181;
      if ( v23 )
      {
        v24 = v23 - 13;
        if ( !v24 )
          goto LABEL_42;
        v25 = v24 - 15;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( !v26 )
            goto LABEL_42;
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 11;
            if ( !v28 )
              goto LABEL_42;
            v22 = v28 == 1;
LABEL_23:
            if ( v22 )
              goto LABEL_24;
            return -1073741821;
          }
        }
      }
    }
LABEL_24:
    v15 = 8;
    goto LABEL_43;
  }
  if ( a1 == 180 )
    goto LABEL_42;
  if ( a1 > 107 )
  {
    v16 = a1 - 108;
    if ( !v16 )
      goto LABEL_15;
    v17 = v16 - 13;
    if ( !v17 )
      goto LABEL_15;
    v18 = v17 - 20;
    if ( !v18 )
      goto LABEL_15;
    v19 = v18 - 19;
    if ( !v19 )
      goto LABEL_15;
    v20 = v19 - 5;
    if ( v20 )
    {
      v21 = v20 - 10;
      if ( v21 )
      {
        v22 = v21 == 3;
        goto LABEL_23;
      }
    }
    goto LABEL_24;
  }
  if ( a1 == 107 )
    goto LABEL_42;
  v8 = a1 - 8;
  if ( !v8 )
    goto LABEL_15;
  v9 = v8 - 15;
  if ( !v9 )
    goto LABEL_15;
  v10 = v9 - 19;
  if ( !v10 )
    goto LABEL_15;
  v11 = v10 - 19;
  if ( !v11 )
    goto LABEL_15;
  v12 = v11 - 11;
  if ( !v12 )
  {
LABEL_42:
    v15 = 4;
    goto LABEL_43;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 10;
    if ( v14 )
    {
      if ( v14 != 17 )
        return -1073741821;
    }
  }
LABEL_15:
  v15 = 2;
LABEL_43:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((v15 - 1) & (unsigned int)a2) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  return ExpQuerySystemInformation(a1, a2, a3, a4, a5, a6);
}
