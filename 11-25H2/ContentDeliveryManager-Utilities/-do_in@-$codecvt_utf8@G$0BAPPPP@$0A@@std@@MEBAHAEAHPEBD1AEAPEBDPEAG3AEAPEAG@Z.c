/*
 * XREFs of ?do_in@?$codecvt_utf8@G$0BAPPPP@$0A@@std@@MEBAHAEAHPEBD1AEAPEBDPEAG3AEAPEAG@Z @ 0x180069FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::codecvt_utf8<unsigned short,1114111,0>::do_in(
        __int64 a1,
        _BYTE *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 **a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  __int64 v10; // rax
  unsigned int v11; // ebx
  unsigned __int8 *v12; // r9
  unsigned __int8 v13; // al
  unsigned int v14; // r8d
  int v15; // r10d

  v10 = a6;
  v11 = 0;
  *a5 = a3;
  for ( *a8 = a6; ; v10 = *a8 )
  {
    v12 = *a5;
    if ( *a5 == a4 || v10 == a7 )
      break;
    v13 = *v12;
    if ( *v12 >= 0x80u )
    {
      if ( v13 < 0xC0u )
      {
        *a5 = v12 + 1;
        return 2LL;
      }
      if ( v13 >= 0xE0u )
      {
        if ( v13 >= 0xF0u )
        {
          if ( v13 >= 0xF8u )
          {
            v14 = v13 & 3;
            v15 = 5 - (v13 < 0xFCu);
          }
          else
          {
            v14 = v13 & 7;
            v15 = 3;
          }
        }
        else
        {
          v14 = v13 & 0xF;
          v15 = 2;
        }
      }
      else
      {
        v14 = v13 & 0x1F;
        v15 = 1;
      }
      if ( a4 - v12 < (unsigned int)(v15 + 1) )
        break;
      while ( 1 )
      {
        *a5 = ++v12;
        if ( v15 <= 0 )
          break;
        if ( (unsigned __int8)(*v12 + 0x80) > 0x3Fu )
          return 2LL;
        v14 = (v14 << 6) | *v12 & 0x3F;
        --v15;
      }
    }
    else
    {
      v14 = *v12;
      *a5 = v12 + 1;
    }
    if ( !*a2 )
      *a2 = 1;
    if ( v14 > 0x10FFFF )
      return 2LL;
    *(_WORD *)*a8 = v14;
    *a8 += 2LL;
  }
  LOBYTE(v11) = a3 == v12;
  return v11;
}
