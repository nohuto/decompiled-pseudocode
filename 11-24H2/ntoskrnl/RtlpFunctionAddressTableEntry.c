/*
 * XREFs of RtlpFunctionAddressTableEntry @ 0x140C36D4C
 * Callers:
 *     RtlInitializeHistoryTable @ 0x140C36E10 (RtlInitializeHistoryTable.c)
 * Callees:
 *     <none>
 */

void (__fastcall __noreturn *__fastcall RtlpFunctionAddressTableEntry(__int64 a1))(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( !a1 )
    return (void (__fastcall __noreturn *)(int))RtlUnwindEx;
  v1 = a1 - 1;
  if ( !v1 )
    return (void (__fastcall __noreturn *)(int))_C_specific_handler;
  v2 = v1 - 1;
  if ( !v2 )
    return (void (__fastcall __noreturn *)(int))RtlpExecuteHandlerForException;
  v3 = v2 - 1;
  if ( !v3 )
    return (void (__fastcall __noreturn *)(int))RtlDispatchException;
  v4 = v3 - 1;
  if ( !v4 )
    return RtlRaiseStatus;
  v5 = v4 - 1;
  if ( !v5 )
    return (void (__fastcall __noreturn *)(int))KiDispatchException;
  if ( v5 == 1 )
    return (void (__fastcall __noreturn *)(int))KiExceptionDispatch;
  return 0LL;
}
