/*
 * XREFs of WheapCallErrorSourceCreateRecord @ 0x14042E7F8
 * Callers:
 *     WheaReportHwError @ 0x14042E300 (WheaReportHwError.c)
 *     WheapReportBootError @ 0x14065BA34 (WheapReportBootError.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapCallErrorSourceCreateRecord(int *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v5; // r10d
  signed __int32 v6; // eax
  _QWORD *v7; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    if ( (unsigned int)a1[10] <= 0x12 )
    {
      v5 = a1[33] & 0x40000000;
      if ( a1[27] != 3 )
      {
        while ( 1 )
        {
          v6 = a1[23];
          if ( v6 < 0 )
            break;
          if ( v6 == _InterlockedCompareExchange(a1 + 23, v6 + 1, v6) )
          {
            v7 = &unk_140EEEDA0;
            if ( v5 )
              v7 = &unk_140EEF290;
            if ( v7[8 * (__int64)a1[10]] )
            {
              result = guard_dispatch_icall_no_overrides(a1 + 24, a2, a4, a3);
              goto LABEL_10;
            }
            break;
          }
        }
      }
    }
  }
  result = 3221225474LL;
LABEL_10:
  _InterlockedDecrement(a1 + 23);
  return result;
}
