/*
 * XREFs of SeCaptureSid @ 0x140864EF8
 * Callers:
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     AlpcpConnectPort @ 0x1408645A0 (AlpcpConnectPort.c)
 *     NtSecureConnectPort @ 0x14088AF50 (NtSecureConnectPort.c)
 *     NtQueryWnfStateData @ 0x1408ABBD0 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1408AC580 (ExpNtUpdateWnfStateData.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14091DB90 (SepAccessCheckAndAuditAlarm.c)
 *     NtCreateTokenEx @ 0x140936AB0 (NtCreateTokenEx.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1409AB3F4 (AlpcpPortQueryConnectedSidInfo.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1409ECF70 (ExpWnfCaptureScopeInstanceId.c)
 *     NtSetInformationToken @ 0x140AD6C10 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD8020 (NtCreateLowBoxToken.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     RtlValidSid @ 0x140866F20 (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x140867110 (RtlLengthRequiredSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePoolWithTag @ 0x140B72010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
