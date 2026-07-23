/*
 * XREFs of PsQueryProcessAttributes @ 0x1409C65D0
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x1402BAAB0 (PopPowerRequestCreateCommon.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     PspAssignProcessToJob @ 0x140A105B0 (PspAssignProcessToJob.c)
 *     ExpGetProcessInformation @ 0x140ADC640 (ExpGetProcessInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     SeSecurityAttributePresent @ 0x140322DA0 (SeSecurityAttributePresent.c)
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
