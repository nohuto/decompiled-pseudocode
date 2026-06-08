/*
 * XREFs of sub_140035274 @ 0x140035274
 * Callers:
 *     sub_140029CA8 @ 0x140029CA8 (sub_140029CA8.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_14002E254 @ 0x14002E254 (sub_14002E254.c)
 *     sub_1400319F0 @ 0x1400319F0 (sub_1400319F0.c)
 *     sub_140034C30 @ 0x140034C30 (sub_140034C30.c)
 */

__int64 __fastcall sub_140035274(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  int v4; // ebx
  unsigned int *v5; // rdi
  int v7; // [rsp+28h] [rbp-10h]
  int v8; // [rsp+28h] [rbp-10h]
  unsigned int *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = sub_1400319F0(a1, 1146310751, &v9);
  v4 = v2;
  if ( v2 >= 0 )
  {
    v5 = v9;
    v4 = sub_14002E254(v9, 1, *(const wchar_t **)(a1 + 64));
    if ( v4 >= 0 )
    {
      v4 = 0;
      sub_140034C30(v5, "_PSD");
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x200u);
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v8 = v4;
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0xFu, (__int64)&unk_140012BC0, v8);
      }
      v5 = v9;
    }
  }
  else
  {
    v5 = 0LL;
    if ( v2 == -1073741772 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        LOBYTE(v3) = 4;
        sub_140003D28(off_140018050->DeviceExtension, v3, 2, 13, (__int64)&unk_140012BC0);
      }
    }
    else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v7 = v2;
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0xEu, (__int64)&unk_140012BC0, v7);
    }
  }
  *(_QWORD *)(a1 + 472) = v5;
  return (unsigned int)v4;
}
