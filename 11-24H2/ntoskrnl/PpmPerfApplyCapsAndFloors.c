/*
 * XREFs of PpmPerfApplyCapsAndFloors @ 0x1403A3174
 * Callers:
 *     PpmPerfApplyDomainState @ 0x1403A14F0 (PpmPerfApplyDomainState.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmPerfApplyCapsAndFloors(unsigned int *a1, unsigned int *a2, unsigned int *a3, __int64 a4)
{
  unsigned int v4; // eax
  char v5; // r10
  __int64 v9; // rsi
  __int64 v10; // rbx
  unsigned int v11; // r8d
  unsigned int v12; // edx
  __int64 v13; // r11
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // r9d
  unsigned int v17; // eax
  __int64 v19; // r9
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // eax

  v4 = *(_DWORD *)(a4 + 296);
  v5 = 0;
  if ( v4 )
  {
    v9 = v4;
    v10 = *(_QWORD *)(a4 + 312);
    v11 = *a3;
    v12 = *a2;
    if ( *(_BYTE *)(a4 + 490) )
    {
      v13 = 0LL;
      do
      {
        v14 = *(_DWORD *)(v13 + v10 + 28);
        if ( v14 >= *(_DWORD *)(v13 + v10 + 48) )
          v14 = *(_DWORD *)(v13 + v10 + 48);
        v15 = *(_DWORD *)(v13 + v10 + 24);
        v16 = v15;
        if ( v14 < v15 )
          v16 = v14;
        if ( v16 < 0x64 && *a1 > v16 )
        {
          v5 = 1;
          *a1 = v16;
        }
        if ( v16 < v15 )
          v15 = v16;
        if ( v11 > v15 )
        {
          *a3 = v15;
          v11 = v15;
        }
        v17 = *(_DWORD *)(v13 + v10 + 52);
        if ( v12 < v17 )
        {
          *a2 = v17;
          v12 = v17;
        }
        v13 += 1192LL;
        --v9;
      }
      while ( v9 );
    }
    else
    {
      v19 = 0LL;
      do
      {
        v20 = *(_DWORD *)(v19 + v10 + 28);
        if ( v20 >= *(_DWORD *)(v19 + v10 + 48) )
          v20 = *(_DWORD *)(v19 + v10 + 48);
        if ( v20 < 0x64 && *a1 > v20 )
        {
          v5 = 1;
          *a1 = v20;
        }
        v21 = *(_DWORD *)(v19 + v10 + 24);
        if ( v20 < v21 )
          v21 = v20;
        if ( v11 > v21 )
        {
          *a3 = v21;
          v11 = v21;
        }
        v22 = *(_DWORD *)(v19 + v10 + 52);
        if ( v12 < v22 )
        {
          *a2 = v22;
          v12 = v22;
        }
        v19 += 1192LL;
        --v9;
      }
      while ( v9 );
    }
  }
  return v5;
}
