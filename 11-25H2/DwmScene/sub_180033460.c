/*
 * XREFs of sub_180033460 @ 0x180033460
 * Callers:
 *     sub_180061850 @ 0x180061850 (sub_180061850.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18003173C @ 0x18003173C (sub_18003173C.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_180032C74 @ 0x180032C74 (sub_180032C74.c)
 *     sub_18006D690 @ 0x18006D690 (sub_18006D690.c)
 */

__int64 *__fastcall sub_180033460(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v5; // rax
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 *result; // rax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  v3 = 1;
  v5 = sub_1800323A0(a1, 1);
  sub_18006D690(v5, 1LL);
  v6 = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 696) = v6;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            v3 = 3;
          else
            v3 = 0;
        }
      }
      else
      {
        v3 = 2;
      }
    }
  }
  sub_180032C74((_QWORD *)a1, v3);
  result = sub_18003173C((__int64 *)a1, &v11);
  if ( v12 )
    return (__int64 *)sub_18001050C(v12);
  return result;
}
