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

PSID_AND_ATTRIBUTES __fastcall SepMatchCapability(
        __int64 a1,
        int a2,
        void *a3,
        int a4,
        _SID_AND_ATTRIBUTES *a5,
        _DWORD *a6)
{
  PSID_AND_ATTRIBUTES result; // rax

  result = RtlSidHashLookup((PSID_AND_ATTRIBUTES_HASH)(a1 + 808), a3);
  if ( result )
  {
    result = (PSID_AND_ATTRIBUTES)result->Attributes;
    if ( ((unsigned __int8)result & 4) != 0 )
    {
      *a6 |= a4 & a2;
      result = a5;
      LOBYTE(a5->Sid) = 1;
    }
  }
  return result;
}
