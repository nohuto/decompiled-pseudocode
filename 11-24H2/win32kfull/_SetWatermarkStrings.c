/*
 * XREFs of _SetWatermarkStrings @ 0x1402B5F40
 * Callers:
 *     NtUserSetWatermarkStrings @ 0x14021B0C0 (NtUserSetWatermarkStrings.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SetProductVersionInfo@@YAHXZ @ 0x1402B5EB8 (-SetProductVersionInfo@@YAHXZ.c)
 */

__int64 __fastcall SetWatermarkStrings(ULONG64 a1, __int64 a2)
{
  HANDLE v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r14
  int v10; // esi
  ULONG64 v11; // rdx
  int v12; // ecx
  WCHAR *v13; // r9
  ULONG64 v14; // rdx
  __int64 v15; // rbx
  unsigned __int64 v16; // rax
  int v17; // [rsp+20h] [rbp-48h]
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+78h] [rbp+10h]

  SourceString = 0LL;
  v3 = *(HANDLE *)(W32GetUserSessionState(a1, a2) + 63584);
  if ( PsGetCurrentProcessId() != v3 )
    return 0LL;
  v9 = W32GetUserSessionState(v5, v4) + 66528;
  v10 = 0;
  v17 = 0;
  while ( !v10 )
  {
    v11 = a1;
    if ( a1 >= MmUserProbeAddress )
      v11 = MmUserProbeAddress;
    v12 = *(_DWORD *)v11;
    v19 = *(_DWORD *)v11;
    *(_DWORD *)&SourceString.Length = *(_DWORD *)v11;
    v13 = *(WCHAR **)(v11 + 8);
    SourceString.Buffer = v13;
    if ( ((unsigned __int8)v13 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = (ULONG64)v13 + (unsigned __int16)v12 + 2;
    if ( v14 <= (unsigned __int64)v13 || v14 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v12 > HIWORD(v19) )
    {
      if ( (v12 & 1) != 0 )
LABEL_18:
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 84);
      ExRaiseAccessViolation();
    }
    if ( (v12 & 1) != 0 )
      goto LABEL_18;
    *(_QWORD *)(v9 + 16 * (v10 + 9LL)) = ((__int64)v10 << 8) + v9 + 152;
    v15 = v9 + 16LL * v10;
    *(_WORD *)(v15 + 136) = 0;
    *(_WORD *)(v15 + 138) = 256;
    RtlCopyUnicodeString((PUNICODE_STRING)(v15 + 136), &SourceString);
    v7 = 0LL;
    v8 = *(unsigned __int16 *)(v9 + 138) - 2LL;
    if ( *(unsigned __int16 *)(v15 + 136) >= v8 )
      v16 = *(unsigned __int16 *)(v9 + 138) - 2LL;
    else
      v16 = *(unsigned __int16 *)(v9 + 136);
    *(_WORD *)(*(_QWORD *)(v9 + 16 * (v10 + 9LL)) + 2 * (v16 >> 1)) = 0;
    v10 = ++v17;
  }
  return SetProductVersionInfo(v8, v7);
}
