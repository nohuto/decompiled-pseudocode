/*
 * XREFs of LdrInitializeEnclave @ 0x1800D8B40
 * Callers:
 *     <none>
 * Callees:
 *     LdrpObtainLockedEnclave @ 0x1800D8D00 (LdrpObtainLockedEnclave.c)
 *     LdrpUnlockAndDereferenceEnclave @ 0x1800D8E20 (LdrpUnlockAndDereferenceEnclave.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800D8E48 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     ZwInitializeEnclave @ 0x1801652F0 (ZwInitializeEnclave.c)
 *     NtTerminateEnclave @ 0x180166C30 (NtTerminateEnclave.c)
 *     RtlCallEnclave @ 0x1801673C0 (RtlCallEnclave.c)
 */

NTSTATUS __cdecl LdrInitializeEnclave(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  PVOID v5; // rsi
  int v7; // edi
  PVOID v8; // rcx
  __int64 locked; // rax
  __int64 v12; // rbx
  bool v14; // zf
  _QWORD v15[4]; // [rsp+38h] [rbp-20h] BYREF

  v5 = BaseAddress;
  v7 = 0;
  v8 = BaseAddress;
  v15[0] = 0LL;
  LOBYTE(BaseAddress) = 1;
  locked = LdrpObtainLockedEnclave(v8, BaseAddress);
  v12 = locked;
  if ( locked && *(_DWORD *)(locked + 56) == 16 && *(_DWORD *)(locked + 64) )
  {
    if ( *(_DWORD *)(locked + 64) != 1 )
    {
      v7 = -1073741502;
      goto LABEL_4;
    }
LABEL_9:
    v14 = *(_DWORD *)(v12 + 56) == 16;
    *(_DWORD *)(v12 + 64) = 1;
    if ( !v14 )
    {
LABEL_6:
      LdrpUnlockAndDereferenceEnclave(v12);
      return v7;
    }
    v15[0] = 0LL;
    v7 = RtlCallEnclave(*(_QWORD *)(v12 + 72), 0LL, 0LL, v15);
    if ( v7 < 0 )
      NtTerminateEnclave(*(PVOID *)(v12 + 72), 0);
    else
      *(_DWORD *)(v12 + 64) = 2;
LABEL_4:
    if ( *(_DWORD *)(v12 + 56) == 16 )
      LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry((unsigned int)v7);
    goto LABEL_6;
  }
  v7 = ZwInitializeEnclave(ProcessHandle, v5, EnclaveInformation, EnclaveInformationLength, EnclaveError);
  if ( v7 >= 0 )
  {
    if ( !v12 )
      return v7;
    goto LABEL_9;
  }
  if ( v12 )
    goto LABEL_4;
  return v7;
}
