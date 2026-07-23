/*
 * XREFs of XmGetImmediateSourceValue @ 0x14046195C
 * Callers:
 *     XmGroup1Immediate @ 0x140461070 (XmGroup1Immediate.c)
 *     XmByteImmediate @ 0x1405722F0 (XmByteImmediate.c)
 *     XmGroup3General @ 0x140572590 (XmGroup3General.c)
 *     XmImulImmediate @ 0x1405727E0 (XmImulImmediate.c)
 *     XmMoveImmediate @ 0x140572980 (XmMoveImmediate.c)
 *     XmPushImmediate @ 0x140572B80 (XmPushImmediate.c)
 * Callees:
 *     XmGetWordImmediate @ 0x14046172C (XmGetWordImmediate.c)
 *     XmGetCodeByte @ 0x140461BC8 (XmGetCodeByte.c)
 *     XmGetLongImmediate @ 0x140569D80 (XmGetLongImmediate.c)
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
