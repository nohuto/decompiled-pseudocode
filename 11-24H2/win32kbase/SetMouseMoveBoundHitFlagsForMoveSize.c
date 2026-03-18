/*
 * XREFs of SetMouseMoveBoundHitFlagsForMoveSize @ 0x140213410
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 */

__int64 __fastcall SetMouseMoveBoundHitFlagsForMoveSize(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax

  v1 = a1;
  result = anonymous_namespace_::GetMouseProcessor(a1);
  if ( result )
    _InterlockedOr((volatile signed __int32 *)(result + 3664), v1);
  return result;
}
