/*
 * XREFs of SepMatchCapability @ 0x140368F64
 * Callers:
 *     SepNormalAccessCheck @ 0x140366DE0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x140368FC0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x14036A718 (SepNormalAccessCheckEx.c)
 *     SepMaximumAccessCheckEx @ 0x1403CEF04 (SepMaximumAccessCheckEx.c)
 * Callees:
 *     RtlSidHashLookup @ 0x140369A50 (RtlSidHashLookup.c)
 */

__int64 __fastcall SepMatchCapability(__int64 a1, int a2, __int64 a3, int a4, _BYTE *a5, _DWORD *a6)
{
  __int64 result; // rax

  result = RtlSidHashLookup(a1 + 808, a3);
  if ( result )
  {
    result = *(unsigned int *)(result + 8);
    if ( (result & 4) != 0 )
    {
      *a6 |= a4 & a2;
      result = (__int64)a5;
      *a5 = 1;
    }
  }
  return result;
}
