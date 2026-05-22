/*
 * XREFs of ?SetExpected@GestureSession@@UEAAJW4GestureType@@@Z @ 0x1801B3A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GestureSession::SetExpected(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 12) = a2;
  return 0LL;
}
