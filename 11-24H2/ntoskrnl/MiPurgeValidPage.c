/*
 * XREFs of MiPurgeValidPage @ 0x14046B8C8
 * Callers:
 *     MiPurgeSubsection @ 0x140204780 (MiPurgeSubsection.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiPurgeValidPage(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r9
  unsigned __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  v3 = (a2 >> 12) & 0xFFFFFFFFFFLL;
  v4 = 48 * v3 - 0x220000000000LL;
  result = *(unsigned int *)(v4 + 32);
  if ( (unsigned __int16)result > 2u )
    ++*(_QWORD *)(a3 + 24);
  if ( (v3 & 0x1FF) == 0 )
  {
    v6 = *(_QWORD *)v4;
    v7 = *(_QWORD *)(a3 + 16) >> 3;
    *(_QWORD *)(a3 + 16) = v4;
    v8 = v6 ^ v7;
    result = 0xFFFFF00000000001uLL;
    *(_QWORD *)v4 = v7 ^ v8 & 0xFFFFF00000000001uLL;
  }
  return result;
}
