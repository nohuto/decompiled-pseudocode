/*
 * XREFs of PpmParkFindOverUtilizedProcessors @ 0x1402AF768
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x1404E5250 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 */

__int64 __fastcall PpmParkFindOverUtilizedProcessors(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  unsigned int v6; // ecx
  unsigned __int64 v7; // rdx
  __int64 Prcb; // rax

  LOWORD(v2) = *(_WORD *)(a1 + 4);
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
LABEL_2:
  v6 = (unsigned __int16)v2 + 1;
  while ( 1 )
  {
    if ( v4 )
    {
      _BitScanForward64(&v7, v4);
      v4 &= ~(1LL << v7);
      Prcb = KeGetPrcb(*((unsigned int *)qword_140F22998 + 64 * (unsigned __int16)v2 + (unsigned __int8)v7));
      if ( *(_DWORD *)(Prcb + 35292) >= a2 )
        v3 |= *(_QWORD *)(Prcb + 200);
      goto LABEL_2;
    }
    v2 = (unsigned __int16)(v2 + 1);
    if ( (unsigned int)v2 >= v6 )
      return v3;
    v4 = *(_QWORD *)(8 * v2 + 8);
  }
}
