/*
 * XREFs of MiTransformVadSecure @ 0x140A0D4C4
 * Callers:
 *     MiCheckLockUnlockByVa @ 0x14066FC3C (MiCheckLockUnlockByVa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTransformVadSecure(__int64 a1, __int64 a2)
{
  return a2 ^ qword_140E2DBC0 ^ a1;
}
