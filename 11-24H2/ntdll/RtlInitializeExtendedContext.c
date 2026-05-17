/*
 * XREFs of RtlInitializeExtendedContext @ 0x1800C34F0
 * Callers:
 *     PsspInitializeContextOrExtendedContext @ 0x1800C33E8 (PsspInitializeContextOrExtendedContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitializeExtendedContext(__int64 a1, unsigned int a2, __int64 a3)
{
  char v5; // r11
  __int64 v6; // r9
  bool v7; // cl

  if ( (a2 & 0x27FFFF80) != 0x10000
    && (a2 & 0x7FFFF20) != 0x100000
    && (a2 & 0x7FFFFF0) != 0x200000
    && (a2 & 0x7FFFF00) != 0x400000 )
  {
    return 3221225485LL;
  }
  v5 = 1;
  v6 = 0LL;
  v7 = 0;
  if ( (a2 & 0x400020) != 0x400020 )
    v7 = (a2 & 0x10040) != 65600 && (a2 & 0x100040) != 1048640;
  if ( !v7 )
  {
    if ( !MEMORY[0x7FFE03D8] )
      return 3221225659LL;
    v5 = 3;
  }
  if ( (a2 & 0x100080) == 0x100080 )
    return 3221225659LL;
  if ( (v5 & 2) != 0 )
    v6 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
  return RtlInitializeExtendedContext2(a1, a2, a3, v6);
}
