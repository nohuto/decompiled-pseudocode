/*
 * XREFs of RtlpInsertOrRemoveScpCfgFunctionTable @ 0x1800068D0
 * Callers:
 *     LdrpUnmapModule @ 0x1800067C8 (LdrpUnmapModule.c)
 *     LdrpProcessMappedModule @ 0x180073700 (LdrpProcessMappedModule.c)
 * Callees:
 *     RtlAddGrowableFunctionTable @ 0x180006BA0 (RtlAddGrowableFunctionTable.c)
 *     RtlDeleteFunctionTable @ 0x1800E74E0 (RtlDeleteFunctionTable.c)
 *     ZwQueryVirtualMemory @ 0x1801620F0 (ZwQueryVirtualMemory.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpInsertOrRemoveScpCfgFunctionTable(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp-38h] BYREF
  char v9; // [rsp+38h] [rbp-30h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  v8 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *, __int64, __int64 *))ZwQueryVirtualMemory)(
             -1LL,
             a1,
             14LL,
             &v10,
             24LL,
             &v8);
  if ( (_DWORD)result == -1073741637 )
    return 279LL;
  if ( (int)result >= 0 )
  {
    if ( !v11 )
      return 279LL;
    v6 = a1 + *((_QWORD *)&v10 + 1);
    v7 = *(unsigned int *)(a1 + *((_QWORD *)&v10 + 1) + 20);
    if ( !(_DWORD)v7 )
      return 279LL;
    if ( a3 )
    {
      result = RtlAddGrowableFunctionTable(
                 (unsigned int)&v9,
                 (int)v6 + (int)v7,
                 1,
                 1,
                 a1 + *((_QWORD *)&v10 + 1),
                 v6 + v11);
      if ( (int)result >= 0 )
        return 0LL;
    }
    else
    {
      RtlDeleteFunctionTable((PRUNTIME_FUNCTION)(v6 + v7));
      return 0LL;
    }
  }
  return result;
}
