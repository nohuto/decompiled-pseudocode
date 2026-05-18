/*
 * XREFs of sub_1800D2798 @ 0x1800D2798
 * Callers:
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 * Callees:
 *     sub_180029840 @ 0x180029840 (sub_180029840.c)
 *     sub_180029CE0 @ 0x180029CE0 (sub_180029CE0.c)
 */

int __fastcall sub_1800D2798(__int64 *a1)
{
  __int64 v1; // rbx
  _Mtx_t v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *a1;
  sub_180029840((__int64)v3, *a1);
  while ( *(_BYTE *)(v1 + 180) )
    Cnd_wait((_Cnd_t)(v1 + 104), v3[0]);
  *(_BYTE *)(v1 + 180) = 1;
  while ( *(_DWORD *)(v1 + 176) )
    Cnd_wait((_Cnd_t)(v1 + 32), v3[0]);
  return sub_180029CE0((__int64)v3);
}
