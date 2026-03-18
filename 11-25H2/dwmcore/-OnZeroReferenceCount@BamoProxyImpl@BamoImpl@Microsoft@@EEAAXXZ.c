/*
 * XREFs of ?OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180288340
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x180278008 (--0-$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QE.c)
 *     ??1?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180278134 (--1-$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QE.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18027C40C (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::BamoImpl::BamoProxyImpl::OnZeroReferenceCount(Microsoft::BamoImpl::BamoProxyImpl *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  const char *v4; // r9
  __int64 v5; // r8
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_BYTE *)this + 31) )
    goto LABEL_6;
  if ( *((_BYTE *)this + 28) )
  {
    if ( !Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 72LL))(
        *((_QWORD *)this + 2),
        *((unsigned int *)this + 6));
    if ( *((_BYTE *)this + 29) )
    {
LABEL_6:
      Microsoft::BamoImpl::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
        (Microsoft::BamoImpl::CalloutWrapperObject *)v6,
        *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
      v2 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)this + 56LL))(this);
      v5 = v2;
      if ( v2 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
      Microsoft::BamoImpl::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
        v6,
        v3,
        v5,
        v4);
    }
  }
}
