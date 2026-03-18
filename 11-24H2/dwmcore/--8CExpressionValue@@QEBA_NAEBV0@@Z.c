/*
 * XREFs of ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x18000F6E0
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18000ED10 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180154180 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1802DF6C8 (memcmp_0.c)
 */

__int64 __fastcall CExpressionValue::operator==(_DWORD *Buf1, _DWORD *a2, __int64 a3)
{
  int v3; // eax
  __int64 result; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  v3 = Buf1[18];
  LOBYTE(a3) = 0;
  if ( v3 != a2[18] )
    return (unsigned __int8)a3;
  if ( !v3 )
  {
LABEL_6:
    LOBYTE(a3) = 1;
    return (unsigned __int8)a3;
  }
  switch ( v3 )
  {
    case 11:
      return CPathData::operator==(*((_QWORD *)Buf1 + 8), *((_QWORD *)a2 + 8), a3);
    case 17:
      return *(_BYTE *)Buf1 == *(_BYTE *)a2;
    case 18:
    case 42:
      if ( *(float *)Buf1 == *(float *)a2 )
        goto LABEL_6;
      return (unsigned __int8)a3;
    case 35:
      return *(_QWORD *)Buf1 == *(_QWORD *)a2;
    case 52:
      v6 = *(_QWORD *)Buf1 - *(_QWORD *)a2;
      if ( *(_QWORD *)Buf1 == *(_QWORD *)a2 )
        v6 = (unsigned int)Buf1[2] - (unsigned __int64)(unsigned int)a2[2];
      return v6 == 0;
    case 69:
    case 70:
      v7 = *(_QWORD *)Buf1 - *(_QWORD *)a2;
      if ( *(_QWORD *)Buf1 == *(_QWORD *)a2 )
        v7 = *((_QWORD *)Buf1 + 1) - *((_QWORD *)a2 + 1);
      return v7 == 0;
    case 71:
      if ( *(float *)Buf1 != *(float *)a2
        || *((float *)Buf1 + 1) != *((float *)a2 + 1)
        || *((float *)Buf1 + 2) != *((float *)a2 + 2) )
      {
        return (unsigned __int8)a3;
      }
      if ( *((float *)Buf1 + 3) == *((float *)a2 + 3) )
        goto LABEL_6;
      result = 0LL;
      break;
    case 104:
      v8 = *(_QWORD *)Buf1 - *(_QWORD *)a2;
      if ( *(_QWORD *)Buf1 == *(_QWORD *)a2 )
      {
        v8 = *((_QWORD *)Buf1 + 1) - *((_QWORD *)a2 + 1);
        if ( !v8 )
          v8 = *((_QWORD *)Buf1 + 2) - *((_QWORD *)a2 + 2);
      }
      return v8 == 0;
    case 265:
      return memcmp_0(Buf1, a2, 0x40uLL) == 0;
    default:
      return (unsigned __int8)a3;
  }
  return result;
}
