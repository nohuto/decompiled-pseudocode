/*
 * XREFs of sub_14003DC50 @ 0x14003DC50
 * Callers:
 *     sub_14003D4B0 @ 0x14003D4B0 (sub_14003D4B0.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_14000D8C8 @ 0x14000D8C8 (sub_14000D8C8.c)
 *     sub_14000D9F8 @ 0x14000D9F8 (sub_14000D9F8.c)
 */

_UNKNOWN **__fastcall sub_14003DC50(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  unsigned int i; // edi
  unsigned int v6; // r9d
  int v7; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = &retaddr;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      if ( LOWORD(off_140018050->DeviceType) )
        result = (_UNKNOWN **)sub_14000D9F8((__int64)off_140018050->DeviceExtension, a2, a3, 0x6Bu, v7);
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        if ( LOWORD(off_140018050->DeviceType) )
        {
          LOBYTE(a2) = 5;
          result = (_UNKNOWN **)sub_140003D28(off_140018050->DeviceExtension, a2, 2, 108, (__int64)&unk_140012AE0);
        }
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
        {
          LOBYTE(a2) = 5;
          result = (_UNKNOWN **)sub_140003D28(off_140018050->DeviceExtension, a2, 2, 109, (__int64)&unk_140012AE0);
        }
      }
    }
    for ( i = 0; i < *(_DWORD *)(a1 + 96); ++i )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
      {
        v6 = *(_DWORD *)(32LL * i + a1 + 104);
        result = (_UNKNOWN **)sub_14000D8C8(
                                (__int64)off_140018050->DeviceExtension,
                                (v6 >> 1) & 1,
                                (v6 >> 2) & 1,
                                v6 >> 31,
                                v7);
      }
    }
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      if ( LOWORD(off_140018050->DeviceType) )
      {
        LOBYTE(a2) = 5;
        return (_UNKNOWN **)sub_140003D28(off_140018050->DeviceExtension, a2, 2, 111, (__int64)&unk_140012AE0);
      }
    }
  }
  return result;
}
