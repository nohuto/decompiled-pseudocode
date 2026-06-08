/*
 * XREFs of sub_140034388 @ 0x140034388
 * Callers:
 *     sub_1400327D4 @ 0x1400327D4 (sub_1400327D4.c)
 *     sub_1400470A0 @ 0x1400470A0 (sub_1400470A0.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_140005F24 @ 0x140005F24 (sub_140005F24.c)
 *     sub_140009A48 @ 0x140009A48 (sub_140009A48.c)
 *     sub_14000CB40 @ 0x14000CB40 (sub_14000CB40.c)
 *     sub_14000CDDC @ 0x14000CDDC (sub_14000CDDC.c)
 *     sub_140028380 @ 0x140028380 (sub_140028380.c)
 */

_UNKNOWN **__fastcall sub_140034388(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  const wchar_t *v5; // rdi
  unsigned int i; // esi
  __int64 v8; // rdi
  int v9; // edx
  struct _DEVICE_OBJECT *v10; // r8
  __int64 v11; // r9
  int v12; // edx
  struct _DEVICE_OBJECT *v13; // r8
  __int64 v14; // r9
  int v15; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = &retaddr;
    v5 = (const wchar_t *)a2;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      if ( LOWORD(off_140018050->DeviceType) )
      {
        LOBYTE(a2) = 5;
        result = (_UNKNOWN **)sub_140003D28(off_140018050->DeviceExtension, a2, 2, 168, (__int64)&unk_140012FE8);
      }
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        if ( LOWORD(off_140018050->DeviceType) )
          result = (_UNKNOWN **)sub_140009A48(
                                  (__int64)off_140018050->DeviceExtension,
                                  5u,
                                  2u,
                                  0xA9u,
                                  (__int64)&unk_140012FE8,
                                  v5);
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          if ( LOWORD(off_140018050->DeviceType) )
            result = (_UNKNOWN **)sub_1400050F8(
                                    (__int64)off_140018050->DeviceExtension,
                                    5u,
                                    2u,
                                    0xAAu,
                                    (__int64)&unk_140012FE8);
          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          {
            if ( LOWORD(off_140018050->DeviceType) )
              result = (_UNKNOWN **)sub_1400050F8(
                                      (__int64)off_140018050->DeviceExtension,
                                      5u,
                                      2u,
                                      0xABu,
                                      (__int64)&unk_140012FE8);
            if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
            {
              if ( LOWORD(off_140018050->DeviceType) )
                result = (_UNKNOWN **)sub_14000CDDC(
                                        (__int64)off_140018050->DeviceExtension,
                                        a2,
                                        (__int64)a3,
                                        0xACu,
                                        v15);
              if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
              {
                LOBYTE(a2) = 5;
                result = (_UNKNOWN **)sub_140003D28(off_140018050->DeviceExtension, a2, 2, 173, (__int64)&unk_140012FE8);
              }
            }
          }
        }
      }
    }
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
    {
      v8 = 80LL * i;
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        if ( LOWORD(off_140018050->DeviceType) )
          sub_14000CB40(
            (__int64)off_140018050->DeviceExtension,
            a2,
            (__int64)a3,
            a4,
            v15,
            i,
            *(const wchar_t **)(v8 + a1 + 96));
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          if ( LOWORD(off_140018050->DeviceType) )
            sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0xAFu, (__int64)&unk_140012FE8);
          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          {
            if ( LOWORD(off_140018050->DeviceType) )
              sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0xB0u, (__int64)&unk_140012FE8);
            if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
            {
              if ( LOWORD(off_140018050->DeviceType) )
                sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0xB1u, (__int64)&unk_140012FE8);
              if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
              {
                if ( LOWORD(off_140018050->DeviceType) )
                  sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0xB2u, (__int64)&unk_140012FE8);
                if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                {
                  if ( LOWORD(off_140018050->DeviceType) )
                    sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0xB3u, (__int64)&unk_140012FE8);
                  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                  {
                    if ( LOWORD(off_140018050->DeviceType) )
                      sub_140005F24((__int64)off_140018050->DeviceExtension, 5u, 2u, 0xB4u, (__int64)&unk_140012FE8);
                    if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
                    {
                      LOBYTE(a2) = 5;
                      sub_140003D28(off_140018050->DeviceExtension, a2, 2, 181, (__int64)&unk_140012FE8);
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_140028380((unsigned __int8 *)(v8 + a1 + 48), "    ", a3, a4);
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
      {
        LOBYTE(v9) = 5;
        sub_140003D28(off_140018050->DeviceExtension, v9, 2, 182, (__int64)&unk_140012FE8);
      }
      sub_140028380((unsigned __int8 *)(v8 + a1 + 60), "    ", v10, v11);
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
      {
        LOBYTE(v12) = 5;
        sub_140003D28(off_140018050->DeviceExtension, v12, 2, 183, (__int64)&unk_140012FE8);
      }
      result = (_UNKNOWN **)sub_140028380((unsigned __int8 *)(v8 + a1 + 72), "    ", v13, v14);
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        if ( LOWORD(off_140018050->DeviceType) )
        {
          LOBYTE(a2) = 5;
          result = (_UNKNOWN **)sub_140003D28(off_140018050->DeviceExtension, a2, 2, 184, (__int64)&unk_140012FE8);
        }
      }
    }
  }
  return result;
}
