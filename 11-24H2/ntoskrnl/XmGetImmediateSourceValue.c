/*
 * XREFs of XmGetImmediateSourceValue @ 0x140468FAC
 * Callers:
 *     XmGroup1Immediate @ 0x1404686C0 (XmGroup1Immediate.c)
 *     XmByteImmediate @ 0x140574E60 (XmByteImmediate.c)
 *     XmGroup3General @ 0x140575100 (XmGroup3General.c)
 *     XmImulImmediate @ 0x140575350 (XmImulImmediate.c)
 *     XmMoveImmediate @ 0x1405754F0 (XmMoveImmediate.c)
 *     XmPushImmediate @ 0x1405756F0 (XmPushImmediate.c)
 * Callees:
 *     XmGetWordImmediate @ 0x140468D7C (XmGetWordImmediate.c)
 *     XmGetCodeByte @ 0x140469218 (XmGetCodeByte.c)
 *     XmGetLongImmediate @ 0x14056C8F0 (XmGetLongImmediate.c)
 */

__int64 __fastcall XmGetImmediateSourceValue(__int64 a1, int a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 120);
  if ( !v2 )
    return (unsigned __int8)XmGetCodeByte(a1);
  if ( v2 == 1 )
  {
    if ( a2 )
      LOWORD(result) = (char)XmGetCodeByte(a1);
    else
      LOWORD(result) = XmGetWordImmediate(a1);
    return (unsigned __int16)result;
  }
  else if ( a2 )
  {
    return (unsigned int)(char)XmGetCodeByte(a1);
  }
  else
  {
    return XmGetLongImmediate(a1);
  }
}
