/*
 * XREFs of HalpGetMcaExtendedLogStatusBlock @ 0x14053CFCC
 * Callers:
 *     HalpCreateMcaMemoryErrorRecord @ 0x14053C958 (HalpCreateMcaMemoryErrorRecord.c)
 * Callees:
 *     HalpVerifyGenericError @ 0x14053E0D0 (HalpVerifyGenericError.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

_DWORD *__fastcall HalpGetMcaExtendedLogStatusBlock(__int64 a1)
{
  _DWORD *v1; // rbx
  unsigned __int64 v3; // rdx
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  v1 = 0LL;
  if ( HalpMcaExtendedLoggingSupported )
  {
    if ( qword_140E3EC30 )
    {
      if ( (int)guard_dispatch_icall_no_overrides(*(unsigned int *)(a1 + 16), &v7) >= 0 )
      {
        v3 = (unsigned int)(*(_DWORD *)(a1 + 36) + v7 * dword_140E3EC40);
        if ( v3 < qword_140E3EC38 )
        {
          v4 = *(_QWORD *)(qword_140E3EC30 + 8 * v3 + 64);
          if ( v4 < 0 )
          {
            v5 = v4 & 0x7FFFFFFFFFFFFFFFLL;
            if ( v5 >= qword_140E3EC48 && v5 + 4096 <= qword_140E3EC48 + qword_140E3EC58 )
            {
              v1 = (_DWORD *)(qword_140E3EC50 + v5 - qword_140E3EC48);
              if ( !*v1 )
                return 0LL;
              if ( (int)HalpVerifyGenericError(a1, qword_140E3EC50 + v5 - qword_140E3EC48) < 0 )
              {
                *v1 = 0;
                return 0LL;
              }
            }
          }
        }
      }
    }
  }
  return v1;
}
