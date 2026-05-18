/*
 * XREFs of sub_18000E538 @ 0x18000E538
 * Callers:
 *     sub_18000DE70 @ 0x18000DE70 (sub_18000DE70.c)
 * Callees:
 *     sub_18000D8D4 @ 0x18000D8D4 (sub_18000D8D4.c)
 */

__int64 sub_18000E538()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rcx
  __int64 v3; // rbx
  DWORD CurrentThreadId; // r9d
  __int64 i; // rcx
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v0 = qword_1801C42F0;
  v1 = 0LL;
  if ( qword_1801C42F0 )
  {
    if ( !*(_QWORD *)(qword_1801C42F0 + 8) )
    {
      v2 = *(_QWORD *)qword_1801C42F0;
      v9 = 0LL;
      if ( (int)sub_18000D8D4(v2, &v9) >= 0 && !*(_QWORD *)(v0 + 8) )
        *(_QWORD *)(v0 + 8) = v9;
    }
    v3 = (*(_QWORD *)(v0 + 8) + 32LL) & -(__int64)(*(_QWORD *)(v0 + 8) != 0LL);
    if ( v3 )
    {
      CurrentThreadId = GetCurrentThreadId();
      for ( i = *(_QWORD *)(v3 + 8 * (CurrentThreadId % 0xAuLL) + 8); i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_DWORD *)i == CurrentThreadId )
        {
          v6 = i == -16;
          v7 = i + 16;
          v1 = v7;
          if ( !v6 && !*(_QWORD *)(v7 + 8) )
            *(_QWORD *)(v7 + 8) = v3 + 4;
          return v1;
        }
      }
    }
  }
  return v1;
}
