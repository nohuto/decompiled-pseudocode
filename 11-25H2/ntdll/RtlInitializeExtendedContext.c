/*
 * XREFs of RtlInitializeExtendedContext @ 0x1800C7C00
 * Callers:
 *     PsspInitializeContextOrExtendedContext @ 0x1800C7AF8 (PsspInitializeContextOrExtendedContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitializeExtendedContext(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // r9
  bool v5; // cl
  int v6; // ecx

  if ( (a2 & 0x27FFFF80) != 0x10000
    && (a2 & 0x7FFFF20) != 0x100000
    && (a2 & 0x7FFFFF0) != 0x200000
    && (a2 & 0x7FFFFC0) != 0x400000 )
  {
    return 3221225485LL;
  }
  v4 = 0LL;
  v5 = 0;
  if ( (a2 & 0x400020) != 0x400020 )
    v5 = (a2 & 0x10040) != 65600 && (a2 & 0x100040) != 1048640;
  if ( v5 )
  {
    v6 = 0;
  }
  else
  {
    if ( !MEMORY[0x7FFE03D8] )
      return 3221225659LL;
    v6 = 2;
  }
  if ( (a2 & 0x100080) == 0x100080 )
    return 3221225659LL;
  if ( v6 )
    v4 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
  return RtlInitializeExtendedContext2(a1, a2, a3, v4);
}
