/*
 * XREFs of ??1?$RefPtr@UICoreUIClient@@@@QEAA@XZ @ 0x18000B9F0
 * Callers:
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x18000BDF4 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     ?OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@1@Z @ 0x180073470 (-OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@1@Z.c)
 *     ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJXZ @ 0x1800B8D20 (-Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJXZ.c)
 *     ?Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800DA3EC (-Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     _TextInputStateAdapter::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1801D235D (_TextInputStateAdapter--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _TextInputStateAdapter::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1801D236F (_TextInputStateAdapter--RuntimeClassInitialize_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RefPtr<ICoreUIClient>::~RefPtr<ICoreUIClient>(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
