/*
 * XREFs of sub_1800335C0 @ 0x1800335C0
 * Callers:
 *     sub_1800619B0 @ 0x1800619B0 (sub_1800619B0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18003189C @ 0x18003189C (sub_18003189C.c)
 *     sub_180032500 @ 0x180032500 (sub_180032500.c)
 *     sub_180032DD4 @ 0x180032DD4 (sub_180032DD4.c)
 *     sub_18006D7F0 @ 0x18006D7F0 (sub_18006D7F0.c)
 */

__int64 *__fastcall sub_1800335C0(__int64 a1, __int64 a2)
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
  v5 = sub_180032500(a1, 1);
  sub_18006D7F0(v5, 1LL);
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
  sub_180032DD4((_QWORD *)a1, v3);
  result = sub_18003189C((__int64 *)a1, &v11);
  if ( v12 )
    return (__int64 *)sub_18001060C(v12);
  return result;
}
