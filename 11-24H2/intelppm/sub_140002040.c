/*
 * XREFs of sub_140002040 @ 0x140002040
 * Callers:
 *     sub_140002014 @ 0x140002014 (sub_140002014.c)
 *     sub_140006618 @ 0x140006618 (sub_140006618.c)
 *     sub_1400359D0 @ 0x1400359D0 (sub_1400359D0.c)
 * Callees:
 *     sub_1400018A4 @ 0x1400018A4 (sub_1400018A4.c)
 */

unsigned __int64 __fastcall sub_140002040(unsigned __int8 *a1)
{
  int v2; // ecx
  __int64 v3; // r8
  unsigned __int8 v4; // dl
  int v5; // ecx
  unsigned __int64 result; // rax
  unsigned __int8 v7; // cl
  unsigned __int8 v8; // cl
  __int64 v9; // r11
  char v10; // cl

  v2 = *a1;
  if ( (_BYTE)v2 != 1 && (unsigned __int8)(v2 - 126) > 1u )
  {
    result = sub_1400018A4((__int64)a1);
    if ( result )
    {
      v10 = *(_BYTE *)(v9 + 2);
      if ( v10 )
        result >>= v10;
      v8 = *(_BYTE *)(v9 + 1);
      if ( v8 < 0x40u )
        goto LABEL_12;
    }
    return result;
  }
  if ( (_BYTE)v2 == 126 )
    return *((unsigned int *)a1 + 1);
  v3 = *(_QWORD *)(a1 + 4);
  v4 = a1[3];
  v5 = v2 - 1;
  if ( !v5 )
  {
    switch ( v4 )
    {
      case 8u:
        LOBYTE(result) = __inbyte(v3);
        result = (unsigned __int8)result;
        goto LABEL_7;
      case 0x10u:
        LOWORD(result) = __inword(v3);
        result = (unsigned __int16)result;
        goto LABEL_7;
      case 0x20u:
        LODWORD(result) = __indword(v3);
        result = (unsigned int)result;
        goto LABEL_7;
    }
    return 0LL;
  }
  if ( v5 != 126 || v4 != 64 )
    return 0LL;
  result = __readmsr(v3);
LABEL_7:
  if ( result )
  {
    v7 = a1[2];
    if ( v7 )
      result >>= v7;
    v8 = a1[1];
    if ( v8 < 0x40u )
LABEL_12:
      result &= (1LL << v8) - 1;
  }
  return result;
}
