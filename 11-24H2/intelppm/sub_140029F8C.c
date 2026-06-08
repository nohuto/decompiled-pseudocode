/*
 * XREFs of sub_140029F8C @ 0x140029F8C
 * Callers:
 *     sub_140046CC4 @ 0x140046CC4 (sub_140046CC4.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_140028380 @ 0x140028380 (sub_140028380.c)
 */

_UNKNOWN **__fastcall sub_140029F8C(int *a1, __int64 a2, struct _DEVICE_OBJECT *a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  unsigned int i; // ebx
  unsigned __int8 *v7; // rsi
  __int64 v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+28h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = &retaddr;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      if ( LOWORD(off_140018050->DeviceType) )
        result = (_UNKNOWN **)sub_140003D28(off_140018050->DeviceExtension, 5, 2, 131, (__int64)&unk_140012FE8);
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        if ( LOWORD(off_140018050->DeviceType) )
          result = (_UNKNOWN **)sub_140003D28(off_140018050->DeviceExtension, 5, 2, 132, (__int64)&unk_140012FE8);
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          if ( LOWORD(off_140018050->DeviceType) )
          {
            v9 = *a1;
            result = (_UNKNOWN **)sub_1400050F8(
                                    (__int64)off_140018050->DeviceExtension,
                                    5u,
                                    2u,
                                    0x85u,
                                    (__int64)&unk_140012FE8,
                                    v9);
          }
          if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
            result = (_UNKNOWN **)sub_140003D28(off_140018050->DeviceExtension, 5, 2, 134, (__int64)&unk_140012FE8);
        }
      }
    }
    for ( i = 0; i < *a1; ++i )
    {
      v7 = (unsigned __int8 *)&a1[5 * i];
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        if ( LOWORD(off_140018050->DeviceType) )
        {
          LODWORD(v8) = i;
          sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x87u, (__int64)&unk_140012FE8, v8);
        }
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          if ( LOWORD(off_140018050->DeviceType) )
          {
            LODWORD(v8) = v7[16];
            sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x88u, (__int64)&unk_140012FE8, v8);
          }
          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          {
            if ( LOWORD(off_140018050->DeviceType) )
            {
              LODWORD(v8) = *((unsigned __int16 *)v7 + 9);
              sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x89u, (__int64)&unk_140012FE8, v8);
            }
            if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
            {
              if ( LOWORD(off_140018050->DeviceType) )
              {
                LODWORD(v8) = *((_DWORD *)v7 + 5);
                sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x8Au, (__int64)&unk_140012FE8, v8);
              }
              if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
                sub_140003D28(off_140018050->DeviceExtension, 5, 2, 139, (__int64)&unk_140012FE8);
            }
          }
        }
      }
      result = (_UNKNOWN **)sub_140028380(v7 + 4, "    ", a3, a4);
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        if ( LOWORD(off_140018050->DeviceType) )
          result = (_UNKNOWN **)sub_140003D28(off_140018050->DeviceExtension, 5, 2, 140, (__int64)&unk_140012FE8);
      }
    }
  }
  return result;
}
