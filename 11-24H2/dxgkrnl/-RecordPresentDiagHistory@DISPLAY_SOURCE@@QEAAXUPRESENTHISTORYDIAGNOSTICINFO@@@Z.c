/*
 * XREFs of ?RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXUPRESENTHISTORYDIAGNOSTICINFO@@@Z @ 0x140009EA8
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1402BE310 (DxgkPresentMultiPlaneOverlay3.c)
 *     DxgkPresent @ 0x1402EAC90 (DxgkPresent.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DISPLAY_SOURCE::RecordPresentDiagHistory(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  int v7; // edx
  int v8; // r8d
  __int64 v9; // [rsp+60h] [rbp-18h] BYREF
  char v10; // [rsp+68h] [rbp-10h]

  v4 = a1 + 3808;
  v9 = v4;
  v10 = 0;
  if ( !v4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
    v4 = 0LL;
  }
  if ( *(struct _KTHREAD **)(v4 + 24) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v9);
  *(_OWORD *)(a1 + 16 * ((unsigned int)(*(_DWORD *)(a1 + 4016))++ + 241LL)) = *a2;
  if ( *(_DWORD *)(a1 + 4016) >= 0xAu )
    *(_DWORD *)(a1 + 4016) = 0;
  if ( v10 )
  {
    v5 = v9;
    v10 = 0;
    if ( *(struct _KTHREAD **)(v9 + 24) != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v9, 0LL, 0LL);
      WdLogGlobalForLineNumber = 568;
    }
    if ( *(int *)(v5 + 32) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 571;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            571,
            v7,
            v8,
            0,
            2,
            -1,
            (__int64)L"m_OwnerAcquireCount > 0",
            59,
            0,
            0,
            0,
            0);
      }
    }
    if ( (*(_DWORD *)(v5 + 32))-- == 1 )
    {
      *(_QWORD *)(v5 + 24) = 0LL;
      ExReleasePushLockExclusiveEx(v5 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
