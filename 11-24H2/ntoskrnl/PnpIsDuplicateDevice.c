/*
 * XREFs of PnpIsDuplicateDevice @ 0x14071B668
 * Callers:
 *     IopIsReportedAlready @ 0x14071B37C (IopIsReportedAlready.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpIsDuplicateDevice(_DWORD *a1, _DWORD *a2)
{
  int v2; // esi
  _DWORD *v3; // r8
  _DWORD *v4; // r10
  unsigned int i; // ebx
  char v6; // di
  unsigned int v7; // r14d
  unsigned int v8; // r9d
  _DWORD *v9; // r11
  _DWORD *v10; // rax

  v2 = 0;
  v3 = a1;
  if ( !*a1 || !*a2 )
    return 0LL;
  while ( 1 )
  {
    v4 = v3 + 5;
    for ( i = 0; i < v3[4]; ++i )
    {
      v6 = *(_BYTE *)v4;
      if ( ((*(_BYTE *)v4 - 1) & 0xF9) == 0 && v6 != 5 )
      {
        v7 = a2[4];
        v8 = 0;
        if ( v7 )
        {
          v9 = a2 + 5;
          do
          {
            if ( v6 == *(_BYTE *)v9 && *(_QWORD *)(v4 + 1) == *(_QWORD *)(v9 + 1) && (v6 == 1) == (*(_BYTE *)v9 == 1) )
              break;
            ++v8;
            v9 += 5;
          }
          while ( v8 < v7 );
        }
        if ( v8 == v7 )
          return 0LL;
      }
      v4 += 5;
    }
    if ( v2 )
      break;
    v10 = a2;
    v2 = 1;
    a2 = v3;
    v3 = v10;
  }
  return 1LL;
}
