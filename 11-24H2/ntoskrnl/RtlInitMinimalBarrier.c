/*
 * XREFs of RtlInitMinimalBarrier @ 0x140BDABD4
 * Callers:
 *     sub_14050A410 @ 0x14050A410 (sub_14050A410.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BC1010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitMinimalBarrier(_DWORD *a1, int a2)
{
  __int64 result; // rax

  a1[1] = a2;
  result = 0LL;
  *a1 = a2;
  return result;
}
