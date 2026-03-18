/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoDataSourceProxy@@EEAAJXZ @ 0x180271F90
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1801A89C4 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801A8E88 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoDataSourceProxy::OnPropertiesRefreshedCallout(BamoDataSourceProxy *this)
{
  BamoDataSourceProxy *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v6,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL));
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoDataSourceProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v6,
    v2,
    v3,
    v4);
  return (unsigned int)v1;
}
