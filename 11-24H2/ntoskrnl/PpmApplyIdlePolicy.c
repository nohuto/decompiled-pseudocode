/*
 * XREFs of PpmApplyIdlePolicy @ 0x1404372F8
 * Callers:
 *     PpmResetIdlePolicy @ 0x1404372B8 (PpmResetIdlePolicy.c)
 * Callees:
 *     PpmConvertTimeFrom @ 0x140437360 (PpmConvertTimeFrom.c)
 */

__int64 __fastcall PpmApplyIdlePolicy(_BYTE *a1)
{
  __int64 *v1; // r9
  unsigned __int64 v2; // r8
  char v3; // dl
  char v4; // al
  __int64 result; // rax
  __int64 v6; // r11

  v1 = PpmCurrentProfile[0];
  v2 = 61LL * dword_140F0B38C;
  a1[72] = BYTE4(PpmCurrentProfile[0][v2 + 25]);
  v3 = BYTE4(v1[v2 + 26]);
  a1[71] = v3;
  v4 = BYTE5(v1[v2 + 26]);
  a1[69] = v3;
  a1[70] = v4;
  a1[68] = v4;
  result = PpmConvertTimeFrom(LODWORD(v1[v2 + 26]), 1000000LL);
  *(_DWORD *)(v6 + 708) = result;
  return result;
}
