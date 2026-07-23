/*
 * XREFs of MiCountSystemPool @ 0x14044A3E0
 * Callers:
 *     MmFreeSecurePoolMemory @ 0x14067DEA0 (MmFreeSecurePoolMemory.c)
 * Callees:
 *     MiFreeExcessSegments @ 0x14034B7B0 (MiFreeExcessSegments.c)
 */

int __fastcall MiCountSystemPool(int a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  volatile signed __int64 *v4; // r9
  unsigned __int64 v5; // r8

  LODWORD(v3) = 0;
  if ( a1 == 4 )
  {
    v4 = &qword_140E2CB88;
  }
  else if ( a1 == 5 )
  {
    v4 = &qword_140E37690;
  }
  else
  {
    v4 = (volatile signed __int64 *)&unk_140E2CB90;
    if ( a1 != 14 )
      v4 = 0LL;
  }
  if ( a3 )
  {
    v5 = a2 + _InterlockedExchangeAdd64(v4, a2);
    if ( a1 == 4 )
    {
      v3 = (*(_QWORD *)&MiState - v5) & -(__int64)(v5 < *(_QWORD *)&MiState);
      if ( v3 < 0x300 )
        LODWORD(v3) = MiFreeExcessSegments(0LL);
    }
  }
  else
  {
    _InterlockedExchangeAdd64(v4, -(__int64)a2);
  }
  return v3;
}
