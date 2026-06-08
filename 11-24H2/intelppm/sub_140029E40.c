/*
 * XREFs of sub_140029E40 @ 0x140029E40
 * Callers:
 *     sub_14000DAA4 @ 0x14000DAA4 (sub_14000DAA4.c)
 *     sub_1400359D0 @ 0x1400359D0 (sub_1400359D0.c)
 *     sub_1400373A8 @ 0x1400373A8 (sub_1400373A8.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_14000D9F8 @ 0x14000D9F8 (sub_14000D9F8.c)
 */

__int64 __fastcall sub_140029E40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-18h]
  __int64 v6; // [rsp+28h] [rbp-10h]

  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    if ( LOWORD(off_140018050->DeviceType) )
    {
      HIDWORD(v6) = HIDWORD(a1);
      result = sub_14000D9F8((__int64)off_140018050->DeviceExtension, a2, a3, 0x66u, v5);
    }
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      if ( LOWORD(off_140018050->DeviceType) )
      {
        LODWORD(v6) = *(unsigned __int16 *)(a1 + 4);
        result = sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x67u, (__int64)&unk_140012AE0, v6);
      }
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        if ( LOWORD(off_140018050->DeviceType) )
        {
          LODWORD(v6) = *(_DWORD *)(a1 + 16);
          result = sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x68u, (__int64)&unk_140012AE0, v6);
        }
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          if ( LOWORD(off_140018050->DeviceType) )
          {
            LODWORD(v6) = *(_DWORD *)(a1 + 20);
            result = sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x69u, (__int64)&unk_140012AE0, v6);
          }
          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          {
            if ( LOWORD(off_140018050->DeviceType) )
            {
              LOBYTE(a2) = 5;
              return sub_140003D28(off_140018050->DeviceExtension, a2, 2, 106, (__int64)&unk_140012AE0);
            }
          }
        }
      }
    }
  }
  return result;
}
