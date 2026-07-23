/*
 * XREFs of RtlpLookupPrimaryFunctionEntry @ 0x1800E8B54
 * Callers:
 *     RtlDispatchException @ 0x180045A60 (RtlDispatchException.c)
 *     RtlpSameFunction @ 0x1800E8AEC (RtlpSameFunction.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 */

_BYTE *__fastcall RtlpLookupPrimaryFunctionEntry(_BYTE *a1, __int64 a2)
{
  unsigned int v2; // r9d
  _BYTE *v3; // r8
  int v4; // ecx
  int v5; // eax

  v2 = 0;
  while ( 1 )
  {
    v3 = (_BYTE *)(a2 + *((unsigned int *)a1 + 2));
    if ( (*v3 & 0x20) == 0 )
      break;
    v4 = (unsigned __int8)v3[2];
    v5 = v4 + 1;
    if ( (v4 & 1) == 0 )
      v5 = (unsigned __int8)v3[2];
    ++v2;
    a1 = &v3[2 * v5 + 4];
    if ( v2 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  return a1;
}
