/*
 * XREFs of ?Thunk_TransferForegroundToHost_38@?$ICUIComponentInputObjectProxy_Receive@VBamoCUIComponentInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180130580
 * Callers:
 *     <none>
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180042E18 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoInputObserverClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputObserverClientProxyImpl@1@@Z @ 0x18006AA08 (--0-$CalloutWrapper@VBamoInputObserverClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBa.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006ACC4 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?LogReceiveTransferForegroundToHost@BamoCUIComponentInputObjectProxyImpl@BamoImpl@@AEAAXAEBUTransferForegroundInfo@@@Z @ 0x18012FB38 (-LogReceiveTransferForegroundToHost@BamoCUIComponentInputObjectProxyImpl@BamoImpl@@AEAAXAEBUTran.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ICUIComponentInputObjectProxy_Receive<BamoImpl::BamoCUIComponentInputObjectProxyImpl>::Thunk_TransferForegroundToHost_38(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        const struct TransferForegroundInfo **a2)
{
  const struct TransferForegroundInfo *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *a2;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputObserverClientProxyImpl>::CalloutWrapper<BamoImpl::BamoInputObserverClientProxyImpl>(
    (__int64)v7,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
    (__int64)this);
  BamoImpl::BamoCUIComponentInputObjectProxyImpl::LogReceiveTransferForegroundToHost(this, v3);
  LODWORD(v3) = (*(__int64 (__fastcall **)(char *, const struct TransferForegroundInfo *))(*((_QWORD *)this - 2) + 136LL))(
                  (char *)this - 16,
                  v3);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v7);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v4, v5);
  return (unsigned int)v3;
}
