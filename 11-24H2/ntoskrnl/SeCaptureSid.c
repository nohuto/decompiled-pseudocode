/*
 * XREFs of SeCaptureSid @ 0x140869508
 * Callers:
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     AlpcpConnectPort @ 0x140868BB0 (AlpcpConnectPort.c)
 *     NtSecureConnectPort @ 0x140890D60 (NtSecureConnectPort.c)
 *     PspBuildCreateProcessContext @ 0x1408F9210 (PspBuildCreateProcessContext.c)
 *     NtQueryWnfStateData @ 0x140901E30 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1409027E0 (ExpNtUpdateWnfStateData.c)
 *     NtCreateTokenEx @ 0x140983E20 (NtCreateTokenEx.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1409950F4 (AlpcpPortQueryConnectedSidInfo.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1409E62A0 (ExpWnfCaptureScopeInstanceId.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlValidSid @ 0x14086B530 (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x14086B5A0 (RtlLengthRequiredSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCaptureSid(_BYTE *Src, char a2, __int64 a3, __int64 a4, int a5, char a6, PSID *a7)
{
  __int64 v8; // rax
  ULONG v9; // eax
  unsigned __int8 v10; // di
  ULONG v11; // eax
  ULONG v12; // ecx
  ULONG v13; // r14d
  PVOID PoolWithTag; // rax
  PSID v15; // rbx
  unsigned __int8 v17; // [rsp+48h] [rbp+10h]

  if ( a2 )
  {
    v8 = (__int64)(Src + 1);
    if ( (unsigned __int64)(Src + 1) >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    v9 = *(unsigned __int8 *)v8;
    v10 = v9;
    v17 = v9;
    v11 = RtlLengthRequiredSid(v9);
    v12 = v11;
    if ( v11 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v11] > 0x7FFFFFFF0000LL || &Src[v11] < Src )
      {
        v10 = v17;
        v12 = v11;
      }
    }
  }
  else
  {
    if ( !a6 )
    {
      *a7 = Src;
      return 0LL;
    }
    v10 = Src[1];
    v12 = RtlLengthRequiredSid(v10);
  }
  v13 = v12;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1025, v12, 0x69536553u);
  *a7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, Src, v13);
  *((_BYTE *)*a7 + 1) = v10;
  v15 = *a7;
  if ( RtlValidSid(*a7) )
    return 0LL;
  ExFreePoolWithTag(v15, 0);
  *a7 = 0LL;
  return 3221225592LL;
}
