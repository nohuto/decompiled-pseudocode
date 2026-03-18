/*
 * XREFs of MiCountSystemPool @ 0x14045554C
 * Callers:
 *     MmFreeSecurePoolMemory @ 0x140671500 (MmFreeSecurePoolMemory.c)
 * Callees:
 *     MiFreeExcessSegments @ 0x1403BE140 (MiFreeExcessSegments.c)
 */

int __fastcall MiCountSystemPool(int a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  volatile signed __int64 *v4; // r9
  unsigned __int64 v5; // r8

  LODWORD(v3) = 0;
  if ( a1 == 4 )
  {
    v4 = &qword_140E2C808;
  }
  else if ( a1 == 5 )
  {
    v4 = &qword_140E37310;
  }
  else
  {
    v4 = (volatile signed __int64 *)&unk_140E2C810;
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
