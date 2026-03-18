/*
 * XREFs of IoNotifyDumpEx @ 0x140591C78
 * Callers:
 *     IoNotifyDump @ 0x140591C60 (IoNotifyDump.c)
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoNotifyDumpEx(int a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rcx
  __int64 result; // rax

  if ( qword_140E65F00 )
  {
    v3 = a1 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              v8 = v7 - 1;
              if ( v8 )
              {
                if ( v8 != 1 )
                  return result;
                v9 = 12LL;
              }
              else
              {
                v9 = 11LL;
              }
            }
            else
            {
              v9 = 9LL;
            }
          }
          else
          {
            v9 = 7LL;
          }
        }
        else
        {
          v9 = 5LL;
        }
      }
      else
      {
        v9 = 4LL;
      }
    }
    else
    {
      v9 = 3LL;
    }
    return guard_dispatch_icall_no_overrides(v9, 0LL, a3, qword_140E65F00);
  }
  return result;
}
