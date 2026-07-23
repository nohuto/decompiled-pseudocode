/*
 * XREFs of PspUnlockJobConditionally @ 0x140A2BA80
 * Callers:
 *     PspJobDelete @ 0x1404E6110 (PspJobDelete.c)
 *     PspSetNetRateControl @ 0x1407783E4 (PspSetNetRateControl.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
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
