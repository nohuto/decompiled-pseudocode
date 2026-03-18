/*
 * XREFs of ParseNameTail @ 0x1400254A0
 * Callers:
 *     ParseName @ 0x14000E040 (ParseName.c)
 *     ParseOpcode @ 0x14000E5F0 (ParseOpcode.c)
 *     ParseSuperName @ 0x140024820 (ParseSuperName.c)
 * Callees:
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseNameTail(__int64 a1, char **a2, _BYTE *a3)
{
  __int64 v6; // r9
  char *v7; // r10
  char v8; // cl
  int v9; // esi
  _BYTE *v10; // rcx
  _BYTE *v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // r10
  char v15; // cl
  __int64 result; // rax
  int v17; // r11d
  _BYTE *v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  char *v21; // r9
  char v22; // al
  _BYTE *v23; // rax
  unsigned __int8 *v24; // rax

  v6 = -1LL;
  do
    ++v6;
  while ( a3[v6] );
  v7 = *a2;
  v8 = **a2;
  if ( v8 )
  {
    if ( v8 == 47 )
    {
      v24 = (unsigned __int8 *)(v7 + 1);
      *a2 = v7 + 1;
      v7 += 2;
      v9 = *v24;
      *a2 = v7;
      goto LABEL_11;
    }
    if ( v8 == 46 )
    {
      ++v7;
      v9 = 2;
      *a2 = v7;
    }
    else
    {
      v9 = 1;
    }
    while ( (unsigned __int64)(unsigned int)v6 + 4 < 0x100 )
    {
      v11 = &a3[(unsigned int)v6];
      v12 = (unsigned int)(256 - v6);
      if ( (_DWORD)v6 != 256 )
      {
        if ( v12 > 0x7FFFFFFF )
        {
          *v11 = 0;
        }
        else
        {
          v13 = 4 - v12;
          v14 = v7 - v11;
          do
          {
            if ( !(v13 + v12) )
              break;
            v15 = v11[v14];
            if ( !v15 )
              break;
            *v11++ = v15;
            --v12;
          }
          while ( v12 );
          v10 = v11 - 1;
          if ( v12 )
            v10 = v11;
          *v10 = 0;
        }
      }
      v6 = (unsigned int)(v6 + 4);
      v7 = *a2 + 4;
      *a2 = v7;
      if ( --v9 && (v17 = v6 + 1, (unsigned int)(v6 + 1) < 0x100) )
      {
        v18 = &a3[v6];
        v19 = (unsigned int)(256 - v6);
        if ( (_DWORD)v6 != 256 )
        {
          if ( v19 > 0x7FFFFFFF )
          {
            *v18 = 0;
          }
          else
          {
            v20 = 2147483646 - v19;
            v21 = (char *)("." - v18);
            do
            {
              if ( !(v20 + v19) )
                break;
              v22 = v18[(_QWORD)v21];
              if ( !v22 )
                break;
              *v18++ = v22;
              --v19;
            }
            while ( v19 );
            v23 = v18 - 1;
            if ( v19 )
              v23 = v18;
            *v23 = 0;
          }
        }
        v7 = *a2;
        LODWORD(v6) = v17;
      }
      else
      {
LABEL_11:
        if ( !v9 )
          return 0LL;
      }
    }
    LogError(-1073741562);
    AcpiDiagTraceAmlError(a1, -1073741562);
    PrintDebugMessage(0x82u, a3, 0LL, 0LL, 0LL);
    return 3221225734LL;
  }
  else
  {
    result = 0LL;
    *a2 = v7 + 1;
  }
  return result;
}
