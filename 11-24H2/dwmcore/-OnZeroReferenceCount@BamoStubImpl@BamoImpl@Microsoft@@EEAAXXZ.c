/*
 * XREFs of ?OnZeroReferenceCount@BamoStubImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180270BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x18026D8F8 (--0-$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QE.c)
 *     ??1?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18026DA24 (--1-$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::BamoImpl::BamoStubImpl::OnZeroReferenceCount(Microsoft::BamoImpl::BamoStubImpl *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  const char *v4; // r9
  __int64 v5; // r8
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  Microsoft::BamoImpl::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (Microsoft::BamoImpl::CalloutWrapperObject *)v6,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL));
  v2 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)this + 32LL))(this);
  v5 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
  Microsoft::BamoImpl::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v6,
    v3,
    v5,
    v4);
}
