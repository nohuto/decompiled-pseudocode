/*
 * XREFs of KeVerifyGroupAffinity @ 0x14046F4B0
 * Callers:
 *     sub_14050A410 @ 0x14050A410 (sub_14050A410.c)
 *     IopConnectInterruptFullySpecified @ 0x14071DF68 (IopConnectInterruptFullySpecified.c)
 *     ExpProfileCreate @ 0x1407C3C30 (ExpProfileCreate.c)
 *     PspBuildCreateProcessContext @ 0x1408A2E70 (PspBuildCreateProcessContext.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
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
