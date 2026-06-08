/*
 * XREFs of sub_140034C30 @ 0x140034C30
 * Callers:
 *     sub_140035274 @ 0x140035274 (sub_140035274.c)
 *     sub_1400353C8 @ 0x1400353C8 (sub_1400353C8.c)
 * Callees:
 *     sub_140003BC4 @ 0x140003BC4 (sub_140003BC4.c)
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_14000CC98 @ 0x14000CC98 (sub_14000CC98.c)
 *     sub_140034F14 @ 0x140034F14 (sub_140034F14.c)
 */

void __fastcall sub_140034C30(unsigned int *a1, const char *a2)
{
  const char *v2; // rdi
  unsigned int i; // edi
  const char *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-38h]

  if ( a1 )
  {
    v2 = a2;
    if ( a2 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        if ( LOWORD(off_140018050->DeviceType) )
        {
          LOBYTE(a2) = 5;
          sub_140003D28(off_140018050->DeviceExtension, (_DWORD)a2, 2, 120, (__int64)&unk_140012FE8);
        }
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          if ( LOWORD(off_140018050->DeviceType) )
            sub_140003BC4((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x79u, (__int64)&unk_140012FE8, v2);
          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          {
            if ( LOWORD(off_140018050->DeviceType) )
              sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x7Au, (__int64)&unk_140012FE8);
            if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
            {
              LOBYTE(a2) = 5;
              sub_140003D28(off_140018050->DeviceExtension, (_DWORD)a2, 2, 123, (__int64)&unk_140012FE8);
            }
          }
        }
      }
      for ( i = 0; i < *a1; ++i )
      {
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          if ( LOWORD(off_140018050->DeviceType) )
            sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x7Cu, (__int64)&unk_140012FE8);
          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          {
            if ( LOWORD(off_140018050->DeviceType) )
              sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x7Du, (__int64)&unk_140012FE8);
            if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
            {
              if ( LOWORD(off_140018050->DeviceType) )
                sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x7Eu, (__int64)&unk_140012FE8);
              if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
              {
                if ( LOWORD(off_140018050->DeviceType) )
                  sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x7Fu, (__int64)&unk_140012FE8);
                if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                {
                  if ( LOWORD(off_140018050->DeviceType) )
                  {
                    v5 = (const char *)sub_140034F14(a1[5 * i + 4]);
                    sub_14000CC98(*(_QWORD *)(v6 + 64), v7, v6, 0x80u, v8, v7, v5);
                  }
                  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                  {
                    if ( LOWORD(off_140018050->DeviceType) )
                      sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x81u, (__int64)&unk_140012FE8);
                    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                    {
                      if ( LOWORD(off_140018050->DeviceType) )
                      {
                        LOBYTE(a2) = 5;
                        sub_140003D28(off_140018050->DeviceExtension, (_DWORD)a2, 2, 130, (__int64)&unk_140012FE8);
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
