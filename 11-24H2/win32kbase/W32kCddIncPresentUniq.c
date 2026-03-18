/*
 * XREFs of W32kCddIncPresentUniq @ 0x140135B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall W32kCddIncPresentUniq(__int64 a1)
{
  __int64 result; // rax

  result = W32GetSessionState(a1);
  ++*(_DWORD *)(*(_QWORD *)(result + 88) + 4240LL);
  return result;
}
