/*
 * XREFs of PspUnlockJobConditionally @ 0x140A36C28
 * Callers:
 *     PspJobDelete @ 0x1404EE9D0 (PspJobDelete.c)
 *     PspSetNetRateControl @ 0x140778224 (PspSetNetRateControl.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 */

void __fastcall PspUnlockJobConditionally(__int64 a1, __int64 a2)
{
  __int64 i; // r8

  for ( i = 0LL; !(_DWORD)i; i = 1LL )
  {
    if ( a1 == *(_QWORD *)(a2 + 8 * i) )
      return;
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
}
