/*
 * XREFs of GenDataBytes @ 0x140142EC4
 * Callers:
 *     GenAssignNamespaceParams @ 0x14013D340 (GenAssignNamespaceParams.c)
 *     GenDeassignNamespaceParams @ 0x14013D3A0 (GenDeassignNamespaceParams.c)
 *     GenSetTableColumnParams @ 0x14013E8C0 (GenSetTableColumnParams.c)
 *     GenSetACEBooleanExpr @ 0x14013F6C0 (GenSetACEBooleanExpr.c)
 *     GenAuthenticateParams @ 0x1401409D0 (GenAuthenticateParams.c)
 *     GenSetTPerPropertiesParams @ 0x140140A40 (GenSetTPerPropertiesParams.c)
 *     GenStartSessionParams @ 0x140140C00 (GenStartSessionParams.c)
 *     GenCallMethodBegin @ 0x140142D70 (GenCallMethodBegin.c)
 *     GenDataBytes @ 0x140142EC4 (GenDataBytes.c)
 *     GenNamedValueBytes @ 0x140143188 (GenNamedValueBytes.c)
 * Callees:
 *     GenDataBytes @ 0x140142EC4 (GenDataBytes.c)
 *     GenLongDataBytes @ 0x140142FCC (GenLongDataBytes.c)
 *     GenMediumDataBytes @ 0x14014309C (GenMediumDataBytes.c)
 *     GenShortDataBytes @ 0x1401432C8 (GenShortDataBytes.c)
 */

__int64 __fastcall GenDataBytes(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  if ( a3 <= 0xF )
    return GenShortDataBytes();
  if ( a3 <= 0x7FF )
    return GenMediumDataBytes();
  if ( a3 <= 0xFFFFFF )
    return GenLongDataBytes(a1, a2, a3, 0LL);
  LOBYTE(a4) = 1;
  result = GenLongDataBytes(a1, a2, 0xFFFFFFLL, a4);
  if ( (int)result >= 0 )
    return GenDataBytes(a1, a2 + 0xFFFFFF, a3 - 0xFFFFFF);
  return result;
}
