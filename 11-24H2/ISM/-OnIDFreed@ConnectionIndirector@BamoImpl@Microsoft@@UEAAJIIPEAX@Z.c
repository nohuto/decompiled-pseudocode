/*
 * XREFs of ?OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z @ 0x180042950
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180043030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180043610 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180043648 (-CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?AbandonOnDisconnect@BamoProxy@Bamo@Microsoft@@AEAAXXZ @ 0x180043878 (-AbandonOnDisconnect@BamoProxy@Bamo@Microsoft@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnIDFreed(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  volatile signed __int32 *v6; // rdi
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v7; // rbp
  Microsoft::Bamo::BamoProxy *v8; // rax
  volatile signed __int32 *v10; // [rsp+30h] [rbp+8h] BYREF

  v6 = (volatile signed __int32 *)((char *)this - 16);
  v10 = 0LL;
  v7 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)*((_QWORD *)this + 2);
  if ( !Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock(v7) )
  {
    v10 = v6;
    _InterlockedIncrement(v6 + 2);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v7);
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 64LL) && a4 )
  {
    a4[29] = 1;
    v8 = (Microsoft::Bamo::BamoProxy *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a4 + 56LL))(a4);
    Microsoft::Bamo::BamoProxy::AbandonOnDisconnect(v8);
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v10);
  return 0LL;
}
