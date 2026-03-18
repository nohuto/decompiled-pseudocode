/*
 * XREFs of RtlHashBytes2 @ 0x1403A0720
 * Callers:
 *     MiFindUserSidHotPatchContext @ 0x1407E28FC (MiFindUserSidHotPatchContext.c)
 *     MiLoadHotPatchForUserSid @ 0x140A98B50 (MiLoadHotPatchForUserSid.c)
 * Callees:
 *     wyhash @ 0x1403A0738 (wyhash.c)
 */

__int64 __fastcall RtlHashBytes2(__int64 a1, __int64 a2, __int64 a3)
{
  return wyhash(a1, a2, a3);
}
