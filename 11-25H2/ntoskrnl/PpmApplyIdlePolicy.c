/*
 * XREFs of PpmApplyIdlePolicy @ 0x1403E7BC8
 * Callers:
 *     PpmResetIdlePolicy @ 0x1403E7B88 (PpmResetIdlePolicy.c)
 * Callees:
 *     PpmConvertTimeFrom @ 0x1403E7C34 (PpmConvertTimeFrom.c)
 */

__int64 __fastcall PpmApplyIdlePolicy(__int64 *a1)
{
  __int64 *v1; // r9
  __int64 v2; // rbx
  unsigned __int64 v3; // r8
  char v4; // dl
  char v5; // al
  __int64 result; // rax

  v1 = PpmCurrentProfile[0];
  v2 = *a1;
  v3 = 61LL * dword_140F0B70C;
  *((_BYTE *)a1 + 72) = BYTE4(PpmCurrentProfile[0][v3 + 25]);
  v4 = BYTE4(v1[v3 + 26]);
  *((_BYTE *)a1 + 71) = v4;
  v5 = BYTE5(v1[v3 + 26]);
  *((_BYTE *)a1 + 69) = v4;
  *((_BYTE *)a1 + 70) = v5;
  *((_BYTE *)a1 + 68) = v5;
  result = PpmConvertTimeFrom(LODWORD(v1[v3 + 26]), 1000000LL);
  *(_DWORD *)(v2 + 708) = result;
  return result;
}
