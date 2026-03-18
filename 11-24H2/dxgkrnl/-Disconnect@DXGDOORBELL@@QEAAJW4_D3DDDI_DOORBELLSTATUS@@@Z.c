/*
 * XREFs of ?Disconnect@DXGDOORBELL@@QEAAJW4_D3DDDI_DOORBELLSTATUS@@@Z @ 0x1401D82E8
 * Callers:
 *     DxgkDisconnectDoorbellCB @ 0x1401DB180 (DxgkDisconnectDoorbellCB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?DdiDisconnectDoorbell@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DISCONNECTDOORBELL@@@Z @ 0x1401A4BEC (-DdiDisconnectDoorbell@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DISCONNECTDOORBELL@@@Z.c)
 */

__int64 __fastcall DXGDOORBELL::Disconnect(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  void *v7; // rcx
  NTSTATUS v8; // eax
  __int64 v9; // rsi
  const wchar_t *v10; // r9
  void *v11; // rcx
  NTSTATUS v12; // eax
  _QWORD v13[2]; // [rsp+50h] [rbp-18h] BYREF
  ULONG_PTR NumberOfBytes; // [rsp+70h] [rbp+8h] BYREF

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(unsigned int *)(*(_QWORD *)(v4 + 16) + 392LL);
  if ( (v5 & 0x20) != 0 )
  {
    **(_QWORD **)(a1 + 136) = a2;
    return 0LL;
  }
  v13[1] = 0LL;
  v13[0] = *(_QWORD *)(a1 + 8);
  ADAPTER_RENDER::DdiDisconnectDoorbell(
    *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL) + 16LL),
    (struct _DXGKARG_DISCONNECTDOORBELL *)v13,
    v5);
  v7 = *(void **)(a1 + 56);
  NumberOfBytes = *(_QWORD *)(a1 + 40);
  v8 = MmRotatePhysicalView(v7, &NumberOfBytes, 0LL, MmToRegularMemory, 0LL, 0LL);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = *(void **)(a1 + 72);
    if ( !v11
      || (NumberOfBytes = *(_QWORD *)(a1 + 48),
          v12 = MmRotatePhysicalView(v11, &NumberOfBytes, 0LL, MmToRegularMemory, 0LL, 0LL),
          v9 = v12,
          v12 >= 0) )
    {
      **(_QWORD **)(a1 + 136) = v3;
      return (unsigned int)v9;
    }
    WdLogSingleEntry2(2LL, a1, v12);
    v10 = L"DXGDOORBELL 0x%I64x: Failed to rotate secondary CPUVA back to dummy CPU page, returning 0x%I64x";
    WdLogGlobalForLineNumber = 3603;
  }
  else
  {
    WdLogSingleEntry2(2LL, a1, v8);
    v10 = L"DXGDOORBELL 0x%I64x: Failed to rotate CPUVA back to dummy CPU page, returning 0x%I64x";
    WdLogGlobalForLineNumber = 3585;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v10, a1, v9, 0LL, 0LL, 0LL);
  return (unsigned int)v9;
}
