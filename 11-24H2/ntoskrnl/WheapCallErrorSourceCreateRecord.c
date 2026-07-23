/*
 * XREFs of WheapCallErrorSourceCreateRecord @ 0x140420528
 * Callers:
 *     WheaReportHwError @ 0x140420030 (WheaReportHwError.c)
 *     WheapReportBootError @ 0x14065A154 (WheapReportBootError.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapCallErrorSourceCreateRecord(int *a1, __int64 a2)
{
  int v3; // r10d
  signed __int32 v4; // eax
  _QWORD *v5; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    if ( (unsigned int)a1[10] <= 0x12 )
    {
      v3 = a1[33] & 0x40000000;
      if ( a1[27] != 3 )
      {
        while ( 1 )
        {
          v4 = a1[23];
          if ( v4 < 0 )
            break;
          if ( v4 == _InterlockedCompareExchange(a1 + 23, v4 + 1, v4) )
          {
            v5 = &unk_140EEEFA0;
            if ( v3 )
              v5 = &unk_140EEF4A0;
            if ( v5[8 * (__int64)a1[10]] )
            {
              result = guard_dispatch_icall_no_overrides(a1 + 24, a2);
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
