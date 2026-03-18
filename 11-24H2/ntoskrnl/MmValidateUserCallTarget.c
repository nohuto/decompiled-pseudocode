/*
 * XREFs of MmValidateUserCallTarget @ 0x1406F663C
 * Callers:
 *     MmCheckForSafeExecution @ 0x1407F634C (MmCheckForSafeExecution.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     MiValidateUserCallTarget @ 0x140AB6E70 (MiValidateUserCallTarget.c)
 */

__int64 __fastcall MmValidateUserCallTarget(__int64 a1, int a2)
{
  volatile _KAFFINITY_EX *ActiveProcessors; // rax

  ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
  if ( ActiveProcessors[4].StaticBitmap[16] )
    return MiValidateUserCallTarget(a1, (char *)&ActiveProcessors[4].StaticBitmap[15] + (a2 != 0 ? 0x20 : 0));
  else
    return 1LL;
}
