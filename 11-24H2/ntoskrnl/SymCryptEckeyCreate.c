/*
 * XREFs of SymCryptEckeyCreate @ 0x140522D3C
 * Callers:
 *     SymCryptEckeyAllocate @ 0x140522CE8 (SymCryptEckeyAllocate.c)
 * Callees:
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x140522408 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptIntCreate @ 0x140523844 (SymCryptIntCreate.c)
 *     SymCryptSizeofIntFromDigits @ 0x140523FFC (SymCryptSizeofIntFromDigits.c)
 *     SymCryptEcpointCreate @ 0x14052A980 (SymCryptEcpointCreate.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x14052B2D0 (SymCryptSizeofEcpointFromCurve.c)
 */

__int64 __fastcall SymCryptEckeyCreate(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebp
  __int64 v6; // rdi
  unsigned int v7; // eax
  unsigned int v8; // ebx

  v5 = SymCryptEcurveDigitsofScalarMultiplier(a3);
  v6 = (unsigned int)SymCryptSizeofEcpointFromCurve(a3);
  v7 = SymCryptSizeofIntFromDigits(v5);
  *(_DWORD *)a1 = 0;
  v8 = v7;
  *(_BYTE *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = SymCryptEcpointCreate(a1 + 64, (unsigned int)v6, a3);
  *(_QWORD *)(a1 + 24) = SymCryptIntCreate(v6 + a1 + 64, v8, v5);
  return a1;
}
