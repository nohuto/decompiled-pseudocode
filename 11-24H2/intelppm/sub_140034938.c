/*
 * XREFs of sub_140034938 @ 0x140034938
 * Callers:
 *     sub_140027628 @ 0x140027628 (sub_140027628.c)
 *     sub_14002FB54 @ 0x14002FB54 (sub_14002FB54.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_14000CDDC @ 0x14000CDDC (sub_14000CDDC.c)
 */

__int64 __fastcall sub_140034938(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int i; // esi
  int v6; // [rsp+20h] [rbp-28h]
  __int64 v7; // [rsp+28h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = (__int64)&retaddr;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      if ( LOWORD(off_140018050->DeviceType) )
      {
        LOBYTE(a2) = 5;
        result = sub_140003D28(off_140018050->DeviceExtension, a2, 2, 94, (__int64)&unk_140012FE8);
      }
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
      {
        LOBYTE(a2) = 5;
        result = sub_140003D28(off_140018050->DeviceExtension, a2, 2, 95, (__int64)&unk_140012FE8);
      }
    }
    for ( i = 0; i < *a1; ++i )
    {
      result = i;
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        if ( LOWORD(off_140018050->DeviceType) )
        {
          LODWORD(v7) = i;
          result = sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x60u, (__int64)&unk_140012FE8, v7);
        }
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          if ( LOWORD(off_140018050->DeviceType) )
          {
            LODWORD(v7) = a1[12 * i + 2];
            result = sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x61u, (__int64)&unk_140012FE8, v7);
          }
          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          {
            if ( LOWORD(off_140018050->DeviceType) )
            {
              LODWORD(v7) = a1[12 * i + 3];
              result = sub_1400050F8(
                         (__int64)off_140018050->DeviceExtension,
                         5u,
                         2u,
                         0x62u,
                         (__int64)&unk_140012FE8,
                         v7);
            }
            if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
            {
              if ( LOWORD(off_140018050->DeviceType) )
              {
                LODWORD(v7) = a1[12 * i + 4];
                result = sub_1400050F8(
                           (__int64)off_140018050->DeviceExtension,
                           5u,
                           2u,
                           0x63u,
                           (__int64)&unk_140012FE8,
                           v7);
              }
              if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
              {
                if ( LOWORD(off_140018050->DeviceType) )
                {
                  LODWORD(v7) = a1[12 * i + 5];
                  result = sub_1400050F8(
                             (__int64)off_140018050->DeviceExtension,
                             5u,
                             2u,
                             0x64u,
                             (__int64)&unk_140012FE8,
                             v7);
                }
                if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                {
                  if ( LOWORD(off_140018050->DeviceType) )
                  {
                    v7 = *(_QWORD *)&a1[12 * i + 6];
                    result = sub_14000CDDC((__int64)off_140018050->DeviceExtension, a2, a3, 0x65u, v6);
                  }
                  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                  {
                    if ( LOWORD(off_140018050->DeviceType) )
                    {
                      v7 = *(_QWORD *)&a1[12 * i + 8];
                      result = sub_14000CDDC((__int64)off_140018050->DeviceExtension, a2, a3, 0x66u, v6);
                    }
                    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                    {
                      if ( LOWORD(off_140018050->DeviceType) )
                      {
                        v7 = *(_QWORD *)&a1[12 * i + 10];
                        result = sub_14000CDDC((__int64)off_140018050->DeviceExtension, a2, a3, 0x67u, v6);
                      }
                      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                      {
                        if ( LOWORD(off_140018050->DeviceType) )
                        {
                          v7 = *(_QWORD *)&a1[12 * i + 12];
                          result = sub_14000CDDC((__int64)off_140018050->DeviceExtension, a2, a3, 0x68u, v6);
                        }
                        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                        {
                          if ( LOWORD(off_140018050->DeviceType) )
                          {
                            LOBYTE(a2) = 5;
                            result = sub_140003D28(off_140018050->DeviceExtension, a2, 2, 105, (__int64)&unk_140012FE8);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
