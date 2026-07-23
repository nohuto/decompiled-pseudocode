/*
 * XREFs of AuthzBasepValidateSecurityAttributes @ 0x1403B8F9C
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403B8BCC (AuthzBasepSetSecurityAttributesToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepValidateSecurityAttributes(__int64 a1, int *a2)
{
  int v2; // r8d
  int v3; // r15d
  unsigned int v4; // ebp
  __int64 v5; // r9
  unsigned int i; // r14d
  bool v7; // zf
  unsigned int v9; // edi
  unsigned int j; // eax
  __int64 v11; // r11
  unsigned __int16 v12; // si
  unsigned __int16 v13; // bx
  int v14; // ecx
  unsigned int v15; // r11d
  unsigned int n; // eax
  __int64 v17; // rbx
  unsigned int v18; // edi
  unsigned int k; // ecx
  __int64 v20; // rax
  unsigned __int16 v21; // si
  unsigned __int16 v22; // bx
  unsigned int v23; // ebx
  unsigned int m; // r11d

  v2 = 0;
  if ( *(_WORD *)a1 == 1 )
  {
    v3 = *a2;
    if ( !*(_WORD *)(a1 + 2) )
    {
      v4 = *(_DWORD *)(a1 + 4);
      if ( v3 == 1 )
      {
        if ( v4 || !*(_QWORD *)(a1 + 8) )
        {
          v5 = *(_QWORD *)(a1 + 8);
          if ( v5 || !v4 )
            goto LABEL_6;
        }
      }
      else if ( v4 )
      {
        v5 = *(_QWORD *)(a1 + 8);
        if ( v5 )
        {
LABEL_6:
          for ( i = 0; ; ++i )
          {
            if ( i >= v4 )
              return (unsigned int)v2;
            if ( !*(_WORD *)(v5 + 40LL * i)
              || !*(_WORD *)(v5 + 40LL * i + 2)
              || !*(_QWORD *)(v5 + 40LL * i + 8)
              || *(_WORD *)(v5 + 40LL * i + 18)
              || (*(_DWORD *)(v5 + 40LL * i + 20) & 0xFF00) != 0 )
            {
              return (unsigned int)-1073741811;
            }
            if ( i )
            {
              if ( v3 == 1 )
                goto LABEL_16;
              v14 = a2[i];
              if ( v14 == 1 )
                return (unsigned int)-1073741811;
              v7 = v14 == 2;
            }
            else
            {
              v7 = v3 == 1;
            }
            if ( v7 && !*(_DWORD *)(v5 + 40LL * i + 24) )
              return (unsigned int)-1073741811;
LABEL_16:
            switch ( *(_WORD *)(v5 + 40LL * i + 16) )
            {
              case 1:
              case 2:
                if ( *(_DWORD *)(v5 + 40LL * i + 24) && !*(_QWORD *)(v5 + 40LL * i + 32) )
                  return (unsigned int)-1073741811;
                break;
              case 3:
                v9 = *(_DWORD *)(v5 + 40LL * i + 24);
                if ( v9 && !*(_QWORD *)(v5 + 40LL * i + 32) )
                  return (unsigned int)-1073741811;
                for ( j = 0; j < v9; ++j )
                {
                  v11 = *(_QWORD *)(v5 + 40LL * i + 32);
                  v12 = *(_WORD *)(v11 + 16LL * j);
                  if ( !v12 )
                    goto LABEL_31;
                  v13 = *(_WORD *)(v11 + 16LL * j + 2);
                  if ( !v13 || v12 > v13 || !*(_QWORD *)(v11 + 16LL * j + 8) )
                    goto LABEL_31;
                }
                break;
              case 4:
                v18 = *(_DWORD *)(v5 + 40LL * i + 24);
                if ( v18 && !*(_QWORD *)(v5 + 40LL * i + 32) )
                  return (unsigned int)-1073741811;
                for ( k = 0; k < v18; ++k )
                {
                  v20 = *(_QWORD *)(v5 + 40LL * i + 32);
                  v21 = *(_WORD *)(v20 + 24LL * k + 8);
                  if ( v21 )
                  {
                    v22 = *(_WORD *)(v20 + 24LL * k + 10);
                    if ( v22 )
                    {
                      if ( v21 <= v22 && *(_QWORD *)(v20 + 24LL * k + 16) )
                        continue;
                    }
                  }
LABEL_31:
                  v2 = -1073741811;
                  goto LABEL_32;
                }
                break;
              case 5:
                goto LABEL_41;
              case 6:
                v23 = *(_DWORD *)(v5 + 40LL * i + 24);
                if ( v23 && !*(_QWORD *)(v5 + 40LL * i + 32) )
                  return (unsigned int)-1073741811;
                for ( m = 0; m < v23; ++m )
                {
                  if ( *(_QWORD *)(*(_QWORD *)(v5 + 40LL * i + 32) + 8LL * m) > 1uLL )
                  {
LABEL_72:
                    v2 = -1073741811;
                    goto LABEL_32;
                  }
                }
                break;
              case 0x10:
LABEL_41:
                v15 = *(_DWORD *)(v5 + 40LL * i + 24);
                if ( v15 && !*(_QWORD *)(v5 + 40LL * i + 32) )
                  return (unsigned int)-1073741811;
                for ( n = 0; n < v15; ++n )
                {
                  v17 = *(_QWORD *)(v5 + 40LL * i + 32);
                  if ( !*(_DWORD *)(v17 + 16LL * n + 8) || !*(_QWORD *)(v17 + 16LL * n) )
                    goto LABEL_72;
                }
                break;
              default:
                return (unsigned int)-1073741811;
            }
LABEL_32:
            if ( v2 < 0 )
              return (unsigned int)v2;
          }
        }
      }
    }
  }
  return (unsigned int)-1073741811;
}
