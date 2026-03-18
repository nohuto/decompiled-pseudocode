/*
 * XREFs of GetSharedPropForFilteredProcesses @ 0x1C021BD4C
 * Callers:
 *     NtUserGetProp @ 0x1C0064200 (NtUserGetProp.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSharedPropForFilteredProcesses(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // si
  __int64 v4; // rax
  char *i; // rdi
  int v6; // ebx
  __int64 CurrentProcessWow64Process; // rax
  char *v8; // rax
  __int16 v9; // cx
  __int64 result; // rax

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 40);
  if ( *(char *)(v4 + 19) >= 0 )
  {
    for ( i = *(char **)(*(int *)(v4 + 200) + *(_QWORD *)(v4 + 296) - 8LL); i; i = *(char **)v8 )
    {
      v6 = 0;
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(a1, a2, a3);
      ProbeForRead(i, 0x618uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      while ( 1 )
      {
        a1 = 3LL * v6;
        v8 = &i[24 * v6];
        if ( v6 >= 64 )
          break;
        v9 = *((_WORD *)v8 + 8);
        result = *((_QWORD *)v8 + 1);
        if ( !v9 )
          return 0LL;
        if ( v9 == v3 )
          return result;
        ++v6;
      }
    }
  }
  return 0LL;
}
