/*
 * XREFs of sub_1800D26B8 @ 0x1800D26B8
 * Callers:
 *     sub_18002808C @ 0x18002808C (sub_18002808C.c)
 * Callees:
 *     sub_1800296E0 @ 0x1800296E0 (sub_1800296E0.c)
 *     sub_180029B80 @ 0x180029B80 (sub_180029B80.c)
 */

int __fastcall sub_1800D26B8(__int64 *a1)
{
  __int64 v1; // rbx
  int v2; // eax
  _Mtx_t v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *a1;
  sub_1800296E0((__int64)v4, *a1);
  while ( 1 )
  {
    if ( !*(_BYTE *)(v1 + 180) )
    {
      v2 = *(_DWORD *)(v1 + 176);
      if ( v2 != -1 )
        break;
    }
    Cnd_wait((_Cnd_t)(v1 + 104), v4[0]);
  }
  *(_DWORD *)(v1 + 176) = v2 + 1;
  return sub_180029B80((__int64)v4);
}
