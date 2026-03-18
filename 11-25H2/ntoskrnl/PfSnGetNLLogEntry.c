/*
 * XREFs of PfSnGetNLLogEntry @ 0x1408282A0
 * Callers:
 *     PfSnLogVolumeCreate @ 0x140828048 (PfSnLogVolumeCreate.c)
 *     PfSnNameRemoveAll @ 0x1408281F8 (PfSnNameRemoveAll.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

int *__fastcall PfSnGetNLLogEntry(__int64 a1, unsigned __int8 a2, unsigned int a3, int a4, int a5)
{
  int *v7; // rsi
  int v9; // ecx
  int *result; // rax
  unsigned __int8 v11; // dl

  v7 = (int *)((a1 + 23) & 0xFFFFFFFFFFFFFFF8uLL);
  memset_0(v7, 0, a3);
  v9 = *v7;
  result = v7;
  v11 = *v7;
  v7[1] = a4;
  *v7 = v9 ^ (a2 ^ v11) & 7 ^ (v9 ^ (a2 ^ v11) & 7 ^ (8 * a3)) & 0x7FFFFFF8;
  v7[2] = a5;
  return result;
}
