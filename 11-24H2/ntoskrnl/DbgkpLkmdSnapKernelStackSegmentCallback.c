/*
 * XREFs of DbgkpLkmdSnapKernelStackSegmentCallback @ 0x14057E880
 * Callers:
 *     <none>
 * Callees:
 *     DbgkpLkmdSnapDataEx @ 0x14057E624 (DbgkpLkmdSnapDataEx.c)
 */

__int64 __fastcall DbgkpLkmdSnapKernelStackSegmentCallback(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r9
  __int64 result; // rax

  v3 = *(_QWORD *)(a3 + 8);
  v4 = 0LL;
  if ( v3 >= a2[1] && v3 < *a2 && !*(_BYTE *)(a3 + 16) )
    v4 = 5LL;
  result = DbgkpLkmdSnapDataEx(*(_QWORD *)a3, a2[1], (unsigned int)(*(_DWORD *)a2 - *((_DWORD *)a2 + 2)), v4);
  if ( (int)result >= 0 )
  {
    result = *(_QWORD *)(a3 + 24);
    *(_DWORD *)(result + 4) |= 2u;
  }
  return result;
}
