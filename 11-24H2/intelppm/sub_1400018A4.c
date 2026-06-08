/*
 * XREFs of sub_1400018A4 @ 0x1400018A4
 * Callers:
 *     sub_14000170C @ 0x14000170C (sub_14000170C.c)
 *     sub_140001C20 @ 0x140001C20 (sub_140001C20.c)
 *     sub_140002040 @ 0x140002040 (sub_140002040.c)
 *     sub_140009530 @ 0x140009530 (sub_140009530.c)
 * Callees:
 *     sub_140001990 @ 0x140001990 (sub_140001990.c)
 */

__int64 __fastcall sub_1400018A4(__int64 a1)
{
  unsigned int v2; // r10d
  int v3; // r8d
  unsigned __int8 *v4; // rax
  char v6; // dl
  unsigned __int8 *v7; // rax

  if ( *(_BYTE *)a1 )
  {
    if ( *(_BYTE *)a1 == 10 )
    {
      v2 = *(unsigned __int8 *)(a1 + 1) + *(unsigned __int8 *)(a1 + 2);
      if ( v2 <= 8 )
      {
        v3 = 8;
      }
      else if ( v2 <= 0x10 )
      {
        v3 = 16;
      }
      else
      {
        v3 = 64;
        if ( v2 <= 0x20 )
          v3 = 32;
      }
      v4 = (unsigned __int8 *)(*(_QWORD *)(a1 + 4) + *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL));
      switch ( v3 )
      {
        case 8:
          return *v4;
        case 16:
          return *(unsigned __int16 *)v4;
        case 32:
          return *(unsigned int *)v4;
      }
      return *(_QWORD *)v4;
    }
    else
    {
      return sub_140001990(a1, 0LL);
    }
  }
  else
  {
    v6 = *(_BYTE *)(a1 + 3);
    v7 = *(unsigned __int8 **)(a1 + 16);
    switch ( v6 )
    {
      case 8:
        return *v7;
      case 16:
        return *(unsigned __int16 *)v7;
      case 32:
        return *(unsigned int *)v7;
      case 64:
        return *(_QWORD *)v7;
      default:
        return 0LL;
    }
  }
}
