/*
 * XREFs of ParseName @ 0x14000E040
 * Callers:
 *     ParseObjName @ 0x140001F40 (ParseObjName.c)
 *     ParseArg @ 0x14000DB50 (ParseArg.c)
 *     ParseFieldConnection @ 0x140054520 (ParseFieldConnection.c)
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     ParseNameTail @ 0x1400254A0 (ParseNameTail.c)
 */

__int64 __fastcall ParseName(__int64 a1, char **a2, const char *a3)
{
  char v6; // r9
  __int64 v7; // r10
  char *v8; // r9
  char v9; // al
  char *v10; // rax
  __int64 v11; // rax
  char *v12; // r10
  unsigned int v13; // edi
  char v14; // cl
  int v15; // r14d
  unsigned int v16; // r11d
  char *v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // r10
  char v21; // cl
  char *v22; // rcx
  int v23; // edx
  char *v25; // r8
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r9
  char *v28; // r10
  char v29; // cl
  char *v30; // rcx
  __int64 v31; // rax
  char *v32; // r9
  char v33; // cl
  int v34; // r14d
  unsigned int v35; // r11d
  char *v36; // rdx
  unsigned int v37; // ecx
  __int64 v38; // r8
  __int64 v39; // r10
  __int64 v40; // r9
  char v41; // cl
  char *v42; // rcx
  __int64 v43; // rdx
  int v44; // eax
  char *v45; // rdx
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // r9
  char *v48; // r10
  char v49; // cl
  char *v50; // rcx
  unsigned __int8 *v51; // rcx
  unsigned __int8 *v52; // rcx
  __int64 v53; // rbp
  char *v54; // rcx
  char v55; // al
  char *v56; // rax
  unsigned int v57; // r14d
  _BYTE *v58; // rax
  char *v59; // rcx

  v6 = **a2;
  if ( v6 == 92 )
  {
    v7 = 256LL;
    v8 = (char *)a3;
    do
    {
      if ( v7 == -2147483390 )
        break;
      v9 = v8["\\" - a3];
      if ( !v9 )
        break;
      *v8++ = v9;
      --v7;
    }
    while ( v7 );
    v10 = v8 - 1;
    if ( v7 )
      v10 = v8;
    *v10 = 0;
    v11 = -1LL;
    v12 = *a2 + 1;
    *a2 = v12;
    v13 = 0;
    do
      ++v11;
    while ( a3[v11] );
    v14 = *v12;
    if ( *v12 )
    {
      if ( v14 != 47 )
      {
        if ( v14 == 46 )
        {
          ++v12;
          v15 = 2;
          *a2 = v12;
        }
        else
        {
          v15 = 1;
        }
LABEL_14:
        v16 = v11 + 1;
        while ( (unsigned __int64)(unsigned int)v11 + 4 < 0x100 )
        {
          v17 = (char *)&a3[(unsigned int)v11];
          v18 = (unsigned int)(256 - v11);
          if ( (_DWORD)v11 != 256 )
          {
            if ( v18 > 0x7FFFFFFF )
            {
              *v17 = 0;
            }
            else
            {
              v19 = 4 - v18;
              v20 = v12 - v17;
              do
              {
                if ( !(v19 + v18) )
                  break;
                v21 = v17[v20];
                if ( !v21 )
                  break;
                *v17++ = v21;
                --v18;
              }
              while ( v18 );
              v22 = v17 - 1;
              if ( v18 )
                v22 = v17;
              *v22 = 0;
            }
          }
          v23 = v11 + 4;
          v12 = *a2 + 4;
          v11 = (unsigned int)(v11 + 4);
          v16 += 4;
          *a2 = v12;
          if ( --v15 && v16 < 0x100 )
          {
            v25 = (char *)&a3[v11];
            v26 = (unsigned int)(256 - v11);
            if ( (_DWORD)v11 != 256 )
            {
              if ( v26 > 0x7FFFFFFF )
              {
                *v25 = 0;
              }
              else
              {
                v27 = 2147483646 - v26;
                v28 = (char *)("." - v25);
                do
                {
                  if ( !(v27 + v26) )
                    break;
                  v29 = v25[(_QWORD)v28];
                  if ( !v29 )
                    break;
                  *v25++ = v29;
                  --v26;
                }
                while ( v26 );
                v30 = v25 - 1;
                if ( v26 )
                  v30 = v25;
                *v30 = 0;
              }
            }
            v12 = *a2;
            LODWORD(v11) = v11 + 1;
            ++v16;
          }
          else
          {
            LODWORD(v11) = v23;
            if ( !v15 )
              goto LABEL_27;
          }
        }
LABEL_99:
        LogError(3221225734LL);
        AcpiDiagTraceAmlError(a1, 3221225734LL);
        PrintDebugMessage(130, (_DWORD)a3, 0, 0, 0LL);
        v13 = -1073741562;
        goto LABEL_27;
      }
      v51 = (unsigned __int8 *)(v12 + 1);
      *a2 = v12 + 1;
      v12 += 2;
      v15 = *v51;
      *a2 = v12;
      if ( v15 )
        goto LABEL_14;
    }
    else
    {
      *a2 = v12 + 1;
    }
  }
  else
  {
    if ( v6 != 94 )
    {
      *a3 = 0;
      v13 = 0;
      v31 = -1LL;
      do
        ++v31;
      while ( a3[v31] );
      v32 = *a2;
      v33 = **a2;
      switch ( v33 )
      {
        case 0:
          *a2 = v32 + 1;
          goto LABEL_27;
        case 47:
          v52 = (unsigned __int8 *)(v32 + 1);
          *a2 = v32 + 1;
          v32 += 2;
          v34 = *v52;
          *a2 = v32;
          if ( !v34 )
            goto LABEL_27;
          break;
        case 46:
          ++v32;
          v34 = 2;
          *a2 = v32;
          break;
        default:
          v34 = 1;
          break;
      }
      v35 = v31 + 1;
      while ( (unsigned __int64)(unsigned int)v31 + 4 < 0x100 )
      {
        v36 = (char *)&a3[(unsigned int)v31];
        v37 = 256 - v31;
        v38 = (unsigned int)(256 - v31);
        if ( (_DWORD)v31 != 256 )
        {
          if ( v37 > 0x7FFFFFFFuLL )
          {
            *v36 = 0;
          }
          else
          {
            v39 = 4LL - v37;
            v40 = v32 - v36;
            do
            {
              if ( !(v39 + v38) )
                break;
              v41 = v36[v40];
              if ( !v41 )
                break;
              *v36++ = v41;
              --v38;
            }
            while ( v38 );
            v42 = v36 - 1;
            if ( v38 )
              v42 = v36;
            *v42 = 0;
          }
        }
        v43 = (unsigned int)(v31 + 4);
        v32 = *a2 + 4;
        v44 = v31 + 4;
        v35 += 4;
        *a2 = v32;
        if ( --v34 && v35 < 0x100 )
        {
          v45 = (char *)&a3[v43];
          v46 = (unsigned int)(256 - v44);
          if ( v44 != 256 )
          {
            if ( v46 > 0x7FFFFFFF )
            {
              *v45 = 0;
            }
            else
            {
              v47 = 2147483646 - v46;
              v48 = (char *)("." - v45);
              do
              {
                if ( !(v47 + v46) )
                  break;
                v49 = v45[(_QWORD)v48];
                if ( !v49 )
                  break;
                *v45++ = v49;
                --v46;
              }
              while ( v46 );
              v50 = v45 - 1;
              if ( v46 )
                v50 = v45;
              *v50 = 0;
            }
          }
          v32 = *a2;
          LODWORD(v31) = v44 + 1;
          ++v35;
        }
        else
        {
          LODWORD(v31) = v43;
          if ( !v34 )
            goto LABEL_27;
        }
      }
      goto LABEL_99;
    }
    v53 = 256LL;
    v54 = (char *)a3;
    do
    {
      if ( v53 == -2147483390 )
        break;
      v55 = v54["^" - a3];
      if ( !v55 )
        break;
      *v54++ = v55;
      --v53;
    }
    while ( v53 );
    v56 = v54 - 1;
    v57 = 1;
    if ( v53 )
      v56 = v54;
    *v56 = 0;
    v58 = a3 + 1;
    v59 = ++*a2;
    do
    {
      if ( *v59 != 94 )
        break;
      *v58 = 94;
      ++v57;
      ++*a2;
      ++v58;
      v59 = *a2;
    }
    while ( v57 < 0xFF );
    a3[v57] = 0;
    if ( **a2 == 94 )
    {
      LogError(3221225734LL);
      AcpiDiagTraceAmlError(a1, 3221225734LL);
      PrintDebugMessage(129, (_DWORD)a3, 0, 0, 0LL);
      return 3221225734LL;
    }
    v13 = ParseNameTail(a1, a2);
  }
LABEL_27:
  if ( !v13 && (gDebugger & 0xD0) != 0 )
    ConPrintf("%s", a3);
  return v13;
}
