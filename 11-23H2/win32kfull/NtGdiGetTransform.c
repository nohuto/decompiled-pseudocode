/*
 * XREFs of NtGdiGetTransform @ 0x1C0002A20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     GreGetTransform @ 0x1C013FD0A (GreGetTransform.c)
 */

__int64 __fastcall NtGdiGetTransform(HDC a1, __int64 a2, ULONG64 a3)
{
  __int64 result; // rax

  result = GreGetTransform(a1);
  if ( (_DWORD)result )
  {
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    *(_OWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 16) = 0LL;
  }
  return result;
}
