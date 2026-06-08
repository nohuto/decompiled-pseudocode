/*
 * XREFs of sub_14003EE7C @ 0x14003EE7C
 * Callers:
 *     sub_140029CA8 @ 0x140029CA8 (sub_140029CA8.c)
 *     sub_14003EAA0 @ 0x14003EAA0 (sub_14003EAA0.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_140027CB4 @ 0x140027CB4 (sub_140027CB4.c)
 *     sub_140028A34 @ 0x140028A34 (sub_140028A34.c)
 *     sub_14003EFEC @ 0x14003EFEC (sub_14003EFEC.c)
 */

__int64 __fastcall sub_14003EE7C(__int64 a1, unsigned int **a2, __int64 a3)
{
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ebx
  __int64 v10; // rdx
  unsigned int *v11; // rsi
  int v12; // eax
  unsigned int *v13; // rcx
  unsigned int *v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0LL;
  v6 = sub_14003EFEC(a1, &v14);
  v8 = v6;
  if ( v6 >= 0 )
  {
    v10 = a3;
    v11 = v14;
    v12 = sub_140027CB4(v14, v10, *(const wchar_t **)(a1 + 64));
    v8 = v12;
    if ( v12 < 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x10u);
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 3u, 0xCu, (__int64)&unk_140012BC0, v12);
      v13 = v14;
    }
    else
    {
      v8 = 0;
      sub_140028A34(v11);
      v13 = 0LL;
      *a2 = v11;
    }
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
  }
  else if ( v6 == -1073741772 )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(v7) = 4;
      sub_140003D28(off_140018050->DeviceExtension, v7, 2, 10, (__int64)&unk_140012BC0);
    }
  }
  else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0xBu, (__int64)&unk_140012BC0, v6);
  }
  return v8;
}
