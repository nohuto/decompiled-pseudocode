/*
 * XREFs of RtlULongLongMult @ 0x180098FEC
 * Callers:
 *     SdbpResolveMatchingFile @ 0x18009B9F8 (SdbpResolveMatchingFile.c)
 *     AslStringDuplicate @ 0x18009E218 (AslStringDuplicate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongLongMult(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( is_mul_ok(a1, a2) )
  {
    *a3 = a1 * a2;
  }
  else
  {
    *a3 = -1LL;
    return (unsigned int)-1073741675;
  }
  return v3;
}
