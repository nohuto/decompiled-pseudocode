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

__int64 __fastcall LdrInitializeEnclave(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rsi
  int v7; // edi
  __int64 v8; // rcx
  __int64 locked; // rax
  __int64 v12; // rbx
  bool v14; // zf
  _QWORD v15[4]; // [rsp+38h] [rbp-20h] BYREF

  v5 = a2;
  v7 = 0;
  v8 = a2;
  v15[0] = 0LL;
  LOBYTE(a2) = 1;
  locked = LdrpObtainLockedEnclave(v8, a2);
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
      return (unsigned int)v7;
    }
    v15[0] = 0LL;
    v7 = RtlCallEnclave(*(_QWORD *)(v12 + 72), 0LL, 0LL, v15);
    if ( v7 < 0 )
      NtTerminateEnclave(*(_QWORD *)(v12 + 72), 0LL);
    else
      *(_DWORD *)(v12 + 64) = 2;
LABEL_4:
    if ( *(_DWORD *)(v12 + 56) == 16 )
      LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry((unsigned int)v7);
    goto LABEL_6;
  }
  v7 = ZwInitializeEnclave(a1, v5, a3, a4, a5);
  if ( v7 >= 0 )
  {
    if ( !v12 )
      return (unsigned int)v7;
    goto LABEL_9;
  }
  if ( v12 )
    goto LABEL_4;
  return (unsigned int)v7;
}
