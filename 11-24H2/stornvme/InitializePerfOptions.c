/*
 * XREFs of InitializePerfOptions @ 0x14001A1B0
 * Callers:
 *     NVMeControllerInitPart2 @ 0x140007440 (NVMeControllerInitPart2.c)
 * Callees:
 *     <none>
 */

char __fastcall InitializePerfOptions(__int64 a1)
{
  bool v1; // zf
  __int16 v4; // cx
  int v5; // ecx
  __int64 v6; // rax
  _OWORD v7[3]; // [rsp+20h] [rbp-30h] BYREF

  v1 = *(_BYTE *)(a1 + 20) == 0;
  memset((char *)v7 + 8, 0, 32);
  if ( !v1 )
    return 1;
  *(_QWORD *)&v7[0] = 0x2800000008LL;
  if ( (unsigned int)StorPortExtendedFunction(14LL, a1, 1LL, v7) )
    return 0;
  v4 = WORD4(v7[0]);
  if ( (BYTE8(v7[0]) & 1) == 0 || (BYTE8(v7[0]) & 2) == 0 || (BYTE8(v7[0]) & 4) == 0 || (BYTE8(v7[0]) & 8) == 0 )
    return 0;
  if ( (BYTE8(v7[0]) & 0x40) == 0 )
    *(_DWORD *)(a1 + 56) &= ~8u;
  if ( (v4 & 0x800) != 0 )
    *(_DWORD *)(a1 + 4064) |= 0x800u;
  v1 = (*(_BYTE *)(a1 + 56) & 8) == 0;
  *(_QWORD *)&v7[2] = 0LL;
  v5 = 15;
  v7[0] = 0x2800000008uLL;
  if ( !v1 )
    v5 = 79;
  v1 = (*(_DWORD *)(a1 + 108) & 0x200) == 0;
  v7[1] = 0LL;
  if ( !v1 )
    v5 |= 0x80u;
  if ( *(_WORD *)(a1 + 272) <= 1u )
  {
    *(_QWORD *)&v7[1] = 0LL;
  }
  else
  {
    DWORD1(v7[1]) = *(unsigned __int16 *)(a1 + 332);
    LODWORD(v7[1]) = 1;
  }
  HIDWORD(v7[0]) = *(unsigned __int16 *)(a1 + 234);
  v6 = *(_QWORD *)(a1 + 288);
  DWORD2(v7[0]) = v5 | 0x100;
  *(_QWORD *)&v7[2] = v6;
  if ( (unsigned int)StorPortExtendedFunction(14LL, a1, 0LL, v7) )
    return 0;
  *(_DWORD *)(a1 + 244) = DWORD2(v7[1]);
  return 1;
}
