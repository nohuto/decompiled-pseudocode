/*
 * XREFs of SeCaptureSid @ 0x140916DC8
 * Callers:
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     NtQueryWnfStateData @ 0x1408E34F0 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1408E4380 (ExpNtUpdateWnfStateData.c)
 *     AlpcpConnectPort @ 0x140916470 (AlpcpConnectPort.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 *     NtSecureConnectPort @ 0x14098DB40 (NtSecureConnectPort.c)
 *     NtCreateTokenEx @ 0x1409974A0 (NtCreateTokenEx.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1409C2254 (AlpcpPortQueryConnectedSidInfo.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1409F6738 (ExpWnfCaptureScopeInstanceId.c)
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140ACDB00 (NtCreateLowBoxToken.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     RtlValidSid @ 0x140918DF0 (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x140918FE0 (RtlLengthRequiredSid.c)
 *     ExAllocatePoolWithTag @ 0x140B62010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
