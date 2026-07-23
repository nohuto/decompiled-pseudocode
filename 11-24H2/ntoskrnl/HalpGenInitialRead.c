/*
 * XREFs of HalpGenInitialRead @ 0x140B4FC94
 * Callers:
 *     HalpInitializeGenericErrorSource @ 0x140B50324 (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     HalpCheckAndReportGhes @ 0x14049A84C (HalpCheckAndReportGhes.c)
 *     HalpFindGhesEntry @ 0x140552088 (HalpFindGhesEntry.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall HalpGenInitialRead(__int64 a1)
{
  int v1; // ecx
  __int64 ***v2; // r9
  __int64 *GhesEntry; // rax
  int v4; // r8d
  __int64 v5; // r9
  _QWORD v7[5]; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 28);
  v7[0] = &HalpGenericPeiErrorSourceListHead;
  v2 = (__int64 ***)v7;
  v7[1] = &HalpGenericNmiErrorSourceListHead;
  v7[2] = &HalpGenericSeaErrorSourceListHead;
  v7[3] = &HalpGenericSdeiErrorSourceListHead;
  v7[4] = &HalpGenericSeiErrorSourceListHead;
  while ( 1 )
  {
    GhesEntry = HalpFindGhesEntry(v1, *v2);
    if ( GhesEntry )
      break;
    v2 = (__int64 ***)(v5 + 8);
    if ( (unsigned int)(v4 + 1) >= 5 )
      return (char)GhesEntry;
  }
  LOBYTE(GhesEntry) = HalpCheckAndReportGhes((__int64)GhesEntry);
  return (char)GhesEntry;
}
