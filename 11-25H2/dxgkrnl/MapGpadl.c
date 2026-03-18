/*
 * XREFs of MapGpadl @ 0x14022B7C0
 * Callers:
 *     ?SetSharedPage@DXGVIRTUALMACHINE@@QEAAJI@Z @ 0x1401E8288 (-SetSharedPage@DXGVIRTUALMACHINE@@QEAAJI@Z.c)
 *     ?VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140220B40 (-VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MapGpadl(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  int v3; // eax
  __int64 v5; // rbx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdi

  v3 = *(_DWORD *)(a1 + 408);
  if ( (v3 & 0x100) != 0 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 592) + 592LL);
LABEL_3:
    v6 = v5 + 160;
    goto LABEL_7;
  }
  if ( (v3 & 0x80u) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 592);
    goto LABEL_3;
  }
  v6 = 0LL;
LABEL_7:
  v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_14015D550)(*(_QWORD *)v6, 0LL, a2);
  v8 = v7;
  if ( v7 >= 0 )
  {
    _InterlockedIncrement(&g_VgpuNumGpadlMappings);
    _InterlockedAdd64(&g_VgpuSizeGpadlMappings, a3);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 72));
    _InterlockedAdd64((volatile signed __int64 *)(v6 + 80), a3);
  }
  else
  {
    WdLogSingleEntry1(2LL, v7);
    WdLogGlobalForLineNumber = 15908;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"VmbChannelMapGpadl failed: 0x%I64x",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v8;
}
