/*
 * XREFs of sub_140519060 @ 0x140519060
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlMdlReadCompleteDevEx @ 0x140BC1010 (FsRtlMdlReadCompleteDevEx.c)
 *     KeGuardDispatchICall @ 0x140BDAA60 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_140519060(__int64 a1)
{
  FsRtlMdlReadCompleteDevEx(a1 + 32);
  return (*(__int64 (__fastcall **)(__int64))(a1 + 296))(a1);
}
