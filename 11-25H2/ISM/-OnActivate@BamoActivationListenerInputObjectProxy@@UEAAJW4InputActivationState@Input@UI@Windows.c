/*
 * XREFs of ?OnActivate@BamoActivationListenerInputObjectProxy@@UEAAJW4InputActivationState@Input@UI@Windows@@@Z @ 0x180046010
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180046B80 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180046BB8 (-CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?OnActivate@BamoActivationListenerInputObjectProxyImpl@BamoImpl@@QEAAJW4InputActivationState@Input@UI@Windows@@@Z @ 0x180046BE4 (-OnActivate@BamoActivationListenerInputObjectProxyImpl@BamoImpl@@QEAAJW4InputActivationState@Inp.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall BamoActivationListenerInputObjectProxy::OnActivate(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rdi
  unsigned int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
  v8 = 0LL;
  v5 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v4 + 32);
  if ( !Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock(v5) )
  {
    v8 = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v5);
  }
  v6 = BamoImpl::BamoActivationListenerInputObjectProxyImpl::OnActivate(a1 + 8, a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v8);
  return v6;
}
