/*
 * XREFs of ?OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1800463E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800464B4 (--1-$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QE.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180046AF0 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180046BB8 (-CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Microsoft::BamoImpl::BamoProxyImpl::OnZeroReferenceCount(Microsoft::BamoImpl::BamoProxyImpl *this)
{
  _QWORD *v2; // rcx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_BYTE *)this + 31) )
    goto LABEL_8;
  if ( *((_BYTE *)this + 28) )
  {
    v2 = (_QWORD *)*((_QWORD *)this + 2);
    if ( *((_BYTE *)this + 29) )
      goto LABEL_8;
    if ( *(_QWORD *)(*(_QWORD *)(v2[3] + 32LL) + 64LL) )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v2 + 72LL))(v2, *((unsigned int *)this + 6));
    if ( *((_BYTE *)this + 29) )
    {
LABEL_8:
      v3 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL);
      v7[1] = 0LL;
      v7[0] = 0LL;
      if ( v3 && Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock(v3) && !*((_DWORD *)v3 + 47) )
      {
        v7[0] = v3;
        Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v3);
      }
      v4 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)this + 56LL))(this);
      v6 = v4;
      if ( v4 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
      Microsoft::BamoImpl::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
        v7,
        v5,
        v6);
    }
  }
}
