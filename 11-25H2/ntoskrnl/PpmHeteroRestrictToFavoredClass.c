/*
 * XREFs of PpmHeteroRestrictToFavoredClass @ 0x1403B1EE4
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x1404EAC14 (PpmParkComputeUnparkMask.c)
 * Callees:
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 */

__int64 __fastcall PpmHeteroRestrictToFavoredClass(
        unsigned __int64 a1,
        unsigned __int16 a2,
        unsigned __int8 *a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  unsigned __int64 v8; // rbp
  int v9; // r12d
  bool v10; // r10
  char v11; // bl
  unsigned __int8 v12; // di
  __int64 v13; // r14
  unsigned __int64 v14; // r13
  int v15; // r15d
  unsigned __int64 v16; // rcx
  unsigned int v17; // esi
  __int64 Prcb; // rax
  __int64 v19; // rsi
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // cl
  unsigned __int64 v22; // rcx
  unsigned int v23; // esi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rsi
  char v27; // al

  v8 = a1;
  v9 = 0;
  if ( PopHeteroSystem == 3 )
  {
    v10 = 1;
  }
  else if ( PopHeteroSystem == 6 )
  {
    v10 = a8 != 0;
  }
  else
  {
    v10 = a7 < a6;
  }
  v11 = v10;
  if ( !PpmHeteroPolicy )
    v11 = 1;
  if ( PpmHeteroHgsParkingEnabled )
  {
    v9 = a4;
    if ( !v11 )
      v9 = a5;
  }
  v12 = 0;
  v13 = 0LL;
  v14 = a1;
  if ( a1 )
  {
    v15 = a2 << 6;
    do
    {
      _BitScanForward64(&v16, v14);
      v17 = *((_DWORD *)qword_140F216A8 + v15 + (unsigned int)(v16 & 0x3F));
      Prcb = KeGetPrcb(v17);
      if ( PpmHeteroHgsParkingEnabled )
      {
        v19 = v9 + PpmHeteroWorkloadClasses * v17;
        if ( v11 )
          v20 = *(_BYTE *)(PpmHeteroCapability + 4 * v19 + 25);
        else
          v20 = *(_BYTE *)(PpmHeteroCapability + 4 * v19 + 24);
      }
      else if ( v11 )
      {
        v20 = *(_BYTE *)(Prcb + 35337);
      }
      else
      {
        v20 = *(_BYTE *)(Prcb + 35338);
      }
      v21 = v12;
      if ( v12 <= v20 )
        v21 = v20;
      v12 = v21;
      v14 &= ~*(_QWORD *)(Prcb + 200);
    }
    while ( v14 );
    do
    {
      _BitScanForward64(&v22, v8);
      v23 = *((_DWORD *)qword_140F216A8 + 64 * a2 + (unsigned int)(v22 & 0x3F));
      v24 = KeGetPrcb(v23);
      v25 = v24;
      if ( PpmHeteroHgsParkingEnabled )
      {
        v26 = v9 + PpmHeteroWorkloadClasses * v23;
        if ( v11 )
          v27 = *(_BYTE *)(PpmHeteroCapability + 4 * v26 + 25);
        else
          v27 = *(_BYTE *)(PpmHeteroCapability + 4 * v26 + 24);
      }
      else if ( v11 )
      {
        v27 = *(_BYTE *)(v24 + 35337);
      }
      else
      {
        v27 = *(_BYTE *)(v24 + 35338);
      }
      if ( v27 == v12 )
        v13 |= *(_QWORD *)(v25 + 200);
      v8 &= ~*(_QWORD *)(v25 + 200);
    }
    while ( v8 );
  }
  *a3 = v12;
  return v13;
}
