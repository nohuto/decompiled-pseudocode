/*
 * XREFs of RaidConvertCryptoCapabilitiesToExternal @ 0x14006A4D0
 * Callers:
 *     RaidGetStorageAdapterCryptoProperty @ 0x1400652F0 (RaidGetStorageAdapterCryptoProperty.c)
 *     RaidUnitGetCryptoProperty @ 0x14009E600 (RaidUnitGetCryptoProperty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidConvertCryptoCapabilitiesToExternal(__int64 a1, _QWORD *a2, unsigned __int16 *a3, int a4)
{
  __int64 v5; // r10
  unsigned int v6; // r11d
  unsigned int v7; // ecx
  int v9; // eax
  unsigned int v10; // r9d
  __int64 i; // r10
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned __int16 *v15; // rcx

  v5 = *(_QWORD *)(a1 + 24);
  v6 = 32 * (a3[1] + 1);
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 8LL);
  if ( v7 < 8 )
    return 3221225507LL;
  *(_DWORD *)v5 = 1;
  *(_DWORD *)(v5 + 4) = v6;
  if ( v7 >= v6 )
  {
    *(_DWORD *)(v5 + 8) = *a3;
    v9 = a3[1];
    *(_DWORD *)(v5 + 24) = a4;
    v10 = 0;
    *(_DWORD *)(v5 + 12) = v9;
    *(_DWORD *)(v5 + 16) = 32;
    *(_DWORD *)(v5 + 20) = 32;
    *(_BYTE *)(v5 + 28) = *((_BYTE *)a3 + 12);
    *(_BYTE *)(v5 + 29) = *((_BYTE *)a3 + 4);
    for ( i = v5 + 32; v10 < a3[1]; *(_BYTE *)(v14 + 28) = *((_BYTE *)v15 + 14) )
    {
      v12 = v10 + 1LL;
      v13 = 32LL * v10++;
      v14 = i + v13;
      v15 = &a3[8 * v12];
      *(_DWORD *)v14 = 1;
      *(_DWORD *)(v14 + 4) = 32;
      *(_DWORD *)(v14 + 8) = *v15;
      *(_DWORD *)(v14 + 12) = *((_DWORD *)v15 + 1);
      *(_DWORD *)(v14 + 16) = *((_DWORD *)v15 + 2);
      *(_DWORD *)(v14 + 20) = v15[1];
      *(_WORD *)(v14 + 24) = v15[6];
      *(_WORD *)(v14 + 26) = 0;
    }
    *a2 = v6;
  }
  else
  {
    *a2 = 8LL;
  }
  return 0LL;
}
