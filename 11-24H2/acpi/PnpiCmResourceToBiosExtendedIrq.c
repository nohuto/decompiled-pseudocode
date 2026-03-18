/*
 * XREFs of PnpiCmResourceToBiosExtendedIrq @ 0x1400A61C4
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1400A5714 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x14003BCB4 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 */

__int64 __fastcall PnpiCmResourceToBiosExtendedIrq(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  __int64 v7; // rbp
  char *v8; // rdi
  char Polarity; // al
  char v10; // cl
  __int16 v11; // r8
  char v12; // dl
  char v13; // cl
  int v15; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v5 = *(_DWORD *)(a3 + 16);
  v6 = 0;
  v15 = 0;
  while ( v6 < v5 )
  {
    v7 = 5LL * v6;
    if ( *(_BYTE *)(a3 + 20LL * v6 + 20) == 2 )
    {
      v8 = (char *)(a2 + 3);
      *(_DWORD *)(a2 + 5) = *(unsigned __int16 *)(a3 + 20LL * v6 + 24);
      *(_BYTE *)(a2 + 3) = 0;
      Polarity = ACPIInternalInterruptPolarityCacheGetPolarity(
                   *(_QWORD *)(a1 + 784),
                   *(_DWORD *)(a3 + 20LL * v6 + 28),
                   &v15);
      v10 = *v8;
      v11 = *(_WORD *)(a3 + 4 * v7 + 22) & 1;
      if ( Polarity )
      {
        v12 = v10 | 2;
        if ( !v11 )
          v12 = *v8;
        if ( (v15 & 2) != 0 )
          v12 |= 4u;
        v13 = v12;
      }
      else
      {
        if ( v11 )
          v13 = v10 | 2;
        else
          v13 = v10 | 4;
        v12 = v13;
      }
      *v8 = v13;
      if ( *(_BYTE *)(a3 + 4 * v7 + 21) == 3 )
        v12 |= 8u;
      *v8 = v12 | 1;
      *(_BYTE *)(a3 + 4 * v7 + 20) = 0;
      v3 = 1;
      return v3 == 0 ? 0xC0000001 : 0;
    }
    ++v6;
  }
  return v3 == 0 ? 0xC0000001 : 0;
}
