/*
 * XREFs of RtlpValidateContextFlags2 @ 0x1405E7E08
 * Callers:
 *     RtlInitializeExtendedContext2 @ 0x140235240 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1402354D0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext @ 0x1403D4E10 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1403D4E90 (RtlGetExtendedContextLength.c)
 *     RtlpValidateContextFlags @ 0x1403D5250 (RtlpValidateContextFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpValidateContextFlags2(int a1, int *a2, _QWORD *a3)
{
  int v5; // r10d
  bool v6; // cl

  if ( (a1 & 0x27FFFF80) != 0x10000
    && (a1 & 0x7FFFF20) != 0x100000
    && (a1 & 0x7FFFFF0) != 0x200000
    && (a1 & 0x7FFFF00) != 0x400000 )
  {
    return 3221225485LL;
  }
  v5 = 1;
  v6 = 0;
  if ( (a1 & 0x400020) != 0x400020 )
    v6 = (a1 & 0x10040) != 65600 && (a1 & 0x100040) != 1048640;
  if ( !v6 )
  {
    if ( !*a3 )
      return 3221225659LL;
    v5 = 3;
  }
  if ( (a1 & 0x100080) == 0x100080 )
  {
    if ( !(_BYTE)KiKernelCetEnabled )
      return 3221225659LL;
    v5 |= 4u;
  }
  if ( a2 )
    *a2 = v5;
  return 0LL;
}
