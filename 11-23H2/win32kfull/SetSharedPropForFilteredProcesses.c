/*
 * XREFs of SetSharedPropForFilteredProcesses @ 0x1C021BE18
 * Callers:
 *     NtUserSetProp @ 0x1C003BD70 (NtUserSetProp.c)
 *     InternalSetProp @ 0x1C003C0AC (InternalSetProp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetSharedPropForFilteredProcesses(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v4; // r14
  __int64 v5; // rax
  char *i; // rdi
  int v7; // ebx
  __int64 CurrentProcessWow64Process; // rax
  char *v9; // rax
  __int16 v10; // cx

  v4 = a2;
  v5 = *(_QWORD *)(a1 + 40);
  if ( *(char *)(v5 + 19) >= 0 )
  {
    for ( i = *(char **)(*(int *)(v5 + 200) + *(_QWORD *)(v5 + 296) - 8LL); i; i = *(char **)v9 )
    {
      v7 = 0;
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(a1, a2, a3);
      ProbeForWrite(i, 0x618uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      while ( 1 )
      {
        a1 = 3LL * v7;
        v9 = &i[24 * v7];
        if ( v7 >= 64 )
          break;
        v10 = *((_WORD *)v9 + 8);
        if ( !v10 )
          return 0LL;
        if ( v10 == v4 )
        {
          *((_QWORD *)v9 + 1) = a3;
          return 1LL;
        }
        ++v7;
      }
    }
  }
  return 0LL;
}
