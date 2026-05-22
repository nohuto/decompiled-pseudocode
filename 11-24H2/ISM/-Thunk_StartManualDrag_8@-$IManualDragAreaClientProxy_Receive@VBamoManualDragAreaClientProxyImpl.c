/*
 * XREFs of ?Thunk_StartManualDrag_8@?$IManualDragAreaClientProxy_Receive@VBamoManualDragAreaClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180148B50
 * Callers:
 *     <none>
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003F8A8 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoInputObserverClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputObserverClientProxyImpl@1@@Z @ 0x18006A858 (--0-$CalloutWrapper@VBamoInputObserverClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBa.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006AB14 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?LogReceiveStartManualDrag@BamoManualDragAreaClientProxyImpl@BamoImpl@@AEAAXI@Z @ 0x1801484D0 (-LogReceiveStartManualDrag@BamoManualDragAreaClientProxyImpl@BamoImpl@@AEAAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IManualDragAreaClientProxy_Receive<BamoImpl::BamoManualDragAreaClientProxyImpl>::Thunk_StartManualDrag_8(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        unsigned int **a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = **a2;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputObserverClientProxyImpl>::CalloutWrapper<BamoImpl::BamoInputObserverClientProxyImpl>(
    (__int64)v8,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
    (__int64)this);
  BamoImpl::BamoManualDragAreaClientProxyImpl::LogReceiveStartManualDrag(this);
  v4 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 2) + 136LL))((char *)this - 16, v3);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v8);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v5, v6);
  return v4;
}
