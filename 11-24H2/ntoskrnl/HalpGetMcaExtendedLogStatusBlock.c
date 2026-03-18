/*
 * XREFs of HalpGetMcaExtendedLogStatusBlock @ 0x14053F6CC
 * Callers:
 *     HalpCreateMcaMemoryErrorRecord @ 0x14053F058 (HalpCreateMcaMemoryErrorRecord.c)
 * Callees:
 *     HalpVerifyGenericError @ 0x1405407D0 (HalpVerifyGenericError.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

_DWORD *__fastcall HalpGetMcaExtendedLogStatusBlock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx
  unsigned __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0;
  v4 = 0LL;
  if ( HalpMcaExtendedLoggingSupported )
  {
    if ( qword_140E3EAF0 )
    {
      if ( (int)guard_dispatch_icall_no_overrides(*(unsigned int *)(a1 + 16), &v10, 0LL, a4) >= 0 )
      {
        v6 = (unsigned int)(*(_DWORD *)(a1 + 36) + v10 * dword_140E3EB00);
        if ( v6 < qword_140E3EAF8 )
        {
          v7 = *(_QWORD *)(qword_140E3EAF0 + 8 * v6 + 64);
          if ( v7 < 0 )
          {
            v8 = v7 & 0x7FFFFFFFFFFFFFFFLL;
            if ( v8 >= qword_140E3EB08 && v8 + 4096 <= qword_140E3EB08 + qword_140E3EB18 )
            {
              v4 = (_DWORD *)(qword_140E3EB10 + v8 - qword_140E3EB08);
              if ( !*v4 )
                return 0LL;
              if ( (int)HalpVerifyGenericError(a1, qword_140E3EB10 + v8 - qword_140E3EB08) < 0 )
              {
                *v4 = 0;
                return 0LL;
              }
            }
          }
        }
      }
    }
  }
  return v4;
}
