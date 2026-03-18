/*
 * XREFs of PsQueryProcessAttributes @ 0x1409D67A0
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x1403313A8 (PopPowerRequestCreateCommon.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     PspAssignProcessToJob @ 0x140A173D0 (PspAssignProcessToJob.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 *     ExpGetProcessInformation @ 0x140ADAE00 (ExpGetProcessInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     SeSecurityAttributePresent @ 0x1403438C0 (SeSecurityAttributePresent.c)
 */

char __fastcall PsQueryProcessAttributes(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  ULONG_PTR v6; // rax
  __int64 v7; // rdi
  signed __int64 v8; // rax
  signed __int64 v9; // rtt

  v6 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
  v7 = v6;
  if ( a2 )
    *a2 = SeSecurityAttributePresent(v6, (const UNICODE_STRING *)&PspSysAppIdClaim);
  if ( a3 )
    *a3 = SeSecurityAttributePresent(v7, (const UNICODE_STRING *)&PspPackagedAppClaim);
  _m_prefetchw((const void *)(a1 + 584));
  v8 = *(_QWORD *)(a1 + 584);
  do
  {
    if ( (v7 ^ (unsigned __int64)v8) >= 0xF )
    {
      LOBYTE(v8) = ObfDereferenceObjectWithTag((PVOID)v7, 0x746C6644u);
      return v8;
    }
    v9 = v8;
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 584), v8 + 1, v8);
  }
  while ( v9 != v8 );
  if ( ObpTraceFlags )
    LOBYTE(v8) = ObpPushStackInfo(v7 - 48, 0, 1u, 0x746C6644u);
  return v8;
}
