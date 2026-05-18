/*
 * XREFs of sub_1800D2818 @ 0x1800D2818
 * Callers:
 *     sub_1800281EC @ 0x1800281EC (sub_1800281EC.c)
 * Callees:
 *     sub_180029840 @ 0x180029840 (sub_180029840.c)
 *     sub_180029CE0 @ 0x180029CE0 (sub_180029CE0.c)
 */

int __fastcall sub_1800D2818(__int64 *a1)
{
  __int64 v1; // rbx
  int v2; // eax
  _Mtx_t v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *a1;
  sub_180029840((__int64)v4, *a1);
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
  return sub_180029CE0((__int64)v4);
}
