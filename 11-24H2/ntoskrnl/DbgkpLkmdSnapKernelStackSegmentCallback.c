/*
 * XREFs of DbgkpLkmdSnapKernelStackSegmentCallback @ 0x14057BD10
 * Callers:
 *     <none>
 * Callees:
 *     DbgkpLkmdSnapDataEx @ 0x14057BAB4 (DbgkpLkmdSnapDataEx.c)
 */

__int64 __fastcall DbgkpLkmdSnapKernelStackSegmentCallback(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax

  result = DbgkpLkmdSnapDataEx(*a3, *(_QWORD *)(a2 + 8));
  if ( (int)result >= 0 )
  {
    result = a3[3];
    *(_DWORD *)(result + 4) |= 2u;
  }
  return result;
}
