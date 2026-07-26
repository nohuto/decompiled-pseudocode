/*
 * XREFs of ??0ProtocolBindProperties@@QEAA@$$QEAU0@@Z @ 0x1400C65C4
 * Callers:
 *     ?reserve@?$KArray@UProtocolBindProperties@@$00@Rtl@@QEAA_N_K@Z @ 0x14000340C (-reserve@-$KArray@UProtocolBindProperties@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x140146924 (-ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 * Callees:
 *     ??0?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAV01@@Z @ 0x1400912A8 (--0-$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U-$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAV.c)
 */

__int64 __fastcall ProtocolBindProperties::ProtocolBindProperties(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9

  *(_OWORD *)a1 = *(_OWORD *)a2;
  wistd::unique_ptr<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>::unique_ptr<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>(
    (_QWORD *)(a1 + 16),
    (__int64 *)(a2 + 16));
  *(_DWORD *)(v3 + 24) = *(_DWORD *)(v2 + 24);
  *(_DWORD *)(v3 + 28) = *(_DWORD *)(v2 + 28);
  *(_QWORD *)(v3 + 32) = *(_QWORD *)(v2 + 32);
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 24) = 0LL;
  *(_DWORD *)(v3 + 40) = *(_DWORD *)(v2 + 40);
  *(_DWORD *)(v3 + 44) = *(_DWORD *)(v2 + 44);
  *(_QWORD *)(v3 + 48) = *(_QWORD *)(v2 + 48);
  *(_QWORD *)(v2 + 48) = 0LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_BYTE *)(v3 + 56) = *(_BYTE *)(v2 + 56);
  *(_DWORD *)(v3 + 60) = *(_DWORD *)(v2 + 60);
  return v3;
}
