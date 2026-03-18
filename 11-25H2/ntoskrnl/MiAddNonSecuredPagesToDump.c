/*
 * XREFs of MiAddNonSecuredPagesToDump @ 0x14066B57C
 * Callers:
 *     MmGetDumpRange @ 0x14066C1F8 (MmGetDumpRange.c)
 * Callees:
 *     MiIsPageSecured @ 0x140377B2C (MiIsPageSecured.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiAddNonSecuredPagesToDump(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v5; // r11
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // r11
  __int64 result; // rax

  v3 = a3;
  v5 = 0LL;
  v6 = 0;
  v7 = 48 * a2 - 0x220000000000LL;
  v8 = a2 + 1;
  while ( v3 )
  {
    if ( (unsigned int)MiIsPageSecured(v7, a2, a3) )
    {
      if ( v9 )
      {
        result = guard_dispatch_icall_no_overrides(a1);
        v6 = result;
        if ( (int)result < 0 )
          return result;
      }
      v5 = 0LL;
    }
    else
    {
      v5 = v9 + 1;
    }
    v7 += 48LL;
    ++v8;
    --v3;
  }
  if ( v5 )
    return (unsigned int)guard_dispatch_icall_no_overrides(a1);
  return v6;
}
