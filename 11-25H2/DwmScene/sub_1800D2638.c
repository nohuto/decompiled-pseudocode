/*
 * XREFs of sub_1800D2638 @ 0x1800D2638
 * Callers:
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 * Callees:
 *     sub_1800296E0 @ 0x1800296E0 (sub_1800296E0.c)
 *     sub_180029B80 @ 0x180029B80 (sub_180029B80.c)
 */

int __fastcall sub_1800D2638(__int64 *a1)
{
  __int64 v1; // rbx
  _Mtx_t v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *a1;
  sub_1800296E0((__int64)v3, *a1);
  while ( *(_BYTE *)(v1 + 180) )
    Cnd_wait((_Cnd_t)(v1 + 104), v3[0]);
  *(_BYTE *)(v1 + 180) = 1;
  while ( *(_DWORD *)(v1 + 176) )
    Cnd_wait((_Cnd_t)(v1 + 32), v3[0]);
  return sub_180029B80((__int64)v3);
}
