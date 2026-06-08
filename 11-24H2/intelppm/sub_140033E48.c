/*
 * XREFs of sub_140033E48 @ 0x140033E48
 * Callers:
 *     sub_1400279B4 @ 0x1400279B4 (sub_1400279B4.c)
 *     sub_140031188 @ 0x140031188 (sub_140031188.c)
 *     sub_140032CB4 @ 0x140032CB4 (sub_140032CB4.c)
 *     sub_140032E50 @ 0x140032E50 (sub_140032E50.c)
 *     sub_14003E4A0 @ 0x14003E4A0 (sub_14003E4A0.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x14003F3EC (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140033E48(_BYTE *a1)
{
  unsigned __int8 v2; // r9
  char v3; // dl
  char v4; // r10
  unsigned int i; // ecx
  char result; // al
  unsigned __int8 v7; // cl
  unsigned __int8 v8; // dl

  if ( *a1 != 10 )
  {
    v2 = a1[3];
    v3 = a1[1];
    v4 = a1[2];
    for ( i = 1; i < 5; ++i )
    {
      result = i;
      if ( v2 == byte_14001381C[i] )
        return result;
    }
    v7 = 0;
    if ( v2 <= 4u )
      v7 = v2;
    if ( !v7 )
    {
      v8 = v4 + v3;
      if ( v8 > 8u )
      {
        if ( v8 > 0x10u )
          v7 = (v8 > 0x20u) + 3;
        else
          v7 = 2;
      }
      else
      {
        v7 = 1;
      }
    }
    result = byte_14001381C[v7];
    a1[3] = result;
  }
  return result;
}
