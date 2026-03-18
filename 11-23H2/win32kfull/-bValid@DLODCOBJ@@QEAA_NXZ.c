/*
 * XREFs of ?bValid@DLODCOBJ@@QEAA_NXZ @ 0x1C011CE34
 * Callers:
 *     GreStretchBltInternal @ 0x1C0100110 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0105030 (NtGdiBitBltInternal.c)
 * Callees:
 *     <none>
 */

bool __fastcall DLODCOBJ::bValid(DLODCOBJ *this)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)this )
    return *((_BYTE *)this + 49) != 0;
  return result;
}
