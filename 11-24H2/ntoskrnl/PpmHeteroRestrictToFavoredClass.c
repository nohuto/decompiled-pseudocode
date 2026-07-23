/*
 * XREFs of PpmHeteroRestrictToFavoredClass @ 0x1402AF330
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x140328B7C (PpmParkComputeUnparkMask.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
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
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int8 v22; // dl
  unsigned __int8 v23; // cl
  unsigned __int64 v24; // rcx
  unsigned int v25; // esi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rsi
  char v30; // al

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
      v17 = *((_DWORD *)qword_140F22998 + v15 + (unsigned int)(v16 & 0x3F));
      Prcb = KeGetPrcb(v17);
      v19 = Prcb;
      if ( PpmHeteroHgsParkingEnabled )
      {
        v20 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
        v21 = v9 + PpmHeteroWorkloadClasses * v17;
        if ( v11 )
          v22 = *(_BYTE *)(v20 + 4 * v21 + 25);
        else
          v22 = *(_BYTE *)(v20 + 4 * v21 + 24);
      }
      else if ( v11 )
      {
        v22 = *(_BYTE *)(Prcb + 35337);
      }
      else
      {
        v22 = *(_BYTE *)(Prcb + 35338);
      }
      v23 = v12;
      if ( v12 <= v22 )
        v23 = v22;
      v12 = v23;
      v14 &= ~*(_QWORD *)(v19 + 200);
    }
    while ( v14 );
    do
    {
      _BitScanForward64(&v24, v8);
      v25 = *((_DWORD *)qword_140F22998 + 64 * a2 + (unsigned int)(v24 & 0x3F));
      v26 = KeGetPrcb(v25);
      v27 = v26;
      if ( PpmHeteroHgsParkingEnabled )
      {
        v28 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
        v29 = v9 + PpmHeteroWorkloadClasses * v25;
        if ( v11 )
          v30 = *(_BYTE *)(v28 + 4 * v29 + 25);
        else
          v30 = *(_BYTE *)(v28 + 4 * v29 + 24);
      }
      else if ( v11 )
      {
        v30 = *(_BYTE *)(v26 + 35337);
      }
      else
      {
        v30 = *(_BYTE *)(v26 + 35338);
      }
      if ( v30 == v12 )
        v13 |= *(_QWORD *)(v27 + 200);
      v8 &= ~*(_QWORD *)(v27 + 200);
    }
    while ( v8 );
  }
  *a3 = v12;
  return v13;
}
