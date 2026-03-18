/*
 * XREFs of PpmIdleEvaluateConstraints @ 0x1404C1970
 * Callers:
 *     PpmIdleSelectStates @ 0x1404EA518 (PpmIdleSelectStates.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     PoAllProcessorsDeepIdle @ 0x1405CDADC (PoAllProcessorsDeepIdle.c)
 */

unsigned __int64 __fastcall PpmIdleEvaluateConstraints(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  int v4; // eax
  char v5; // al
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 34880);
  v7 = 0LL;
  *a2 = RtlGetInterruptTimePrecise(&v7);
  *(_QWORD *)(v2 + 672) = v7;
  *(_QWORD *)(v2 + 680) = *(_QWORD *)(a1 + 34904) + *(_QWORD *)(a1 + 35088);
  *(_BYTE *)(v2 + 714) = *(_BYTE *)(a1 + 35340);
  *(_BYTE *)(v2 + 712) = *(_BYTE *)(a1 + 34948);
  *(_BYTE *)(v2 + 713) = *(_BYTE *)(a1 + 34949);
  *(_BYTE *)(v2 + 715) = 1;
  if ( *(_BYTE *)(a1 + 33) && (unsigned __int8)PoAllProcessorsDeepIdle() )
  {
    *(_BYTE *)(v2 + 716) = 1;
    *(_WORD *)(v2 + 56) |= 0x80u;
  }
  else
  {
    *(_BYTE *)(v2 + 716) = 0;
  }
  if ( *(_BYTE *)(v2 + 1) )
  {
    *(_WORD *)(v2 + 56) |= 0x100u;
    v4 = *(_DWORD *)(v2 + 36);
  }
  else
  {
    v4 = -1;
  }
  *(_DWORD *)(v2 + 704) = v4;
  if ( PpmIdleRespectIdleStateMax )
  {
    v5 = BYTE6(PpmCurrentProfile[0][61 * dword_140F0BA4C + 26]);
    *(_BYTE *)(v2 + 718) = v5;
    if ( v5 )
      *(_WORD *)(v2 + 56) |= 0x4000u;
  }
  else
  {
    *(_BYTE *)(v2 + 718) = 0;
  }
  return v7;
}
