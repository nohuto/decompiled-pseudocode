/*
 * XREFs of MiAddNonSecuredPagesToDump @ 0x14067809C
 * Callers:
 *     MmGetDumpRange @ 0x140678D28 (MmGetDumpRange.c)
 * Callees:
 *     MiIsPageSecured @ 0x1403F4404 (MiIsPageSecured.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiAddNonSecuredPagesToDump(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v6; // r11
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r11
  __int64 result; // rax

  v3 = a3;
  v4 = a2;
  v6 = 0LL;
  v7 = 0;
  v8 = 48 * a2 - 0x220000000000LL;
  v9 = a2 + 1;
  while ( v3 )
  {
    if ( (unsigned int)MiIsPageSecured(v8, a2, a3) )
    {
      if ( v10 )
      {
        result = guard_dispatch_icall_no_overrides(a1, v4);
        v7 = result;
        if ( (int)result < 0 )
          return result;
      }
      v4 = v9;
      v6 = 0LL;
    }
    else
    {
      v6 = v10 + 1;
    }
    v8 += 48LL;
    ++v9;
    --v3;
  }
  if ( v6 )
    return (unsigned int)guard_dispatch_icall_no_overrides(a1, v4);
  return v7;
}
