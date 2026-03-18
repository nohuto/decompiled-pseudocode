/*
 * XREFs of VerifierMmGetSystemRoutineAddress @ 0x140BA0910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViThunkHookExportAddress @ 0x140B978F8 (ViThunkHookExportAddress.c)
 */

unsigned __int8 *__fastcall VerifierMmGetSystemRoutineAddress(
        const UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int8 *result; // rax
  unsigned __int8 *v6; // [rsp+38h] [rbp+10h] BYREF

  result = (unsigned __int8 *)guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  if ( result )
  {
    v6 = result;
    if ( !(unsigned int)ViThunkHookExportAddress(&v6, a1, (unsigned __int8 **)&VfRegularThunks)
      && !(unsigned int)ViThunkHookExportAddress(&v6, a1, (unsigned __int8 **)&VfPoolThunks) )
    {
      ViThunkHookExportAddress(&v6, a1, (unsigned __int8 **)&VfDifThunks);
    }
    return v6;
  }
  return result;
}
