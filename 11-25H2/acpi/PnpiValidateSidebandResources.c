/*
 * XREFs of PnpiValidateSidebandResources @ 0x1400A5590
 * Callers:
 *     PnpiAddSidebandResources @ 0x1400BFD38 (PnpiAddSidebandResources.c)
 * Callees:
 *     <none>
 */

char __fastcall PnpiValidateSidebandResources(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r9
  __int64 v3; // r8
  unsigned int v4; // r12d
  unsigned int i; // edi
  unsigned int v7; // r14d
  unsigned int j; // r11d
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned int k; // esi
  unsigned int v12; // ebp
  unsigned int m; // ebx
  __int64 v14; // r10
  bool v15; // zf
  __int64 v16; // rax
  __int16 v18; // dx
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx

  v2 = AcpiInformation;
  v3 = a2 + 32;
  v4 = *(_DWORD *)(a2 + 28);
  for ( i = 0; i < v4; ++i )
  {
    v7 = *(_DWORD *)(v3 + 4);
    for ( j = 0; j < v7; ++j )
    {
      v9 = 32LL * j;
      if ( ((AcpiGlobalFlags & 2) != 0 || *(_BYTE *)(v2[1] + 8LL) >= 5u) && *(_BYTE *)(v9 + v3 + 9) != 2
        || *(_DWORD *)(v9 + v3 + 16) == *(_DWORD *)(v9 + v3 + 20) )
      {
        v10 = a1 + 32;
        for ( k = 0; ; ++k )
        {
          if ( k >= *(_DWORD *)(a1 + 28) )
          {
            v2 = AcpiInformation;
            break;
          }
          v12 = *(_DWORD *)(v10 + 4);
          for ( m = 0; m < v12; ++m )
          {
            v14 = 32LL * m;
            if ( *(_BYTE *)(v14 + v10 + 9) == 2 )
            {
              if ( *(_BYTE *)(v9 + v3 + 9) == 2 )
              {
                v18 = *(_WORD *)(v9 + v3 + 12);
                if ( (v18 & 2) == 0 )
                {
                  v19 = *(_DWORD *)(v9 + v3 + 16);
                  if ( v19 >= *(_DWORD *)(v14 + v10 + 16) && v19 <= *(_DWORD *)(v14 + v10 + 20) && (v18 & 0x20) == 0 )
                    return 0;
                }
              }
            }
            else
            {
              if ( *(_BYTE *)(v14 + v10 + 9) == 3 )
              {
                v15 = *(_BYTE *)(v9 + v3 + 9) == 3;
              }
              else
              {
                if ( *(_BYTE *)(v14 + v10 + 9) != 7 )
                  continue;
                v15 = *(_BYTE *)(v9 + v3 + 9) == 7;
              }
              if ( v15 )
              {
                v16 = *(_QWORD *)(v14 + v10 + 24);
                if ( *(_QWORD *)(v9 + v3 + 24) <= v16 || *(_QWORD *)(v9 + v3 + 32) >= v16 )
                  return 0;
              }
            }
          }
          if ( v12 <= 1 )
            v20 = v10;
          else
            v20 = v10 + 32LL * (v12 - 1);
          v10 = v20 + 40;
        }
      }
    }
    if ( v7 <= 1 )
      v21 = v3;
    else
      v21 = v3 + 32LL * (v7 - 1);
    v3 = v21 + 40;
  }
  return 1;
}
