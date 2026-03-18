/*
 * XREFs of DrvDxgkSendDisplayBrokerMessage @ 0x1400C99F4
 * Callers:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_0389f40e646f18740e1f12cb9d5b37a1___ @ 0x1400C84BC (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_1__lambda_0389f40e646f18740e1f12cb9d5b37a1___.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEA_KPEAU?$AlpcReply@$07@1@@Z @ 0x1400C9970 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEA_KPEAU-$AlpcRepl.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_b4f43b15d51bbb98ecd260a5ad293850___ @ 0x1401A8640 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_3__lambda_b4f43b15d51bbb98ecd260a5ad293850___.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_8341fb6a1f9e9c95dd045a579bb39db4___ @ 0x1401A871C (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_5__lambda_8341fb6a1f9e9c95dd045a579bb39db4___.c)
 *     ?DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1401A8CE4 (-DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENA.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvDxgkSendDisplayBrokerMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v9; // esi
  __int64 DxgkWin32kInterface; // rax

  v9 = a1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD, __int64))(DxgkWin32kInterface
                                                                                               + 760))(
           v9,
           a2,
           0LL,
           a4,
           a5,
           0LL,
           a7);
}
