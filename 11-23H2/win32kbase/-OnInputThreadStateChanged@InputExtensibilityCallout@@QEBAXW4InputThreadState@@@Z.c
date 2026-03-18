/*
 * XREFs of ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C0087B68
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0087624 (UserActivateMITInputProcessing.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0087D08 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0057EC8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 */

char __fastcall InputExtensibilityCallout::OnInputThreadStateChanged(__int64 a1, int a2)
{
  _BYTE *v4; // rax
  _BYTE *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // xmm1_8
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rbx
  _BYTE v13[512]; // [rsp+30h] [rbp-228h] BYREF

  LOBYTE(v4) = CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  if ( !(_BYTE)v4 )
    LOBYTE(v4) = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 314LL);
  if ( !a2 )
  {
    memset(v13, 0, 0x1F8uLL);
    v5 = v13;
    v6 = a1 + 8;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(a1 + 8, 0LL);
    if ( !*(_QWORD *)(a1 + 24) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 324LL);
    v7 = a1 + 32;
    v8 = a1 + 872;
    while ( v7 != v8 )
    {
      if ( *(_QWORD *)v7 && (*(_DWORD *)(v7 + 16) & 2) != 0 )
      {
        v9 = *(_QWORD *)(v7 + 32);
        *(_OWORD *)v5 = *(_OWORD *)(v7 + 16);
        *((_QWORD *)v5 + 2) = v9;
        v5 += 24;
        if ( (unsigned __int64)((v5 - v13) / 24) > 0x15 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 334LL);
      }
      v7 += 40LL;
    }
    ExReleasePushLockSharedEx(v6, 0LL);
    KeLeaveCriticalRegion();
    v4 = v13;
    if ( v13 < v5 )
    {
      v10 = &v13[16];
      v11 = (v5 - v13 - 1) / 0x18uLL + 1;
      do
      {
        LOBYTE(v4) = ((__int64 (__fastcall *)(__int64, _QWORD))*(v10 - 1))(2LL, *v10);
        v10 += 3;
        --v11;
      }
      while ( v11 );
    }
  }
  return (char)v4;
}
