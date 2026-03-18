/*
 * XREFs of KeVerifyGroupAffinity @ 0x140471198
 * Callers:
 *     sub_140507C90 @ 0x140507C90 (sub_140507C90.c)
 *     IopConnectInterruptFullySpecified @ 0x140711E68 (IopConnectInterruptFullySpecified.c)
 *     ExpProfileCreate @ 0x1407B1E2C (ExpProfileCreate.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     PspBuildCreateProcessContext @ 0x1408F0220 (PspBuildCreateProcessContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeVerifyGroupAffinity(__int64 a1, char a2)
{
  __int64 v2; // rax

  v2 = *(unsigned __int16 *)(a1 + 8);
  return (unsigned __int16)v2 < (unsigned __int16)KiActiveGroups
      && (a2 || *(_QWORD *)a1)
      && (KeActiveProcessors.Bitmap[v2] & *(_QWORD *)a1) == *(_QWORD *)a1
      && !(*(_WORD *)(a1 + 10) | (unsigned __int16)(*(_WORD *)(a1 + 12) | *(_WORD *)(a1 + 14)));
}
