/*
 * XREFs of sub_14003A5F4 @ 0x14003A5F4
 * Callers:
 *     sub_140005640 @ 0x140005640 (sub_140005640.c)
 *     sub_140046FD0 @ 0x140046FD0 (sub_140046FD0.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140046234 @ 0x140046234 (sub_140046234.c)
 */

__int64 __fastcall sub_14003A5F4(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // rbx
  int v9; // [rsp+28h] [rbp-50h]
  __int64 v10; // [rsp+28h] [rbp-50h]
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+40h] [rbp-38h] BYREF
  __m128i v13; // [rsp+50h] [rbp-28h]

  v3 = a3;
  v12 = 0LL;
  v13 = 0LL;
  if ( qword_140019448 && !a3 )
  {
    v6 = qword_140019448(&v12);
    if ( v6 >= 0 )
    {
      *(_OWORD *)(a1 + 1224) = v12;
    }
    else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v9 = v6;
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 3u, 0x20u, (__int64)&unk_140014B60, v9);
    }
  }
  v13 = xmmword_140019A70[v3];
  result = (unsigned __int8)_mm_cvtsi128_si32(v13);
  if ( (unsigned __int8)result + (unsigned __int8)v12 )
  {
    v8 = 0LL;
    v11 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= 2 )
      {
        *(_OWORD *)(a2 + 16 * v3 + 8) = v11;
        return result;
      }
      result = sub_140046234(a1, v8, a3, (unsigned int)&v12, (__int64)&v11 + 8 * v8, v3);
      if ( (int)result < 0 )
        break;
      v8 = (unsigned int)(v8 + 1);
    }
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LODWORD(v10) = result;
      return sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 3u, 0x21u, (__int64)&unk_140014B60, v10);
    }
  }
  return result;
}
