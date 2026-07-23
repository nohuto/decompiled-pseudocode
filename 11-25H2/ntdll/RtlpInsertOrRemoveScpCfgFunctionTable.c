/*
 * XREFs of RtlpInsertOrRemoveScpCfgFunctionTable @ 0x180024960
 * Callers:
 *     LdrpUnmapModule @ 0x180024A44 (LdrpUnmapModule.c)
 *     LdrpProcessMappedModule @ 0x18006DF80 (LdrpProcessMappedModule.c)
 * Callees:
 *     RtlAddGrowableFunctionTable @ 0x180024410 (RtlAddGrowableFunctionTable.c)
 *     RtlDeleteFunctionTable @ 0x1800E8C20 (RtlDeleteFunctionTable.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

int __fastcall RtlpInsertOrRemoveScpCfgFunctionTable(char *BaseAddress, __int64 a2, char a3)
{
  int result; // eax
  char *v6; // rax
  __int64 v7; // rcx
  ULONG_PTR v8; // [rsp+30h] [rbp-38h] BYREF
  PVOID DynamicTable; // [rsp+38h] [rbp-30h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  v8 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  result = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, MaxMemoryInfoClass, &v10, 0x18uLL, &v8);
  if ( result == -1073741637 )
    return 279;
  if ( result >= 0 )
  {
    if ( !v11 )
      return 279;
    v6 = &BaseAddress[*((_QWORD *)&v10 + 1)];
    v7 = *(unsigned int *)&BaseAddress[*((_QWORD *)&v10 + 1) + 20];
    if ( !(_DWORD)v7 )
      return 279;
    if ( a3 )
    {
      result = RtlAddGrowableFunctionTable(
                 &DynamicTable,
                 (PRUNTIME_FUNCTION)&v6[v7],
                 1u,
                 1u,
                 (ULONG_PTR)&BaseAddress[*((_QWORD *)&v10 + 1)],
                 (ULONG_PTR)&v6[v11]);
      if ( result >= 0 )
        return 0;
    }
    else
    {
      RtlDeleteFunctionTable((PRUNTIME_FUNCTION)&v6[v7]);
      return 0;
    }
  }
  return result;
}
