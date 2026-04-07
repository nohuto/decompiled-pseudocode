/*
 * XREFs of ??9@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x18006A728
 * Callers:
 *     ?SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18002E99C (-SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator!=(float *a1, float *a2)
{
  return a1[3] != a2[3] || *a1 != *a2 || a1[1] != a2[1] || a1[2] != a2[2];
}
