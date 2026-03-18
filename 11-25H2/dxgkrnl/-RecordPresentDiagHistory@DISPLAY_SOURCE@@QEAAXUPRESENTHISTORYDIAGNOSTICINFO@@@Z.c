/*
 * XREFs of ?RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXUPRESENTHISTORYDIAGNOSTICINFO@@@Z @ 0x140019488
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1402B0A90 (DxgkPresentMultiPlaneOverlay3.c)
 *     DxgkPresent @ 0x1402F11A0 (DxgkPresent.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DISPLAY_SOURCE::RecordPresentDiagHistory(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rbx
  int v6; // edx
  int v7; // r8d
  __int64 v8; // [rsp+60h] [rbp-18h] BYREF
  char v9; // [rsp+68h] [rbp-10h]

  v9 = 0;
  v8 = a1 + 3768;
  if ( a1 == -3768 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(struct _KTHREAD **)(v8 + 24) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v8);
  *(_OWORD *)(a1 + 16LL * (unsigned int)(*(_DWORD *)(a1 + 3976))++ + 3816) = *a2;
  if ( *(_DWORD *)(a1 + 3976) >= 0xAu )
    *(_DWORD *)(a1 + 3976) = 0;
  if ( v9 )
  {
    v4 = v8;
    v9 = 0;
    if ( *(struct _KTHREAD **)(v8 + 24) != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v8, 0LL, 0LL);
      WdLogGlobalForLineNumber = 570;
    }
    if ( *(int *)(v4 + 32) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 573;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            573,
            v6,
            v7,
            0,
            2,
            -1,
            (__int64)L"m_OwnerAcquireCount > 0",
            573LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( (*(_DWORD *)(v4 + 32))-- == 1 )
    {
      *(_QWORD *)(v4 + 24) = 0LL;
      ExReleasePushLockExclusiveEx(v4 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
