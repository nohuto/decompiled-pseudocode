/*
 * XREFs of sub_1400046C0 @ 0x1400046C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000480C @ 0x14000480C (sub_14000480C.c)
 *     sub_14000629C @ 0x14000629C (sub_14000629C.c)
 *     sub_14000EB14 @ 0x14000EB14 (sub_14000EB14.c)
 *     sub_14000EBBC @ 0x14000EBBC (sub_14000EBBC.c)
 *     sub_14000ECE0 @ 0x14000ECE0 (sub_14000ECE0.c)
 *     sub_14003C338 @ 0x14003C338 (sub_14003C338.c)
 */

__int64 __fastcall sub_1400046C0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  *a7 = 0LL;
  v7 = *a2 - 0x4C2E4BF329181FA1LL;
  if ( *a2 == 0x4C2E4BF329181FA1LL )
    v7 = a2[1] - 0x2B3226D2A614B3LL;
  if ( !v7 )
    return sub_14000629C();
  v8 = *a2 - 0x4908AB2038BD8901LL;
  if ( *a2 == 0x4908AB2038BD8901LL )
    v8 = a2[1] + 0xC20B498CB535555LL;
  if ( v8 )
  {
    v9 = *a2 - 0x4EB83E7FE1500736LL;
    if ( *a2 == 0x4EB83E7FE1500736LL )
      v9 = a2[1] - 0x75DF4ECD54F41390LL;
    if ( v9 )
    {
      v10 = *a2 - 0x4D18F2D0D3DC1B9DLL;
      if ( *a2 == 0x4D18F2D0D3DC1B9DLL )
        v10 = a2[1] + 0x1F5D3FF9D3A0104ALL;
      if ( v10 )
      {
        v12 = *a2 - 0x494F1DD600A19FE5LL;
        if ( *a2 == 0x494F1DD600A19FE5LL )
          v12 = a2[1] - 0x675F29E0044F469DLL;
        if ( v12 )
        {
          v13 = *a2 - 0x4F2E06FA1BC4B44FLL;
          if ( *a2 == 0x4F2E06FA1BC4B44FLL )
            v13 = a2[1] + 0x110FDBF6BB757249LL;
          if ( v13 )
            return 3221225659LL;
          if ( a4 >= 0xC )
            return sub_14000ECE0(a1, a3);
        }
        else if ( a4 >= 0xC )
        {
          return sub_14000EBBC(a1, a3);
        }
      }
      else if ( a4 >= 0xC )
      {
        return sub_14000480C(a1, a3);
      }
    }
    else if ( a4 >= 0xC )
    {
      return sub_14000EB14(a1, a3);
    }
    return 3221225507LL;
  }
  else if ( a6 >= 0x10 )
  {
    result = sub_14003C338(a1, a5);
    if ( (int)result < 0 )
      *a7 = 0LL;
  }
  else
  {
    *a7 = 16LL;
    return 3221225626LL;
  }
  return result;
}
