/*
 * XREFs of SdbGetIndex @ 0x180097638
 * Callers:
 *     SdbFindFirstDWORDIndexedTag @ 0x180097588 (SdbFindFirstDWORDIndexedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetIndex(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // edi
  int v6; // r8d
  __int64 v7; // rdx
  _WORD *i; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v5 = 0;
  if ( a4 )
    *a4 = 0;
  if ( (int)RtlRunOnceExecuteOnce(a1 + 2616, InitOnceScanIndexes, a1, &v10) >= 0 )
  {
    v6 = 0;
    v7 = 0LL;
    for ( i = (_WORD *)(v10 + 6); v7 < 64 && *(i - 1); i += 20 )
    {
      if ( *(i - 1) == 28685 && *i == 16405 )
      {
        v5 = *(_DWORD *)(v10 + 40LL * v6);
        if ( a4 )
          *a4 = *(_DWORD *)(v10 + 40LL * v6 + 32);
        return v5;
      }
      ++v6;
      ++v7;
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return v5;
}
