/*
 * XREFs of DxgkEngResetPointer @ 0x140141B40
 * Callers:
 *     <none>
 * Callees:
 *     IsUserResetPointerSupported @ 0x140141B60 (IsUserResetPointerSupported.c)
 *     UserResetPointer @ 0x1401422BC (UserResetPointer.c)
 */

__int64 DxgkEngResetPointer()
{
  __int64 result; // rax

  result = IsUserResetPointerSupported();
  if ( (int)result >= 0 )
    return UserResetPointer();
  return result;
}
