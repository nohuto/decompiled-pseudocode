/*
 * XREFs of sub_14002E0DC @ 0x14002E0DC
 * Callers:
 *     sub_1400392E0 @ 0x1400392E0 (sub_1400392E0.c)
 * Callees:
 *     sub_140009A48 @ 0x140009A48 (sub_140009A48.c)
 *     sub_14000A1EC @ 0x14000A1EC (sub_14000A1EC.c)
 *     sub_14000A340 @ 0x14000A340 (sub_14000A340.c)
 *     sub_14002FF30 @ 0x14002FF30 (sub_14002FF30.c)
 */

__int64 __fastcall sub_14002E0DC(__int64 a1, unsigned int *a2, const wchar_t *a3, _DWORD *a4)
{
  unsigned int i; // r10d
  int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+30h] [rbp-18h]
  unsigned int v13; // [rsp+38h] [rbp-10h]

  *a4 = 0;
  if ( !a1 || !a2 )
    return (unsigned int)-1073741823;
  for ( i = 1; i < *a2; ++i )
  {
    if ( a2[5 * i + 1] >= a2[5 * i - 4] || a2[5 * i + 2] > a2[5 * i - 3] )
    {
      *a4 = 2048;
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v13 = i - 1;
        v11 = i;
        sub_14000A340(
          (__int64)off_140018050->DeviceExtension,
          (__int64)a2,
          a1,
          0x11u,
          (__int64)&unk_1400145E8,
          a3,
          v11,
          v13);
      }
      return (unsigned int)-1073741823;
    }
  }
  if ( a2[1] != 100 )
  {
    *a4 = 2048;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      sub_140009A48((__int64)off_140018050->DeviceExtension, 2u, 1u, 0x12u, (__int64)&unk_1400145E8, a3);
    return (unsigned int)-1073741823;
  }
  v7 = sub_14002FF30(a1);
  if ( v7 < 0 )
  {
    *a4 = 1024;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v12 = v7;
      sub_14000A1EC((__int64)off_140018050->DeviceExtension, v9, v10, 0x13u, (__int64)&unk_1400145E8, a3, v12);
    }
  }
  return (unsigned int)v7;
}
