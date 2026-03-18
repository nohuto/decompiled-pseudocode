/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@SAXPEAX@Z @ 0x1C00D29C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::OnUnexpectedThreadTerminationStatic(
        __int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 32);
  if ( result )
    _InterlockedDecrement((volatile signed __int32 *)(result + 12));
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
