/*
 * XREFs of _ForceEnableNumpadTranslation @ 0x14021D950
 * Callers:
 *     NtUserForceEnableNumpadTranslation @ 0x14021D910 (NtUserForceEnableNumpadTranslation.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall ForceEnableNumpadTranslation(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct tagTHREADINFO *v3; // rax
  unsigned __int64 v4; // r8

  v2 = (int)a1;
  v3 = PtiCurrent(a1, a2);
  v4 = *((_QWORD *)v3 + 170);
  *((_QWORD *)v3 + 170) = (v2 << 23) ^ (v4 ^ (v2 << 23)) & 0xFFFFFFFFFF7FFFFFuLL;
  return (v4 >> 23) & 1;
}
