/*
 * XREFs of MiBuildWakeList @ 0x140445610
 * Callers:
 *     MiUnlockControlAreaSectionExtend @ 0x140445544 (MiUnlockControlAreaSectionExtend.c)
 *     MiDecrementLargeSubsections @ 0x1404C8E10 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1404C96E0 (MiIncrementLargeSubsections.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiBuildWakeList(__int64 a1, int a2)
{
  __int64 *v2; // r8
  _QWORD *v3; // r9
  __int64 *result; // rax
  __int64 *v5; // r10

  v2 = *(__int64 **)(a1 + 80);
  v3 = (_QWORD *)(a1 + 80);
  result = 0LL;
  if ( v2 )
  {
    do
    {
      v5 = (__int64 *)*v2;
      if ( (a2 & (_DWORD)v2[1]) != 0 )
      {
        if ( (a2 & 4) != 0 )
        {
          *((_DWORD *)v2 + 3) = 1;
        }
        else
        {
          *v2 = (__int64)result;
          result = v2;
          *v3 = v5;
        }
      }
      else
      {
        v3 = v2;
      }
      v2 = v5;
    }
    while ( v5 );
  }
  return result;
}
