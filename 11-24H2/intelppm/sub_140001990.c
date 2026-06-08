/*
 * XREFs of sub_140001990 @ 0x140001990
 * Callers:
 *     sub_1400018A4 @ 0x1400018A4 (sub_1400018A4.c)
 *     sub_140001A70 @ 0x140001A70 (sub_140001A70.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140001990(__int64 a1)
{
  __int64 v1; // r8
  char v2; // dl
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 4);
  v2 = *(_BYTE *)(a1 + 3);
  if ( *(_BYTE *)a1 == 1 )
  {
    switch ( v2 )
    {
      case 8:
        LOBYTE(result) = __inbyte(v1);
        return (unsigned __int8)result;
      case 32:
        LODWORD(result) = __indword(v1);
        return (unsigned int)result;
      case 16:
        LOWORD(result) = __inword(v1);
        return (unsigned __int16)result;
    }
  }
  else if ( *(_BYTE *)a1 == 127 && v2 == 64 )
  {
    return __readmsr(v1);
  }
  return 0LL;
}
