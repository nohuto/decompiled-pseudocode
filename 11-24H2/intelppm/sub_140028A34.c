/*
 * XREFs of sub_140028A34 @ 0x140028A34
 * Callers:
 *     sub_14003EE7C @ 0x14003EE7C (sub_14003EE7C.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_14000CC98 @ 0x14000CC98 (sub_14000CC98.c)
 *     sub_140034F14 @ 0x140034F14 (sub_140034F14.c)
 */

void __fastcall sub_140028A34(unsigned int *a1)
{
  unsigned int i; // edi
  const char *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-38h]

  if ( a1 )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      if ( LOWORD(off_140018050->DeviceType) )
        sub_140003D28(off_140018050->DeviceExtension, 5, 2, 141, (__int64)&unk_140012FE8);
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        if ( LOWORD(off_140018050->DeviceType) )
          sub_140003D28(off_140018050->DeviceExtension, 5, 2, 142, (__int64)&unk_140012FE8);
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          if ( LOWORD(off_140018050->DeviceType) )
            sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x8Fu, (__int64)&unk_140012FE8);
          if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
            sub_140003D28(off_140018050->DeviceExtension, 5, 2, 144, (__int64)&unk_140012FE8);
        }
      }
    }
    for ( i = 0; i < *a1; ++i )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        if ( LOWORD(off_140018050->DeviceType) )
          sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x91u, (__int64)&unk_140012FE8);
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          if ( LOWORD(off_140018050->DeviceType) )
            sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x92u, (__int64)&unk_140012FE8);
          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          {
            if ( LOWORD(off_140018050->DeviceType) )
              sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x93u, (__int64)&unk_140012FE8);
            if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
            {
              if ( LOWORD(off_140018050->DeviceType) )
                sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x94u, (__int64)&unk_140012FE8);
              if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
              {
                if ( LOWORD(off_140018050->DeviceType) )
                {
                  v3 = (const char *)sub_140034F14(a1[6 * i + 4]);
                  sub_14000CC98(*(_QWORD *)(v4 + 64), v5, v4, 0x95u, v6, v5, v3);
                }
                if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                {
                  if ( LOWORD(off_140018050->DeviceType) )
                    sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x96u, (__int64)&unk_140012FE8);
                  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                  {
                    if ( LOWORD(off_140018050->DeviceType) )
                      sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x97u, (__int64)&unk_140012FE8);
                    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                    {
                      if ( LOWORD(off_140018050->DeviceType) )
                        sub_140003D28(off_140018050->DeviceExtension, 5, 2, 152, (__int64)&unk_140012FE8);
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
